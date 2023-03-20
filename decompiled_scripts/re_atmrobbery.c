#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_93 = 0;
	struct<3> Local_94 = { 0, 0, 0 } ;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	bool bLocal_141 = 0;
	int iLocal_142 = 0;
	char[] cLocal_143[8] = 0;
	char[] cLocal_144[8] = 0;
	char* sLocal_145 = NULL;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	struct<10> Local_158[16];
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char[] cLocal_331[8] = 0;
	char* sLocal_332 = NULL;
	char* sLocal_333 = NULL;
	char[] cLocal_334[8] = 0;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	int iLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	bool bLocal_341 = 0;
	int iLocal_342 = 0;
	float fLocal_343 = 0f;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	struct<3> Local_347 = { 0, 0, 0 } ;
	struct<3> Local_350 = { 0, 0, 0 } ;
	struct<3> Local_353 = { 0, 0, 0 } ;
	float fLocal_356 = 0f;
	struct<3> Local_357 = { 0, 0, 0 } ;
	float fLocal_360 = 0f;
	char[] cLocal_361[8] = 0;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char[] cLocal_367[8] = 0;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = -1;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 1000;
	var uLocal_381 = 1000;
	var uLocal_382 = 0;
	struct<147> Local_383 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_530 = 1;
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
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = unk_0x1B46069E4C762829();
	uLocal_46 = unk_0xE2B564EB49C711B1();
	iLocal_108 = 3;
	bLocal_131 = true;
	cLocal_143 = "RANDOM@ATMROBBERYGEN";
	cLocal_144 = "RANDOM@ATMROBBERYGEN";
	iLocal_152 = joaat("prop_ld_wallet_01_s");
	iLocal_153 = joaat("prop_ld_wallet_01_s");
	iLocal_344 = 500;
	iLocal_345 = -1;
	iLocal_346 = -1;
	fLocal_356 = 0f;
	fLocal_360 = 0f;
	Local_94 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_97 = ScriptParam_0.f_17[0];
	if (unk_0x2C897F101BA20806(11))
	{
		if (bLocal_146)
		{
			bLocal_147 = true;
			func_271(0);
		}
		else
		{
			func_253();
		}
	}
	if (unk_0x2A488C176D52CCA5(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_108 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_94, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_108 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_94, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_108 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_94, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_108 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_94, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_108 = 4;
	}
	else
	{
		iLocal_108 = 5;
	}
	if (func_211(Local_94, 1, iLocal_108, 1, 0))
	{
		func_208(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	unk_0xC1B1E9A034A63A62(0);
	func_207();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_206();
		func_205(uLocal_101, &uLocal_107);
		func_202(&Local_383);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
		}
		if (!func_199())
		{
			if (func_198())
			{
				func_253();
			}
			if (unk_0xFEC6476AFCF2033F())
			{
				switch (iLocal_93)
				{
					case 0:
						if (func_172())
						{
							iLocal_93 = 1;
						}
						break;
					
					case 1:
						func_171();
						if (iLocal_112 == 0)
						{
							iLocal_112 = unk_0x4C2C2375E762FE16(99, Local_94, 30000f);
						}
						if (unk_0x538DF9E5B1DF01EB(iLocal_98))
						{
						}
						if (unk_0x538DF9E5B1DF01EB(iLocal_99))
						{
						}
						if (!unk_0x2DE0B96E966FD817(iLocal_98))
						{
							if (unk_0x2DE0B96E966FD817(iLocal_99))
							{
								unk_0x0676D83B2FE460E1(iLocal_98, Local_94, 200f, -1, 0, 0);
								unk_0x2686393074E14730(iLocal_98, 1);
								unk_0x4EDE34FBADD967A6(0);
								func_253();
							}
							if (!unk_0x2DE0B96E966FD817(iLocal_99))
							{
								if (unk_0x7A98E0DD2E6FAB7A(Local_94, 2.5f))
								{
									if (iLocal_108 == 2)
									{
										if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 120f, 120f, 8f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (iLocal_108 == 1)
									{
										if (unk_0x2A488C176D52CCA5(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 100f, 100f, 8f, 0, 1, 0) || func_170())
											{
												func_161();
											}
										}
										else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 170f, 170f, 8f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x2A488C176D52CCA5(Local_94, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 65f, 65f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x4970185D4CC64616(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 50f, 50f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x4970185D4CC64616(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 60f, 60f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 30f, 30f, 8f, 0, 1, 0) || func_170())
									{
										func_161();
									}
								}
							}
						}
						else
						{
							if (Local_158[2 /*10*/].f_7)
							{
								func_160(&Local_158, 2);
							}
							if (!unk_0x2DE0B96E966FD817(iLocal_99))
							{
								unk_0x0676D83B2FE460E1(iLocal_99, Local_94, 200f, -1, 0, 0);
								unk_0x2686393074E14730(iLocal_99, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_253();
						}
						break;
				}
			}
			else
			{
				func_158("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_253();
			}
		}
		else
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_98))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_98))
				{
					if (func_157(iLocal_98, -251125078))
					{
						if (func_156(iLocal_98, Local_94, 1) >= 190f)
						{
							unk_0x937785D9C1929236(iLocal_98);
							unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
						}
					}
					else if (func_157(iLocal_98, -982327190))
					{
						unk_0x937785D9C1929236(iLocal_98);
						unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_99))
			{
			}
			if (unk_0x09560C7DE2A384BD() > iLocal_109 + 3000)
			{
				func_134();
			}
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!func_114() && !func_111())
				{
					unk_0x2D32A2959F9F361D(unk_0x1788E93557766241());
					if (!iLocal_136 && !bLocal_141)
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_99))
						{
							if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x4970185D4CC64616(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x4970185D4CC64616(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
								{
									iLocal_136 = 1;
								}
							}
						}
					}
					if (unk_0x5660C8AFDD9C1721(iLocal_102))
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_98))
						{
							if (iLocal_337)
							{
								if (unk_0x14F9932776F21CC2(iLocal_98, unk_0xA16EC202D9D35357(), fLocal_343, fLocal_343, fLocal_343, 0, 1, 0))
								{
									if (!unk_0x202EF5D8203705EF(iLocal_98, 0))
									{
										if (unk_0x83666F9FB8FEBD4B() > 1000)
										{
											if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_98))
											{
												fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_98, 1));
												fLocal_343 = (fLocal_343 * 1.5f);
												unk_0xC1B1E9A034A63A62(0);
											}
											unk_0x15EBFEEB77BF84B7(iLocal_98, 17, 0);
										}
									}
								}
								else if (!iLocal_339)
								{
									if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x202EF5D8203705EF(iLocal_98, 0))
										{
											unk_0x15EBFEEB77BF84B7(iLocal_98, 17, 1);
											unk_0x15EBFEEB77BF84B7(iLocal_98, 13, 0);
											func_108();
											iLocal_339 = 1;
										}
									}
								}
							}
							else if (!iLocal_138)
							{
								if ((unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_98) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_98)) || unk_0xBF8ADDCADFC4691E(iLocal_98, unk_0xA16EC202D9D35357(), 0))
								{
									func_109(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_98, 1));
									fLocal_343 = (fLocal_343 * 1.5f);
									iLocal_337 = 1;
									iLocal_138 = 1;
								}
								if (unk_0xECFECDAD51A6184F(iLocal_116, 0))
								{
									if (unk_0xBF8ADDCADFC4691E(iLocal_116, unk_0xA16EC202D9D35357(), 1))
									{
										unk_0x15EBFEEB77BF84B7(iLocal_98, 17, 0);
										if (unk_0x74AE4BA75DB7653F(iLocal_98))
										{
											unk_0xD14A21CF793D510E(iLocal_98, iLocal_116, unk_0xA16EC202D9D35357(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
										}
										func_109(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_98, 1));
										fLocal_343 = (fLocal_343 * 1.5f);
										iLocal_337 = 1;
										iLocal_138 = 1;
									}
								}
							}
							if ((iLocal_339 || iLocal_337) || bLocal_341)
							{
								if (unk_0x5660C8AFDD9C1721(iLocal_102))
								{
									if (unk_0x13CBCD00589F84E7(iLocal_102) == 1)
									{
									}
									else
									{
										unk_0x060629C917E581A5(iLocal_102, 0);
										unk_0x1AD45E3CF020D50D(iLocal_102, 1);
									}
								}
								if (!iLocal_339)
								{
									func_108();
									iLocal_339 = 1;
								}
							}
							else
							{
								if (unk_0x0E9F33AA2B8E5EB6(iLocal_98, unk_0xA16EC202D9D35357()))
								{
									bLocal_341 = true;
								}
								func_106(iLocal_102, &uLocal_113);
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_99))
							{
								if (!iLocal_138)
								{
									if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_109(&Local_158, cLocal_334, sLocal_327, 4, 0, 0, 0))
										{
											unk_0x6D98AA46076A68BE(&uLocal_104);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x963BB7C99350D827(uLocal_104);
											unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
											unk_0x2AF68ED52DC74B7D(&uLocal_104);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_138 = 1;
										}
									}
								}
								else if (!iLocal_139)
								{
									if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_98) && !unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_98)) && !unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357())) && func_105(iLocal_99, iLocal_98, 1) > 30f)
										{
											if (func_109(&Local_158, cLocal_334, sLocal_328, 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_139 = 1;
											}
										}
									}
								}
								else if (!unk_0x2E7891B765D55582(iLocal_99))
								{
									func_103(iLocal_99, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_101())
							{
								func_100();
								if (unk_0x538DF9E5B1DF01EB(iLocal_99))
								{
									Var0 = { unk_0xBF8499F46AD9093A(iLocal_99, 1) };
								}
								if (!unk_0x965556ACF6A83973(iLocal_98, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_98, 12f, 12f, 12f, 0, 1, 0))
								{
									if (unk_0x83666F9FB8FEBD4B() > 20000)
									{
										if (func_99(iLocal_98) && !unk_0xEAABEAE1DB589285(iLocal_98))
										{
											if (func_109(&Local_158, cLocal_334, sLocal_329, 4, 0, 0, 0))
											{
												bLocal_341 = true;
												unk_0xC1B1E9A034A63A62(0);
											}
										}
									}
								}
							}
							else if (func_99(iLocal_99))
							{
								if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, Global_19, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_332, 4, 0, 0, 0))
									{
										unk_0x6D98AA46076A68BE(&uLocal_104);
										unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 3000);
										unk_0xAC9F22F89987627B(0, 1193033728, 0);
										unk_0x963BB7C99350D827(uLocal_104);
										unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
										unk_0x2AF68ED52DC74B7D(&uLocal_104);
										bLocal_338 = true;
										func_253();
									}
								}
								else if (bLocal_341)
								{
									if (func_109(&Local_158, cLocal_334, sLocal_333, 4, 0, 0, 0))
									{
										unk_0xAC9F22F89987627B(iLocal_99, 1193033728, 0);
										unk_0x86E7313D71D1A983(iLocal_99, joaat("MotionState_Walk"), 0, 0, 0);
										bLocal_338 = true;
										func_253();
									}
								}
								else
								{
									unk_0xAC9F22F89987627B(iLocal_99, 1193033728, 0);
									unk_0x86E7313D71D1A983(iLocal_99, joaat("MotionState_Walk"), 0, 0, 0);
									bLocal_338 = true;
									func_253();
								}
							}
							else
							{
								bLocal_338 = true;
								func_253();
							}
						}
						else if (func_101())
						{
							if ((unk_0x2DE0B96E966FD817(iLocal_98) || unk_0x3EC29154A6AFBA2A(iLocal_98, 1)) || func_157(iLocal_98, -1899872703))
							{
								func_109(&Local_158, cLocal_334, sLocal_336, 4, 0, 0, 0);
								func_96();
								func_160(&Local_158, 2);
								unk_0xB6FB9702660D84F6(&iLocal_102);
							}
						}
					}
					else if (!unk_0x5660C8AFDD9C1721(uLocal_101))
					{
						if (bLocal_146)
						{
							if (unk_0x5660C8AFDD9C1721(iLocal_103))
							{
								unk_0xB6FB9702660D84F6(&iLocal_103);
							}
							iLocal_103 = 0;
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
							iLocal_101 = func_92(iLocal_99, 0, 0);
							func_91(&uLocal_107);
							if (unk_0x538DF9E5B1DF01EB(iLocal_99))
							{
								fLocal_133 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_99, 0));
								unk_0xFAF4121083211853(iLocal_99);
							}
							if (fLocal_133 > 750f)
							{
								func_271(0);
							}
						}
						else
						{
							func_88();
						}
					}
					else
					{
						if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
						{
							if (bLocal_146)
							{
								func_271(0);
							}
							else
							{
								func_253();
							}
						}
						if (bLocal_151)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_151)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_99))
							{
								if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_99, 0)) > (fLocal_133 + 100f))
								{
									if (bLocal_146)
									{
										func_271(0);
									}
									else
									{
										unk_0xEA36CC2E7750344B(iLocal_99, unk_0xA16EC202D9D35357(), 100f, -1, 0, 0);
										func_253();
									}
								}
								else if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_99, 0)) < fLocal_133)
								{
									fLocal_133 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_99, 0));
								}
								if (unk_0xBF8ADDCADFC4691E(iLocal_99, unk_0xA16EC202D9D35357(), 1))
								{
									if (bLocal_146)
									{
										func_271(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_99))
	{
		unk_0xEA36CC2E7750344B(iLocal_99, unk_0xA16EC202D9D35357(), 100f, -1, 0, 0);
		func_103(iLocal_99, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x2686393074E14730(iLocal_99, 1);
		unk_0x2C4E82CF88213975(iLocal_99, 0);
		unk_0xA8BC819B54F5B824(iLocal_99, 1);
		unk_0x6B3DDEE91652BE59(&iLocal_99);
	}
	func_88();
	if (bLocal_141)
	{
		if (unk_0x5660C8AFDD9C1721(iLocal_103))
		{
			if (unk_0x27C40BD761A1E76F(uLocal_140))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xA3B3632D39761B55(uLocal_140)) > 100f)
				{
					func_253();
				}
			}
		}
		else if (bLocal_146)
		{
			func_271(0);
		}
		else if (unk_0x2DE0B96E966FD817(iLocal_98))
		{
			func_253();
		}
	}
	if (unk_0x5660C8AFDD9C1721(iLocal_102))
	{
		if (unk_0x2DE0B96E966FD817(iLocal_98))
		{
			unk_0xB6FB9702660D84F6(&iLocal_102);
		}
		else if (!func_101())
		{
			func_253();
		}
	}
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	bool bVar22;
	float fVar23;
	float fVar24;
	char cVar25[16];
	char cVar29[16];
	var uVar33;
	int iVar34;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_99))
	{
		if (!bLocal_150)
		{
			if (iLocal_340)
			{
				if (!iLocal_342)
				{
					if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 15f, 15f, 20f, 0, 1, 0))
					{
						func_103(iLocal_99, "GENERIC_HI", 5);
						iLocal_342 = 1;
					}
				}
				if (unk_0x4970185D4CC64616(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 5f;
					}
				}
				else if (unk_0x4970185D4CC64616(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 4f;
					}
				}
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, fLocal_134, fLocal_134, fLocal_134, 0, 1, 0) && !func_87())
				{
					if (func_84(2))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					if (!func_111())
					{
						if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
						{
							if (func_83(1, 0, 1))
							{
								if (!unk_0x889D01384B54BCE3(Global_2264, 11) || func_82())
								{
									if (!unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
									{
										unk_0xFD1E0AEC770DAF2E(1);
										if (func_81())
										{
											func_80();
										}
										if (iLocal_152 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_100 = unk_0x8AC4394F3C9173EE(iLocal_153, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_100 = unk_0x8AC4394F3C9173EE(iLocal_152, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 1, 1, 0);
										}
										if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
										{
											unk_0x07CDE0236CD8AAC8(iLocal_100, unk_0xA16EC202D9D35357(), unk_0x879EC196F941E547(unk_0xA16EC202D9D35357(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0x423D1EBE54B18555(iLocal_100, 0);
										func_72(1, 1, 1, 0);
										if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
										{
											if (unk_0x538DF9E5B1DF01EB(iLocal_100))
											{
												while ((!func_71(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), uLocal_135, 1, 1056964608, 0, 1) || func_81()) || !unk_0x48268A6E65463BFD(iLocal_100))
												{
													if (!func_71(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), uLocal_135, 1, 1056964608, 0, 1))
													{
													}
													if (func_81())
													{
													}
													if (!unk_0x48268A6E65463BFD(iLocal_100))
													{
													}
													unk_0x4EDE34FBADD967A6(0);
												}
												if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
												{
													unk_0xBB5AA994E06B28E2(unk_0xA16EC202D9D35357(), 0, 0);
												}
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iLocal_100))
										{
											while (func_81() || !unk_0x48268A6E65463BFD(iLocal_100))
											{
												unk_0x4EDE34FBADD967A6(0);
											}
										}
										unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
										if (!unk_0x2DE0B96E966FD817(iLocal_99))
										{
											unk_0x551186C5C186D1DC(iLocal_99, 0);
										}
										unk_0x9D4C739200792759(0);
										unk_0x969D58023F21D359(iLocal_112);
										unk_0xAE5253EA258993E7(unk_0xA16EC202D9D35357(), 0, 0);
										func_69();
										func_65();
										unk_0x4EDE34FBADD967A6(0);
										if (func_99(iLocal_99))
										{
											if (unk_0x998FA6EE0C28BE23(iLocal_99))
											{
												sLocal_145 = "move_m@hurry@b";
											}
											else
											{
												sLocal_145 = "move_f@hurry@a";
											}
										}
										unk_0x660D567D3EB18812(sLocal_145);
										bLocal_150 = true;
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_63(unk_0xBF8499F46AD9093A(iLocal_99, 1), &fLocal_134, &uLocal_135);
					if (!func_87())
					{
						if (!func_157(iLocal_99, 1227113341) && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
						{
							unk_0x937785D9C1929236(iLocal_99);
							unk_0xF3B924DCFDECDB4B(iLocal_99, unk_0xA16EC202D9D35357(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_157(iLocal_99, 1227113341))
					{
						unk_0x937785D9C1929236(iLocal_99);
						unk_0x2AF68ED52DC74B7D(&uLocal_104);
						unk_0x6D98AA46076A68BE(&uLocal_104);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2048, 2);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_104);
						unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
						unk_0x2AF68ED52DC74B7D(&uLocal_104);
						unk_0x30D76463BF50C618(iLocal_99, 0, 0);
					}
				}
			}
			else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 25f, 25f, 20f, 0, 1, 1) || unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_87())
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						unk_0x937785D9C1929236(iLocal_99);
						unk_0x2AF68ED52DC74B7D(&uLocal_104);
						unk_0x6D98AA46076A68BE(&uLocal_104);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2048, 2);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x963BB7C99350D827(uLocal_104);
						unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
						unk_0x2AF68ED52DC74B7D(&uLocal_104);
					}
					iLocal_340 = 1;
				}
			}
		}
		if (bLocal_150)
		{
			switch (iLocal_149)
			{
				case 0:
					if (((!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) && !unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) && !unk_0x7A3B034791024F4F(unk_0xA16EC202D9D35357())) && !unk_0xDBE30D8105A6CC0C(unk_0xA16EC202D9D35357()))
					{
						if (bLocal_131)
						{
							if (unk_0x4970185D4CC64616(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_125 = { -710.1279f, -821.3084f, 22.6169f };
								Local_128 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0x2DE0B96E966FD817(iLocal_99))
							{
								Var19 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
								func_60(iLocal_99, &Local_125, &Local_128, cLocal_361, sLocal_363);
								if ((Local_125.f_2 - Var19.f_2) > 20f)
								{
									Local_125 = { Var19 };
								}
								Local_125.f_2 = (Local_125.f_2 + 2f);
								unk_0x21B0D803C4C9C45E(Local_125, &(Local_125.f_2), 0);
								if (Local_125.f_2 == 0f)
								{
									Local_125 = { Local_353 };
									Local_128.f_2 = fLocal_356;
								}
								if (unk_0x4970185D4CC64616(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_128.f_2 > 315f && Local_128.f_2 < 360f)
										{
											Local_128.f_2 = 251.4238f;
										}
										else if (Local_128.f_2 > 120f && Local_128.f_2 < 212f)
										{
											Local_128.f_2 = 67.2304f;
										}
										Local_125 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0x4970185D4CC64616(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x801B4FC214DEDCB7(Local_125, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_125 = { -814.0593f, -1082.483f, 10.0671f };
									Local_128.f_2 = 275.5752f;
								}
								else if (unk_0x4970185D4CC64616(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x801B4FC214DEDCB7(Local_125, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_125 = { -375.0627f, 6030.533f, 30.5313f };
									Local_128.f_2 = 222.9049f;
								}
								else if (unk_0x4970185D4CC64616(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x801B4FC214DEDCB7(Local_125, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_125 = { -379.7835f, 6029.472f, 30.5014f };
									Local_128.f_2 = 213.2611f;
								}
								else if (unk_0x4970185D4CC64616(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_128.f_2 > 128f && Local_128.f_2 < 195f)
										{
											if (Local_128.f_2 > 162f)
											{
												Local_128.f_2 = 220f;
											}
											else
											{
												Local_128.f_2 = 107f;
											}
										}
									}
								}
								else if (unk_0x4970185D4CC64616(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_128.f_2 > 244.444f && Local_128.f_2 < 326.2103f)
										{
											Local_128.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0x4970185D4CC64616(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_125 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var10 = { unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
								Var13 = { Var10 - Local_125 };
								Var13.f_2 = 0f;
								fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
								unk_0x21B0D803C4C9C45E(Var10, &(Var10.f_2), 0);
								fVar23 = (Local_125.f_2 - Var10.f_2);
								Local_128.f_0 = unk_0xCE9082F704DCC33A(fVar23, fVar24);
								if (Local_128.f_0 > 20f || Local_128.f_0 < -330f)
								{
									Local_125 = { Local_353 };
									Local_128.f_0 = 0f;
									Local_128.f_2 = fLocal_356;
									Var10 = { unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
									Var13 = { Var10 - Local_125 };
									Var13.f_2 = 0f;
									fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
									unk_0x21B0D803C4C9C45E(Var10, &(Var10.f_2), 0);
									fVar23 = (Local_125.f_2 - Var10.f_2);
								}
							}
							if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x801B4FC214DEDCB7(Local_125, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_128.f_2 < 35f || Local_128.f_2 > 275f)
									{
										if (Local_128.f_2 < 335f)
										{
											Local_128.f_2 = 260f;
										}
										else
										{
											Local_128.f_2 = 55f;
										}
									}
									else if (Local_128.f_2 > 107.2072f && Local_128.f_2 < 210f)
									{
										if (Local_128.f_2 > 154.6742f)
										{
											Local_128.f_2 = 233f;
										}
										else
										{
											Local_128.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_108 == 4)
						{
							if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 183.6065f, 6636.653f, 30.6299f) < unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_125 = { 183.6065f, 6636.653f, 30.6299f };
								Local_128 = { 0f, 0f, 265f };
							}
							else
							{
								Local_125 = { 172.2291f, 6631.007f, 30.7398f };
								Local_128 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
							if (!unk_0x2DE0B96E966FD817(iLocal_99))
							{
								Var4 = { unk_0xBF8499F46AD9093A(iLocal_99, 1) };
							}
							Var7 = { Var1 - Var4 };
							Local_125 = { Var1 };
							Local_125 = { Local_125.f_0, Local_125.f_1, (Local_125.f_2 - 1f) };
							Local_128 = { 0f, 0f, unk_0x3C616B96B92181C5(Var7.f_0, Var7.f_1) };
						}
						if (unk_0x4970185D4CC64616(Local_125, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_125 = { -521.475f, -1210.47f, 17.1848f };
							Local_128 = { 0f, 0f, 308.502f };
						}
						if (unk_0xECFECDAD51A6184F(iLocal_116, 0))
						{
							unk_0x3A3C5A6572B3C611(&iLocal_116);
						}
						if (unk_0xECFECDAD51A6184F(unk_0xB49BA83A5C224F40(), 0))
						{
							if (!unk_0xECFECDAD51A6184F(iVar0, 0))
							{
								iVar0 = unk_0xB49BA83A5C224F40();
								unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iVar0), &Local_347, &Local_350);
								if (unk_0x965556ACF6A83973(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0) || unk_0x965556ACF6A83973(iVar0, unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_120 = { -543.34f, -1216.8f, 17.96f };
											fLocal_124 = 337.5f;
											bVar22 = true;
										}
										else
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_120 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_124 = 246.7714f;
											bVar22 = true;
										}
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0x8D08E71DBAC996F0(iVar0, 0, 1, 1, 1);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
									else if (unk_0x4970185D4CC64616(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -187f, -855.51f, 29.02f };
										fLocal_124 = 158.28f;
										bVar22 = true;
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
									else if (unk_0x4970185D4CC64616(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -395.84f, 6051.16f, 31.19f };
										fLocal_124 = 139.92f;
										bVar22 = true;
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
									else if (unk_0x4970185D4CC64616(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -2972.31f, 490.07f, 15.03f };
										fLocal_124 = 357.64f;
										bVar22 = true;
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
									else if ((unk_0x4970185D4CC64616(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x0852C405AF94F670(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { 184.05f, 6628.75f, 31.27f };
										fLocal_124 = 89.37f;
										bVar22 = true;
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
									else
									{
										Var16 = { 2.9f, 12f, 8f };
										fLocal_124 = unk_0xD1613577C809E98B(iVar0);
										Local_120 = { func_56(Local_125, unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
										if (func_55(0f, 0f, 0f, Local_120, 0))
										{
											Local_120 = { unk_0xBF8499F46AD9093A(iVar0, 1) };
										}
										if (unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iVar0)))
										{
											Local_350.f_0 = (Local_350.f_0 + 3f);
											Local_350.f_1 = (Local_350.f_1 + 3f);
										}
										bVar22 = true;
										if ((Local_350.f_0 - Local_347.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_58(iVar0))
											{
												unk_0x6C43BF7625967266(iVar0, Local_120, 1, 0, 0, 1);
												unk_0x34639238667C4381(iVar0, fLocal_124);
												unk_0xAC894C93914464C2(iVar0);
											}
										}
										else if (unk_0x538DF9E5B1DF01EB(iVar0))
										{
											if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iVar0, 0))
											{
												unk_0x2F2948A2506AA404(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_58(iVar0))
						{
							unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iVar0), &Local_347, &Local_350);
							if (unk_0x965556ACF6A83973(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0) || unk_0x965556ACF6A83973(iVar0, unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0x6C43BF7625967266(iVar0, Local_357, 1, 0, 0, 1);
								unk_0x34639238667C4381(iVar0, fLocal_360);
								unk_0xAC894C93914464C2(iVar0);
							}
						}
						if (unk_0x538DF9E5B1DF01EB(iLocal_100))
						{
							unk_0x423D1EBE54B18555(iLocal_100, 1);
						}
						unk_0xD1D6EEB3AEFA757C(Local_125 - Vector(10f, 10f, 10f), Local_125 + Vector(10f, 10f, 10f));
						unk_0x6ACCA46B5F60314D(Local_125, 20f, 0);
						unk_0x11E84835ED616A25(Local_125, 10f, 0);
						unk_0x84710FE7666EBF7B(Local_125, (Local_350.f_1 + 1f), 1, 0, 0, 0);
						unk_0x75E0BF8466C6EBB9(Local_125, 25f);
						unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 1);
						unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
						uLocal_111 = unk_0x7D9AB6E493591276(Local_125, Local_128, 2);
						unk_0x3CEAE981C57EBDD4(uLocal_111, 0);
						uLocal_148 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xFDD170140EFC9F4C(uLocal_148, 15f);
						unk_0xC2A228A4CCC7B3B0(uLocal_148, uLocal_111, sLocal_364, cLocal_361);
						unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
						unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
						unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uLocal_111, cLocal_361, sLocal_362, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
						if (!unk_0x2DE0B96E966FD817(iLocal_99))
						{
							unk_0x9AB8F163FA160890(iLocal_99);
							unk_0x10D8E64E13BD715C(iLocal_99, uLocal_111, cLocal_361, sLocal_363, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0xC8CEF95C63B283EC(uLocal_148, 1);
						unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_335, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_331, 16);
						StringConCat(&cVar29, "_1", 16);
						func_43(&Local_158, cLocal_334, sLocal_335, &cVar25, cLocal_331, &cVar29, 7, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x9D4C739200792759(0);
						func_42(joaat("rc_wallets_returned"), 1);
						unk_0x3ED04C9A60CBD249(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_149++;
					}
					else
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
						{
						}
						if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
						{
						}
						if (unk_0x7A3B034791024F4F(unk_0xA16EC202D9D35357()))
						{
						}
						if (unk_0xDBE30D8105A6CC0C(unk_0xA16EC202D9D35357()))
						{
						}
					}
					unk_0x6C5CE54692FA7CB8();
					break;
				
				case 1:
					if ((unk_0xCFC5CE3AD496DA0B(uLocal_111) && unk_0x0DF89B3B1CF0FDC1(uLocal_111) == 1f) || func_39())
					{
						unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
						unk_0xE1F4F71394A235B8(unk_0x1788E93557766241(), 0);
						if (!unk_0x2DE0B96E966FD817(iLocal_99))
						{
							unk_0x065062839FBD7BCF(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
							unk_0x2C4E82CF88213975(iLocal_99, 0);
							unk_0xA956F9A1F0F9C2EC(iLocal_99, sLocal_145, 1048576000);
						}
						if (unk_0xF4C685E933068D23())
						{
							unk_0x9AB8F163FA160890(iLocal_99);
							Var10 = { unk_0xAD51FEBE0DA69044(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x21B0D803C4C9C45E(Var10, &(Var10.f_2), 0);
							unk_0x6C43BF7625967266(iLocal_99, Var10, 1, 0, 0, 1);
							Var10 = { unk_0x9872CF8BE2A9A01E(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x34639238667C4381(iLocal_99, Var10.f_2);
						}
						Var10 = { unk_0x9872CF8BE2A9A01E(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
						if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_38(unk_0xA16EC202D9D35357(), 215.68f, 60f))
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x353F4B963593F141(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
							else if (func_38(unk_0xA16EC202D9D35357(), 122.0371f, 60f))
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x353F4B963593F141(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
							else
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
						}
						else if (unk_0x4970185D4CC64616(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_38(unk_0xA16EC202D9D35357(), 200.8887f, 60f))
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x353F4B963593F141(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
							else if (func_38(unk_0xA16EC202D9D35357(), 347.8599f, 60f))
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x353F4B963593F141(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
							else
							{
								unk_0x6D98AA46076A68BE(&uLocal_104);
								unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
								unk_0x963BB7C99350D827(uLocal_104);
								unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
								unk_0x2AF68ED52DC74B7D(&uLocal_104);
							}
						}
						else
						{
							unk_0x6D98AA46076A68BE(&uLocal_104);
							unk_0x353F4B963593F141(0, unk_0xA783C6007920169C(iLocal_99, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0xAC9F22F89987627B(0, unk_0xD1613577C809E98B(iLocal_99), 1);
							unk_0x963BB7C99350D827(uLocal_104);
							unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
							unk_0x2AF68ED52DC74B7D(&uLocal_104);
						}
						unk_0x86E7313D71D1A983(iLocal_99, joaat("MotionState_Walk"), 1, 0, 0);
						unk_0x551186C5C186D1DC(iLocal_99, 1);
						unk_0x2686393074E14730(iLocal_99, 1);
						func_37(&iLocal_116);
						unk_0x5AE11BC36633DE4E(0);
						unk_0x1CCF3860AEBA07CC(0);
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
							if (!func_36())
							{
								unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
							}
						}
						if (unk_0x538DF9E5B1DF01EB(iLocal_100))
						{
							unk_0xD4C90F16EBBFE620(&iLocal_100);
						}
						if (!unk_0x2DE0B96E966FD817(iLocal_99))
						{
							unk_0x065062839FBD7BCF(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
						}
						unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 0);
						unk_0x20D6E0EA145DF751(0f);
						unk_0xC8CEF95C63B283EC(uLocal_148, 0);
						func_35();
						unk_0x27A62B1C26941E13(uLocal_148, 0);
						unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
						if (unk_0xF4C685E933068D23())
						{
							unk_0x5FE2A83120E8127F(500);
							while (unk_0x0FFB470AFBDA3DCD())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						iVar34 = (iLocal_344 / 100);
						iVar34 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x4A34D7E241347461(0, 0, 3, 0);
						func_72(0, 1, 1, 0);
						func_3(func_30(), 1, iVar34);
						func_271(1);
					}
					else
					{
						unk_0x6C5CE54692FA7CB8();
						if (unk_0xE619D2B94AB9AC87(unk_0xA16EC202D9D35357(), joaat("detach")))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_99) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
							{
								if (unk_0x59F7AAEE0CBA2C9F(iLocal_100, unk_0xA16EC202D9D35357()))
								{
									unk_0xBF1AB1205B822518(iLocal_100, 0, 1);
									if (unk_0x998FA6EE0C28BE23(iLocal_99))
									{
										unk_0x07CDE0236CD8AAC8(iLocal_100, iLocal_99, unk_0x879EC196F941E547(iLocal_99, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x07CDE0236CD8AAC8(iLocal_100, iLocal_99, unk_0x879EC196F941E547(iLocal_99, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_97439.f_29795[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_29();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_28(99, 1);
					func_42(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_12(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_11(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
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
					switch (iParam0)
					{
						case 0:
							func_42(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_42(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_42(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_42(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_42(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_28(95, iParam3);
					break;
				
				case 1:
					func_28(97, iParam3);
					break;
				
				case 2:
					func_28(96, iParam3);
					break;
			}
			func_28(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_42(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_42(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_42(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_34915 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_9() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_8(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0)
{
	func_28(93, iParam0);
	func_28(29, iParam0);
	func_28(30, iParam0);
}

bool func_11(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_9() /*8064*/].f_5756.f_10, iParam0);
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_13(27, 1);
	return 1;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

int func_14(int iParam0, int iParam1)
{
	if (func_26(14) && !func_25(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_24(&Global_2542838))
	{
		if (func_22(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
	}
	func_18(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_16(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_25(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	if (func_21(uParam0) < 0f)
	{
		func_20(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_17(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_17(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0, iVar0);
		iVar0++;
	}
	func_20(uParam0, (Global_2542837 - 0.5f));
}

void func_19(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_20(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_21(var uParam0)
{
	return uParam0->f_72;
}

bool func_22(var uParam0, int iParam1)
{
	return func_23(uParam0, iParam1) != -1;
}

int func_23(var uParam0, int iParam1)
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

bool func_24(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_27(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_29()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

int func_30()
{
	func_31();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_31()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_34(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_33(unk_0xA16EC202D9D35357());
			if (func_32(iVar0) && (!func_26(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_32(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()
{
	var uVar0;
	
	uVar0 = unk_0xA47810FFA850D19A(26379945, unk_0xA783C6007920169C(unk_0xA16EC202D9D35357(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()), 1115815936, 1, 2);
	unk_0xC8CEF95C63B283EC(uVar0, 1);
}

int func_36()
{
	if (unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_37(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*iParam0))
	{
		unk_0xE44A580B551C3645(*iParam0);
		if (unk_0x22349EC06EA5B08B(*iParam0) && unk_0xD8233CB95CB48A7C(*iParam0, 1))
		{
			unk_0x3A3C5A6572B3C611(iParam0);
		}
	}
}

int func_38(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xD1613577C809E98B(iParam0) < fVar0 && unk_0xD1613577C809E98B(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0xD1613577C809E98B(iParam0) < fVar0 || unk_0xD1613577C809E98B(iParam0) > fVar1)
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

int func_39()
{
	if (func_40(1000))
	{
		unk_0x271524E4281048DC(500);
		while (unk_0xE9A5FF67266655B2())
		{
			unk_0x6C5CE54692FA7CB8();
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	if (unk_0x83B393DE31BAC8F0())
	{
		if ((unk_0x09560C7DE2A384BD() - Global_28) > iParam0)
		{
			Global_27 = unk_0x09560C7DE2A384BD();
		}
		Global_28 = unk_0x09560C7DE2A384BD();
		if ((unk_0x09560C7DE2A384BD() - Global_27) > iParam0)
		{
			if (func_41())
			{
				Global_27 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
	}
	return 0;
}

int func_41()
{
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (unk_0x1453F50088A91E4E(0, 18) || unk_0x1453F50088A91E4E(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

int func_43(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;
	
	func_54(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_53(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_44(&uVar0, &uVar11, iParam6, 0);
}

int func_44(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam2 > Global_15695)
			{
				if (bParam3 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
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
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_50();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16689 = Global_16690;
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15312.f_370 = Global_16682;
		Global_15689 = Global_15690;
		Global_15691 = Global_15692;
		if (Global_15951 == 0)
		{
			Global_15847[0 /*6*/] = { Global_15873[0 /*6*/] };
			Global_15847[1 /*6*/] = { Global_15873[1 /*6*/] };
			Global_15899[0 /*6*/] = { Global_15925[0 /*6*/] };
			Global_15899[1 /*6*/] = { Global_15925[1 /*6*/] };
			Global_15860[0 /*6*/] = { Global_15886[0 /*6*/] };
			Global_15860[1 /*6*/] = { Global_15886[1 /*6*/] };
			Global_15912[0 /*6*/] = { Global_15938[0 /*6*/] };
			Global_15912[1 /*6*/] = { Global_15938[1 /*6*/] };
		}
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam3)
			{
				func_49();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_48())
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (Global_15951 == 0)
					{
						if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
						{
							return 0;
						}
						if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
						{
							return 0;
						}
						if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
						{
							return 0;
						}
						if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
						{
							return 0;
						}
					}
				}
			}
			if (func_47())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
			}
			func_46();
			Global_15703 = bParam3;
		}
		Global_15695 = iParam2;
		if (Global_15689 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15689)
			{
				StringCopy(&(Global_15312.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15312.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14559 = 0;
		func_45();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15695 || iParam2 == Global_15695)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_52();
	}
	return 0;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_46()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_47()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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
	if (func_26(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_30();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_52()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15690 = iParam0;
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

bool func_55(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_56(struct<3> Param0, struct<3> Param3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	struct<3> Var22;
	struct<3> Var25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = unk_0xB49BA83A5C224F40();
	if (!unk_0x22349EC06EA5B08B(iVar0))
	{
		unk_0x7B9576B4E099FB1F(iVar0, 1, 0);
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iVar0), &Var7, &Var10);
	unk_0x4555877B8D40F1EF(Param0, 3, &Var4, 1, 1077936128, 0);
	if (unk_0x2A488C176D52CCA5(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x2C3E279B9F7271FB(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (unk_0x65595DB38D0F502A(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (unk_0x4970185D4CC64616(Var1, Param0, 1) <= 5f || unk_0x4970185D4CC64616(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x2C3E279B9F7271FB(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (unk_0x65595DB38D0F502A(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (unk_0x4970185D4CC64616(Var1, Param0, 1) <= 5f || unk_0x4970185D4CC64616(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x2C3E279B9F7271FB(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (unk_0x65595DB38D0F502A(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (unk_0x4970185D4CC64616(Var1, Param0, 1) <= 5f || unk_0x4970185D4CC64616(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA783C6007920169C(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xA783C6007920169C(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x2C3E279B9F7271FB(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (unk_0x65595DB38D0F502A(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (unk_0x4970185D4CC64616(Var1, Param0, 1) <= 5f || unk_0x4970185D4CC64616(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return Var1;
}

Vector3 func_57(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

int func_58(int iParam0)
{
	if (func_99(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (!unk_0x042EE007A41C88D4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3545D662A0A53653((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
	uParam2->f_2 = func_62(iParam0, unk_0xA16EC202D9D35357(), 1);
	fVar3 = func_62(iParam0, unk_0xA16EC202D9D35357(), 1);
	fVar4 = func_62(iParam0, unk_0xA16EC202D9D35357(), 1);
	Var16 = { unk_0xBF8499F46AD9093A(iParam0, 0) - unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
	if (unk_0x6C47E32491756A1A(sParam3))
	{
		Var13 = { unk_0xAD51FEBE0DA69044(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_61(unk_0xBF8499F46AD9093A(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0xCC6B7A025E72F529(unk_0xBF8499F46AD9093A(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0xCC5DCC29F6E83651(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x65595DB38D0F502A(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var10.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0xCC6B7A025E72F529(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_61(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

float func_61(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xCE9082F704DCC33A(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_62(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	return func_61(Var0, Var3, iParam2);
}

void func_63(struct<3> Param0, float fParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) - Param0 };
		fVar4 = unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1);
		if (func_64(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		fVar4 = unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1);
		if (func_64(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}

int func_64(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		fVar0 = unk_0xD1613577C809E98B(iParam0);
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

void func_65()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_68(0))
		{
			func_66(0);
		}
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 2);
	}
}

void func_66(int iParam0)
{
	if (Global_14552)
	{
		func_67(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_47())
	{
		Global_14394.f_1 = 3;
	}
}

void func_67(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_68(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	Global_14559 = 0;
	func_70();
}

void func_70()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

int func_71(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x4B404C739A9AFC7A(0, 71, 1);
	unk_0x4B404C739A9AFC7A(0, 72, 1);
	unk_0x4B404C739A9AFC7A(0, 76, 1);
	unk_0x4B404C739A9AFC7A(0, 73, 1);
	unk_0x4B404C739A9AFC7A(0, 59, 1);
	unk_0x4B404C739A9AFC7A(0, 60, 1);
	if (bParam5)
	{
		unk_0x4B404C739A9AFC7A(0, 75, 1);
	}
	unk_0x4B404C739A9AFC7A(0, 80, 1);
	unk_0x4B404C739A9AFC7A(0, 69, 1);
	unk_0x4B404C739A9AFC7A(0, 70, 1);
	unk_0x4B404C739A9AFC7A(0, 68, 1);
	unk_0x4B404C739A9AFC7A(0, 74, 1);
	unk_0x4B404C739A9AFC7A(0, 86, 1);
	unk_0x4B404C739A9AFC7A(0, 81, 1);
	unk_0x4B404C739A9AFC7A(0, 82, 1);
	unk_0x4B404C739A9AFC7A(0, 138, 1);
	unk_0x4B404C739A9AFC7A(0, 136, 1);
	unk_0x4B404C739A9AFC7A(0, 114, 1);
	unk_0x4B404C739A9AFC7A(0, 107, 1);
	unk_0x4B404C739A9AFC7A(0, 110, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 87, 1);
	unk_0x4B404C739A9AFC7A(0, 88, 1);
	unk_0x4B404C739A9AFC7A(0, 113, 1);
	unk_0x4B404C739A9AFC7A(0, 115, 1);
	unk_0x4B404C739A9AFC7A(0, 116, 1);
	unk_0x4B404C739A9AFC7A(0, 117, 1);
	unk_0x4B404C739A9AFC7A(0, 118, 1);
	unk_0x4B404C739A9AFC7A(0, 119, 1);
	unk_0x4B404C739A9AFC7A(0, 131, 1);
	unk_0x4B404C739A9AFC7A(0, 132, 1);
	unk_0x4B404C739A9AFC7A(0, 123, 1);
	unk_0x4B404C739A9AFC7A(0, 126, 1);
	unk_0x4B404C739A9AFC7A(0, 129, 1);
	unk_0x4B404C739A9AFC7A(0, 130, 1);
	unk_0x4B404C739A9AFC7A(0, 133, 1);
	unk_0x4B404C739A9AFC7A(0, 134, 1);
	unk_0x70B6991909A03810();
	if ((unk_0x09560C7DE2A384BD() - Global_29) > 500)
	{
		unk_0x7DDC5160036EE766(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x09560C7DE2A384BD();
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0x3545D662A0A53653(unk_0x5AF66EDEBFA76B9B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_72(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_79(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_47())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_78(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_79(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_78(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_73(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_73(int iParam0)
{
	if (func_75(iParam0, 0))
	{
		return 1;
	}
	if (func_74())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_75(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_76(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_77()
{
	return Global_1312729;
}

int func_78(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_80()
{
	Global_14559 = 0;
	func_52();
}

int func_81()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (func_81())
		{
			return 1;
		}
	}
	return 0;
}

int func_83(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return func_85(func_86(iParam0));
}

bool func_85(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

char* func_86(int iParam0)
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

int func_87()
{
	switch (iLocal_115)
	{
		case 1:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	var uVar0;
	
	if (!bLocal_146)
	{
		if (iLocal_337)
		{
			func_96();
		}
		else
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_98))
			{
				if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_98) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_98))
				{
					if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_337 = 1;
					}
				}
			}
			else
			{
				iLocal_337 = 1;
			}
			func_106(iLocal_102, &uLocal_113);
		}
		if (!bLocal_338)
		{
			if (bLocal_141)
			{
				if (unk_0x3FCA2F27F738473E(uLocal_140))
				{
					func_42(joaat("rc_wallets_recovered"), 1);
					unk_0x3ED04C9A60CBD249(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x2E4D6907625CDD23(0, 200, 250);
					func_89(2);
					bLocal_146 = true;
				}
				else if (unk_0x5660C8AFDD9C1721(iLocal_103))
				{
					if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xA3B3632D39761B55(uLocal_140)) > 150f)
					{
						if (unk_0x2DE0B96E966FD817(iLocal_99))
						{
							func_253();
						}
						else if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_99, 1)) > 100f)
						{
							func_253();
						}
					}
				}
			}
		}
	}
}

void func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_90(func_86(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_90(func_86(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_90(func_86(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

void func_90(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_91(var uParam0)
{
	*uParam0 = -99;
}

int func_92(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_93(iParam0, bParam1, 145);
}

int func_93(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_94(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(iVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_94(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_95(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(iVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(iVar0, func_95(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(iVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(iVar0, func_95(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_95(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_96()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_141)
	{
		unk_0xD0E2BFCE93AE3ABD(&uVar1, 3);
		unk_0xD0E2BFCE93AE3ABD(&uVar1, 4);
		unk_0xD0E2BFCE93AE3ABD(&uVar1, 1);
		uLocal_140 = unk_0xE3FFBBF0B5D956E4(iVar0, unk_0xC4C1971ABDF23486(iLocal_98, 1067030938, 1069547520), uVar1, iLocal_344, 1, iLocal_152);
		bLocal_141 = true;
		iLocal_103 = func_97(uLocal_140);
		func_109(&Local_158, cLocal_334, sLocal_330, 4, 0, 0, 0);
		if (unk_0x5660C8AFDD9C1721(iLocal_102))
		{
			unk_0xB6FB9702660D84F6(&iLocal_102);
		}
		if (func_99(iLocal_99))
		{
			unk_0x937785D9C1929236(iLocal_99);
		}
	}
	else
	{
		if (!iLocal_142)
		{
			if (!func_157(iLocal_99, 242628503) && !unk_0x2DE0B96E966FD817(iLocal_99))
			{
				unk_0x6D98AA46076A68BE(&uLocal_104);
				if (!unk_0x965556ACF6A83973(iLocal_99, Local_353, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0x047BDE74F5ADA7D9(0, Local_353, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
				unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_104);
				unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
				unk_0x2AF68ED52DC74B7D(&uLocal_104);
			}
		}
		if (iLocal_142)
		{
			if (!bLocal_146)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_99))
				{
					if (unk_0x95EDB2DEFA5BB405(iLocal_99, cLocal_144, "pickup_low", 3))
					{
						if (unk_0x4CB0BCFFEC712BA2(iLocal_99, cLocal_144, "pickup_low") > 0.35f)
						{
							if (unk_0x27C40BD761A1E76F(uLocal_140))
							{
								func_109(&Local_158, cLocal_334, cLocal_331, 4, 0, 0, 0);
								unk_0x4B96753E257A5CA4(uLocal_140);
								unk_0x065062839FBD7BCF(iLocal_99, iLocal_344);
								unk_0x2C4E82CF88213975(iLocal_99, 0);
								unk_0x6B3DDEE91652BE59(&iLocal_99);
								func_271(1);
							}
						}
					}
					else if (unk_0x221AC1EF116F6053(iLocal_99, 242628503) == 7)
					{
						unk_0x937785D9C1929236(iLocal_99);
						unk_0x6D98AA46076A68BE(&uLocal_104);
						unk_0x5B5659C49032B96C(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 2048, 2);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 3000);
						unk_0xAC9F22F89987627B(0, 1193033728, 0);
						unk_0x963BB7C99350D827(uLocal_104);
						unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
						unk_0x2AF68ED52DC74B7D(&uLocal_104);
						unk_0x2686393074E14730(iLocal_99, 1);
					}
				}
			}
		}
		else if (!unk_0x2DE0B96E966FD817(iLocal_99))
		{
			if (unk_0x27C40BD761A1E76F(uLocal_140))
			{
				if (unk_0x965556ACF6A83973(iLocal_99, unk_0xA3B3632D39761B55(uLocal_140), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0x937785D9C1929236(iLocal_99);
					unk_0x6D98AA46076A68BE(&uLocal_104);
					unk_0x353F4B963593F141(0, unk_0xA3B3632D39761B55(uLocal_140), 1f, 20000, 1f, 512, 1193033728);
					unk_0x5BAF25119CA70A04(0, unk_0xA3B3632D39761B55(uLocal_140), 0);
					unk_0x5B5659C49032B96C(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 2048, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 3000);
					unk_0xAC9F22F89987627B(0, 1193033728, 0);
					unk_0x963BB7C99350D827(uLocal_104);
					unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
					unk_0x2AF68ED52DC74B7D(&uLocal_104);
					unk_0x2686393074E14730(iLocal_99, 1);
					iLocal_142 = 1;
				}
			}
		}
	}
}

int func_97(var uParam0)
{
	return func_98(uParam0);
}

int func_98(var uParam0)
{
	var uVar0;
	
	if (!unk_0x27C40BD761A1E76F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE86F8FB78D76001F(uParam0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_95(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	return iVar0;
}

int func_99(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_100()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_108)
	{
		case 1:
		case 2:
			if (unk_0xBF8ADDCADFC4691E(iLocal_98, unk_0xA16EC202D9D35357(), 1))
			{
				unk_0xFAF4121083211853(iLocal_98);
				bVar0 = true;
			}
			if (unk_0xECFECDAD51A6184F(iLocal_116, 0) && unk_0xAD203DB71ADF6E57(iLocal_98, iLocal_116, 0))
			{
				if (unk_0x8B8942079F200B57(iLocal_116))
				{
					if (unk_0x02AE016A85A33AB4(iLocal_116))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xECFECDAD51A6184F(iLocal_116, 0) || !func_157(iLocal_98, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x81060B34CE9997E9(iLocal_98))
			{
				if (unk_0x221AC1EF116F6053(iLocal_98, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_137)
				{
					if (unk_0xAD203DB71ADF6E57(iLocal_98, iLocal_116, 0))
					{
						if (unk_0x221AC1EF116F6053(iLocal_98, 242628503) != 1 && unk_0x221AC1EF116F6053(iLocal_98, 242628503) != 0)
						{
							unk_0x6D98AA46076A68BE(&uLocal_105);
							unk_0xBB5AA994E06B28E2(0, 0, 0);
							unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
							unk_0x963BB7C99350D827(uLocal_105);
							unk_0x0891776D0327B77A(iLocal_98, uLocal_105);
							unk_0x2AF68ED52DC74B7D(&uLocal_105);
						}
					}
					else if (unk_0x221AC1EF116F6053(iLocal_98, 242628503) != 1 && unk_0x221AC1EF116F6053(iLocal_98, 242628503) != 0)
					{
						unk_0x6D98AA46076A68BE(&uLocal_105);
						unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
						unk_0x963BB7C99350D827(uLocal_105);
						unk_0x0891776D0327B77A(iLocal_98, uLocal_105);
						unk_0x2AF68ED52DC74B7D(&uLocal_105);
					}
					iVar1 = unk_0x59F687939B212878(iLocal_98);
					if (iVar1 == 2)
					{
						unk_0x937785D9C1929236(iLocal_98);
						if (func_99(unk_0xA16EC202D9D35357()))
						{
							unk_0x85A1016DBBC5E64B(iLocal_98, unk_0xA16EC202D9D35357(), 0, 16);
						}
						iLocal_137 = 1;
					}
				}
			}
			break;
	}
}

int func_101()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_98))
	{
		if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_98, 180f, 180f, 50f, 0, 1, 0) || !unk_0x0E7E162F5A49FAAA(iLocal_98))
		{
			func_102(iLocal_102, iLocal_98, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_158[2 /*10*/].f_7)
			{
				func_160(&Local_158, 2);
			}
			unk_0x51A89CCC8A5317D0(&iLocal_98);
			if (unk_0xECFECDAD51A6184F(iLocal_116, 0))
			{
				if (unk_0x0E7E162F5A49FAAA(iLocal_116))
				{
					unk_0x2F2948A2506AA404(&iLocal_116);
				}
			}
		}
	}
	else if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), unk_0xBF8499F46AD9093A(iLocal_98, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		if ((unk_0x538DF9E5B1DF01EB(iParam1) && unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357())) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x9FF5D51C24AD2308(iParam1))
			{
				if (unk_0xECFECDAD51A6184F(unk_0xF22EE5E4C0C2704B(iParam1), 0))
				{
					fVar1 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iParam1, 1), 1);
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
						unk_0x864CE7B9AD07DDDE(iParam0, 1);
						unk_0xE30CC26FBB1F8075(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x864CE7B9AD07DDDE(iParam0, 0);
						unk_0xE30CC26FBB1F8075(iParam0, 255);
					}
				}
			}
			else if (unk_0xA34B85701D8A1FA8(iParam1))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA7CC89FF539E1376(iParam1)))
				{
					fVar1 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iParam1, 1), 1);
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
						unk_0x864CE7B9AD07DDDE(iParam0, 1);
						unk_0xE30CC26FBB1F8075(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x864CE7B9AD07DDDE(iParam0, 0);
						unk_0xE30CC26FBB1F8075(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xD550A19A432377FF(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

float func_105(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_106(int iParam0, var uParam1)
{
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		if (unk_0x09560C7DE2A384BD() > *uParam1 + 500)
		{
			if (unk_0x13CBCD00589F84E7(iParam0) == 1)
			{
				unk_0x060629C917E581A5(iParam0, true);
			}
			else
			{
				unk_0x060629C917E581A5(iParam0, false);
				unk_0x1AD45E3CF020D50D(iParam0, 1);
			}
			*uParam1 = unk_0x09560C7DE2A384BD();
		}
		if (!unk_0x11A809BBE3889742() && func_107(0))
		{
			func_89(1);
		}
	}
}

bool func_107(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_97435, iParam0);
}

void func_108()
{
	switch (iLocal_108)
	{
		case 1:
		case 2:
			if (unk_0xECFECDAD51A6184F(iLocal_116, 0))
			{
				if (iLocal_337)
				{
					if (unk_0xD9275EB8FA656B5C(iLocal_98, iLocal_116) || unk_0x221AC1EF116F6053(iLocal_98, -1273030092) == 1)
					{
						unk_0x933DC7D168CD6A71(iLocal_98, iLocal_116, Local_94, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x8B8942079F200B57(iLocal_116))
					{
						unk_0xB336A3C199805AC5(iLocal_116, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x933DC7D168CD6A71(iLocal_98, iLocal_116, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_337)
			{
				unk_0x6D98AA46076A68BE(&uLocal_104);
				unk_0x353F4B963593F141(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
				unk_0x963BB7C99350D827(uLocal_104);
				unk_0x0891776D0327B77A(iLocal_98, uLocal_104);
				unk_0x2AF68ED52DC74B7D(&uLocal_104);
			}
			else
			{
				unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0x4970185D4CC64616(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0x0676D83B2FE460E1(iLocal_98, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 300f, -1, 0, 0);
				unk_0x2AF68ED52DC74B7D(&uLocal_104);
			}
			else if (iLocal_337)
			{
				unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0x0676D83B2FE460E1(iLocal_98, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_98))
	{
		unk_0x2686393074E14730(iLocal_98, 1);
	}
}

bool func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_110(sParam2, iParam3, 0);
}

int func_110(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_50();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_49();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_48())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_47())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_46();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_45();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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

bool func_111()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (!unk_0x2DE0B96E966FD817(iLocal_99))
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_99))
			{
				iLocal_110++;
				if (iLocal_110 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_110 = 0;
			}
		}
		if (unk_0xF6BC67E137183D3F(unk_0xCDC62EA66023BC94(iLocal_99, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0xCDC62EA66023BC94(iLocal_99, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0xCDC62EA66023BC94(iLocal_99, 31086, 0f, 0f, 0f) };
		if ((unk_0xFDD5856D25C0CEE2(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xFDD5856D25C0CEE2(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xFDD5856D25C0CEE2(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x14A03700BE8DDF33(unk_0xCDC62EA66023BC94(iLocal_99, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x8C42D51DE272AC72(-1, unk_0xCDC62EA66023BC94(iLocal_99, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_113())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0x221AC1EF116F6053(iLocal_99, 474215631) != 1)
			{
				if (func_112(iLocal_99))
				{
					unk_0xFC75211D7BD0539E(iLocal_99, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_112(int iParam0)
{
	if (func_99(iParam0))
	{
		if (!unk_0x2DE0B96E966FD817(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113()
{
	if (func_99(iLocal_98))
	{
		if (func_105(iLocal_99, iLocal_98, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_114()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x538DF9E5B1DF01EB(iLocal_99))
	{
		if (unk_0x2DE0B96E966FD817(iLocal_99))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_99, unk_0xA16EC202D9D35357(), 1) && unk_0xEAABEAE1DB589285(iLocal_99))
			{
				bVar0 = true;
				unk_0xFAF4121083211853(iLocal_99);
			}
			if (unk_0xF6BC67E137183D3F(unk_0xBF8499F46AD9093A(iLocal_99, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_115(iLocal_99, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_113())
		{
			bVar0 = false;
			if (unk_0x221AC1EF116F6053(iLocal_99, 474215631) != 1)
			{
				if (func_112(iLocal_99))
				{
					unk_0xFC75211D7BD0539E(iLocal_99, 2000);
				}
			}
		}
		else if (!unk_0x2DE0B96E966FD817(iLocal_98))
		{
			if (unk_0x221AC1EF116F6053(iLocal_98, 1805844857) == 7)
			{
				unk_0x15EBFEEB77BF84B7(iLocal_98, 17, 1);
				unk_0x15EBFEEB77BF84B7(iLocal_98, 13, 0);
				unk_0xEA36CC2E7750344B(iLocal_98, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_115(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_99(unk_0xA16EC202D9D35357()) && func_99(iParam0))
	{
		if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
		{
			return 1;
		}
		if (func_129(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
		{
			if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
			{
				Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) - unk_0xBF8499F46AD9093A(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_128(unk_0xA16EC202D9D35357(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_116(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_116(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_99(unk_0xA16EC202D9D35357()) && func_99(iParam0))
	{
		if (func_127(iParam0) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iParam0))
		{
			if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_117(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_117(int iParam0, float fParam1)
{
	return func_118(iParam0, unk_0xA16EC202D9D35357(), fParam1, 1, 250, 7);
}

bool func_118(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_126(iParam0, iParam1);
	if (!func_99(iParam0) || !func_99(iParam1))
	{
		if (iVar4 != -1)
		{
			func_125(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_122(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_121();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_119(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x09560C7DE2A384BD() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}

int func_119(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_99(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_120(iParam4, iParam7) };
		*uParam0 = unk_0x2C3E279B9F7271FB(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x65595DB38D0F502A(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xA34B85701D8A1FA8(iVar7))
	{
		func_99(iVar7);
		if (unk_0xA7CC89FF539E1376(iVar7) == iParam4)
		{
			if (bLocal_89)
			{
				unk_0xB1A3338046924097(Param1, unk_0xBF8499F46AD9093A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x09560C7DE2A384BD();
			return 1;
		}
		return 0;
	}
	if (unk_0x9FF5D51C24AD2308(iVar7))
	{
		func_99(iVar7);
		if (unk_0x202EF5D8203705EF(iParam4, 0))
		{
			if (unk_0xF22EE5E4C0C2704B(iVar7) == unk_0x6ADAC08D70C79DE5(iParam4, 0))
			{
				if (bLocal_89)
				{
					unk_0xB1A3338046924097(Param1, unk_0xBF8499F46AD9093A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x444ECD635D5FD45F(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xBF8499F46AD9093A(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xCDC62EA66023BC94(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xBF8499F46AD9093A(iParam0, 1);
}

int func_121()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_122(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_124(unk_0xBF8499F46AD9093A(iParam1, 1) - unk_0xBF8499F46AD9093A(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x0A0652D7F8135EB9(iParam0) };
	}
	else
	{
		Var3 = { func_124(unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 5f, 0f) - unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_123(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_123(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_124(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_125(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)
{
	if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iParam0) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_128(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x0A0652D7F8135EB9(iParam0) };
	Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) - unk_0xBF8499F46AD9093A(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_129(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_99(unk_0xA16EC202D9D35357()) && func_99(iParam0))
	{
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_133(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_130(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xB7761EC96D6D9B92(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
				{
					if (unk_0xF6BC67E137183D3F(unk_0xBF8499F46AD9093A(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_133(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_130(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_130(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x3A45E18EDC5EBA96(unk_0xBF8499F46AD9093A(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x3A45E18EDC5EBA96(unk_0xBF8499F46AD9093A(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x3A45E18EDC5EBA96(unk_0xBF8499F46AD9093A(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x3A45E18EDC5EBA96(unk_0xBF8499F46AD9093A(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_131(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_131(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x98B0F512CA1C2670(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xAB0B0371A2763F6C(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xAB0B0371A2763F6C(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xAB0B0371A2763F6C(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xAB0B0371A2763F6C(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xAB0B0371A2763F6C(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_132(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_124(Param1 - unk_0xBF8499F46AD9093A(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x0A0652D7F8135EB9(iParam0) };
	}
	else
	{
		Var3 = { func_124(unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 5f, 0f) - unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_123(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xF6BC67E137183D3F(unk_0xBF8499F46AD9093A(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_134()
{
	if (bLocal_141 || unk_0xE44A580B551C3645(iLocal_98))
	{
		func_155(&uLocal_371, 0, 0);
	}
	else
	{
		func_135(&uLocal_371, iLocal_98, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_135(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_136(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_136(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_137(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_137(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		func_155(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_138(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_138(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x99483D9B7795CE90())
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x8CD18E96F1984EE6(iVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_85(iVar0))
	{
		func_154();
	}
	if (func_153(iParam1) && unk_0x01F2C76388A112CD(iParam1))
	{
		iVar1 = 0;
		if (unk_0xA34B85701D8A1FA8(iParam1))
		{
			unk_0x363DCD6DE9075276(unk_0xA7CC89FF539E1376(iParam1));
			unk_0x4A31EF84AD2D3B0D(unk_0xA7CC89FF539E1376(iParam1), 1);
			if (unk_0x586DEB4EEF97DE25(unk_0xA7CC89FF539E1376(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9FF5D51C24AD2308(iParam1))
		{
			unk_0x0FD7A44935EE7114(unk_0xF22EE5E4C0C2704B(iParam1));
			if (unk_0xCA9E7F1048FD317D(unk_0xF22EE5E4C0C2704B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x15CE956C279F4825(iParam1))
		{
			unk_0xB7077310F4F4B405(unk_0xEF9CAED9122967A6(iParam1));
			if (unk_0x6F24C2390E9E1291(unk_0xEF9CAED9122967A6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x99483D9B7795CE90())
		{
			if (func_148(uParam0, bParam7, bParam9, 0))
			{
				func_145(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_142(iVar0))
				{
					if ((unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0)) && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if ((iVar1 && !unk_0x11A809BBE3889742()) && uParam8)
						{
							if (!func_85(iVar0))
							{
								func_90(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
								{
									func_141(1);
								}
							}
						}
					}
				}
			}
			else if (func_142(iVar0))
			{
				if (unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0))
				{
					if (((unk_0x98666858610065B8(iParam1) && iVar1) && !unk_0x11A809BBE3889742()) && uParam8)
					{
						if (!func_85(iVar0))
						{
							func_90(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
							{
								func_141(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x8CD18E96F1984EE6(sParam5))
			{
				if (func_85(sParam5))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
			{
				if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
				{
					func_155(uParam0, iVar0, 1);
				}
			}
			if (!func_148(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_140(uParam0))
				{
					func_139(uParam0);
				}
			}
		}
	}
	else
	{
		func_155(uParam0, iVar0, 0);
	}
}

void func_139(var uParam0)
{
	if (func_153(unk_0xA16EC202D9D35357()))
	{
		unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x7FF5364DCE67B621(1);
		unk_0x1CCF3860AEBA07CC(0);
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		unk_0xBB74A3D7C0228EBE("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_140(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x09560C7DE2A384BD()
		{
			return 1;
		}
	}
	return 0;
}

int func_141(bool bParam0)
{
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97439.f_8303.f_100++;
			}
			return Global_97439.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97439.f_8303.f_101++;
			}
			return Global_97439.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97439.f_8303.f_102++;
			}
			return Global_97439.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_142(char* sParam0)
{
	if (!func_143(1, 1, 0))
	{
		if ((!unk_0x06771AF7795B3ECF(sParam0) && func_85(sParam0)) || func_85("CMN_HINT"))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
		return 0;
	}
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (func_141(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_141(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_141(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		return 0;
	}
	if (func_68(0))
	{
		return 0;
	}
	if (func_144())
	{
		return 0;
	}
	if (unk_0x6E6ED37B068198D0())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (unk_0x16CDA1894CFE0781(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51940)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
			{
				return 0;
			}
			if (unk_0xE7F9BEE8EDDF19C2())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_144()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

void func_145(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xE44A580B551C3645(iParam1))
	{
		func_155(uParam0, 0, 0);
	}
	if (func_55(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA34B85701D8A1FA8(iParam1))
		{
			uVar0 = unk_0xA7CC89FF539E1376(iParam1);
			if (!unk_0x202EF5D8203705EF(uVar0, 0))
			{
				if (unk_0x2303B9FE7CF81971(iVar0))
				{
					if (!func_146())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x998FA6EE0C28BE23(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x7FF5364DCE67B621(0);
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
	unk_0x82AA7722DE6421AE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iParam1, -1, iVar3, iVar4);
	unk_0xDF3B1A0343547226("FocusIn", 0, 0);
	unk_0x3EF2F05E6EA65602("HINT_CAM_SCENE");
	unk_0xC2E1777941B4536E(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x09560C7DE2A384BD();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_146()
{
	return func_147(unk_0x1788E93557766241());
}

int func_147(var uParam0)
{
	if (unk_0xA609E58449080951(unk_0xFF34D923BFB5E9FB(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_140(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (!func_152(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x09560C7DE2A384BD();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
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
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_151(bParam1, bParam2, bParam3) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_140(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_143(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_154();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_143(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_143(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_143(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_143(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0x9FF5D51C24AD2308(iParam0))
		{
			if (unk_0xECFECDAD51A6184F(unk_0xF22EE5E4C0C2704B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA34B85701D8A1FA8(iParam0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA7CC89FF539E1376(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x15CE956C279F4825(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 4);
}

void func_155(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 25))
		{
			return;
		}
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x1CCF3860AEBA07CC(iParam2);
		unk_0xBB74A3D7C0228EBE("FocusIn");
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x7FF5364DCE67B621(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8CD18E96F1984EE6(uParam0->f_3))
	{
		if (func_85(uParam0->f_3))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
	if (!unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (func_85(sVar0))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
}

float func_156(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Param1, iParam4);
}

int func_157(int iParam0, int iParam1)
{
	if (func_112(iParam0))
	{
		if (unk_0x221AC1EF116F6053(iParam0, iParam1) == 1 || unk_0x221AC1EF116F6053(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_158(char* sParam0)
{
	func_159(sParam0);
}

void func_159(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B(sParam0, sParam0))
	{
	}
}

void func_160(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_161()
{
	unk_0x6D98AA46076A68BE(&uLocal_104);
	unk_0x1CAB36EC4E43E586(0, iLocal_98, 750);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, cLocal_367, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x963BB7C99350D827(uLocal_104);
	unk_0x0891776D0327B77A(iLocal_99, uLocal_104);
	unk_0x2AF68ED52DC74B7D(&uLocal_104);
	if (unk_0x5660C8AFDD9C1721(iLocal_101))
	{
		unk_0xB6FB9702660D84F6(&iLocal_101);
	}
	if (!unk_0x5660C8AFDD9C1721(iLocal_102))
	{
		iLocal_102 = func_92(iLocal_98, 1, 0);
	}
	unk_0xAF9E05E1AFA9F45F(iLocal_102, 1);
	unk_0x22FC4AE6C40E4E0B(0);
	unk_0xABC4F2A6D7D56CF4(0.1f);
	func_108();
	if ((unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x4970185D4CC64616(Local_94, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0x4970185D4CC64616(Local_94, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_105(unk_0xA16EC202D9D35357(), iLocal_99, 1) < 50f)
		{
			func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0);
			iLocal_136 = 1;
		}
	}
	iLocal_109 = unk_0x09560C7DE2A384BD();
	unk_0xC1B1E9A034A63A62(0);
	if (func_99(unk_0xA16EC202D9D35357()))
	{
		unk_0x7DE35612E73BDCD0(unk_0xA16EC202D9D35357(), 1);
	}
	func_162(1);
}

int func_162(int iParam0)
{
	if (func_164())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_163(Global_97428))
		{
			func_89(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_163(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

int func_163(int iParam0)
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

int func_164()
{
	switch (func_165(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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

int func_165(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_169(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_167(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_166(uParam0, iParam4);
		}
	}
	return 2;
}

void func_166(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_34915);
}

int func_168(int iParam0, int iParam1)
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

int func_169(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170()
{
	if (iLocal_345 == -1)
	{
		if (unk_0x6C32B24E6B794217())
		{
			if (unk_0x98666858610065B8(iLocal_98))
			{
				iLocal_345 = unk_0x09560C7DE2A384BD();
			}
		}
	}
	else if (unk_0x09560C7DE2A384BD() > iLocal_345 + 1000)
	{
		return 1;
	}
	if (unk_0x8C42D51DE272AC72(-1, Local_94, 50f))
	{
		return 1;
	}
	if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 30000)
	{
		if (!unk_0x0E7E162F5A49FAAA(iLocal_98))
		{
			return 1;
		}
		else
		{
			func_253();
		}
	}
	if (unk_0x5660C8AFDD9C1721(iLocal_102))
	{
		if ((unk_0x4970185D4CC64616(Local_94, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0x4970185D4CC64616(Local_94, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0x4970185D4CC64616(Local_94, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x7A98E0DD2E6FAB7A(unk_0xBF8499F46AD9093A(iLocal_98, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_171()
{
	if (unk_0x2A488C176D52CCA5(Local_94, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0x5660C8AFDD9C1721(iLocal_102))
		{
			if (func_99(iLocal_99) && func_99(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_102 = func_92(iLocal_98, 1, 0);
					unk_0xAF9E05E1AFA9F45F(iLocal_102, 0);
				}
			}
		}
		else
		{
			func_106(iLocal_102, &uLocal_113);
		}
	}
	else if (!unk_0x5660C8AFDD9C1721(iLocal_102))
	{
		if (func_99(iLocal_99) && func_99(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_99, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_102 = func_92(iLocal_98, 1, 0);
				unk_0xAF9E05E1AFA9F45F(iLocal_102, 0);
			}
		}
	}
	else
	{
		func_106(iLocal_102, &uLocal_113);
	}
	if (iLocal_346 == -1)
	{
		iLocal_346 = unk_0x09560C7DE2A384BD();
	}
}

int func_172()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	Var0 = { Local_94 };
	Var3 = { 0f, 0f, uLocal_97 };
	Var6 = { 10f, 10f, 5f };
	if (iLocal_108 == 1)
	{
		func_196();
		if (unk_0x2A488C176D52CCA5(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_117 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_123 = 196f;
			Local_120 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_124 = 160.391f;
			Local_347 = { -259.0351f, -865.7119f, 28f };
			Local_350 = { -130.3981f, -908.8096f, 40f };
			unk_0x197C114736FBE328("ATM_1");
			unk_0x939DA7EBCC6588FF(iLocal_157);
			while (!unk_0x5494F37F35C1D7D7(iLocal_157))
			{
				if (func_183())
				{
					func_253();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x32DC163A33A4AB6D(iLocal_157, 1);
		}
		else
		{
			Local_117 = { -2968.5f, 494.48f, 14.82f };
			fLocal_123 = 55.24f;
			Local_120 = { -2973.03f, 496.38f, 14.96f };
			fLocal_124 = 3.18f;
			Local_347 = { -259.0351f, -865.7119f, 28f };
			Local_350 = { -130.3981f, -908.8096f, 40f };
			unk_0x939DA7EBCC6588FF(iLocal_157);
			while (!unk_0x5494F37F35C1D7D7(iLocal_157))
			{
				if (func_183())
				{
					func_253();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x32DC163A33A4AB6D(iLocal_157, 1);
		}
	}
	else if (iLocal_108 == 2)
	{
		func_196();
		Local_117 = { 283.31f, -1249.51f, 28.95f };
		fLocal_123 = 78.25f;
		Local_120 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_124 = 75.9756f;
		Local_347 = { 266.3643f, -1313.829f, 28.59103f };
		Local_350 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0x939DA7EBCC6588FF(iLocal_157);
		while (!unk_0x5494F37F35C1D7D7(iLocal_157))
		{
			if (func_183())
			{
				func_253();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x32DC163A33A4AB6D(iLocal_157, 1);
	}
	else if (iLocal_108 == 3)
	{
		func_196();
		Local_120 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_124 = 327f;
		Local_347 = { -1596.203f, -474.8844f, 32f };
		Local_350 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_108 == 4)
	{
		func_196();
		Local_117 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_123 = 182f;
		Local_120 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_124 = 165f;
		Local_347 = { 178.1817f, 6660.375f, 31f };
		Local_350 = { 179.1249f, 6530.043f, 38f };
		unk_0x83F0FA0D6CB65BED(0);
		unk_0xC7210908156431E0(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0x939DA7EBCC6588FF(iLocal_157);
		while (!unk_0x5494F37F35C1D7D7(iLocal_157))
		{
			if (func_183())
			{
				func_253();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x32DC163A33A4AB6D(iLocal_157, 1);
	}
	else if (iLocal_108 == 5)
	{
		func_196();
	}
	if (func_174())
	{
		unk_0x84710FE7666EBF7B(Local_94, Var6.f_0, 0, 0, 0, 0);
		uLocal_106 = unk_0x4210B2DCFC2838AC(Local_94 - Var6, Local_94 + Var6, 0, 1, 1, 1);
		iLocal_99 = unk_0x6F9DE0DE8363ADF1(5, iLocal_156, Local_94, uLocal_97, 1, 1);
		unk_0x15EBFEEB77BF84B7(iLocal_99, 13, 0);
		unk_0x15EBFEEB77BF84B7(iLocal_99, 11, 1);
		unk_0x15EBFEEB77BF84B7(iLocal_99, 17, 0);
		unk_0x42544C0CC4949BD5(iLocal_99, 6, 1, 0, 0);
		unk_0xDD56EF930C7A5863(iLocal_99, 1);
		unk_0x2D79C863A05FB8F7(iLocal_99, 1);
		unk_0xA8BC819B54F5B824(iLocal_99, 0);
		unk_0x3E99D575EE07FDB3(iLocal_99, sLocal_366);
		unk_0x065062839FBD7BCF(iLocal_99, 0);
		if (iLocal_114 == 1)
		{
			unk_0x42544C0CC4949BD5(iLocal_99, 0, 0, 0, 0);
			unk_0x42544C0CC4949BD5(iLocal_99, 2, 0, 1, 0);
			unk_0x42544C0CC4949BD5(iLocal_99, 3, 0, 1, 0);
			unk_0x42544C0CC4949BD5(iLocal_99, 4, 0, 2, 0);
		}
		iLocal_98 = unk_0x6F9DE0DE8363ADF1(22, iLocal_155, Local_94, 0, 1, 1);
		unk_0x15EBFEEB77BF84B7(iLocal_98, 17, 1);
		unk_0x15EBFEEB77BF84B7(iLocal_98, 13, 0);
		unk_0x15EBFEEB77BF84B7(iLocal_98, 6, 1);
		unk_0xDEB0A02F25120B62(iLocal_98, 128, 1);
		unk_0xDD56EF930C7A5863(iLocal_98, 1);
		unk_0x2C4E82CF88213975(iLocal_98, 1);
		unk_0xA1478EBA54DDE31B(iLocal_98, 42, 1);
		unk_0xA1478EBA54DDE31B(iLocal_98, 281, 1);
		unk_0xA1478EBA54DDE31B(iLocal_98, 172, 0);
		unk_0xA1478EBA54DDE31B(iLocal_98, 137, 1);
		unk_0x45350925ECBD6F1C(iLocal_98);
		unk_0x3E99D575EE07FDB3(iLocal_98, sLocal_365);
		unk_0x383868E60E28653A(iLocal_98, 1);
		unk_0xFE2DEA78E1B4FDB9(iLocal_98, unk_0xAD51FEBE0DA69044(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2), 0, 0, 1);
		Var9 = { unk_0x9872CF8BE2A9A01E(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2) };
		unk_0x34639238667C4381(iLocal_98, Var9.f_2);
		if (func_99(iLocal_99))
		{
			if (unk_0x998FA6EE0C28BE23(iLocal_99))
			{
				unk_0xFE2DEA78E1B4FDB9(iLocal_99, unk_0xAD51FEBE0DA69044("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0x9872CF8BE2A9A01E("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2) };
			}
			else
			{
				unk_0xFE2DEA78E1B4FDB9(iLocal_99, unk_0xAD51FEBE0DA69044("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0x9872CF8BE2A9A01E("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2) };
			}
			unk_0x34639238667C4381(iLocal_99, Var9.f_2);
		}
		unk_0x5B5659C49032B96C(iLocal_98, cLocal_143, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0x998FA6EE0C28BE23(iLocal_99))
		{
			unk_0x5B5659C49032B96C(iLocal_99, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xB845ECB6BD2996BD("random@atmrobberygen@female");
		}
		else
		{
			unk_0x5B5659C49032B96C(iLocal_99, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xB845ECB6BD2996BD("random@atmrobberygen@male");
		}
		unk_0x0BE10D97E4F82D1F(iLocal_98, 1);
		unk_0x2C4E82CF88213975(iLocal_99, 1);
		unk_0x39272B2594E03395(iLocal_98, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xC25D60175177FC02(iLocal_98, joaat("weapon_pistol"), 34);
		unk_0xB4E8D4EA104CA059(iLocal_98, joaat("weapon_pistol"), 0);
		unk_0x8FA0F20D95909AB2(iLocal_98, 1, 0);
		switch (func_30())
		{
			case 0:
				sLocal_323 = "MICHAEL";
				break;
			
			case 1:
				sLocal_323 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_323 = "TREVOR";
				break;
		}
		func_173(&Local_158, 0, unk_0xA16EC202D9D35357(), sLocal_323, 0, 1);
		func_173(&Local_158, 1, iLocal_99, sLocal_325, 0, 1);
		func_173(&Local_158, 2, iLocal_98, "ATMRobber", 0, 1);
		if (iLocal_108 == 1 || iLocal_108 == 2)
		{
			iLocal_116 = unk_0x9BB6F54E415071A1(iLocal_157, Local_117, fLocal_123, 1, 1);
			unk_0x6EBB9B0E214CCF0F(iLocal_116, 1, 1);
			unk_0x684B3872EC4760B0(iLocal_116);
			unk_0x165A87EB3ACA7978(iLocal_116, 1);
			if (iLocal_108 == 2)
			{
				unk_0x38A205E419E42642(iLocal_116, 0, 0, 0);
			}
			else if (iLocal_108 == 1)
			{
				unk_0x49D26ECEB56A3095(iLocal_98, 0);
				unk_0x4F0C83A389EC7C63(iLocal_98, 3);
			}
			else if (iLocal_108 == 4)
			{
				unk_0x542B8BF5C21F2470(iLocal_116, 3);
			}
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
		return 1;
	}
	else if (func_183())
	{
		func_253();
	}
	return 0;
}

void func_173(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

int func_174()
{
	unk_0x3D28909AF30D70F4("random@atmrobberygen@male");
	unk_0x3D28909AF30D70F4("random@atmrobberygen@female");
	if (!iLocal_132)
	{
		func_182(&Local_383, 3);
		Local_383.f_146 = unk_0xA152BE858C442B26();
		func_181(&Local_383, iLocal_155);
		func_181(&Local_383, iLocal_156);
		func_181(&Local_383, iLocal_152);
		func_181(&Local_383, iLocal_153);
		func_179(&Local_383, cLocal_143);
		func_179(&Local_383, cLocal_367);
		func_179(&Local_383, cLocal_361);
		func_179(&Local_383, cLocal_144);
		iLocal_132 = 1;
	}
	if ((unk_0x6C47E32491756A1A("random@atmrobberygen@male") && unk_0x6C47E32491756A1A("random@atmrobberygen@female")) && func_175(&Local_383))
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_176(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_176(var uParam0)
{
	return func_177(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_177(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x889D01384B54BCE3(iParam0, 30))
	{
		if (unk_0x889D01384B54BCE3(iParam0, 29))
		{
			switch (func_178(iParam0))
			{
				case 0:
					return unk_0x5494F37F35C1D7D7(iParam2);
					break;
				
				case 1:
					return unk_0x6C47E32491756A1A(sParam1);
					break;
				
				case 2:
					return unk_0x307330CEB84DD3AE(sParam1);
					break;
				
				case 3:
					return unk_0xDC8071F347A8DD3F(sParam1);
					break;
				
				case 4:
					return unk_0x0C73411A25059A28(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBE56E3F122265AAC(sParam1);
					break;
				
				case 6:
					return unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(iParam0, 27));
					break;
				
				case 7:
					return unk_0xACFDEC9C39CAD932(iParam2);
					break;
				
				case 8:
					return unk_0x5CD78FA34B48CB6E(iParam2);
					break;
				
				case 9:
					return unk_0xEA01082BB3EA9C37();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x889D01384B54BCE3(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_179(var uParam0, char* sParam1)
{
	func_180(uParam0, 1, -1, sParam1, 0);
}

void func_180(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x9BA82E09A986BA4B(sParam3, "NULL"))
					{
						if (unk_0x9BA82E09A986BA4B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], iParam1);
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_181(var uParam0, int iParam1)
{
	func_180(uParam0, 0, iParam1, "NULL", 0);
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_183()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_90) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_195())
		{
			return 0;
		}
	}
	if (func_191())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_32(func_30()))
		{
			iVar36 = func_190();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_185(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_189(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_189(int iParam0)
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

int func_190()
{
	func_31();
	switch (Global_97439.f_1729.f_539.f_3213)
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

int func_191()
{
	if (func_194() && !func_195())
	{
		return 1;
	}
	if (func_193() && func_192())
	{
		return 1;
	}
	return 0;
}

bool func_192()
{
	return Global_97157 > 0;
}

int func_193()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_195()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_196()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_114 == 0 && iLocal_108 == 5)
	{
		iLocal_114 = unk_0x444ECD635D5FD45F(1, 5);
	}
	else if (iLocal_108 != 5)
	{
		iLocal_114 = iLocal_108;
	}
	switch (iLocal_114)
	{
		case 1:
			iLocal_155 = joaat("g_m_y_armgoon_02");
			sLocal_365 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_157 = joaat("sanchez");
			sLocal_326 = "REAR1_ATTR";
			sLocal_327 = "REAR1_HELP";
			sLocal_328 = "REAR1_PROMPT";
			sLocal_329 = "REAR1_CHASE";
			sLocal_330 = "REAR1_FLEE";
			cLocal_331 = "REAR1_THX";
			sLocal_332 = "REAR1_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_335 = "REAR1_REM";
					sLocal_333 = "REAR1_FKM";
					sLocal_324 = "REAR1_WM";
					sLocal_336 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR1_REF";
					sLocal_333 = "REAR1_FKF";
					sLocal_324 = "REAR1_WF";
					sLocal_336 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR1_RET";
					sLocal_333 = "REAR1_FKT";
					sLocal_324 = "REAR1_WT";
					sLocal_336 = "REAR1_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim1";
			cLocal_334 = "REAR1AU";
			if (iLocal_154 == 0)
			{
				iVar0 = unk_0x444ECD635D5FD45F(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_197();
					if (bVar1)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY1";
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
		
		case 2:
			iLocal_155 = joaat("g_m_y_famfor_01");
			sLocal_365 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_156 = joaat("a_m_y_hipster_02");
			sLocal_366 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_157 = joaat("ruiner");
			sLocal_326 = "REAR2_ATTR";
			sLocal_327 = "REAR2_HELP";
			sLocal_328 = "REAR2_PROMPT";
			sLocal_329 = "REAR2_CHASE";
			sLocal_330 = "REAR2_FLEE";
			cLocal_331 = "REAR2_THX";
			sLocal_332 = "REAR2_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_335 = "REAR2_REM";
					sLocal_333 = "REAR2_FKM";
					sLocal_324 = "REAR2_WM";
					sLocal_336 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR2_REF";
					sLocal_333 = "REAR2_FKF";
					sLocal_324 = "REAR2_WF";
					sLocal_336 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR2_RET";
					sLocal_333 = "REAR2_FKT";
					sLocal_324 = "REAR2_WT";
					sLocal_336 = "REAR2_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim2";
			cLocal_334 = "REAR2AU";
			iLocal_152 = joaat("prop_ld_wallet_pickup");
			cLocal_361 = "RANDOM@ATMROBBERY2";
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			cLocal_367 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_368 = "IDLE_A";
			sLocal_369 = "IDLE_B";
			sLocal_370 = "IDLE_C";
			break;
		
		case 3:
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_155 = joaat("g_m_y_salvagoon_02");
			sLocal_365 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_326 = "REAR5_ATTR";
			sLocal_327 = "REAR5_HELP";
			sLocal_328 = "REAR5_PROMPT";
			sLocal_329 = "REAR5_CHASE";
			sLocal_330 = "REAR5_FLEE";
			cLocal_331 = "REAR5_THX";
			sLocal_332 = "REAR5_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_335 = "REAR5_REM";
					sLocal_333 = "REAR5_FKM";
					sLocal_324 = "REAR5_WM";
					sLocal_336 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR5_REF";
					sLocal_333 = "REAR5_FKF";
					sLocal_324 = "REAR5_WF";
					sLocal_336 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR5_RET";
					sLocal_333 = "REAR5_FKT";
					sLocal_324 = "REAR5_WT";
					sLocal_336 = "REAR5_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim5";
			cLocal_334 = "REAR5AU";
			if (iLocal_154 == 0)
			{
				iVar0 = unk_0x444ECD635D5FD45F(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_197();
					if (bVar2)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY3";
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
		
		case 4:
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_157 = joaat("ruiner");
			iLocal_155 = joaat("g_m_y_azteca_01");
			sLocal_365 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_326 = "REAR3_ATTR";
			sLocal_327 = "REAR3_HELP";
			sLocal_328 = "REAR3_PROMPT";
			sLocal_329 = "REAR3_CHASE";
			sLocal_330 = "REAR3_FLEE";
			cLocal_331 = "REAR3_THX";
			sLocal_332 = "REAR3_DAMN";
			switch (func_30())
			{
				case 0:
					sLocal_335 = "REAR3_REM";
					sLocal_333 = "REAR3_FKM";
					sLocal_324 = "REAR3_WM";
					sLocal_336 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR3_REF";
					sLocal_333 = "REAR3_FKF";
					sLocal_324 = "REAR3_WF";
					sLocal_336 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR3_RET";
					sLocal_333 = "REAR3_FKT";
					sLocal_324 = "REAR3_WT";
					sLocal_336 = "REAR3_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim3";
			cLocal_334 = "REAR3AU";
			if (iLocal_154 == 0)
			{
				iVar0 = unk_0x444ECD635D5FD45F(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_197();
					if (bVar3)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY4";
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
	}
	if (unk_0x4970185D4CC64616(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_353 = { -197.64f, -863.25f, 28.33f };
		fLocal_356 = 334.5007f;
		Local_357 = { -187.24f, -856.77f, 28.97f };
		fLocal_360 = 162.69f;
		iLocal_115 = 1;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_353 = { 286.5f, -1256.73f, 28.29f };
		fLocal_356 = 167.3216f;
		Local_357 = { 250.55f, -1239.27f, 28.84f };
		fLocal_360 = 265.51f;
		iLocal_115 = 2;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_353 = { -3044.66f, 595.7f, 6.59f };
		fLocal_356 = 296.7338f;
		Local_357 = { -3037.55f, 608.53f, 7.34f };
		fLocal_360 = 202.3f;
		iLocal_115 = 3;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_353 = { 175.57f, 6636.58f, 30.57f };
		fLocal_356 = 260.4868f;
		Local_357 = { 188.97f, 6616.2f, 31.48f };
		fLocal_360 = 93.97f;
		iLocal_115 = 4;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_353 = { 23.65f, -948.26f, 28.36f };
		fLocal_356 = 258.8732f;
		Local_357 = { 22.19f, -955.82f, 28.94f };
		fLocal_360 = 70.66f;
		iLocal_115 = 6;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_353 = { 294.64f, -893.6f, 28.18f };
		fLocal_356 = 156.7222f;
		Local_357 = { 286.4f, -897.28f, 28.57f };
		fLocal_360 = 341.97f;
		iLocal_115 = 8;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_353 = { 1077.64f, -773.86f, 57.09f };
		fLocal_356 = 275.6593f;
		Local_357 = { 1081.93f, -764.08f, 57.35f };
		fLocal_360 = 268.57f;
		iLocal_115 = 11;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_353 = { -2074.93f, -316.75f, 12.16f };
		fLocal_356 = 157.3363f;
		Local_357 = { -2101.2f, -293.74f, 12.74f };
		fLocal_360 = 263.12f;
		iLocal_115 = 16;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_353 = { -819.39f, -1084.12f, 10.03f };
		fLocal_356 = 236.6294f;
		Local_357 = { -803.18f, -1075.91f, 11.13f };
		fLocal_360 = 209.53f;
		iLocal_115 = 17;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_353 = { -712.88f, -820.47f, 22.61f };
		fLocal_356 = 268.2568f;
		Local_357 = { -721.63f, -826.84f, 22.82f };
		fLocal_360 = 93.14f;
		iLocal_115 = 18;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_353 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_356 = 223.2838f;
		Local_357 = { -406.23f, 6045.69f, 31.06f };
		fLocal_360 = 229.52f;
		iLocal_115 = 19;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_353 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_356 = 286.139f;
		Local_357 = { -304.56f, -840.76f, 31.26f };
		fLocal_360 = 77.59f;
		iLocal_115 = 22;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_353 = { -253.51f, -689.26f, 32.57f };
		fLocal_356 = 209.9227f;
		Local_357 = { -250.91f, -684.01f, 33f };
		fLocal_360 = 230.65f;
		iLocal_115 = 23;
	}
	else if (unk_0x4970185D4CC64616(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_353 = { 88.7f, 0.01f, 67.38f };
		fLocal_356 = 71.0114f;
		Local_357 = { 91.35f, -7.07f, 67.82f };
		fLocal_360 = 70.28f;
		iLocal_115 = 25;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_353 = { -530.11f, -1217.33f, 17.26f };
		fLocal_356 = 53.768f;
		Local_357 = { -522.45f, -1196.35f, 18.45f };
		fLocal_360 = 297.22f;
		iLocal_115 = 30;
	}
	else if (unk_0x4970185D4CC64616(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_353 = { -2956.78f, 488.19f, 14.47f };
		fLocal_356 = 80.0912f;
		Local_357 = { -2974.34f, 491.96f, 15f };
		fLocal_360 = 1.95f;
		iLocal_115 = 31;
	}
	else
	{
		Local_353 = { Local_94 };
	}
}

int func_197()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_198()
{
	if (!func_167(5))
	{
		return 1;
	}
	if (func_191())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_195())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if ((Global_97428 == func_200() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_201(Var0);
	return uVar16;
}

int func_201(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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

void func_202(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xA152BE858C442B26() >= (uParam0->f_146 + uParam0->f_147) || unk_0x889D01384B54BCE3(Global_90042.f_20, 2)) || unk_0x889D01384B54BCE3(Global_90042.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 29))
					{
						func_203(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xA152BE858C442B26();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_203(var uParam0)
{
	func_204(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_204(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x889D01384B54BCE3(*uParam0, 30))
	{
		switch (func_178(*uParam0))
		{
			case 0:
				unk_0x939DA7EBCC6588FF(uParam2);
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4(uParam1);
				break;
			
			case 2:
				unk_0x660D567D3EB18812(sParam1);
				break;
			
			case 3:
				unk_0x52964052BC489DDD(sParam1, unk_0x889D01384B54BCE3(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDF529DC50AE6BC93(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xB3F2C2105E254F2B(sParam1);
				break;
			
			case 6:
				unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(*uParam0, 27));
				break;
			
			case 7:
				unk_0x2EDAAB9A8F7BCA0B(iParam2);
				break;
			
			case 8:
				unk_0x95AB598E6554985B(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xE8C49E8D4B533F7D();
				break;
			
			default:
				break;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
	}
}

void func_205(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x09560C7DE2A384BD();
	}
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		iVar0 = (unk_0x09560C7DE2A384BD() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x5138EA3D543A08CC(iParam0) != 255)
				{
					unk_0xE30CC26FBB1F8075(iParam0, 255);
				}
			}
			else if (unk_0x5138EA3D543A08CC(iParam0) != 0)
			{
				unk_0xE30CC26FBB1F8075(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x5138EA3D543A08CC(iParam0) != 255)
			{
				unk_0xE30CC26FBB1F8075(iParam0, 255);
			}
		}
	}
}

void func_206()
{
}

void func_207()
{
}

void func_208(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_200();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_210(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_209();
}

void func_209()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_210(int iParam0)
{
	Global_97428 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_200();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_252())
		{
			return 0;
		}
	}
	Local_90 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_195())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_251(0))
		{
			return 0;
		}
		if (func_191())
		{
			return 0;
		}
		if (func_250())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_184(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_90.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_249(iParam3))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_248(func_30()) == 4 || func_248(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_247(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_246(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_245())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_236(4))
		{
			return 0;
		}
		if (!func_167(5))
		{
			return 0;
		}
		if (func_235(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_235(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_249(30) && !func_235(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_234(iVar8))
				{
					if (func_212(iVar4))
					{
						if (!func_55(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_30() != iVar4)
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

bool func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_213(iVar0);
}

int func_213(int iParam0)
{
	return func_214(iParam0, 1);
}

int func_214(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_234(iParam0))
	{
		return 0;
	}
	func_215(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_216(func_227(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_216(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_226(iParam0, iParam1))
	{
		iVar0 = func_225(iParam1);
		iVar1 = func_223(iParam0);
		iVar2 = (func_223(iParam0) - func_223(iParam1));
		iVar3 = (func_225(iParam0) - func_225(iParam1));
		iVar4 = (func_222(iParam0) - func_222(iParam1));
		iVar5 = (func_221(iParam0) - func_221(iParam1));
		iVar6 = (func_220(iParam0) - func_220(iParam1));
		iVar7 = (func_219(iParam0) - func_219(iParam1));
	}
	else
	{
		iVar0 = func_225(iParam0);
		iVar1 = func_223(iParam1);
		iVar2 = (func_223(iParam1) - func_223(iParam0));
		iVar3 = (func_225(iParam1) - func_225(iParam0));
		iVar4 = (func_222(iParam1) - func_222(iParam0));
		iVar5 = (func_221(iParam1) - func_221(iParam0));
		iVar6 = (func_220(iParam1) - func_220(iParam0));
		iVar7 = (func_219(iParam1) - func_219(iParam0));
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
		iVar4 = (iVar4 + func_218(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_217(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_217(float fParam0, float fParam1, float fParam2)
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

int func_218(int iParam0, int iParam1)
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

int func_219(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_223(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_224(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_224(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_225(int iParam0)
{
	return iParam0 & 15;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_234(iParam1) || !func_234(iParam0))
	{
		return 1;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	var uVar0;
	
	func_233(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_232(&uVar0, unk_0x26ADBF0B08315387());
	func_231(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_230(&uVar0, unk_0xA3730885141EEA96());
	func_229(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_228(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_228(var uParam0, int iParam1)
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

void func_229(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_225(*uParam0);
	iVar1 = func_223(*uParam0);
	if (iParam1 < 1 || iParam1 > func_218(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_231(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_233(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_234(int iParam0)
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
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_220(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_221(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_223(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_225(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_218(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_244()) || Global_96486) || Global_24448) || func_243()) || func_51(8, -1)) || func_242()) || func_241()) || func_240()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_244()) || Global_24448) || func_243()) || func_51(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_244()) || Global_96486) || Global_24448) || func_243()) || func_51(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_244()) || Global_96486) || Global_24448) || func_243()) || func_51(8, -1)) || func_242()) || func_241()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_244() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_51(8, -1)) || func_239()) || func_238()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_242()) || func_241()) || func_238()) || func_237())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_244()) || Global_24448) || func_243()) || func_51(8, -1)) || func_241()) || func_240()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_244()) || func_241()) || Global_96486) || Global_24448) || func_243()) || Global_35965) || func_51(8, -1)) || func_240()) || func_238()) || func_239()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_244()) || Global_96486) || Global_24448) || func_243()) || func_51(8, -1)) || func_240()) || func_238()) || func_242()) || func_241()) || func_239())
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

var func_237()
{
	return Global_90081.f_1;
}

int func_238()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_239()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_241()
{
	return Global_90094.f_291 > 0;
}

bool func_242()
{
	return Global_90094.f_290 > 0;
}

var func_243()
{
	return Global_1315891;
}

int func_244()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_245()
{
	func_49();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0)
{
	return func_226(func_227(), iParam0);
}

int func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
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

int func_248(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_249(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_252())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_250()
{
	var uVar0;
	
	if (Global_24596)
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_251(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

int func_252()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_253()
{
	if (bLocal_338)
	{
		if (unk_0xECFECDAD51A6184F(iLocal_116, 0))
		{
			if (unk_0x8B8942079F200B57(iLocal_116))
			{
				unk_0xA78F348116859C5F(iLocal_116);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_98))
	{
		unk_0x6B3DDEE91652BE59(&iLocal_98);
	}
	unk_0x9D4C739200792759(0);
	if (iLocal_112 != 0)
	{
		unk_0x969D58023F21D359(iLocal_112);
	}
	unk_0x9D4C739200792759(0);
	if (!unk_0x2DE0B96E966FD817(iLocal_99))
	{
		unk_0x2C4E82CF88213975(iLocal_99, 0);
		unk_0xA8BC819B54F5B824(iLocal_99, 1);
		unk_0x6B3DDEE91652BE59(&iLocal_99);
	}
	if (iLocal_108 == 4)
	{
		unk_0xC7210908156431E0(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_155(&uLocal_371, 0, 0);
	if (func_199())
	{
		unk_0xABC4F2A6D7D56CF4(1f);
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x7DE35612E73BDCD0(unk_0xA16EC202D9D35357(), 0);
	}
	func_266(&Local_383, 0);
	func_254(-1);
	unk_0x83F0FA0D6CB65BED(1);
	unk_0xA2D4DD3AE5BD39B4(uLocal_106, 0);
	unk_0x82706E6C897B0FA1();
}

void func_254(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_200();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_199())
	{
		func_259(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_97428, 1), 64);
		if (func_256(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_255(&Global_24505);
	Global_97429 = 0;
	func_210(-1);
}

void func_255(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

int func_256(int iParam0)
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

char* func_257(int iParam0, bool bParam1)
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

void func_258(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_259(int iParam0)
{
	func_260(iParam0, 0, func_265(iParam0));
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_227();
	func_263(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_262(iParam0, &uVar0);
	Var1 = { func_261(&uVar0) };
}

struct<16> func_261(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_223(*uParam0), 64);
	return Var0;
}

void func_262(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_223(*uParam0);
	iVar1 = func_225(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_221(*uParam0);
	iVar4 = func_220(*uParam0);
	iVar5 = func_219(*uParam0);
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
	iVar6 = func_218(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_218(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_264(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_233(uParam0, iParam1);
	func_232(uParam0, iParam2);
	func_231(uParam0, iParam3);
	func_230(uParam0, iParam4);
	func_229(uParam0, iParam5);
	func_228(uParam0, iParam6);
}

int func_265(int iParam0)
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

void func_266(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_268(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_267(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_267(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_268(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*18*/], 30))
		{
			func_269(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_269(var uParam0)
{
	func_270(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_270(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		switch (func_178(iParam0))
		{
			case 0:
				unk_0xEA054561294AEC10(uParam2);
				break;
			
			case 1:
				unk_0xB845ECB6BD2996BD(uParam1);
				break;
			
			case 2:
				unk_0xF4E0DE38B3046EF1(sParam1);
				break;
			
			case 3:
				unk_0x4A79FCCDF915C20B(sParam1);
				break;
			
			case 4:
				unk_0xA0B5A2A31FD758CC(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x3DE6488DAAEAB507(sParam1);
				break;
			
			case 6:
				unk_0x0C2EDF73A2AD1F31();
				break;
			
			case 7:
				unk_0x7782C61D47F5F794(uParam2);
				break;
			
			case 8:
				unk_0x3D3D5DB8C3B816AF(uParam2, unk_0x889D01384B54BCE3(iParam0, 26));
				break;
			
			case 9:
				unk_0x465D89CA94CBF67D();
				break;
			
			default:
				break;
		}
	}
}

void func_271(bool bParam0)
{
	Global_97431 = { Local_94 };
	if (bParam0)
	{
		func_287(3);
	}
	func_275(1, 0);
	if (!bLocal_147)
	{
		func_274();
	}
	func_272();
	func_253();
}

void func_272()
{
	func_273();
}

int func_273()
{
	if (func_251(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

int func_274()
{
	return 1;
}

void func_275(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_200();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_256(iParam0))
	{
		func_286(iParam0, iParam1);
		if (!func_285(51))
		{
			func_282("RE_REWARD", 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_281(51);
		}
		if (func_163(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_280(iParam0, iParam1) != 322)
		{
			func_276(func_280(iParam0, iParam1), Local_90.f_0, Local_90.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_287(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_287(7);
			}
			else
			{
				func_287(1);
			}
		}
	}
}

void func_276(int iParam0, var uParam1, var uParam2)
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
		func_279((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_277();
	}
}

void func_277()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_278() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_273();
				}
			}
		}
	}
}

int func_278()
{
	return Global_24446;
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_280(int iParam0, int iParam1)
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

void func_281(int iParam0)
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_282(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_283(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_283(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_284();
	}
}

void func_284()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_285(int iParam0)
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_286(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

void func_287(int iParam0)
{
	Global_97425 = iParam0;
}


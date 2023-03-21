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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	int iLocal_94 = 0;
	struct<3> Local_95 = { 0, 0, 0 } ;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	char[] cLocal_144[8] = 0;
	char[] cLocal_145[8] = 0;
	char* sLocal_146 = NULL;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<10> Local_159[16];
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char* sLocal_331 = NULL;
	char[] cLocal_332[8] = 0;
	char* sLocal_333 = NULL;
	char* sLocal_334 = NULL;
	char[] cLocal_335[8] = 0;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	int iLocal_338 = 0;
	bool bLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	int iLocal_343 = 0;
	float fLocal_344 = 0f;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_351 = { 0, 0, 0 } ;
	struct<3> Local_354 = { 0, 0, 0 } ;
	float fLocal_357 = 0f;
	struct<3> Local_358 = { 0, 0, 0 } ;
	float fLocal_361 = 0f;
	char[] cLocal_362[8] = 0;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char[] cLocal_368[8] = 0;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = -1;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 1000;
	var uLocal_382 = 1000;
	var uLocal_383 = 0;
	struct<147> Local_384 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_531 = 1;
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
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = unk_0xD736C0AC62BF73AD();
	uLocal_47 = unk_0x880E0FAC08C6FA65();
	iLocal_109 = 3;
	bLocal_132 = true;
	cLocal_144 = "RANDOM@ATMROBBERYGEN";
	cLocal_145 = "RANDOM@ATMROBBERYGEN";
	iLocal_153 = joaat("prop_ld_wallet_01_s");
	iLocal_154 = joaat("prop_ld_wallet_01_s");
	iLocal_345 = 500;
	iLocal_346 = -1;
	iLocal_347 = -1;
	fLocal_357 = 0f;
	fLocal_361 = 0f;
	Local_95 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_98 = ScriptParam_0.f_17[0];
	if (unk_0xE8A79675302ED812(11))
	{
		if (bLocal_147)
		{
			bLocal_148 = true;
			func_285(0);
		}
		else
		{
			func_267();
		}
	}
	if (unk_0x2A488C176D52CCA5(Local_95, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_95, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_95, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_109 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_95, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_109 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_95, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_109 = 4;
	}
	else
	{
		iLocal_109 = 5;
	}
	if (func_225(Local_95, 1, iLocal_109, 1, 0))
	{
		func_222(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	unk_0xC1B1E9A034A63A62(0);
	func_221();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_220();
		func_219(uLocal_102, &uLocal_108);
		func_216(&Local_384);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		if (!func_213())
		{
			if (func_212())
			{
				func_267();
			}
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_94)
				{
					case 0:
						if (func_186())
						{
							iLocal_94 = 1;
						}
						break;
					
					case 1:
						func_185();
						if (iLocal_113 == 0)
						{
							iLocal_113 = unk_0x9C23040DD1853B23(99, Local_95, 30000f);
						}
						if (unk_0x724D816EA203A79E(iLocal_99))
						{
						}
						if (unk_0x724D816EA203A79E(iLocal_100))
						{
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_99))
						{
							if (unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								unk_0xAB43C54784946B9F(iLocal_99, Local_95, 200f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_99, 1);
								unk_0x4EDE34FBADD967A6(0);
								func_267();
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								if (unk_0x33CC9445B2DF9387(Local_95, 2.5f))
								{
									if (iLocal_109 == 2)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 120f, 120f, 8f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (iLocal_109 == 1)
									{
										if (unk_0x2A488C176D52CCA5(Local_95, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 100f, 100f, 8f, 0, 1, 0) || func_184())
											{
												func_175();
											}
										}
										else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 170f, 170f, 8f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0x2A488C176D52CCA5(Local_95, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 65f, 65f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xF0F2FC9DE291567F(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 50f, 50f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xF0F2FC9DE291567F(Local_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 60f, 60f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 30f, 30f, 8f, 0, 1, 0) || func_184())
									{
										func_175();
									}
								}
							}
						}
						else
						{
							if (Local_159[2 /*10*/].f_7)
							{
								func_174(&Local_159, 2);
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								unk_0xAB43C54784946B9F(iLocal_100, Local_95, 200f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_100, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_267();
						}
						break;
				}
			}
			else
			{
				func_172("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_267();
			}
		}
		else
		{
			if (unk_0x724D816EA203A79E(iLocal_99))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_99))
				{
					if (func_171(iLocal_99, -251125078))
					{
						if (func_170(iLocal_99, Local_95, 1) >= 190f)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_99);
							unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
						}
					}
					else if (func_171(iLocal_99, -982327190))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_99);
						unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_100))
			{
			}
			if (unk_0x105601648511CC64() > iLocal_110 + 3000)
			{
				func_140();
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!func_120() && !func_117())
				{
					unk_0x741575A8348963A2(unk_0xB5CEFD608600A09F());
					if (!iLocal_137 && !bLocal_142)
					{
						if (unk_0x724D816EA203A79E(iLocal_100))
						{
							if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0xF0F2FC9DE291567F(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0xF0F2FC9DE291567F(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_115(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
								{
									iLocal_137 = 1;
								}
							}
						}
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_103))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_99))
						{
							if (iLocal_338)
							{
								if (unk_0xE642C1AC73CE364E(iLocal_99, unk_0xBC25C936A095B5BA(), fLocal_344, fLocal_344, fLocal_344, 0, 1, 0))
								{
									if (!unk_0x5237AF95232D78C5(iLocal_99, 0))
									{
										if (unk_0x83666F9FB8FEBD4B() > 1000)
										{
											if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_99))
											{
												fLocal_344 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_99, 1));
												fLocal_344 = (fLocal_344 * 1.5f);
												unk_0xC1B1E9A034A63A62(0);
											}
											unk_0x91629AC1E1F78419(iLocal_99, 17, 0);
										}
									}
								}
								else if (!iLocal_340)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x5237AF95232D78C5(iLocal_99, 0))
										{
											unk_0x91629AC1E1F78419(iLocal_99, 17, 1);
											unk_0x91629AC1E1F78419(iLocal_99, 13, 0);
											func_114();
											iLocal_340 = 1;
										}
									}
								}
							}
							else if (!iLocal_139)
							{
								if ((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_99) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_99)) || unk_0xD9C1758D86688CEA(iLocal_99, unk_0xBC25C936A095B5BA(), 0))
								{
									func_115(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									fLocal_344 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_99, 1));
									fLocal_344 = (fLocal_344 * 1.5f);
									iLocal_338 = 1;
									iLocal_139 = 1;
								}
								if (unk_0xE59B7F5A03335350(iLocal_117, 0))
								{
									if (unk_0xD9C1758D86688CEA(iLocal_117, unk_0xBC25C936A095B5BA(), 1))
									{
										unk_0x91629AC1E1F78419(iLocal_99, 17, 0);
										if (unk_0xCBBE5AFE2CD2E9B6(iLocal_99))
										{
											unk_0x1A06AE15BF21D407(iLocal_99, iLocal_117, unk_0xBC25C936A095B5BA(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
										}
										func_115(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										fLocal_344 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_99, 1));
										fLocal_344 = (fLocal_344 * 1.5f);
										iLocal_338 = 1;
										iLocal_139 = 1;
									}
								}
							}
							if ((iLocal_340 || iLocal_338) || bLocal_342)
							{
								if (unk_0x2DA8CA50A72528FB(iLocal_103))
								{
									if (unk_0x05C02D6192B773AF(iLocal_103) == 1)
									{
									}
									else
									{
										unk_0xF9C2945DB5BAB4BF(iLocal_103, 0);
										unk_0x0D5352939CC40C16(iLocal_103, 1);
									}
								}
								if (!iLocal_340)
								{
									func_114();
									iLocal_340 = 1;
								}
							}
							else
							{
								if (unk_0x8F97799512B006B7(iLocal_99, unk_0xBC25C936A095B5BA()))
								{
									bLocal_342 = true;
								}
								func_112(iLocal_103, &uLocal_114);
							}
							if (unk_0x724D816EA203A79E(iLocal_100))
							{
								if (!iLocal_139)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_115(&Local_159, cLocal_335, sLocal_328, 4, 0, 0, 0))
										{
											unk_0xC5A6DFE2B8987B17(&uLocal_105);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x535008C596714F9E(uLocal_105);
											unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
											unk_0x02DAF06EA4F08219(&uLocal_105);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_139 = 1;
										}
									}
								}
								else if (!iLocal_140)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_99) && !unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_99)) && !unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA())) && func_111(iLocal_100, iLocal_99, 1) > 30f)
										{
											if (func_115(&Local_159, cLocal_335, sLocal_329, 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_140 = 1;
											}
										}
									}
								}
								else if (!unk_0x8C2668F45F2BB3F2(iLocal_100))
								{
									func_109(iLocal_100, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_107())
							{
								func_106();
								if (unk_0x724D816EA203A79E(iLocal_100))
								{
									Var0 = { unk_0x541C2AEF053615BC(iLocal_100, 1) };
								}
								if (!unk_0x4DBCE270B354E123(iLocal_99, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_99, 12f, 12f, 12f, 0, 1, 0))
								{
									if (unk_0x83666F9FB8FEBD4B() > 20000)
									{
										if (func_105(iLocal_99) && !unk_0x2CDE18D6C89522AD(iLocal_99))
										{
											if (func_115(&Local_159, cLocal_335, sLocal_330, 4, 0, 0, 0))
											{
												bLocal_342 = true;
												unk_0xC1B1E9A034A63A62(0);
											}
										}
									}
								}
							}
							else if (func_105(iLocal_100))
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, Global_19, 0, 1, 0))
								{
									if (func_115(&Local_159, cLocal_335, sLocal_333, 4, 0, 0, 0))
									{
										unk_0xC5A6DFE2B8987B17(&uLocal_105);
										unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
										unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
										unk_0x535008C596714F9E(uLocal_105);
										unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
										unk_0x02DAF06EA4F08219(&uLocal_105);
										bLocal_339 = true;
										func_267();
									}
								}
								else if (bLocal_342)
								{
									if (func_115(&Local_159, cLocal_335, sLocal_334, 4, 0, 0, 0))
									{
										unk_0x8CE2798B9A7027EC(iLocal_100, 1193033728, 0);
										unk_0x3E2B7D349B5735D3(iLocal_100, joaat("MotionState_Walk"), 0, 0, 0);
										bLocal_339 = true;
										func_267();
									}
								}
								else
								{
									unk_0x8CE2798B9A7027EC(iLocal_100, 1193033728, 0);
									unk_0x3E2B7D349B5735D3(iLocal_100, joaat("MotionState_Walk"), 0, 0, 0);
									bLocal_339 = true;
									func_267();
								}
							}
							else
							{
								bLocal_339 = true;
								func_267();
							}
						}
						else if (func_107())
						{
							if ((unk_0x36CEFBE9B745A58D(iLocal_99) || unk_0x610A1308608A0F91(iLocal_99, 1)) || func_171(iLocal_99, -1899872703))
							{
								func_115(&Local_159, cLocal_335, sLocal_337, 4, 0, 0, 0);
								func_102();
								func_174(&Local_159, 2);
								unk_0x07B8ECB35A4ED3AC(&iLocal_103);
							}
						}
					}
					else if (!unk_0x2DA8CA50A72528FB(uLocal_102))
					{
						if (bLocal_147)
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_104))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_104);
							}
							iLocal_104 = 0;
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
							iLocal_102 = func_98(iLocal_100, 0, 0);
							func_97(&uLocal_108);
							if (unk_0x724D816EA203A79E(iLocal_100))
							{
								fLocal_134 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_100, 0));
								unk_0x5502708AECB47F5D(iLocal_100);
							}
							if (fLocal_134 > 750f)
							{
								func_285(0);
							}
						}
						else
						{
							func_94();
						}
					}
					else
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
						{
							if (bLocal_147)
							{
								func_285(0);
							}
							else
							{
								func_267();
							}
						}
						if (bLocal_152)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_152)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_100, 0)) > (fLocal_134 + 100f))
								{
									if (bLocal_147)
									{
										func_285(0);
									}
									else
									{
										unk_0x5558ED6D4A2DEC93(iLocal_100, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
										func_267();
									}
								}
								else if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_100, 0)) < fLocal_134)
								{
									fLocal_134 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_100, 0));
								}
								if (unk_0xD9C1758D86688CEA(iLocal_100, unk_0xBC25C936A095B5BA(), 1))
								{
									if (bLocal_147)
									{
										func_285(0);
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
	if (!unk_0x36CEFBE9B745A58D(iLocal_100))
	{
		unk_0x5558ED6D4A2DEC93(iLocal_100, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
		func_109(iLocal_100, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x22321800954A532E(iLocal_100, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_100, 0);
		unk_0xB105531EDD3DE51B(iLocal_100, 1);
		unk_0x02537C8C1BEEB477(&iLocal_100);
	}
	func_94();
	if (bLocal_142)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_104))
		{
			if (unk_0xA901403F1DB7A780(uLocal_141))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x85EA1A40FC3A6769(uLocal_141)) > 100f)
				{
					func_267();
				}
			}
		}
		else if (bLocal_147)
		{
			func_285(0);
		}
		else if (unk_0x36CEFBE9B745A58D(iLocal_99))
		{
			func_267();
		}
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_103))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_99))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_103);
		}
		else if (!func_107())
		{
			func_267();
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
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_100))
	{
		if (!bLocal_151)
		{
			if (iLocal_341)
			{
				if (!iLocal_343)
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 15f, 15f, 20f, 0, 1, 0))
					{
						func_109(iLocal_100, "GENERIC_HI", 5);
						iLocal_343 = 1;
					}
				}
				if (unk_0xF0F2FC9DE291567F(Local_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 5f;
					}
				}
				else if (unk_0xF0F2FC9DE291567F(Local_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 4f;
					}
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, fLocal_135, fLocal_135, fLocal_135, 0, 1, 0) && !func_93())
				{
					if (func_90(2))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (!func_117())
					{
						if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
						{
							if (func_89(1, 0, 1))
							{
								if (!unk_0xFA30DFD0084E92FE(Global_2363, 11) || func_88())
								{
									if (!unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
									{
										unk_0x7456702622C62EA0(1);
										if (func_87())
										{
											func_86();
										}
										if (iLocal_153 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_101 = unk_0xB6896943DA475493(iLocal_154, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_101 = unk_0xB6896943DA475493(iLocal_153, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1, 1, 0);
										}
										if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
										{
											unk_0x5DBE04849460E608(iLocal_101, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0xDC078F87049ECECE(iLocal_101, 0, 0);
										func_78(1, 1, 1, 0, 0);
										if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
										{
											if (unk_0x724D816EA203A79E(iLocal_101))
											{
												while ((!func_76(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), uLocal_136, 1, 1056964608, 0, 1, 0) || func_87()) || !unk_0xA184E93CD7E0E9AA(iLocal_101))
												{
													if (!func_76(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), uLocal_136, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_87())
													{
													}
													if (!unk_0xA184E93CD7E0E9AA(iLocal_101))
													{
													}
													unk_0x4EDE34FBADD967A6(0);
												}
												if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
												{
													unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
												}
											}
										}
										else if (unk_0x724D816EA203A79E(iLocal_101))
										{
											while (func_87() || !unk_0xA184E93CD7E0E9AA(iLocal_101))
											{
												unk_0x4EDE34FBADD967A6(0);
											}
										}
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
										if (!unk_0x36CEFBE9B745A58D(iLocal_100))
										{
											unk_0xF1FC2182A76AD7FC(iLocal_100, 0);
										}
										unk_0x878261FFF1AA7E94(0);
										unk_0x9A172FCB057ABAEF(iLocal_113);
										unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
										func_74();
										func_70(0);
										unk_0x4EDE34FBADD967A6(0);
										if (func_105(iLocal_100))
										{
											if (unk_0xB6FD7D587FE0A1B4(iLocal_100))
											{
												sLocal_146 = "move_m@hurry@b";
											}
											else
											{
												sLocal_146 = "move_f@hurry@a";
											}
										}
										unk_0x37FA5A8A7F1136BA(sLocal_146);
										bLocal_151 = true;
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_68(unk_0x541C2AEF053615BC(iLocal_100, 1), &fLocal_135, &uLocal_136);
					if (!func_93())
					{
						if (!func_171(iLocal_100, 1227113341) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_100);
							unk_0x9565F9267674873A(iLocal_100, unk_0xBC25C936A095B5BA(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_171(iLocal_100, 1227113341))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_100);
						unk_0x02DAF06EA4F08219(&uLocal_105);
						unk_0xC5A6DFE2B8987B17(&uLocal_105);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x535008C596714F9E(uLocal_105);
						unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
						unk_0x02DAF06EA4F08219(&uLocal_105);
						unk_0x2EB4D46478766D87(iLocal_100, 0, 0);
					}
				}
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 25f, 25f, 20f, 0, 1, 1) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_93())
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_100);
						unk_0x02DAF06EA4F08219(&uLocal_105);
						unk_0xC5A6DFE2B8987B17(&uLocal_105);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
						unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x535008C596714F9E(uLocal_105);
						unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
						unk_0x02DAF06EA4F08219(&uLocal_105);
					}
					iLocal_341 = 1;
				}
			}
		}
		if (bLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					if (((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) && !unk_0x54596E4FB9EB4421(unk_0xBC25C936A095B5BA())) && !unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA()))
					{
						if (bLocal_132)
						{
							if (unk_0xF0F2FC9DE291567F(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_126 = { -710.1279f, -821.3084f, 22.6169f };
								Local_129 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								Var19 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
								func_65(iLocal_100, &Local_126, &Local_129, cLocal_362, sLocal_364);
								if ((Local_126.f_2 - Var19.f_2) > 20f)
								{
									Local_126 = { Var19 };
								}
								Local_126.f_2 = (Local_126.f_2 + 2f);
								unk_0x2084D4C6C2DF616F(Local_126, &(Local_126.f_2), 0, 0);
								if (Local_126.f_2 == 0f)
								{
									Local_126 = { Local_354 };
									Local_129.f_2 = fLocal_357;
								}
								if (unk_0xF0F2FC9DE291567F(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_129.f_2 > 315f && Local_129.f_2 < 360f)
										{
											Local_129.f_2 = 251.4238f;
										}
										else if (Local_129.f_2 > 120f && Local_129.f_2 < 212f)
										{
											Local_129.f_2 = 67.2304f;
										}
										Local_126 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x7352105EC4D7541F(Local_126, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_126 = { -814.0593f, -1082.483f, 10.0671f };
									Local_129.f_2 = 275.5752f;
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x7352105EC4D7541F(Local_126, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_126 = { -375.0627f, 6030.533f, 30.5313f };
									Local_129.f_2 = 222.9049f;
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x7352105EC4D7541F(Local_126, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_126 = { -379.7835f, 6029.472f, 30.5014f };
									Local_129.f_2 = 213.2611f;
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_129.f_2 > 128f && Local_129.f_2 < 195f)
										{
											if (Local_129.f_2 > 162f)
											{
												Local_129.f_2 = 220f;
											}
											else
											{
												Local_129.f_2 = 107f;
											}
										}
									}
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_129.f_2 > 244.444f && Local_129.f_2 < 326.2103f)
										{
											Local_129.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0xF0F2FC9DE291567F(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_126 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var10 = { unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 0f, 2) };
								Var13 = { Var10 - Local_126 };
								Var13.f_2 = 0f;
								fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
								unk_0x2084D4C6C2DF616F(Var10, &(Var10.f_2), 0, 0);
								fVar23 = (Local_126.f_2 - Var10.f_2);
								Local_129.f_0 = unk_0xE8CFCB6B2165523B(fVar23, fVar24);
								if (Local_129.f_0 > 20f || Local_129.f_0 < -330f)
								{
									Local_126 = { Local_354 };
									Local_129.f_0 = 0f;
									Local_129.f_2 = fLocal_357;
									Var10 = { unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 0f, 2) };
									Var13 = { Var10 - Local_126 };
									Var13.f_2 = 0f;
									fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
									unk_0x2084D4C6C2DF616F(Var10, &(Var10.f_2), 0, 0);
									fVar23 = (Local_126.f_2 - Var10.f_2);
								}
							}
							if (func_64(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x7352105EC4D7541F(Local_126, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_129.f_2 < 35f || Local_129.f_2 > 275f)
									{
										if (Local_129.f_2 < 335f)
										{
											Local_129.f_2 = 260f;
										}
										else
										{
											Local_129.f_2 = 55f;
										}
									}
									else if (Local_129.f_2 > 107.2072f && Local_129.f_2 < 210f)
									{
										if (Local_129.f_2 > 154.6742f)
										{
											Local_129.f_2 = 233f;
										}
										else
										{
											Local_129.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_109 == 4)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 183.6065f, 6636.653f, 30.6299f) < unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_126 = { 183.6065f, 6636.653f, 30.6299f };
								Local_129 = { 0f, 0f, 265f };
							}
							else
							{
								Local_126 = { 172.2291f, 6631.007f, 30.7398f };
								Local_129 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
							if (!unk_0x36CEFBE9B745A58D(iLocal_100))
							{
								Var4 = { unk_0x541C2AEF053615BC(iLocal_100, 1) };
							}
							Var7 = { Var1 - Var4 };
							Local_126 = { Var1 };
							Local_126 = { Local_126.f_0, Local_126.f_1, (Local_126.f_2 - 1f) };
							Local_129 = { 0f, 0f, unk_0xFDC254CE02DB0919(Var7.f_0, Var7.f_1) };
						}
						if (unk_0xF0F2FC9DE291567F(Local_126, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_126 = { -521.475f, -1210.47f, 17.1848f };
							Local_129 = { 0f, 0f, 308.502f };
						}
						if (unk_0xE59B7F5A03335350(iLocal_117, 0))
						{
							unk_0x1E7A09C1710FB071(&iLocal_117);
						}
						if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
						{
							if (!unk_0xE59B7F5A03335350(iVar0, 0))
							{
								iVar0 = unk_0x3E12B546F3F2597A();
								unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &Local_348, &Local_351);
								if (unk_0x4DBCE270B354E123(iVar0, Local_126, (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 3f, 0, 1, 0) || unk_0x4DBCE270B354E123(iVar0, unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2), (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_64(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_121 = { -543.34f, -1216.8f, 17.96f };
											fLocal_125 = 337.5f;
											bVar22 = true;
										}
										else
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_121 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_125 = 246.7714f;
											bVar22 = true;
										}
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0x4AAC154DDE9D031F(iVar0, 0, 1, 1, 1);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_121 = { -187f, -855.51f, 29.02f };
										fLocal_125 = 158.28f;
										bVar22 = true;
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_121 = { -395.84f, 6051.16f, 31.19f };
										fLocal_125 = 139.92f;
										bVar22 = true;
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(Local_95, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_121 = { -2972.31f, 490.07f, 15.03f };
										fLocal_125 = 357.64f;
										bVar22 = true;
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if ((unk_0xF0F2FC9DE291567F(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x0C265B3C448E6954(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_121 = { 184.05f, 6628.75f, 31.27f };
										fLocal_125 = 89.37f;
										bVar22 = true;
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else
									{
										Var16 = { 2.9f, 12f, 8f };
										fLocal_125 = unk_0x349C94FFF43E2979(iVar0);
										Local_121 = { func_61(Local_126, unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2)) };
										if (func_60(0f, 0f, 0f, Local_121, 0))
										{
											Local_121 = { unk_0x541C2AEF053615BC(iVar0, 1) };
										}
										if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iVar0)))
										{
											Local_351.f_0 = (Local_351.f_0 + 3f);
											Local_351.f_1 = (Local_351.f_1 + 3f);
										}
										bVar22 = true;
										if ((Local_351.f_0 - Local_348.f_0) > Var16.f_0)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_1 - Local_348.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_351.f_2 - Local_348.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, Local_121, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_125);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_63(iVar0))
						{
							unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &Local_348, &Local_351);
							if (unk_0x4DBCE270B354E123(iVar0, Local_126, (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 1f, 0, 1, 0) || unk_0x4DBCE270B354E123(iVar0, unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2), (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0x641B19E156645A92(iVar0, Local_358, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iVar0, fLocal_361);
								unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_101))
						{
							unk_0xDC078F87049ECECE(iLocal_101, 1, 0);
						}
						unk_0xDD56BACCCF835044(Local_126 - Vector(10f, 10f, 10f), Local_126 + Vector(10f, 10f, 10f), 0);
						unk_0xADC7E88690E324EB(Local_126, 20f, 0);
						unk_0xA0C0B32E74BE8DB7(Local_126, 10f, 0);
						unk_0x6C5F5B5F6894CCE3(Local_126, (Local_351.f_1 + 1f), 1, 0, 0, 0);
						unk_0x7A71B0C6DDC0D7DA(Local_126, 25f);
						unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 1);
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
						uLocal_112 = unk_0xD0D858E538FD01C3(Local_126, Local_129, 2);
						unk_0x69D4A898629B0BDA(uLocal_112, 0);
						uLocal_149 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x9DF315A9EFFF87AC(uLocal_149, 15f);
						unk_0xA4DB448107C6D171(uLocal_149, uLocal_112, sLocal_365, cLocal_362);
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), uLocal_112, cLocal_362, sLocal_363, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_100))
						{
							unk_0x49D46EE47C9CCB66(iLocal_100);
							unk_0xB62398E536F695FC(iLocal_100, uLocal_112, cLocal_362, sLocal_364, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x348665177DBFB93B(uLocal_149, 1);
						unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_336, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_332, 16);
						StringConCat(&cVar29, "_1", 16);
						func_48(&Local_159, cLocal_335, sLocal_336, &cVar25, cLocal_332, &cVar29, 7, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x878261FFF1AA7E94(0);
						func_47(joaat("rc_wallets_returned"), 1);
						unk_0x6CB99B97664C3727(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_150++;
					}
					else
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
						}
						if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
						{
						}
						if (unk_0x54596E4FB9EB4421(unk_0xBC25C936A095B5BA()))
						{
						}
						if (unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA()))
						{
						}
					}
					unk_0xDE7B9CB38D019BF0();
					break;
				
				case 1:
					if ((unk_0x77FC50899603581D(uLocal_112) && unk_0x8FD30584EB38411B(uLocal_112) == 1f) || func_44())
					{
						unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
						unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_100))
						{
							unk_0x8EF3D958386640FE(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
							unk_0x2E35C4FA5F0ED22F(iLocal_100, 0);
							unk_0x43B967881C60631D(iLocal_100, sLocal_146, 1048576000);
						}
						if (unk_0x17FAADF9916EF741())
						{
							unk_0x49D46EE47C9CCB66(iLocal_100);
							Var10 = { unk_0x883FF674F22D1F7C(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
							unk_0x2084D4C6C2DF616F(Var10, &(Var10.f_2), 0, 0);
							unk_0x641B19E156645A92(iLocal_100, Var10, 1, 0, 0, 1);
							Var10 = { unk_0xBFDD14D0A09BE0FA(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
							unk_0x019CE76D5286C95C(iLocal_100, Var10.f_2);
						}
						Var10 = { unk_0xBFDD14D0A09BE0FA(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
						if (func_64(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_43(unk_0xBC25C936A095B5BA(), 215.68f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x346129B364057FF6(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
							else if (func_43(unk_0xBC25C936A095B5BA(), 122.0371f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x346129B364057FF6(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
						}
						else if (unk_0xF0F2FC9DE291567F(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_43(unk_0xBC25C936A095B5BA(), 200.8887f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x346129B364057FF6(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
							else if (func_43(unk_0xBC25C936A095B5BA(), 347.8599f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x346129B364057FF6(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_105);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
								unk_0x535008C596714F9E(uLocal_105);
								unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
								unk_0x02DAF06EA4F08219(&uLocal_105);
							}
						}
						else
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_105);
							unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_100, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_100), 1);
							unk_0x535008C596714F9E(uLocal_105);
							unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
							unk_0x02DAF06EA4F08219(&uLocal_105);
						}
						unk_0x3E2B7D349B5735D3(iLocal_100, joaat("MotionState_Walk"), 1, 0, 0);
						unk_0xF1FC2182A76AD7FC(iLocal_100, 1);
						unk_0x22321800954A532E(iLocal_100, 1);
						func_42(&iLocal_117);
						unk_0x5AE11BC36633DE4E(0);
						unk_0xF04F2EB4128A4367(0);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
							if (!func_41())
							{
								unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_101))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_101);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_100))
						{
							unk_0x8EF3D958386640FE(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
						}
						unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x348665177DBFB93B(uLocal_149, 0);
						func_40();
						unk_0x4EC087603E1DEF9C(uLocal_149, 0);
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
						if (unk_0x17FAADF9916EF741())
						{
							unk_0x829FA4611BD56B44(500);
							while (unk_0x26641E1BFD792DBC())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						iVar34 = (iLocal_345 / 100);
						iVar34 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x9CB4DD3D88846081(0, 0, 3, 0);
						func_78(0, 1, 1, 0, 0);
						func_3(func_35(), 1, iVar34);
						func_285(1);
					}
					else
					{
						unk_0xDE7B9CB38D019BF0();
						if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), joaat("detach")))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_100) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xB6A16B5E7EB81F9B(iLocal_101, unk_0xBC25C936A095B5BA()))
								{
									unk_0x17175087F2DB6AC8(iLocal_101, 0, 1);
									if (unk_0xB6FD7D587FE0A1B4(iLocal_100))
									{
										unk_0x5DBE04849460E608(iLocal_101, iLocal_100, unk_0xFA18E720A39243D0(iLocal_100, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x5DBE04849460E608(iLocal_101, iLocal_100, unk_0xFA18E720A39243D0(iLocal_100, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_105220.f_28021[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_34();
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
					func_33(99, 1);
					func_47(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_47(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
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
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, iParam3);
					break;
				
				case 1:
					func_33(97, iParam3);
					break;
				
				case 2:
					func_33(96, iParam3);
					break;
			}
			func_33(98, iParam3);
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
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_47(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35905 == 15)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_9() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_9() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_8(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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

int func_10(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_11();
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

int func_11()
{
	return Global_1312736;
}

void func_12(int iParam0)
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
}

bool func_13(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_9() /*12171*/].f_7688.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)
{
	if (func_31(14) && !func_30(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_29(&Global_4267702))
	{
		if (func_27(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_20(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_4267701 - 0.5f));
}

void func_24(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_26(var uParam0)
{
	return uParam0->f_80;
}

bool func_27(var uParam0, int iParam1)
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)
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

bool func_29(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_30(int iParam0)
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

bool func_31(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_32(int iParam0, int iParam1)
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

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_34()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

int func_35()
{
	func_36();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_39(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_38(unk_0xBC25C936A095B5BA());
			if (func_37(iVar0) && (!func_31(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_37(Global_105220.f_2354.f_539.f_4301))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	var uVar0;
	
	uVar0 = unk_0x585DE1CBEEB2D27D(26379945, unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 1115815936, 1, 2);
	unk_0x348665177DBFB93B(uVar0, 1);
}

int func_41()
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
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

int func_43(int iParam0, float fParam1, float fParam2)
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
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0x349C94FFF43E2979(iParam0) < fVar0 && unk_0x349C94FFF43E2979(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0x349C94FFF43E2979(iParam0) < fVar0 || unk_0x349C94FFF43E2979(iParam0) > fVar1)
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

int func_44()
{
	if (func_45(1000))
	{
		unk_0x7A41D32A383895D8(500);
		while (unk_0x422F9EDE839E6ABB())
		{
			unk_0xDE7B9CB38D019BF0();
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
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
			if (func_46())
			{
				Global_27 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_46()
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

void func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

int func_48(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;
	
	func_59(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_58(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_49(&uVar0, &uVar11, iParam6, 0);
}

int func_49(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam2 > Global_15802)
			{
				if (bParam3 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
				}
				else
				{
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_55();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16796 = Global_16797;
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15419.f_370 = Global_16789;
		Global_15796 = Global_15797;
		Global_15798 = Global_15799;
		if (Global_16058 == 0)
		{
			Global_15954[0 /*6*/] = { Global_15980[0 /*6*/] };
			Global_15954[1 /*6*/] = { Global_15980[1 /*6*/] };
			Global_16006[0 /*6*/] = { Global_16032[0 /*6*/] };
			Global_16006[1 /*6*/] = { Global_16032[1 /*6*/] };
			Global_15967[0 /*6*/] = { Global_15993[0 /*6*/] };
			Global_15967[1 /*6*/] = { Global_15993[1 /*6*/] };
			Global_16019[0 /*6*/] = { Global_16045[0 /*6*/] };
			Global_16019[1 /*6*/] = { Global_16045[1 /*6*/] };
		}
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam3)
			{
				func_54();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_53())
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
					if (Global_16058 == 0)
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
			}
			if (func_52())
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
			}
			func_51();
			Global_15810 = bParam3;
		}
		Global_15802 = iParam2;
		if (Global_15796 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15796)
			{
				StringCopy(&(Global_15419.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15419.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14666 = 0;
		func_50();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15802 || iParam2 == Global_15802)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_57();
	}
	return 0;
}

void func_50()
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

void func_51()
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

int func_52()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_53()
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

void func_54()
{
	if (func_31(14))
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
		Global_14493 = func_35();
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

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15797 = iParam0;
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16797 = 0;
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
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

bool func_60(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_61(struct<3> Param0, struct<3> Param3)
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
	iVar0 = unk_0x3E12B546F3F2597A();
	if (!unk_0x5CAE759AE8219D20(iVar0))
	{
		unk_0x77815D3407C6700D(iVar0, 1, 0);
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &Var7, &Var10);
	unk_0x29EBF830A072263F(Param0, 3, &Var4, 1, 1077936128, 0);
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						Var22 = { func_62(Var1, 0f, Var10) };
						Var25 = { func_62(Var1, 0f, Var7) };
						uVar29 = unk_0xA20E4A82503CECB3(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xB0695CD48A28A3A9(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xF0F2FC9DE291567F(Var1, Param0, 1) <= 5f || unk_0xF0F2FC9DE291567F(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						Var22 = { func_62(Var1, 0f, Var10) };
						Var25 = { func_62(Var1, 0f, Var7) };
						uVar29 = unk_0xA20E4A82503CECB3(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xB0695CD48A28A3A9(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xF0F2FC9DE291567F(Var1, Param0, 1) <= 5f || unk_0xF0F2FC9DE291567F(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						Var22 = { func_62(Var1, 0f, Var10) };
						Var25 = { func_62(Var1, 0f, Var7) };
						uVar29 = unk_0xA20E4A82503CECB3(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xB0695CD48A28A3A9(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xF0F2FC9DE291567F(Var1, Param0, 1) <= 5f || unk_0xF0F2FC9DE291567F(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xA4455714F3DCE207(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xA4455714F3DCE207(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						Var22 = { func_62(Var1, 0f, Var10) };
						Var25 = { func_62(Var1, 0f, Var7) };
						uVar29 = unk_0xA20E4A82503CECB3(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xB0695CD48A28A3A9(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xF0F2FC9DE291567F(Var1, Param0, 1) <= 5f || unk_0xF0F2FC9DE291567F(Var1, Param3, 1) <= 5f)
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

Vector3 func_62(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)
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

int func_63(int iParam0)
{
	if (func_105(iParam0))
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

int func_64(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_65(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
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
	*uParam1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
	uParam2->f_2 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar3 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar4 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	Var16 = { unk_0x541C2AEF053615BC(iParam0, 0) - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
	if (unk_0xF9E082857622D91E(sParam3))
	{
		Var13 = { unk_0x883FF674F22D1F7C(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_66(unk_0x541C2AEF053615BC(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0xEDB5D06AC6E2D672(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xB0695CD48A28A3A9(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
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
							*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_66(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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

float func_66(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
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

float func_67(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	return func_66(Var0, Var3, iParam2);
}

void func_68(struct<3> Param0, float fParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - Param0 };
		fVar4 = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
		if (func_69(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		fVar4 = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
		if (func_69(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar4, 15f))
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
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}

int func_69(int iParam0, float fParam1, float fParam2)
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

void func_70(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_71(int iParam0)
{
	if (Global_14659)
	{
		func_72(0, 0);
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
	if (!func_52())
	{
		Global_14493.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_73(0))
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

int func_73(int iParam0)
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

void func_74()
{
	Global_14666 = 0;
	func_75();
}

void func_75()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

int func_76(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_77(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, uParam1, iParam2, iParam4);
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

void func_77(int iParam0)
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

void func_78(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_85(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_52())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_84(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_85(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_84(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_82(unk_0xB5CEFD608600A09F())) && !func_80(unk_0xB5CEFD608600A09F(), 0)) && !func_79()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_82(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_79()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_80(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_81(-1, 0) == 8;
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

int func_81(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_11();
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

int func_82(int iParam0)
{
	if (func_80(iParam0, 0))
	{
		return 1;
	}
	if (func_83())
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

bool func_83()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_84(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_85(int iParam0)
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

void func_86()
{
	Global_14666 = 0;
	func_57();
}

int func_87()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_88()
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_87())
		{
			return 1;
		}
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, bool bParam2)
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

bool func_90(int iParam0)
{
	return func_91(func_92(iParam0));
}

bool func_91(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_92(int iParam0)
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

int func_93()
{
	switch (iLocal_116)
	{
		case 1:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	var uVar0;
	
	if (!bLocal_147)
	{
		if (iLocal_338)
		{
			func_102();
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_99))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_99) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_99))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_338 = 1;
					}
				}
			}
			else
			{
				iLocal_338 = 1;
			}
			func_112(iLocal_103, &uLocal_114);
		}
		if (!bLocal_339)
		{
			if (bLocal_142)
			{
				if (unk_0xF1B911222059B1A1(uLocal_141))
				{
					func_47(joaat("rc_wallets_recovered"), 1);
					unk_0x6CB99B97664C3727(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0xF715C239F71B95D6(0, 200, 250);
					func_95(2);
					bLocal_147 = true;
				}
				else if (unk_0x2DA8CA50A72528FB(iLocal_104))
				{
					if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x85EA1A40FC3A6769(uLocal_141)) > 150f)
					{
						if (unk_0x36CEFBE9B745A58D(iLocal_100))
						{
							func_267();
						}
						else if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_100, 1)) > 100f)
						{
							func_267();
						}
					}
				}
			}
		}
	}
}

void func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_105220.f_24966.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
					Global_105220.f_24966.f_4++;
					unk_0xF0059F27F7BB6680(&Global_105216, 2);
				}
			}
			break;
	}
}

void func_96(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_97(var uParam0)
{
	*uParam0 = -99;
}

int func_98(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_99(iParam0, bParam1, 145);
}

int func_99(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_100(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(uVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_105220.f_28021[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_105220.f_28021[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_100(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_101(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(iVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_101(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_102()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_142)
	{
		unk_0xF0059F27F7BB6680(&uVar1, 3);
		unk_0xF0059F27F7BB6680(&uVar1, 4);
		unk_0xF0059F27F7BB6680(&uVar1, 1);
		uLocal_141 = unk_0x249B372087B496EC(iVar0, unk_0x733A3EDEC245A3D2(iLocal_99, 1067030938, 1069547520), uVar1, iLocal_345, 1, iLocal_153);
		bLocal_142 = true;
		iLocal_104 = func_103(uLocal_141);
		func_115(&Local_159, cLocal_335, sLocal_331, 4, 0, 0, 0);
		if (unk_0x2DA8CA50A72528FB(iLocal_103))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_103);
		}
		if (func_105(iLocal_100))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_100);
		}
	}
	else
	{
		if (!iLocal_143)
		{
			if (!func_171(iLocal_100, 242628503) && !unk_0x36CEFBE9B745A58D(iLocal_100))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_105);
				if (!unk_0x4DBCE270B354E123(iLocal_100, Local_354, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0xDF14F570C0180463(0, Local_354, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uLocal_105);
				unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
				unk_0x02DAF06EA4F08219(&uLocal_105);
			}
		}
		if (iLocal_143)
		{
			if (!bLocal_147)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_100))
				{
					if (unk_0x96044E39418AAF17(iLocal_100, cLocal_145, "pickup_low", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(iLocal_100, cLocal_145, "pickup_low") > 0.35f)
						{
							if (unk_0xA901403F1DB7A780(uLocal_141))
							{
								func_115(&Local_159, cLocal_335, cLocal_332, 4, 0, 0, 0);
								unk_0x9680DF46F29C0428(uLocal_141);
								unk_0x8EF3D958386640FE(iLocal_100, iLocal_345);
								unk_0x2E35C4FA5F0ED22F(iLocal_100, 0);
								unk_0x02537C8C1BEEB477(&iLocal_100);
								func_285(1);
							}
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_100, 242628503) == 7)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_100);
						unk_0xC5A6DFE2B8987B17(&uLocal_105);
						unk_0xE896C0AD02364F2A(0, cLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 3000, 2048, 2);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
						unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
						unk_0x535008C596714F9E(uLocal_105);
						unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
						unk_0x02DAF06EA4F08219(&uLocal_105);
						unk_0x22321800954A532E(iLocal_100, 1);
					}
				}
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_100))
		{
			if (unk_0xA901403F1DB7A780(uLocal_141))
			{
				if (unk_0x4DBCE270B354E123(iLocal_100, unk_0x85EA1A40FC3A6769(uLocal_141), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_100);
					unk_0xC5A6DFE2B8987B17(&uLocal_105);
					unk_0x346129B364057FF6(0, unk_0x85EA1A40FC3A6769(uLocal_141), 1f, 20000, 1f, 512, 1193033728);
					unk_0xCF4C6C235CD09F4F(0, unk_0x85EA1A40FC3A6769(uLocal_141), 0);
					unk_0xE896C0AD02364F2A(0, cLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 3000, 2048, 2);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
					unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
					unk_0x535008C596714F9E(uLocal_105);
					unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
					unk_0x02DAF06EA4F08219(&uLocal_105);
					unk_0x22321800954A532E(iLocal_100, 1);
					iLocal_143 = 1;
				}
			}
		}
	}
}

int func_103(var uParam0)
{
	return func_104(uParam0);
}

int func_104(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA901403F1DB7A780(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x480F8C5F7EE6B525(uParam0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

int func_105(int iParam0)
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

void func_106()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (unk_0xD9C1758D86688CEA(iLocal_99, unk_0xBC25C936A095B5BA(), 1))
			{
				unk_0x5502708AECB47F5D(iLocal_99);
				bVar0 = true;
			}
			if (unk_0xE59B7F5A03335350(iLocal_117, 0) && unk_0x62F3A07C43FFB568(iLocal_99, iLocal_117, 0))
			{
				if (unk_0xB9FEB746FD810A52(iLocal_117))
				{
					if (unk_0xE7259E40522CC260(iLocal_117))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xE59B7F5A03335350(iLocal_117, 0) || !func_171(iLocal_99, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x889DA6CE8E4DB344(iLocal_99))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_99, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_138)
				{
					if (unk_0x62F3A07C43FFB568(iLocal_99, iLocal_117, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_99, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_99, 242628503) != 0)
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_106);
							unk_0xA3981DED4FC2E56E(0, 0, 0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
							unk_0x535008C596714F9E(uLocal_106);
							unk_0xA8E6405305C0D7DF(iLocal_99, uLocal_106);
							unk_0x02DAF06EA4F08219(&uLocal_106);
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_99, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_99, 242628503) != 0)
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_106);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
						unk_0x535008C596714F9E(uLocal_106);
						unk_0xA8E6405305C0D7DF(iLocal_99, uLocal_106);
						unk_0x02DAF06EA4F08219(&uLocal_106);
					}
					iVar1 = unk_0x7E7999013BDD429A(iLocal_99);
					if (iVar1 == 2)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_99);
						if (func_105(unk_0xBC25C936A095B5BA()))
						{
							unk_0xB8CBD998685C0685(iLocal_99, unk_0xBC25C936A095B5BA(), 0, 16);
						}
						iLocal_138 = 1;
					}
				}
			}
			break;
	}
}

int func_107()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_99))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_99, 180f, 180f, 50f, 0, 1, 0) || !unk_0x41A5D6415E2CC10E(iLocal_99))
		{
			func_108(iLocal_103, iLocal_99, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_159[2 /*10*/].f_7)
			{
				func_174(&Local_159, 2);
			}
			unk_0xF845620A03C7425B(&iLocal_99);
			if (unk_0xE59B7F5A03335350(iLocal_117, 0))
			{
				if (unk_0x41A5D6415E2CC10E(iLocal_117))
				{
					unk_0xCF6040807CC0E4A5(&iLocal_117);
				}
			}
		}
	}
	else if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iLocal_99, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
						unk_0x7781946F1FC054FA(iParam0, 255);
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
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_109(int iParam0, char* sParam1, int iParam2)
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_110(iParam2), 1);
}

int func_110(int iParam0)
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

float func_111(int iParam0, int iParam1, int iParam2)
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
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

void func_112(int iParam0, var uParam1)
{
	if (unk_0x2DA8CA50A72528FB(uParam0))
	{
		if (unk_0x105601648511CC64() > *uParam1 + 500)
		{
			if (unk_0x05C02D6192B773AF(iParam0) == 1)
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, true);
			}
			else
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, false);
				unk_0x0D5352939CC40C16(iParam0, 1);
			}
			*uParam1 = unk_0x105601648511CC64();
		}
		if (!unk_0xF16DAFF595E80F7C() && func_113(0))
		{
			func_95(1);
		}
	}
}

bool func_113(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105216, iParam0);
}

void func_114()
{
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (unk_0xE59B7F5A03335350(iLocal_117, 0))
			{
				if (iLocal_338)
				{
					if (unk_0x25EF720B1CAB1E23(iLocal_99, iLocal_117) || unk_0xF4FCC3C1048FF2AB(iLocal_99, -1273030092) == 1)
					{
						unk_0x827661D9AAD4A354(iLocal_99, iLocal_117, Local_95, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0xB9FEB746FD810A52(iLocal_117))
					{
						unk_0xA839F9F0F00F2017(iLocal_117, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x827661D9AAD4A354(iLocal_99, iLocal_117, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_338)
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_105);
				unk_0x346129B364057FF6(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x346129B364057FF6(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
				unk_0x535008C596714F9E(uLocal_105);
				unk_0xA8E6405305C0D7DF(iLocal_99, uLocal_105);
				unk_0x02DAF06EA4F08219(&uLocal_105);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0xF0F2FC9DE291567F(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0xAB43C54784946B9F(iLocal_99, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 300f, -1, 0, 0);
				unk_0x02DAF06EA4F08219(&uLocal_105);
			}
			else if (iLocal_338)
			{
				unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0xAB43C54784946B9F(iLocal_99, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_99))
	{
		unk_0x22321800954A532E(iLocal_99, 1);
	}
}

bool func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_116(sParam2, iParam3, 0);
}

int func_116(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_55();
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
				func_54();
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
				if (func_53())
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
			if (func_52())
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
			func_51();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_50();
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
		func_57();
	}
	return 0;
}

bool func_117()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (!unk_0x36CEFBE9B745A58D(iLocal_100))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_100))
			{
				iLocal_111++;
				if (iLocal_111 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_111 = 0;
			}
		}
		if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_100, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x823166D9421223CA(iLocal_100, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0x823166D9421223CA(iLocal_100, 31086, 0f, 0f, 0f) };
		if ((unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_100, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0xC9FA5D38428AB6BE(-1, unk_0x823166D9421223CA(iLocal_100, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_119())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0xF4FCC3C1048FF2AB(iLocal_100, 474215631) != 1)
			{
				if (func_118(iLocal_100))
				{
					unk_0xEE7131C3C73E7282(iLocal_100, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_118(int iParam0)
{
	if (func_105(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (func_105(iLocal_99))
	{
		if (func_111(iLocal_100, iLocal_99, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_120()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x724D816EA203A79E(iLocal_100))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_100))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xD9C1758D86688CEA(iLocal_100, unk_0xBC25C936A095B5BA(), 1) && unk_0x2CDE18D6C89522AD(iLocal_100))
			{
				bVar0 = true;
				unk_0x5502708AECB47F5D(iLocal_100);
			}
			if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iLocal_100, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_121(iLocal_100, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_119())
		{
			bVar0 = false;
			if (unk_0xF4FCC3C1048FF2AB(iLocal_100, 474215631) != 1)
			{
				if (func_118(iLocal_100))
				{
					unk_0xEE7131C3C73E7282(iLocal_100, 2000);
				}
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_99))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_99, 1805844857) == 7)
			{
				unk_0x91629AC1E1F78419(iLocal_99, 17, 1);
				unk_0x91629AC1E1F78419(iLocal_99, 13, 0);
				unk_0x5558ED6D4A2DEC93(iLocal_99, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		if (func_135(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
			{
				Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - unk_0x541C2AEF053615BC(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_134(unk_0xBC25C936A095B5BA(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_122(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		if (func_133(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_123(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_123(int iParam0, float fParam1)
{
	return func_124(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

bool func_124(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_132(iParam0, iParam1);
	if (!func_105(iParam0) || !func_105(iParam1))
	{
		if (iVar4 != -1)
		{
			func_131(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_128(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_127();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_125(&(Local_49[iVar4 /*4*/]), Var1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_125(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_105(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_126(iParam4, iParam7) };
		*uParam0 = unk_0xA20E4A82503CECB3(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xB0695CD48A28A3A9(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x386592AF38881675(iVar7))
	{
		func_105(iVar7);
		if (unk_0x399F7937FFE4DEBF(iVar7) == iParam4)
		{
			if (bLocal_90)
			{
				unk_0xD1FD19DF6D5B1300(Param1, unk_0x541C2AEF053615BC(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar7))
	{
		func_105(iVar7);
		if (unk_0x5237AF95232D78C5(iParam4, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar7) == unk_0x9FE9D386222EEE47(iParam4, 0))
			{
				if (bLocal_90)
				{
					unk_0xD1FD19DF6D5B1300(Param1, unk_0x541C2AEF053615BC(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x823166D9421223CA(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x823166D9421223CA(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x823166D9421223CA(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x823166D9421223CA(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x823166D9421223CA(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x541C2AEF053615BC(iParam0, 1);
}

int func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_130(unk_0x541C2AEF053615BC(iParam1, 1) - unk_0x541C2AEF053615BC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		Var3 = { func_130(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_129(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_129(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_130(struct<3> Param0)
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

void func_131(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0)
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF90427F311003E57(iParam0) };
	Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) - unk_0x541C2AEF053615BC(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_135(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_139(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, 1), fVar0, 1))
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
				if (func_139(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_137(iParam0, fParam1))
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
			if (func_137(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x876474582C5DECDE(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_138(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_130(Param1 - unk_0x541C2AEF053615BC(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		Var3 = { func_130(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_129(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	if (bLocal_142 || unk_0x1D403DFADBC2DE3C(iLocal_99, 0))
	{
		func_169(&uLocal_372, 0, 0);
	}
	else
	{
		func_141(&uLocal_372, iLocal_99, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_141(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_142(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_142(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_143(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_143(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_169(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_144(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_144(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_91(iVar0))
	{
		func_168();
	}
	if (func_167(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
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
			if (func_162(uParam0, bParam7, bParam9, 0))
			{
				func_159(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_148(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam8)
						{
							if (!func_91(iVar0))
							{
								func_96(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_147(1);
								}
							}
						}
					}
				}
			}
			else if (func_148(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam8)
					{
						if (!func_91(iVar0))
						{
							func_96(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_147(1);
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
				if (func_91(sParam5))
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
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_169(uParam0, iVar0, 1);
				}
			}
			if (!func_162(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_146(uParam0))
				{
					func_145(uParam0);
				}
			}
		}
	}
	else
	{
		func_169(uParam0, iVar0, 0);
	}
}

void func_145(var uParam0)
{
	if (func_167(unk_0xBC25C936A095B5BA()))
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

int func_146(var uParam0)
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

int func_147(bool bParam0)
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

int func_148(char* sParam0)
{
	if (!func_149(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (func_147(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_73(0))
	{
		return 0;
	}
	if (func_158())
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
	if ((func_157() || func_156(Global_4456448.f_148478)) || func_155())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_154(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_153(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_150(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_151(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_151(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_151(int iParam0, bool bParam1, bool bParam2)
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

int func_152()
{
	return -1;
}

int func_153(int iParam0, int iParam1)
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

int func_154(int iParam0, int iParam1)
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

var func_155()
{
	return Global_2447942.f_16;
}

bool func_156(int iParam0)
{
	return iParam0 == 51;
}

var func_157()
{
	return Global_2447942.f_15;
}

bool func_158()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

void func_159(var uParam0, int iParam1, struct<3> Param2, int iParam5)
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
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_169(uParam0, 0, 0);
	}
	if (func_60(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_160())
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

bool func_160()
{
	return func_161(unk_0xB5CEFD608600A09F());
}

int func_161(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_146(uParam0))
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
						if (!func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_166(bParam1, bParam2, bParam3))
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
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_165(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_166(bParam1, bParam2, bParam3))
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
						if (func_164(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_163(bParam1, bParam2, bParam3))
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
					else if (func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_146(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_149(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_168();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_149(bParam0, bParam1, bParam2))
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

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_149(bParam0, bParam1, bParam2))
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

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_149(bParam0, bParam1, bParam2))
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

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_149(bParam0, bParam1, bParam2))
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

int func_167(int iParam0)
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

void func_168()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

void func_169(var uParam0, int iParam1, int iParam2)
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
		if (func_91(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

float func_170(int iParam0, struct<3> Param1, int iParam4)
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

int func_171(int iParam0, int iParam1)
{
	if (func_118(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_172(char* sParam0)
{
	func_173(sParam0);
}

void func_173(char* sParam0)
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_174(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_175()
{
	unk_0xC5A6DFE2B8987B17(&uLocal_105);
	unk_0x85DB484A637CEAB9(0, iLocal_99, 750);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_368, sLocal_371, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x535008C596714F9E(uLocal_105);
	unk_0xA8E6405305C0D7DF(iLocal_100, uLocal_105);
	unk_0x02DAF06EA4F08219(&uLocal_105);
	if (unk_0x2DA8CA50A72528FB(iLocal_102))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_102);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_103))
	{
		iLocal_103 = func_98(iLocal_99, 1, 0);
	}
	unk_0x222805B89367761E(iLocal_103, 1);
	unk_0x6E52C7765A0F4382(0);
	unk_0xDF53A66AEE1401AA(0.1f);
	func_114();
	if ((unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0xF0F2FC9DE291567F(Local_95, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0xF0F2FC9DE291567F(Local_95, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_111(unk_0xBC25C936A095B5BA(), iLocal_100, 1) < 50f)
		{
			func_115(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0);
			iLocal_137 = 1;
		}
	}
	iLocal_110 = unk_0x105601648511CC64();
	unk_0xC1B1E9A034A63A62(0);
	if (func_105(unk_0xBC25C936A095B5BA()))
	{
		unk_0x0DEF5E53360637F2(unk_0xBC25C936A095B5BA(), 1);
	}
	func_176(1);
}

int func_176(int iParam0)
{
	if (func_178())
	{
		Global_105210 = 1;
		Global_105207 = unk_0x105601648511CC64();
		if (func_177(Global_105209))
		{
			func_95(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_177(Global_105209))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
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

int func_178()
{
	switch (func_179(&Global_25336, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_179(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_183(0))
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
		if (!func_181(iParam2))
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
			func_180(uParam0, iParam4);
		}
	}
	return 2;
}

void func_180(var uParam0, int iParam1)
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

bool func_181(int iParam0)
{
	return func_182(iParam0, Global_35905);
}

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_181(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_184()
{
	if (iLocal_346 == -1)
	{
		if (unk_0xADF4D6B0407B3CC1())
		{
			if (unk_0xD1DC4B08247A4317(iLocal_99))
			{
				iLocal_346 = unk_0x105601648511CC64();
			}
		}
	}
	else if (unk_0x105601648511CC64() > iLocal_346 + 1000)
	{
		return 1;
	}
	if (unk_0xC9FA5D38428AB6BE(-1, Local_95, 50f))
	{
		return 1;
	}
	if ((unk_0x105601648511CC64() - iLocal_347) > 30000)
	{
		if (!unk_0x41A5D6415E2CC10E(iLocal_99))
		{
			return 1;
		}
		else
		{
			func_267();
		}
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_103))
	{
		if ((unk_0xF0F2FC9DE291567F(Local_95, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0xF0F2FC9DE291567F(Local_95, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0xF0F2FC9DE291567F(Local_95, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x33CC9445B2DF9387(unk_0x541C2AEF053615BC(iLocal_99, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_185()
{
	if (unk_0x2A488C176D52CCA5(Local_95, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_103))
		{
			if (func_105(iLocal_100) && func_105(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_103 = func_98(iLocal_99, 1, 0);
					unk_0x222805B89367761E(iLocal_103, 0);
				}
			}
		}
		else
		{
			func_112(iLocal_103, &uLocal_114);
		}
	}
	else if (!unk_0x2DA8CA50A72528FB(iLocal_103))
	{
		if (func_105(iLocal_100) && func_105(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_100, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_103 = func_98(iLocal_99, 1, 0);
				unk_0x222805B89367761E(iLocal_103, 0);
			}
		}
	}
	else
	{
		func_112(iLocal_103, &uLocal_114);
	}
	if (iLocal_347 == -1)
	{
		iLocal_347 = unk_0x105601648511CC64();
	}
}

int func_186()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	Var0 = { Local_95 };
	Var3 = { 0f, 0f, uLocal_98 };
	Var6 = { 10f, 10f, 5f };
	if (iLocal_109 == 1)
	{
		func_210();
		if (unk_0x2A488C176D52CCA5(Local_95, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_118 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_124 = 196f;
			Local_121 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_125 = 160.391f;
			Local_348 = { -259.0351f, -865.7119f, 28f };
			Local_351 = { -130.3981f, -908.8096f, 40f };
			unk_0x39AE1324EE63FA44("ATM_1");
			unk_0xF243B7A14FCFD0F4(iLocal_158);
			while (!unk_0xD6513D668481290A(iLocal_158))
			{
				if (func_197())
				{
					func_267();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x8510BC031C24B862(iLocal_158, 1);
		}
		else
		{
			Local_118 = { -2968.5f, 494.48f, 14.82f };
			fLocal_124 = 55.24f;
			Local_121 = { -2973.03f, 496.38f, 14.96f };
			fLocal_125 = 3.18f;
			Local_348 = { -259.0351f, -865.7119f, 28f };
			Local_351 = { -130.3981f, -908.8096f, 40f };
			unk_0xF243B7A14FCFD0F4(iLocal_158);
			while (!unk_0xD6513D668481290A(iLocal_158))
			{
				if (func_197())
				{
					func_267();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x8510BC031C24B862(iLocal_158, 1);
		}
	}
	else if (iLocal_109 == 2)
	{
		func_210();
		Local_118 = { 283.31f, -1249.51f, 28.95f };
		fLocal_124 = 78.25f;
		Local_121 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_125 = 75.9756f;
		Local_348 = { 266.3643f, -1313.829f, 28.59103f };
		Local_351 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xF243B7A14FCFD0F4(iLocal_158);
		while (!unk_0xD6513D668481290A(iLocal_158))
		{
			if (func_197())
			{
				func_267();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8510BC031C24B862(iLocal_158, 1);
	}
	else if (iLocal_109 == 3)
	{
		func_210();
		Local_121 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_125 = 327f;
		Local_348 = { -1596.203f, -474.8844f, 32f };
		Local_351 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_109 == 4)
	{
		func_210();
		Local_118 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_124 = 182f;
		Local_121 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_125 = 165f;
		Local_348 = { 178.1817f, 6660.375f, 31f };
		Local_351 = { 179.1249f, 6530.043f, 38f };
		unk_0x5905D912945BDAFE(0);
		unk_0x379ACE23D404525C(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0xF243B7A14FCFD0F4(iLocal_158);
		while (!unk_0xD6513D668481290A(iLocal_158))
		{
			if (func_197())
			{
				func_267();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8510BC031C24B862(iLocal_158, 1);
	}
	else if (iLocal_109 == 5)
	{
		func_210();
	}
	if (func_188())
	{
		unk_0x6C5F5B5F6894CCE3(Local_95, Var6.f_0, 0, 0, 0, 0);
		uLocal_107 = unk_0x1DAA351326EA3537(Local_95 - Var6, Local_95 + Var6, 0, 1, 1, 1);
		iLocal_100 = unk_0x01B3635C3E8EDD81(5, iLocal_157, Local_95, uLocal_98, 1, 1);
		unk_0x91629AC1E1F78419(iLocal_100, 13, 0);
		unk_0x91629AC1E1F78419(iLocal_100, 11, 1);
		unk_0x91629AC1E1F78419(iLocal_100, 17, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_100, 6, 1, 0, 0);
		unk_0xB71D41C0310C93DE(iLocal_100, 1, 1);
		unk_0xF82197F205B9D8FD(iLocal_100, 1);
		unk_0xB105531EDD3DE51B(iLocal_100, 0);
		unk_0x36C3B58DA78A2679(iLocal_100, sLocal_367);
		unk_0x8EF3D958386640FE(iLocal_100, 0);
		if (iLocal_115 == 1)
		{
			unk_0xB0031DDAE4FF0BC3(iLocal_100, 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_100, 2, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_100, 3, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_100, 4, 0, 2, 0);
		}
		iLocal_99 = unk_0x01B3635C3E8EDD81(22, iLocal_156, Local_95, 0, 1, 1);
		unk_0x91629AC1E1F78419(iLocal_99, 17, 1);
		unk_0x91629AC1E1F78419(iLocal_99, 13, 0);
		unk_0x91629AC1E1F78419(iLocal_99, 6, 1);
		unk_0xABA7AE40608505F2(iLocal_99, 128, 1);
		unk_0xB71D41C0310C93DE(iLocal_99, 1, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_99, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_99, 42, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_99, 281, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_99, 172, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_99, 137, 1);
		unk_0x42E9CC2E0941D090(iLocal_99);
		unk_0x36C3B58DA78A2679(iLocal_99, sLocal_366);
		unk_0xEB061E1EBFED4D59(iLocal_99, 1);
		unk_0xD5874E4A4BF782FC(iLocal_99, unk_0x883FF674F22D1F7C(cLocal_144, "b_atm_mugging", Var0, Var3, 0, 2), 0, 0, 1);
		Var9 = { unk_0xBFDD14D0A09BE0FA(cLocal_144, "b_atm_mugging", Var0, Var3, 0, 2) };
		unk_0x019CE76D5286C95C(iLocal_99, Var9.f_2);
		if (func_105(iLocal_100))
		{
			if (unk_0xB6FD7D587FE0A1B4(iLocal_100))
			{
				unk_0xD5874E4A4BF782FC(iLocal_100, unk_0x883FF674F22D1F7C("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0xBFDD14D0A09BE0FA("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2) };
			}
			else
			{
				unk_0xD5874E4A4BF782FC(iLocal_100, unk_0x883FF674F22D1F7C("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0xBFDD14D0A09BE0FA("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2) };
			}
			unk_0x019CE76D5286C95C(iLocal_100, Var9.f_2);
		}
		unk_0xE896C0AD02364F2A(iLocal_99, cLocal_144, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xB6FD7D587FE0A1B4(iLocal_100))
		{
			unk_0xE896C0AD02364F2A(iLocal_100, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x4EA570997E107F35("random@atmrobberygen@female");
		}
		else
		{
			unk_0xE896C0AD02364F2A(iLocal_100, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x4EA570997E107F35("random@atmrobberygen@male");
		}
		unk_0xF7CDBCD11F31B71A(iLocal_99, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_100, 1);
		unk_0x7A535CE1F001F3FE(iLocal_99, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xCCA4B7EFD37D48AC(iLocal_99, joaat("weapon_pistol"), 34, 0);
		unk_0x8E25082A46F87892(iLocal_99, joaat("weapon_pistol"), 0);
		unk_0xE43AD8CB1B4DDED9(iLocal_99, 1, 0);
		switch (func_35())
		{
			case 0:
				sLocal_324 = "MICHAEL";
				break;
			
			case 1:
				sLocal_324 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_324 = "TREVOR";
				break;
		}
		func_187(&Local_159, 0, unk_0xBC25C936A095B5BA(), sLocal_324, 0, 1);
		func_187(&Local_159, 1, iLocal_100, sLocal_326, 0, 1);
		func_187(&Local_159, 2, iLocal_99, "ATMRobber", 0, 1);
		if (iLocal_109 == 1 || iLocal_109 == 2)
		{
			iLocal_117 = unk_0x61C05BF08A1E0EFE(iLocal_158, Local_118, fLocal_124, 1, 1, 0);
			unk_0x2D655AA68FA1736B(iLocal_117, 1, 1, 0);
			unk_0x0E622862E5E566BB(iLocal_117);
			unk_0xD7E19B03E0EB54E5(iLocal_117, 1);
			if (iLocal_109 == 2)
			{
				unk_0x1C5BDB4E5D257D63(iLocal_117, 0, 0, 0);
			}
			else if (iLocal_109 == 1)
			{
				unk_0xC3D5C68D28907D90(iLocal_99, 0);
				unk_0x8A8475988CA32D80(iLocal_99, 3);
			}
			else if (iLocal_109 == 4)
			{
				unk_0xD421BC740C5340C3(iLocal_117, 3);
			}
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
		return 1;
	}
	else if (func_197())
	{
		func_267();
	}
	return 0;
}

void func_187(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_188()
{
	unk_0x522053D86D6E1C7A("random@atmrobberygen@male");
	unk_0x522053D86D6E1C7A("random@atmrobberygen@female");
	if (!iLocal_133)
	{
		func_196(&Local_384, 3);
		Local_384.f_146 = unk_0xC87A57742F7D3C06();
		func_195(&Local_384, iLocal_156);
		func_195(&Local_384, iLocal_157);
		func_195(&Local_384, iLocal_153);
		func_195(&Local_384, iLocal_154);
		func_193(&Local_384, cLocal_144);
		func_193(&Local_384, cLocal_368);
		func_193(&Local_384, cLocal_362);
		func_193(&Local_384, cLocal_145);
		iLocal_133 = 1;
	}
	if ((unk_0xF9E082857622D91E("random@atmrobberygen@male") && unk_0xF9E082857622D91E("random@atmrobberygen@female")) && func_189(&Local_384))
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_190(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_190(var uParam0)
{
	return func_191(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_191(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_192(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
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

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_193(var uParam0, char* sParam1)
{
	func_194(uParam0, 1, -1, sParam1, 0);
}

void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_195(var uParam0, int iParam1)
{
	func_194(uParam0, 0, iParam1, "NULL", 0);
}

void func_196(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_197()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_91) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
		{
			return 0;
		}
	}
	if (func_205())
	{
		return 1;
	}
	if (func_198(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_198(float fParam0, bool bParam1)
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
		if (func_37(func_35()))
		{
			iVar36 = func_204();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 3))
				{
					func_199(iVar32, &Var0);
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

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_200(uParam1, "Abigail1", func_202(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 1:
			func_200(uParam1, "Abigail2", func_202(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 2:
			func_200(uParam1, "Barry1", func_202(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 3:
			func_200(uParam1, "Barry2", func_202(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 4:
			func_200(uParam1, "Barry3", func_202(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 5:
			func_200(uParam1, "Barry3A", func_202(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 6:
			func_200(uParam1, "Barry3C", func_202(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 7:
			func_200(uParam1, "Barry4", func_202(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_201(iParam0), 0, 0);
			break;
		
		case 8:
			func_200(uParam1, "Dreyfuss1", func_202(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 9:
			func_200(uParam1, "Epsilon1", func_202(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 10:
			func_200(uParam1, "Epsilon2", func_202(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 11:
			func_200(uParam1, "Epsilon3", func_202(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 12:
			func_200(uParam1, "Epsilon4", func_202(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 13:
			func_200(uParam1, "Epsilon5", func_202(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 14:
			func_200(uParam1, "Epsilon6", func_202(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 15:
			func_200(uParam1, "Epsilon7", func_202(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 16:
			func_200(uParam1, "Epsilon8", func_202(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 17:
			func_200(uParam1, "Extreme1", func_202(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 18:
			func_200(uParam1, "Extreme2", func_202(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 19:
			func_200(uParam1, "Extreme3", func_202(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 20:
			func_200(uParam1, "Extreme4", func_202(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 21:
			func_200(uParam1, "Fanatic1", func_202(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_201(iParam0), 1, 0);
			break;
		
		case 22:
			func_200(uParam1, "Fanatic2", func_202(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_201(iParam0), 1, 0);
			break;
		
		case 23:
			func_200(uParam1, "Fanatic3", func_202(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_201(iParam0), 0, 1);
			break;
		
		case 24:
			func_200(uParam1, "Hao1", func_202(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_201(iParam0), 0, 1);
			break;
		
		case 25:
			func_200(uParam1, "Hunting1", func_202(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 26:
			func_200(uParam1, "Hunting2", func_202(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 27:
			func_200(uParam1, "Josh1", func_202(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 28:
			func_200(uParam1, "Josh2", func_202(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 29:
			func_200(uParam1, "Josh3", func_202(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 30:
			func_200(uParam1, "Josh4", func_202(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 31:
			func_200(uParam1, "Maude1", func_202(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 32:
			func_200(uParam1, "Minute1", func_202(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 33:
			func_200(uParam1, "Minute2", func_202(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 34:
			func_200(uParam1, "Minute3", func_202(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 35:
			func_200(uParam1, "MrsPhilips1", func_202(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 36:
			func_200(uParam1, "MrsPhilips2", func_202(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 37:
			func_200(uParam1, "Nigel1", func_202(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 38:
			func_200(uParam1, "Nigel1A", func_202(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 39:
			func_200(uParam1, "Nigel1B", func_202(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 40:
			func_200(uParam1, "Nigel1C", func_202(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 41:
			func_200(uParam1, "Nigel1D", func_202(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 42:
			func_200(uParam1, "Nigel2", func_202(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 43:
			func_200(uParam1, "Nigel3", func_202(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 44:
			func_200(uParam1, "Omega1", func_202(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 45:
			func_200(uParam1, "Omega2", func_202(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 46:
			func_200(uParam1, "Paparazzo1", func_202(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 47:
			func_200(uParam1, "Paparazzo2", func_202(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 48:
			func_200(uParam1, "Paparazzo3", func_202(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 49:
			func_200(uParam1, "Paparazzo3A", func_202(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 50:
			func_200(uParam1, "Paparazzo3B", func_202(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 51:
			func_200(uParam1, "Paparazzo4", func_202(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 52:
			func_200(uParam1, "Rampage1", func_202(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 54:
			func_200(uParam1, "Rampage3", func_202(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 55:
			func_200(uParam1, "Rampage4", func_202(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 56:
			func_200(uParam1, "Rampage5", func_202(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 53:
			func_200(uParam1, "Rampage2", func_202(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 57:
			func_200(uParam1, "TheLastOne", func_202(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 58:
			func_200(uParam1, "Tonya1", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 59:
			func_200(uParam1, "Tonya2", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 60:
			func_200(uParam1, "Tonya3", func_202(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 61:
			func_200(uParam1, "Tonya4", func_202(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 62:
			func_200(uParam1, "Tonya5", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_200(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_201(int iParam0)
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

struct<2> func_202(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_203(iParam0) };
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

struct<2> func_203(int iParam0)
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

int func_204()
{
	func_36();
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

int func_205()
{
	if (func_208() && !func_209())
	{
		return 1;
	}
	if (func_207() && func_206())
	{
		return 1;
	}
	return 0;
}

bool func_206()
{
	return Global_104938 > 0;
}

int func_207()
{
	if (Global_90022 != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
	}
	return 0;
}

int func_209()
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

void func_210()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_115 == 0 && iLocal_109 == 5)
	{
		iLocal_115 = unk_0x491B2241281A03B7(1, 5);
	}
	else if (iLocal_109 != 5)
	{
		iLocal_115 = iLocal_109;
	}
	switch (iLocal_115)
	{
		case 1:
			iLocal_156 = joaat("g_m_y_armgoon_02");
			sLocal_366 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_158 = joaat("sanchez");
			sLocal_327 = "REAR1_ATTR";
			sLocal_328 = "REAR1_HELP";
			sLocal_329 = "REAR1_PROMPT";
			sLocal_330 = "REAR1_CHASE";
			sLocal_331 = "REAR1_FLEE";
			cLocal_332 = "REAR1_THX";
			sLocal_333 = "REAR1_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_336 = "REAR1_REM";
					sLocal_334 = "REAR1_FKM";
					sLocal_325 = "REAR1_WM";
					sLocal_337 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR1_REF";
					sLocal_334 = "REAR1_FKF";
					sLocal_325 = "REAR1_WF";
					sLocal_337 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR1_RET";
					sLocal_334 = "REAR1_FKT";
					sLocal_325 = "REAR1_WT";
					sLocal_337 = "REAR1_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim1";
			cLocal_335 = "REAR1AU";
			if (iLocal_155 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_211();
					if (bVar1)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY1";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Female";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 2:
			iLocal_156 = joaat("g_m_y_famfor_01");
			sLocal_366 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_157 = joaat("a_m_y_hipster_02");
			sLocal_367 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_158 = joaat("ruiner");
			sLocal_327 = "REAR2_ATTR";
			sLocal_328 = "REAR2_HELP";
			sLocal_329 = "REAR2_PROMPT";
			sLocal_330 = "REAR2_CHASE";
			sLocal_331 = "REAR2_FLEE";
			cLocal_332 = "REAR2_THX";
			sLocal_333 = "REAR2_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_336 = "REAR2_REM";
					sLocal_334 = "REAR2_FKM";
					sLocal_325 = "REAR2_WM";
					sLocal_337 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR2_REF";
					sLocal_334 = "REAR2_FKF";
					sLocal_325 = "REAR2_WF";
					sLocal_337 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR2_RET";
					sLocal_334 = "REAR2_FKT";
					sLocal_325 = "REAR2_WT";
					sLocal_337 = "REAR2_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim2";
			cLocal_335 = "REAR2AU";
			iLocal_153 = joaat("prop_ld_wallet_pickup");
			cLocal_362 = "RANDOM@ATMROBBERY2";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Male";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			cLocal_368 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_369 = "IDLE_A";
			sLocal_370 = "IDLE_B";
			sLocal_371 = "IDLE_C";
			break;
		
		case 3:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_156 = joaat("g_m_y_salvagoon_02");
			sLocal_366 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_327 = "REAR5_ATTR";
			sLocal_328 = "REAR5_HELP";
			sLocal_329 = "REAR5_PROMPT";
			sLocal_330 = "REAR5_CHASE";
			sLocal_331 = "REAR5_FLEE";
			cLocal_332 = "REAR5_THX";
			sLocal_333 = "REAR5_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_336 = "REAR5_REM";
					sLocal_334 = "REAR5_FKM";
					sLocal_325 = "REAR5_WM";
					sLocal_337 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR5_REF";
					sLocal_334 = "REAR5_FKF";
					sLocal_325 = "REAR5_WF";
					sLocal_337 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR5_RET";
					sLocal_334 = "REAR5_FKT";
					sLocal_325 = "REAR5_WT";
					sLocal_337 = "REAR5_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim5";
			cLocal_335 = "REAR5AU";
			if (iLocal_155 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_211();
					if (bVar2)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY3";
			sLocal_363 = "Return_Wallet_Positive_B_Player";
			sLocal_364 = "Return_Wallet_Positive_B_Female";
			sLocal_365 = "Return_Wallet_Positive_B_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 4:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_158 = joaat("ruiner");
			iLocal_156 = joaat("g_m_y_azteca_01");
			sLocal_366 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_327 = "REAR3_ATTR";
			sLocal_328 = "REAR3_HELP";
			sLocal_329 = "REAR3_PROMPT";
			sLocal_330 = "REAR3_CHASE";
			sLocal_331 = "REAR3_FLEE";
			cLocal_332 = "REAR3_THX";
			sLocal_333 = "REAR3_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_336 = "REAR3_REM";
					sLocal_334 = "REAR3_FKM";
					sLocal_325 = "REAR3_WM";
					sLocal_337 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR3_REF";
					sLocal_334 = "REAR3_FKF";
					sLocal_325 = "REAR3_WF";
					sLocal_337 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR3_RET";
					sLocal_334 = "REAR3_FKT";
					sLocal_325 = "REAR3_WT";
					sLocal_337 = "REAR3_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim3";
			cLocal_335 = "REAR3AU";
			if (iLocal_155 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_211();
					if (bVar3)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY4";
			sLocal_363 = "Return_Wallet_Positive_C_Player";
			sLocal_364 = "Return_Wallet_Positive_C_Female";
			sLocal_365 = "Return_Wallet_Positive_C_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
	}
	if (unk_0xF0F2FC9DE291567F(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_354 = { -197.64f, -863.25f, 28.33f };
		fLocal_357 = 334.5007f;
		Local_358 = { -187.24f, -856.77f, 28.97f };
		fLocal_361 = 162.69f;
		iLocal_116 = 1;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_354 = { 286.5f, -1256.73f, 28.29f };
		fLocal_357 = 167.3216f;
		Local_358 = { 250.55f, -1239.27f, 28.84f };
		fLocal_361 = 265.51f;
		iLocal_116 = 2;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_354 = { -3044.66f, 595.7f, 6.59f };
		fLocal_357 = 296.7338f;
		Local_358 = { -3037.55f, 608.53f, 7.34f };
		fLocal_361 = 202.3f;
		iLocal_116 = 3;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_354 = { 175.57f, 6636.58f, 30.57f };
		fLocal_357 = 260.4868f;
		Local_358 = { 188.97f, 6616.2f, 31.48f };
		fLocal_361 = 93.97f;
		iLocal_116 = 4;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_354 = { 23.65f, -948.26f, 28.36f };
		fLocal_357 = 258.8732f;
		Local_358 = { 22.19f, -955.82f, 28.94f };
		fLocal_361 = 70.66f;
		iLocal_116 = 6;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_354 = { 294.64f, -893.6f, 28.18f };
		fLocal_357 = 156.7222f;
		Local_358 = { 286.4f, -897.28f, 28.57f };
		fLocal_361 = 341.97f;
		iLocal_116 = 8;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_354 = { 1077.64f, -773.86f, 57.09f };
		fLocal_357 = 275.6593f;
		Local_358 = { 1081.93f, -764.08f, 57.35f };
		fLocal_361 = 268.57f;
		iLocal_116 = 11;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_354 = { -2074.93f, -316.75f, 12.16f };
		fLocal_357 = 157.3363f;
		Local_358 = { -2101.2f, -293.74f, 12.74f };
		fLocal_361 = 263.12f;
		iLocal_116 = 16;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_354 = { -819.39f, -1084.12f, 10.03f };
		fLocal_357 = 236.6294f;
		Local_358 = { -803.18f, -1075.91f, 11.13f };
		fLocal_361 = 209.53f;
		iLocal_116 = 17;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_354 = { -712.88f, -820.47f, 22.61f };
		fLocal_357 = 268.2568f;
		Local_358 = { -721.63f, -826.84f, 22.82f };
		fLocal_361 = 93.14f;
		iLocal_116 = 18;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_354 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_357 = 223.2838f;
		Local_358 = { -406.23f, 6045.69f, 31.06f };
		fLocal_361 = 229.52f;
		iLocal_116 = 19;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_354 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_357 = 286.139f;
		Local_358 = { -304.56f, -840.76f, 31.26f };
		fLocal_361 = 77.59f;
		iLocal_116 = 22;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_354 = { -253.51f, -689.26f, 32.57f };
		fLocal_357 = 209.9227f;
		Local_358 = { -250.91f, -684.01f, 33f };
		fLocal_361 = 230.65f;
		iLocal_116 = 23;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_354 = { 88.7f, 0.01f, 67.38f };
		fLocal_357 = 71.0114f;
		Local_358 = { 91.35f, -7.07f, 67.82f };
		fLocal_361 = 70.28f;
		iLocal_116 = 25;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_354 = { -530.11f, -1217.33f, 17.26f };
		fLocal_357 = 53.768f;
		Local_358 = { -522.45f, -1196.35f, 18.45f };
		fLocal_361 = 297.22f;
		iLocal_116 = 30;
	}
	else if (unk_0xF0F2FC9DE291567F(Local_95, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_354 = { -2956.78f, 488.19f, 14.47f };
		fLocal_357 = 80.0912f;
		Local_358 = { -2974.34f, 491.96f, 15f };
		fLocal_361 = 1.95f;
		iLocal_116 = 31;
	}
	else
	{
		Local_354 = { Local_95 };
	}
}

int func_211()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	if (!func_181(5))
	{
		return 1;
	}
	if (func_205())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
		{
			return 0;
		}
	}
	if (func_198(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if ((Global_105209 == func_214() && unk_0x8520DF5301DD9811()) && Global_105210)
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar16 = func_215(Var0);
	return uVar16;
}

int func_215(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_216(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_146 + uParam0->f_147) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 2)) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_217(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_217(var uParam0)
{
	func_218(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_218(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xFA30DFD0084E92FE(*uParam0, 30))
	{
		switch (func_192(*uParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(uParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(uParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*uParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(uParam0, 29);
	}
}

void func_219(int iParam0, var uParam1)
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
				if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
				{
					unk_0x7781946F1FC054FA(iParam0, 255);
				}
			}
			else if (unk_0xB1D6718ACE798CBB(iParam0) != 0)
			{
				unk_0x7781946F1FC054FA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
			{
				unk_0x7781946F1FC054FA(iParam0, 255);
			}
		}
	}
}

void func_220()
{
}

void func_221()
{
}

void func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_224(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_105206 = 0;
	func_223();
}

void func_223()
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

void func_224(int iParam0)
{
	Global_105209 = iParam0;
}

int func_225(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_214();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	Local_91 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
			{
				return 0;
			}
		}
		if (!Global_105220.f_9056)
		{
			return 0;
		}
		if (func_265(0))
		{
			return 0;
		}
		if (func_205())
		{
			return 0;
		}
		if (func_264())
		{
			return 0;
		}
		if (Global_105209 != -1)
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_198(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam6)
		{
			if ((Var1.f_2 - Local_91.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_263(iParam3))
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_262(func_35()) == 4 || func_262(func_35()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_35()))
		{
			if (!func_261(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_260(Global_105220.f_24966.f_43[iParam3]))
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
		if (func_259())
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
		if (!func_250(4))
		{
			return 0;
		}
		if (!func_181(5))
		{
			return 0;
		}
		if (func_249(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_249(0, 0))
		{
			return 0;
		}
		if (Global_25423)
		{
			return 0;
		}
		if (func_263(30) && !func_249(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_35()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_105220.f_2354.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_105220.f_2354.f_539.f_2276[iVar4];
				if (func_248(iVar8))
				{
					if (func_226(iVar4))
					{
						if (!func_60(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var5) < (210f * 210f))
							{
								if (func_35() != iVar4)
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

bool func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_105220.f_2354.f_539.f_2276[iParam0];
	return func_227(iVar0);
}

int func_227(int iParam0)
{
	return func_228(iParam0, 1);
}

int func_228(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_248(iParam0))
	{
		return 0;
	}
	func_229(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_230(func_241(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_240(iParam0, iParam1))
	{
		iVar0 = func_239(iParam1);
		iVar1 = func_237(iParam0);
		iVar2 = (func_237(iParam0) - func_237(iParam1));
		iVar3 = (func_239(iParam0) - func_239(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_235(iParam0) - func_235(iParam1));
		iVar6 = (func_234(iParam0) - func_234(iParam1));
		iVar7 = (func_233(iParam0) - func_233(iParam1));
	}
	else
	{
		iVar0 = func_239(iParam0);
		iVar1 = func_237(iParam1);
		iVar2 = (func_237(iParam1) - func_237(iParam0));
		iVar3 = (func_239(iParam1) - func_239(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_235(iParam1) - func_235(iParam0));
		iVar6 = (func_234(iParam1) - func_234(iParam0));
		iVar7 = (func_233(iParam1) - func_233(iParam0));
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
		iVar4 = (iVar4 + func_232(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_231(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_231(float fParam0, float fParam1, float fParam2)
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

int func_232(int iParam0, int iParam1)
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

int func_233(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_234(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_235(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_236(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_237(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_238(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_238(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_239(int iParam0)
{
	return iParam0 & 15;
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_248(iParam1) || !func_248(iParam0))
	{
		return 1;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_241()
{
	var uVar0;
	
	func_247(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_246(&uVar0, unk_0x7E09057438B9D216());
	func_245(&uVar0, unk_0x6E06C0DB9B43570D());
	func_244(&uVar0, unk_0xBE14F159908E4EE5());
	func_243(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_242(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_242(var uParam0, int iParam1)
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

void func_243(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_237(*uParam0);
	if (iParam1 < 1 || iParam1 > func_232(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_245(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_248(int iParam0)
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
	iVar0 = func_233(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_234(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_235(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_237(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_232(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_104267) || Global_25279) || func_257()) || func_56(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_258()) || Global_25279) || func_257()) || func_56(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_104267) || Global_25279) || func_257()) || func_56(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5) || Global_36452 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_104267) || Global_25279) || func_257()) || func_56(8, -1)) || func_256()) || func_255()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_56(8, -1)) || func_253()) || func_252()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_258()) || Global_25279) || func_257()) || func_56(8, -1)) || func_255()) || func_254()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_258()) || func_255()) || Global_104267) || Global_25279) || func_257()) || Global_37057) || func_56(8, -1)) || func_254()) || func_252()) || func_253()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_258()) || Global_104267) || Global_25279) || func_257()) || func_56(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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

var func_251()
{
	return Global_92994.f_1;
}

int func_252()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

int func_253()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()
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

bool func_255()
{
	return Global_93007.f_322 > 0;
}

bool func_256()
{
	return Global_93007.f_321 > 0;
}

var func_257()
{
	return Global_1312854;
}

int func_258()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_259()
{
	func_54();
	if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_240(func_241(), iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_35();
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

int func_262(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_105220.f_7659.f_919[iParam0];
}

bool func_263(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_266())
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

int func_264()
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

bool func_265(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

int func_266()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

void func_267()
{
	if (bLocal_339)
	{
		if (unk_0xE59B7F5A03335350(iLocal_117, 0))
		{
			if (unk_0xB9FEB746FD810A52(iLocal_117))
			{
				unk_0xE421FE22DE8008EB(iLocal_117);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_99))
	{
		unk_0x02537C8C1BEEB477(&iLocal_99);
	}
	unk_0x878261FFF1AA7E94(0);
	if (iLocal_113 != 0)
	{
		unk_0x9A172FCB057ABAEF(iLocal_113);
	}
	unk_0x878261FFF1AA7E94(0);
	if (!unk_0x36CEFBE9B745A58D(iLocal_100))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_100, 0);
		unk_0xB105531EDD3DE51B(iLocal_100, 1);
		unk_0x02537C8C1BEEB477(&iLocal_100);
	}
	if (iLocal_109 == 4)
	{
		unk_0x379ACE23D404525C(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_169(&uLocal_372, 0, 0);
	if (func_213())
	{
		unk_0xDF53A66AEE1401AA(1f);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x0DEF5E53360637F2(unk_0xBC25C936A095B5BA(), 0);
	}
	func_280(&Local_384, 0);
	func_268(-1);
	unk_0x5905D912945BDAFE(1);
	unk_0x483687B0FCA5415A(uLocal_107, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_268(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_213())
	{
		func_273(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_105211 = unk_0x105601648511CC64();
		func_272(30000);
		StringCopy(&cVar0, func_271(Global_105209, 1), 64);
		if (func_270(Global_105209) > 0)
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
	func_269(&Global_25336);
	Global_105210 = 0;
	func_224(-1);
}

void func_269(var uParam0)
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

int func_270(int iParam0)
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

char* func_271(int iParam0, bool bParam1)
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

void func_272(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_273(int iParam0)
{
	func_274(iParam0, 0, func_279(iParam0));
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_241();
	func_277(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_276(iParam0, &uVar0);
	Var1 = { func_275(&uVar0) };
}

struct<16> func_275(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_234(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_233(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_239(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_237(*uParam0), 64);
	return Var0;
}

void func_276(int iParam0, var uParam1)
{
	Global_105220.f_24966.f_43[iParam0] = *uParam1;
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_237(*uParam0);
	iVar1 = func_239(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_235(*uParam0);
	iVar4 = func_234(*uParam0);
	iVar5 = func_233(*uParam0);
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
	iVar6 = func_232(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_232(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_278(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_247(uParam0, iParam1);
	func_246(uParam0, iParam2);
	func_245(uParam0, iParam3);
	func_243(uParam0, iParam5);
	func_244(uParam0, iParam4);
	func_242(uParam0, iParam6);
}

int func_279(int iParam0)
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

void func_280(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_282(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_281(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_282(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_283(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_283(var uParam0)
{
	func_284(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_284(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xFA30DFD0084E92FE(uParam0, 30))
	{
		switch (func_192(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(uParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(uParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(uParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(uParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

void func_285(bool bParam0)
{
	Global_105212 = { Local_95 };
	if (bParam0)
	{
		func_300(3);
	}
	func_289(1, 0);
	if (!bLocal_148)
	{
		func_288();
	}
	func_286();
	func_267();
}

void func_286()
{
	func_287();
}

int func_287()
{
	if (func_265(0))
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

int func_288()
{
	return 1;
}

void func_289(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_270(iParam0))
	{
		func_299(iParam0, iParam1);
		if (!func_298(51))
		{
			func_295("RE_REWARD", 1, 0, 4000, 10000, func_204(), 0, 138, 0);
			func_294(51);
		}
		if (func_177(iParam0))
		{
			Global_105220.f_24966.f_2 = 3;
		}
		if (func_293(iParam0, iParam1) != 322)
		{
			func_290(func_293(iParam0, iParam1), Local_91.f_0, Local_91.f_1);
		}
		Global_105208 = iParam1;
		if (Global_105206 == 0)
		{
			if (((Global_105209 == 1 || Global_105209 == 5) || Global_105209 == 11) || Global_105209 == 25)
			{
				func_300(2);
			}
			else if ((Global_105209 == 26 || Global_105209 == 8) || Global_105209 == 17)
			{
				func_300(7);
			}
			else
			{
				func_300(1);
			}
		}
	}
}

void func_290(int iParam0, var uParam1, var uParam2)
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
		func_10((891 + iParam0), 1, -1, 1);
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
		func_291();
	}
}

void func_291()
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
		func_32(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_292() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_287();
				}
			}
		}
	}
}

int func_292()
{
	return Global_25277;
}

int func_293(int iParam0, int iParam1)
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

void func_294(int iParam0)
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

void func_295(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_296(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_296(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_297();
	}
}

void func_297()
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

int func_298(int iParam0)
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

void func_299(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_8[iParam0]), iParam1);
}

void func_300(int iParam0)
{
	Global_105206 = iParam0;
}


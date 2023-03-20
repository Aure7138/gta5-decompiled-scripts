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
	uLocal_45 = unk_0xE30164C14FFD22B6();
	uLocal_46 = unk_0xE1ABDD92C442B1EE();
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
	if (unk_0x8D841F1DD3FA555F(11))
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
		unk_0xC23A229F78DAD92A();
	}
	unk_0xC1B1E9A034A63A62(0);
	func_207();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_206();
		func_205(uLocal_101, &uLocal_107);
		func_202(&Local_383);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
		}
		if (!func_199())
		{
			if (func_198())
			{
				func_253();
			}
			if (unk_0x52AB115D3D6A8417())
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
							iLocal_112 = unk_0x8532947B41197C8B(99, Local_94, 30000f);
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_98))
						{
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
						{
						}
						if (!unk_0x5FEB513A4402FD59(iLocal_98))
						{
							if (unk_0x5FEB513A4402FD59(iLocal_99))
							{
								unk_0x06189C52198B2264(iLocal_98, Local_94, 200f, -1, 0, 0);
								unk_0x6CB332CB31E9FA96(iLocal_98, 1);
								unk_0x4EDE34FBADD967A6(0);
								func_253();
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_99))
							{
								if (unk_0x547A2AA158CA2804(Local_94, 2.5f))
								{
									if (iLocal_108 == 2)
									{
										if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 120f, 120f, 8f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (iLocal_108 == 1)
									{
										if (unk_0x2A488C176D52CCA5(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 100f, 100f, 8f, 0, 1, 0) || func_170())
											{
												func_161();
											}
										}
										else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 170f, 170f, 8f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x2A488C176D52CCA5(Local_94, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 65f, 65f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x0D6E79537424BACE(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 50f, 50f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x0D6E79537424BACE(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 60f, 60f, 5f, 0, 1, 0) || func_170())
										{
											func_161();
										}
									}
									else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 30f, 30f, 8f, 0, 1, 0) || func_170())
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
							if (!unk_0x5FEB513A4402FD59(iLocal_99))
							{
								unk_0x06189C52198B2264(iLocal_99, Local_94, 200f, -1, 0, 0);
								unk_0x6CB332CB31E9FA96(iLocal_99, 1);
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
			if (unk_0x86CCCD2FAE9D5E65(iLocal_98))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_98))
				{
					if (func_157(iLocal_98, -251125078))
					{
						if (func_156(iLocal_98, Local_94, 1) >= 190f)
						{
							unk_0x27CC98B7C879C320(iLocal_98);
							unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
						}
					}
					else if (func_157(iLocal_98, -982327190))
					{
						unk_0x27CC98B7C879C320(iLocal_98);
						unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
			{
			}
			if (unk_0x48E480685981C7D4() > iLocal_109 + 3000)
			{
				func_134();
			}
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!func_114() && !func_111())
				{
					unk_0xDA38B4E38979E789(unk_0x1329891157A54C63());
					if (!iLocal_136 && !bLocal_141)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
						{
							if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x0D6E79537424BACE(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x0D6E79537424BACE(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
								{
									iLocal_136 = 1;
								}
							}
						}
					}
					if (unk_0xFBACB273AA628CC5(iLocal_102))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_98))
						{
							if (iLocal_337)
							{
								if (unk_0x8D28631AAAEFC957(iLocal_98, unk_0x81873881071CD9FE(), fLocal_343, fLocal_343, fLocal_343, 0, 1, 0))
								{
									if (!unk_0xE5AB05962FA1FF3F(iLocal_98, 0))
									{
										if (unk_0x83666F9FB8FEBD4B() > 1000)
										{
											if (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_98))
											{
												fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_98, 1));
												fLocal_343 = (fLocal_343 * 1.5f);
												unk_0xC1B1E9A034A63A62(0);
											}
											unk_0x4B9FA68A3AC8C29D(iLocal_98, 17, 0);
										}
									}
								}
								else if (!iLocal_339)
								{
									if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0xE5AB05962FA1FF3F(iLocal_98, 0))
										{
											unk_0x4B9FA68A3AC8C29D(iLocal_98, 17, 1);
											unk_0x4B9FA68A3AC8C29D(iLocal_98, 13, 0);
											func_108();
											iLocal_339 = 1;
										}
									}
								}
							}
							else if (!iLocal_138)
							{
								if ((unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_98) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_98)) || unk_0xBBEF8270CE27C0EE(iLocal_98, unk_0x81873881071CD9FE(), 0))
								{
									func_109(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_98, 1));
									fLocal_343 = (fLocal_343 * 1.5f);
									iLocal_337 = 1;
									iLocal_138 = 1;
								}
								if (unk_0x7404950238A154C2(iLocal_116, 0))
								{
									if (unk_0xBBEF8270CE27C0EE(iLocal_116, unk_0x81873881071CD9FE(), 1))
									{
										unk_0x4B9FA68A3AC8C29D(iLocal_98, 17, 0);
										if (unk_0x86F7E6A693F6370F(iLocal_98))
										{
											unk_0xEFACB1875068FA30(iLocal_98, iLocal_116, unk_0x81873881071CD9FE(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
										}
										func_109(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										fLocal_343 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_98, 1));
										fLocal_343 = (fLocal_343 * 1.5f);
										iLocal_337 = 1;
										iLocal_138 = 1;
									}
								}
							}
							if ((iLocal_339 || iLocal_337) || bLocal_341)
							{
								if (unk_0xFBACB273AA628CC5(iLocal_102))
								{
									if (unk_0xAFB8D209AF1687FD(iLocal_102) == 1)
									{
									}
									else
									{
										unk_0xD5CD0E7173F858FF(iLocal_102, 0);
										unk_0x1B86E7A8766EA6B4(iLocal_102, 1);
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
								if (unk_0xFB9BF178E208C231(iLocal_98, unk_0x81873881071CD9FE()))
								{
									bLocal_341 = true;
								}
								func_106(iLocal_102, &uLocal_113);
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
							{
								if (!iLocal_138)
								{
									if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_109(&Local_158, cLocal_334, sLocal_327, 4, 0, 0, 0))
										{
											unk_0xEAD984C2869B8B7C(&uLocal_104);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x56D9ED1541046AF6(uLocal_104);
											unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
											unk_0xA3561415EB3DA3A3(&uLocal_104);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_138 = 1;
										}
									}
								}
								else if (!iLocal_139)
								{
									if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_98) && !unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_98)) && !unk_0xADBE95599A01932F(unk_0x81873881071CD9FE())) && func_105(iLocal_99, iLocal_98, 1) > 30f)
										{
											if (func_109(&Local_158, cLocal_334, sLocal_328, 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_139 = 1;
											}
										}
									}
								}
								else if (!unk_0x93FFC2B4860C54A3(iLocal_99))
								{
									func_103(iLocal_99, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_101())
							{
								func_100();
								if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
								{
									Var0 = { unk_0xB6AE0DAE06D56288(iLocal_99, 1) };
								}
								if (!unk_0x515B65C19A5CA9B1(iLocal_98, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_98, 12f, 12f, 12f, 0, 1, 0))
								{
									if (unk_0x83666F9FB8FEBD4B() > 20000)
									{
										if (func_99(iLocal_98) && !unk_0xD81BC0FD4D47CC04(iLocal_98))
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
								if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, Global_19, 0, 1, 0))
								{
									if (func_109(&Local_158, cLocal_334, sLocal_332, 4, 0, 0, 0))
									{
										unk_0xEAD984C2869B8B7C(&uLocal_104);
										unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 3000);
										unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
										unk_0x56D9ED1541046AF6(uLocal_104);
										unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
										unk_0xA3561415EB3DA3A3(&uLocal_104);
										bLocal_338 = true;
										func_253();
									}
								}
								else if (bLocal_341)
								{
									if (func_109(&Local_158, cLocal_334, sLocal_333, 4, 0, 0, 0))
									{
										unk_0x9AF45ACD4E9068EE(iLocal_99, 1193033728, 0);
										unk_0x03EB8112BA30917C(iLocal_99, joaat("MotionState_Walk"), 0, 0, 0);
										bLocal_338 = true;
										func_253();
									}
								}
								else
								{
									unk_0x9AF45ACD4E9068EE(iLocal_99, 1193033728, 0);
									unk_0x03EB8112BA30917C(iLocal_99, joaat("MotionState_Walk"), 0, 0, 0);
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
							if ((unk_0x5FEB513A4402FD59(iLocal_98) || unk_0x82F01138B895DCE6(iLocal_98, 1)) || func_157(iLocal_98, -1899872703))
							{
								func_109(&Local_158, cLocal_334, sLocal_336, 4, 0, 0, 0);
								func_96();
								func_160(&Local_158, 2);
								unk_0x0A8175F24237A3D4(&iLocal_102);
							}
						}
					}
					else if (!unk_0xFBACB273AA628CC5(uLocal_101))
					{
						if (bLocal_146)
						{
							if (unk_0xFBACB273AA628CC5(iLocal_103))
							{
								unk_0x0A8175F24237A3D4(&iLocal_103);
							}
							iLocal_103 = 0;
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
							iLocal_101 = func_92(iLocal_99, 0, 0);
							func_91(&uLocal_107);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
							{
								fLocal_133 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_99, 0));
								unk_0xD24EA1F9FB501BB5(iLocal_99);
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
						if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
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
							if (!unk_0x5FEB513A4402FD59(iLocal_99))
							{
								if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_99, 0)) > (fLocal_133 + 100f))
								{
									if (bLocal_146)
									{
										func_271(0);
									}
									else
									{
										unk_0x754376E2234CBB4A(iLocal_99, unk_0x81873881071CD9FE(), 100f, -1, 0, 0);
										func_253();
									}
								}
								else if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_99, 0)) < fLocal_133)
								{
									fLocal_133 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_99, 0));
								}
								if (unk_0xBBEF8270CE27C0EE(iLocal_99, unk_0x81873881071CD9FE(), 1))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_99))
	{
		unk_0x754376E2234CBB4A(iLocal_99, unk_0x81873881071CD9FE(), 100f, -1, 0, 0);
		func_103(iLocal_99, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x6CB332CB31E9FA96(iLocal_99, 1);
		unk_0x1D15D99A10A15334(iLocal_99, 0);
		unk_0x33B1E568CEF14B0D(iLocal_99, 1);
		unk_0x71A8BCA218722FA1(&iLocal_99);
	}
	func_88();
	if (bLocal_141)
	{
		if (unk_0xFBACB273AA628CC5(iLocal_103))
		{
			if (unk_0x7423A8514A6F26DA(uLocal_140))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uLocal_140)) > 100f)
				{
					func_253();
				}
			}
		}
		else if (bLocal_146)
		{
			func_271(0);
		}
		else if (unk_0x5FEB513A4402FD59(iLocal_98))
		{
			func_253();
		}
	}
	if (unk_0xFBACB273AA628CC5(iLocal_102))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_98))
		{
			unk_0x0A8175F24237A3D4(&iLocal_102);
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
	
	if (!unk_0x5FEB513A4402FD59(iLocal_99))
	{
		if (!bLocal_150)
		{
			if (iLocal_340)
			{
				if (!iLocal_342)
				{
					if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 15f, 15f, 20f, 0, 1, 0))
					{
						func_103(iLocal_99, "GENERIC_HI", 5);
						iLocal_342 = 1;
					}
				}
				if (unk_0x0D6E79537424BACE(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 5f;
					}
				}
				else if (unk_0x0D6E79537424BACE(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 4f;
					}
				}
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, fLocal_134, fLocal_134, fLocal_134, 0, 1, 0) && !func_87())
				{
					if (func_84(2))
					{
						unk_0xB8BB626315D394F5(1);
					}
					if (!func_111())
					{
						if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
						{
							if (func_83(1, 0, 1))
							{
								if (!unk_0x236D8AD7EE179F46(Global_2264, 11) || func_82())
								{
									if (!unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
									{
										unk_0xB8BB626315D394F5(1);
										if (func_81())
										{
											func_80();
										}
										if (iLocal_152 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_100 = unk_0xF364195A57BB7AE3(iLocal_153, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_100 = unk_0xF364195A57BB7AE3(iLocal_152, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1, 1, 0);
										}
										if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
										{
											unk_0x75F9EE7629363312(iLocal_100, unk_0x81873881071CD9FE(), unk_0xDED1B3B1138F742B(unk_0x81873881071CD9FE(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0xABA9860C0161F3CD(iLocal_100, 0);
										func_72(1, 1, 1, 0);
										if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
										{
											if (unk_0x86CCCD2FAE9D5E65(iLocal_100))
											{
												while ((!func_71(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), uLocal_135, 1, 1056964608, 0, 1, 0) || func_81()) || !unk_0x5C0486F382B1C9FB(iLocal_100))
												{
													if (!func_71(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), uLocal_135, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_81())
													{
													}
													if (!unk_0x5C0486F382B1C9FB(iLocal_100))
													{
													}
													unk_0x4EDE34FBADD967A6(0);
												}
												if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
												{
													unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
												}
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iLocal_100))
										{
											while (func_81() || !unk_0x5C0486F382B1C9FB(iLocal_100))
											{
												unk_0x4EDE34FBADD967A6(0);
											}
										}
										unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
										if (!unk_0x5FEB513A4402FD59(iLocal_99))
										{
											unk_0x1BFA331FECEC4F68(iLocal_99, 0);
										}
										unk_0x6CBCF8F4B982C3FD(0);
										unk_0xB506887196D58A15(iLocal_112);
										unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
										func_69();
										func_65();
										unk_0x4EDE34FBADD967A6(0);
										if (func_99(iLocal_99))
										{
											if (unk_0xBFC4295E811860E5(iLocal_99))
											{
												sLocal_145 = "move_m@hurry@b";
											}
											else
											{
												sLocal_145 = "move_f@hurry@a";
											}
										}
										unk_0xF147E5A343BAF150(sLocal_145);
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
					func_63(unk_0xB6AE0DAE06D56288(iLocal_99, 1), &fLocal_134, &uLocal_135);
					if (!func_87())
					{
						if (!func_157(iLocal_99, 1227113341) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
						{
							unk_0x27CC98B7C879C320(iLocal_99);
							unk_0x65C82688BA49CA39(iLocal_99, unk_0x81873881071CD9FE(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_157(iLocal_99, 1227113341))
					{
						unk_0x27CC98B7C879C320(iLocal_99);
						unk_0xA3561415EB3DA3A3(&uLocal_104);
						unk_0xEAD984C2869B8B7C(&uLocal_104);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
						unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_104);
						unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
						unk_0xA3561415EB3DA3A3(&uLocal_104);
						unk_0x95BE9BA77CA91710(iLocal_99, 0, 0);
					}
				}
			}
			else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 25f, 25f, 20f, 0, 1, 1) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_87())
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						unk_0x27CC98B7C879C320(iLocal_99);
						unk_0xA3561415EB3DA3A3(&uLocal_104);
						unk_0xEAD984C2869B8B7C(&uLocal_104);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x56D9ED1541046AF6(uLocal_104);
						unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
						unk_0xA3561415EB3DA3A3(&uLocal_104);
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
					if (((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) && !unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) && !unk_0xEBB8714A4EB91AA6(unk_0x81873881071CD9FE())) && !unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE()))
					{
						if (bLocal_131)
						{
							if (unk_0x0D6E79537424BACE(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_125 = { -710.1279f, -821.3084f, 22.6169f };
								Local_128 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0x5FEB513A4402FD59(iLocal_99))
							{
								Var19 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
								func_60(iLocal_99, &Local_125, &Local_128, cLocal_361, sLocal_363);
								if ((Local_125.f_2 - Var19.f_2) > 20f)
								{
									Local_125 = { Var19 };
								}
								Local_125.f_2 = (Local_125.f_2 + 2f);
								unk_0x84426D0C9AE7A434(Local_125, &(Local_125.f_2), 0);
								if (Local_125.f_2 == 0f)
								{
									Local_125 = { Local_353 };
									Local_128.f_2 = fLocal_356;
								}
								if (unk_0x0D6E79537424BACE(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
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
								else if (unk_0x0D6E79537424BACE(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0xE15A3D0C3294EAF3(Local_125, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_125 = { -814.0593f, -1082.483f, 10.0671f };
									Local_128.f_2 = 275.5752f;
								}
								else if (unk_0x0D6E79537424BACE(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0xE15A3D0C3294EAF3(Local_125, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_125 = { -375.0627f, 6030.533f, 30.5313f };
									Local_128.f_2 = 222.9049f;
								}
								else if (unk_0x0D6E79537424BACE(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0xE15A3D0C3294EAF3(Local_125, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_125 = { -379.7835f, 6029.472f, 30.5014f };
									Local_128.f_2 = 213.2611f;
								}
								else if (unk_0x0D6E79537424BACE(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
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
								else if (unk_0x0D6E79537424BACE(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_128.f_2 > 244.444f && Local_128.f_2 < 326.2103f)
										{
											Local_128.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0x0D6E79537424BACE(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_125 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var10 = { unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
								Var13 = { Var10 - Local_125 };
								Var13.f_2 = 0f;
								fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
								unk_0x84426D0C9AE7A434(Var10, &(Var10.f_2), 0);
								fVar23 = (Local_125.f_2 - Var10.f_2);
								Local_128.f_0 = unk_0x43A2E703A9A654DB(fVar23, fVar24);
								if (Local_128.f_0 > 20f || Local_128.f_0 < -330f)
								{
									Local_125 = { Local_353 };
									Local_128.f_0 = 0f;
									Local_128.f_2 = fLocal_356;
									Var10 = { unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
									Var13 = { Var10 - Local_125 };
									Var13.f_2 = 0f;
									fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
									unk_0x84426D0C9AE7A434(Var10, &(Var10.f_2), 0);
									fVar23 = (Local_125.f_2 - Var10.f_2);
								}
							}
							if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0xE15A3D0C3294EAF3(Local_125, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
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
							if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 183.6065f, 6636.653f, 30.6299f) < unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 172.2291f, 6631.007f, 30.7398f))
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
							Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
							if (!unk_0x5FEB513A4402FD59(iLocal_99))
							{
								Var4 = { unk_0xB6AE0DAE06D56288(iLocal_99, 1) };
							}
							Var7 = { Var1 - Var4 };
							Local_125 = { Var1 };
							Local_125 = { Local_125.f_0, Local_125.f_1, (Local_125.f_2 - 1f) };
							Local_128 = { 0f, 0f, unk_0x097CA9356FED843D(Var7.f_0, Var7.f_1) };
						}
						if (unk_0x0D6E79537424BACE(Local_125, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_125 = { -521.475f, -1210.47f, 17.1848f };
							Local_128 = { 0f, 0f, 308.502f };
						}
						if (unk_0x7404950238A154C2(iLocal_116, 0))
						{
							unk_0xE0913C01F5C0CC3D(&iLocal_116);
						}
						if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
						{
							if (!unk_0x7404950238A154C2(iVar0, 0))
							{
								iVar0 = unk_0x2ADE2CEED2637E95();
								unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iVar0), &Local_347, &Local_350);
								if (unk_0x515B65C19A5CA9B1(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(iVar0, unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x2607BDB5048E64DF(iVar0, 0, 1, 1, 1);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
									else if (unk_0x0D6E79537424BACE(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
									else if (unk_0x0D6E79537424BACE(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
									else if (unk_0x0D6E79537424BACE(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
									else if ((unk_0x0D6E79537424BACE(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0xD1FFD959917D4ED8(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
									else
									{
										Var16 = { 2.9f, 12f, 8f };
										fLocal_124 = unk_0x3306AAAFE3B25098(iVar0);
										Local_120 = { func_56(Local_125, unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
										if (func_55(0f, 0f, 0f, Local_120, 0))
										{
											Local_120 = { unk_0xB6AE0DAE06D56288(iVar0, 1) };
										}
										if (unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iVar0)))
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
												unk_0xB067093BBAF0A747(iVar0, Local_120, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iVar0, fLocal_124);
												unk_0x5CC9D6711FE01F0D(iVar0);
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iVar0))
										{
											if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
											{
												unk_0x5D00E836B6BE8693(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_58(iVar0))
						{
							unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iVar0), &Local_347, &Local_350);
							if (unk_0x515B65C19A5CA9B1(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(iVar0, unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0xB067093BBAF0A747(iVar0, Local_357, 1, 0, 0, 1);
								unk_0xC24172029826A66F(iVar0, fLocal_360);
								unk_0x5CC9D6711FE01F0D(iVar0);
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_100))
						{
							unk_0xABA9860C0161F3CD(iLocal_100, 1);
						}
						unk_0x14271BAB2BB24399(Local_125 - Vector(10f, 10f, 10f), Local_125 + Vector(10f, 10f, 10f));
						unk_0x82695E55A5428216(Local_125, 20f, 0);
						unk_0x984F8E3A66FFFEE5(Local_125, 10f, 0);
						unk_0x7C6BF0CD5D7454C9(Local_125, (Local_350.f_1 + 1f), 1, 0, 0, 0);
						unk_0xCE5ED63F8CA77F8B(Local_125, 25f);
						unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 1);
						unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
						uLocal_111 = unk_0x59C061A719024602(Local_125, Local_128, 2);
						unk_0xC64A07C5C44EA267(uLocal_111, 0);
						uLocal_148 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xBF1C17EB7F681E53(uLocal_148, 15f);
						unk_0xC813152833B59518(uLocal_148, uLocal_111, sLocal_364, cLocal_361);
						unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
						unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
						unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uLocal_111, cLocal_361, sLocal_362, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
						if (!unk_0x5FEB513A4402FD59(iLocal_99))
						{
							unk_0x1E2B48EE3EC55DCF(iLocal_99);
							unk_0x58BEA8B2364F8C48(iLocal_99, uLocal_111, cLocal_361, sLocal_363, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0xDD0B0D77CB8995B1(uLocal_148, 1);
						unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_335, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_331, 16);
						StringConCat(&cVar29, "_1", 16);
						func_43(&Local_158, cLocal_334, sLocal_335, &cVar25, cLocal_331, &cVar29, 7, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x6CBCF8F4B982C3FD(0);
						func_42(joaat("rc_wallets_returned"), 1);
						unk_0x85C45034BA638694(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_149++;
					}
					else
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
						{
						}
						if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
						{
						}
						if (unk_0xEBB8714A4EB91AA6(unk_0x81873881071CD9FE()))
						{
						}
						if (unk_0xEE6F2DE3DB966195(unk_0x81873881071CD9FE()))
						{
						}
					}
					unk_0xD61D5795530D0627();
					break;
				
				case 1:
					if ((unk_0xDD7720E17AF5FE17(uLocal_111) && unk_0xF855C83E3A17514B(uLocal_111) == 1f) || func_39())
					{
						unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
						unk_0xD74A10556CE1D361(unk_0x1329891157A54C63(), 0);
						if (!unk_0x5FEB513A4402FD59(iLocal_99))
						{
							unk_0x0CD6B65135C8C3FE(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
							unk_0x1D15D99A10A15334(iLocal_99, 0);
							unk_0x350B20EBD616FAD8(iLocal_99, sLocal_145, 1048576000);
						}
						if (unk_0x29AFA2493D7C23D0())
						{
							unk_0x1E2B48EE3EC55DCF(iLocal_99);
							Var10 = { unk_0x5F1005EAF356FBDD(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x84426D0C9AE7A434(Var10, &(Var10.f_2), 0);
							unk_0xB067093BBAF0A747(iLocal_99, Var10, 1, 0, 0, 1);
							Var10 = { unk_0x0AAE77D72ADAC4C6(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0xC24172029826A66F(iLocal_99, Var10.f_2);
						}
						Var10 = { unk_0x0AAE77D72ADAC4C6(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
						if (func_59(Local_94, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_38(unk_0x81873881071CD9FE(), 215.68f, 60f))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD91194CE3D1E1D77(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
							else if (func_38(unk_0x81873881071CD9FE(), 122.0371f, 60f))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD91194CE3D1E1D77(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
							else
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
						}
						else if (unk_0x0D6E79537424BACE(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_38(unk_0x81873881071CD9FE(), 200.8887f, 60f))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD91194CE3D1E1D77(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
							else if (func_38(unk_0x81873881071CD9FE(), 347.8599f, 60f))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD91194CE3D1E1D77(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
							else
							{
								unk_0xEAD984C2869B8B7C(&uLocal_104);
								unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
								unk_0x56D9ED1541046AF6(uLocal_104);
								unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
								unk_0xA3561415EB3DA3A3(&uLocal_104);
							}
						}
						else
						{
							unk_0xEAD984C2869B8B7C(&uLocal_104);
							unk_0xD91194CE3D1E1D77(0, unk_0xB07F27EC3B05E4EA(iLocal_99, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0x9AF45ACD4E9068EE(0, unk_0x3306AAAFE3B25098(iLocal_99), 1);
							unk_0x56D9ED1541046AF6(uLocal_104);
							unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
							unk_0xA3561415EB3DA3A3(&uLocal_104);
						}
						unk_0x03EB8112BA30917C(iLocal_99, joaat("MotionState_Walk"), 1, 0, 0);
						unk_0x1BFA331FECEC4F68(iLocal_99, 1);
						unk_0x6CB332CB31E9FA96(iLocal_99, 1);
						func_37(&iLocal_116);
						unk_0x5AE11BC36633DE4E(0);
						unk_0x59E3A6BEFC421137(0);
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
							if (!func_36())
							{
								unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_100))
						{
							unk_0xAB6AFD52AD641D70(&iLocal_100);
						}
						if (!unk_0x5FEB513A4402FD59(iLocal_99))
						{
							unk_0x0CD6B65135C8C3FE(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
						}
						unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 0);
						unk_0x270066FDBAF3A458(0f);
						unk_0xDD0B0D77CB8995B1(uLocal_148, 0);
						func_35();
						unk_0x35B958B469415A23(uLocal_148, 0);
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
						if (unk_0x29AFA2493D7C23D0())
						{
							unk_0xAE2B1C30F8A0B67C(500);
							while (unk_0xC11AD1609CFCCCE1())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						iVar34 = (iLocal_344 / 100);
						iVar34 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
						func_72(0, 1, 1, 0);
						func_3(func_30(), 1, iVar34);
						func_271(1);
					}
					else
					{
						unk_0xD61D5795530D0627();
						if (unk_0x61BAE3B4A4A2B2BB(unk_0x81873881071CD9FE(), joaat("detach")))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_99) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
							{
								if (unk_0xEB15D648177E41E9(iLocal_100, unk_0x81873881071CD9FE()))
								{
									unk_0xD88DD5B581458979(iLocal_100, 0, 1);
									if (unk_0xBFC4295E811860E5(iLocal_99))
									{
										unk_0x75F9EE7629363312(iLocal_100, iLocal_99, unk_0xDED1B3B1138F742B(iLocal_99, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x75F9EE7629363312(iLocal_100, iLocal_99, unk_0xDED1B3B1138F742B(iLocal_99, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_98931.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
					switch (unk_0xA60A6B4935A3E9A7())
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
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
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
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35443 == 15)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_9() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_9() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_8(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_9() /*9662*/].f_7252.f_10, iParam0);
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_24(&Global_2550589))
	{
		if (func_22(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	func_20(uParam0, (Global_2550588 - 0.5f));
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
	return Global_35443 == iParam0;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_29()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_30()
{
	func_31();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_31()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_34(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_33(unk_0x81873881071CD9FE());
			if (func_32(iVar0) && (!func_26(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_32(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()
{
	var uVar0;
	
	uVar0 = unk_0x6112CFE839591737(26379945, unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()), 1115815936, 1, 2);
	unk_0xDD0B0D77CB8995B1(uVar0, 1);
}

int func_36()
{
	if (unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_37(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		unk_0x930F8FBB8E9537CC(*iParam0);
		if (unk_0xE86442941AE40E75(*iParam0) && unk_0x46AE53A47E5D03D5(*iParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(iParam0);
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
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0x3306AAAFE3B25098(iParam0) < fVar0 && unk_0x3306AAAFE3B25098(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0x3306AAAFE3B25098(iParam0) < fVar0 || unk_0x3306AAAFE3B25098(iParam0) > fVar1)
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
		unk_0x3B283FEBA87FFBEB(500);
		while (unk_0xC584A413BCB2AA39())
		{
			unk_0xD61D5795530D0627();
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if ((unk_0x48E480685981C7D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x48E480685981C7D4();
		}
		Global_28 = unk_0x48E480685981C7D4();
		if ((unk_0x48E480685981C7D4() - Global_27) > iParam0)
		{
			if (func_41())
			{
				Global_27 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_41()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
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
					unk_0x9E95048D8C96C1EA(0);
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
		if (unk_0xE1772957381F609F())
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_48())
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (Global_15951 == 0)
					{
						if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
						{
							return 0;
						}
						if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
						{
							return 0;
						}
						if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
						{
							return 0;
						}
						if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
	unk_0x9E95048D8C96C1EA(0);
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
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
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		if (Global_69020)
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_52()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
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
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (!unk_0xE86442941AE40E75(iVar0))
	{
		unk_0xD768713E73165208(iVar0, 1, 0);
	}
	unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iVar0), &Var7, &Var10);
	unk_0x6FF90B691E3204B1(Param0, 3, &Var4, 1, 1077936128, 0);
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x68D61DC7116FF797(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x26CECBCADF60693F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x0D6E79537424BACE(Var1, Param0, 1) <= 5f || unk_0x0D6E79537424BACE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x68D61DC7116FF797(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x26CECBCADF60693F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x0D6E79537424BACE(Var1, Param0, 1) <= 5f || unk_0x0D6E79537424BACE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x68D61DC7116FF797(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x26CECBCADF60693F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x0D6E79537424BACE(Var1, Param0, 1) <= 5f || unk_0x0D6E79537424BACE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xB07F27EC3B05E4EA(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xB07F27EC3B05E4EA(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x68D61DC7116FF797(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x26CECBCADF60693F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x0D6E79537424BACE(Var1, Param0, 1) <= 5f || unk_0x0D6E79537424BACE(Var1, Param3, 1) <= 5f)
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
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(iParam0))
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
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	*uParam1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	uParam2->f_2 = func_62(iParam0, unk_0x81873881071CD9FE(), 1);
	fVar3 = func_62(iParam0, unk_0x81873881071CD9FE(), 1);
	fVar4 = func_62(iParam0, unk_0x81873881071CD9FE(), 1);
	Var16 = { unk_0xB6AE0DAE06D56288(iParam0, 0) - unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	if (unk_0x8E8B546E1A81D27F(sParam3))
	{
		Var13 = { unk_0x5F1005EAF356FBDD(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_61(unk_0xB6AE0DAE06D56288(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x957F1AE07A974C5E(unk_0xB6AE0DAE06D56288(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x751FA16E55F0A171(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x26CECBCADF60693F(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
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
							*uParam1 = { unk_0x957F1AE07A974C5E(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar4, Var16) };
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
		fVar0 = unk_0x43A2E703A9A654DB(fVar1, fVar2);
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
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	return func_61(Var0, Var3, iParam2);
}

void func_63(struct<3> Param0, float fParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - Param0 };
		fVar4 = unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1);
		if (func_64(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		fVar4 = unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1);
		if (func_64(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 10f)
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
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		fVar0 = unk_0x3306AAAFE3B25098(iParam0);
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
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
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
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
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
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
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
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_71(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
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
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_79(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_47())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_78(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_79(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_78(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_73(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_75(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_76(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
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

int func_78(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_80()
{
	Global_14559 = 0;
	func_52();
}

int func_81()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
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
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
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
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
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
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) != 0)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_98))
			{
				if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_98) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_98))
				{
					if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
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
				if (unk_0x0AEC8EB3EC414C02(uLocal_140))
				{
					func_42(joaat("rc_wallets_recovered"), 1);
					unk_0x85C45034BA638694(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x8C7933B8CC1FCB35(0, 200, 250);
					func_89(2);
					bLocal_146 = true;
				}
				else if (unk_0xFBACB273AA628CC5(iLocal_103))
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uLocal_140)) > 150f)
					{
						if (unk_0x5FEB513A4402FD59(iLocal_99))
						{
							func_253();
						}
						else if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_99, 1)) > 100f)
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
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_90(func_86(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_90(func_86(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_90(func_86(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

void func_90(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
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
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(iVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_94(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_95(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(iVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(iVar0, func_95(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(iVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(iVar0, func_95(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
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
		unk_0xF3148AAF69AF9CBC(&uVar1, 3);
		unk_0xF3148AAF69AF9CBC(&uVar1, 4);
		unk_0xF3148AAF69AF9CBC(&uVar1, 1);
		uLocal_140 = unk_0xB2486A72F6F99B4C(iVar0, unk_0x59F4099AA66DA409(iLocal_98, 1067030938, 1069547520), uVar1, iLocal_344, 1, iLocal_152);
		bLocal_141 = true;
		iLocal_103 = func_97(uLocal_140);
		func_109(&Local_158, cLocal_334, sLocal_330, 4, 0, 0, 0);
		if (unk_0xFBACB273AA628CC5(iLocal_102))
		{
			unk_0x0A8175F24237A3D4(&iLocal_102);
		}
		if (func_99(iLocal_99))
		{
			unk_0x27CC98B7C879C320(iLocal_99);
		}
	}
	else
	{
		if (!iLocal_142)
		{
			if (!func_157(iLocal_99, 242628503) && !unk_0x5FEB513A4402FD59(iLocal_99))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_104);
				if (!unk_0x515B65C19A5CA9B1(iLocal_99, Local_353, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0xCEF5C750AC257B88(0, Local_353, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
				unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x56D9ED1541046AF6(uLocal_104);
				unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
				unk_0xA3561415EB3DA3A3(&uLocal_104);
			}
		}
		if (iLocal_142)
		{
			if (!bLocal_146)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_99))
				{
					if (unk_0x0BAE7BE122182FA8(iLocal_99, cLocal_144, "pickup_low", 3))
					{
						if (unk_0xC00796CF40447CA8(iLocal_99, cLocal_144, "pickup_low") > 0.35f)
						{
							if (unk_0x7423A8514A6F26DA(uLocal_140))
							{
								func_109(&Local_158, cLocal_334, cLocal_331, 4, 0, 0, 0);
								unk_0xA8FBABD3B6C9A9C9(uLocal_140);
								unk_0x0CD6B65135C8C3FE(iLocal_99, iLocal_344);
								unk_0x1D15D99A10A15334(iLocal_99, 0);
								unk_0x71A8BCA218722FA1(&iLocal_99);
								func_271(1);
							}
						}
					}
					else if (unk_0xFA1212DE7C455679(iLocal_99, 242628503) == 7)
					{
						unk_0x27CC98B7C879C320(iLocal_99);
						unk_0xEAD984C2869B8B7C(&uLocal_104);
						unk_0x31C1393E4ACFD794(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 3000, 2048, 2);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 3000);
						unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
						unk_0x56D9ED1541046AF6(uLocal_104);
						unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
						unk_0xA3561415EB3DA3A3(&uLocal_104);
						unk_0x6CB332CB31E9FA96(iLocal_99, 1);
					}
				}
			}
		}
		else if (!unk_0x5FEB513A4402FD59(iLocal_99))
		{
			if (unk_0x7423A8514A6F26DA(uLocal_140))
			{
				if (unk_0x515B65C19A5CA9B1(iLocal_99, unk_0x6212DFFA012D5E5B(uLocal_140), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0x27CC98B7C879C320(iLocal_99);
					unk_0xEAD984C2869B8B7C(&uLocal_104);
					unk_0xD91194CE3D1E1D77(0, unk_0x6212DFFA012D5E5B(uLocal_140), 1f, 20000, 1f, 512, 1193033728);
					unk_0xBF7CD5D6793CA1E8(0, unk_0x6212DFFA012D5E5B(uLocal_140), 0);
					unk_0x31C1393E4ACFD794(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 3000, 2048, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 3000);
					unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
					unk_0x56D9ED1541046AF6(uLocal_104);
					unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
					unk_0xA3561415EB3DA3A3(&uLocal_104);
					unk_0x6CB332CB31E9FA96(iLocal_99, 1);
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
	
	if (!unk_0x7423A8514A6F26DA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x8D0412562F2DBA20(uParam0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_95(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	return iVar0;
}

int func_99(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
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
			if (unk_0xBBEF8270CE27C0EE(iLocal_98, unk_0x81873881071CD9FE(), 1))
			{
				unk_0xD24EA1F9FB501BB5(iLocal_98);
				bVar0 = true;
			}
			if (unk_0x7404950238A154C2(iLocal_116, 0) && unk_0x04C377C10639B842(iLocal_98, iLocal_116, 0))
			{
				if (unk_0xD135D1F36209168D(iLocal_116))
				{
					if (unk_0x1A95F99A66281615(iLocal_116))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0x7404950238A154C2(iLocal_116, 0) || !func_157(iLocal_98, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x5EF53977B76418E5(iLocal_98))
			{
				if (unk_0xFA1212DE7C455679(iLocal_98, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_137)
				{
					if (unk_0x04C377C10639B842(iLocal_98, iLocal_116, 0))
					{
						if (unk_0xFA1212DE7C455679(iLocal_98, 242628503) != 1 && unk_0xFA1212DE7C455679(iLocal_98, 242628503) != 0)
						{
							unk_0xEAD984C2869B8B7C(&uLocal_105);
							unk_0x98046F3D16B9CF76(0, 0, 0);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_105);
							unk_0xC65002CAA1212AF9(iLocal_98, uLocal_105);
							unk_0xA3561415EB3DA3A3(&uLocal_105);
						}
					}
					else if (unk_0xFA1212DE7C455679(iLocal_98, 242628503) != 1 && unk_0xFA1212DE7C455679(iLocal_98, 242628503) != 0)
					{
						unk_0xEAD984C2869B8B7C(&uLocal_105);
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_105);
						unk_0xC65002CAA1212AF9(iLocal_98, uLocal_105);
						unk_0xA3561415EB3DA3A3(&uLocal_105);
					}
					iVar1 = unk_0x6790F757E3D3D858(iLocal_98);
					if (iVar1 == 2)
					{
						unk_0x27CC98B7C879C320(iLocal_98);
						if (func_99(unk_0x81873881071CD9FE()))
						{
							unk_0x633A554EB6BC4E71(iLocal_98, unk_0x81873881071CD9FE(), 0, 16);
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
	if (!unk_0x5FEB513A4402FD59(iLocal_98))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_98, 180f, 180f, 50f, 0, 1, 0) || !unk_0x895C275673BCEAB0(iLocal_98))
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
			unk_0xF210D34D7F7152ED(&iLocal_98);
			if (unk_0x7404950238A154C2(iLocal_116, 0))
			{
				if (unk_0x895C275673BCEAB0(iLocal_116))
				{
					unk_0x5D00E836B6BE8693(&iLocal_116);
				}
			}
		}
	}
	else if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), unk_0xB6AE0DAE06D56288(iLocal_98, 0)) < 300f)
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
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		if ((unk_0x86CCCD2FAE9D5E65(iParam1) && unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE())) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xCF8AA94BAD0F766A(iParam1))
			{
				if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam1), 0))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
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
						unk_0x20F5C387A2DC0C80(iParam0, 1);
						unk_0x9DA87A96BDB876EC(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(iParam0, 0);
						unk_0x9DA87A96BDB876EC(iParam0, 255);
					}
				}
			}
			else if (unk_0xCF0C46D719D5302C(iParam1))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam1)))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
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
						unk_0x20F5C387A2DC0C80(iParam0, 1);
						unk_0x9DA87A96BDB876EC(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(iParam0, 0);
						unk_0x9DA87A96BDB876EC(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(iParam0, sParam1, func_104(iParam2), 1);
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
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_106(int iParam0, var uParam1)
{
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		if (unk_0x48E480685981C7D4() > *uParam1 + 500)
		{
			if (unk_0xAFB8D209AF1687FD(iParam0) == 1)
			{
				unk_0xD5CD0E7173F858FF(iParam0, true);
			}
			else
			{
				unk_0xD5CD0E7173F858FF(iParam0, false);
				unk_0x1B86E7A8766EA6B4(iParam0, 1);
			}
			*uParam1 = unk_0x48E480685981C7D4();
		}
		if (!unk_0xA83A609D74168B30() && func_107(0))
		{
			func_89(1);
		}
	}
}

bool func_107(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98927, iParam0);
}

void func_108()
{
	switch (iLocal_108)
	{
		case 1:
		case 2:
			if (unk_0x7404950238A154C2(iLocal_116, 0))
			{
				if (iLocal_337)
				{
					if (unk_0x58A69336FE7307D8(iLocal_98, iLocal_116) || unk_0xFA1212DE7C455679(iLocal_98, -1273030092) == 1)
					{
						unk_0x73FD8D43B37C0615(iLocal_98, iLocal_116, Local_94, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0xD135D1F36209168D(iLocal_116))
					{
						unk_0xE7C749141FE9D97E(iLocal_116, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x73FD8D43B37C0615(iLocal_98, iLocal_116, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_337)
			{
				unk_0xEAD984C2869B8B7C(&uLocal_104);
				unk_0xD91194CE3D1E1D77(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
				unk_0x56D9ED1541046AF6(uLocal_104);
				unk_0xC65002CAA1212AF9(iLocal_98, uLocal_104);
				unk_0xA3561415EB3DA3A3(&uLocal_104);
			}
			else
			{
				unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0x0D6E79537424BACE(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0x06189C52198B2264(iLocal_98, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 300f, -1, 0, 0);
				unk_0xA3561415EB3DA3A3(&uLocal_104);
			}
			else if (iLocal_337)
			{
				unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0x06189C52198B2264(iLocal_98, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_98))
	{
		unk_0x6CB332CB31E9FA96(iLocal_98, 1);
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
					unk_0x9E95048D8C96C1EA(0);
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
		if (unk_0xE1772957381F609F())
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_48())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_99))
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_99))
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
		if (unk_0x544121698BDAB87E(unk_0xC91EFAB304EB7DE6(iLocal_99, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0xC91EFAB304EB7DE6(iLocal_99, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0xC91EFAB304EB7DE6(iLocal_99, 31086, 0f, 0f, 0f) };
		if ((unk_0xF2D6F3C6E10665F2(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xF2D6F3C6E10665F2(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xF2D6F3C6E10665F2(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x7524A58D724C2495(unk_0xC91EFAB304EB7DE6(iLocal_99, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0xF46EAA2C25D08B6F(-1, unk_0xC91EFAB304EB7DE6(iLocal_99, 31086, 0f, 0f, 0f), 50f))
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
			if (unk_0xFA1212DE7C455679(iLocal_99, 474215631) != 1)
			{
				if (func_112(iLocal_99))
				{
					unk_0x492E306B5A7C779A(iLocal_99, 2000);
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
		if (!unk_0x5FEB513A4402FD59(iParam0))
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
	if (unk_0x86CCCD2FAE9D5E65(iLocal_99))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_99))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_99, unk_0x81873881071CD9FE(), 1) && unk_0xD81BC0FD4D47CC04(iLocal_99))
			{
				bVar0 = true;
				unk_0xD24EA1F9FB501BB5(iLocal_99);
			}
			if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_99, 1), 1f, 1))
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
			if (unk_0xFA1212DE7C455679(iLocal_99, 474215631) != 1)
			{
				if (func_112(iLocal_99))
				{
					unk_0x492E306B5A7C779A(iLocal_99, 2000);
				}
			}
		}
		else if (!unk_0x5FEB513A4402FD59(iLocal_98))
		{
			if (unk_0xFA1212DE7C455679(iLocal_98, 1805844857) == 7)
			{
				unk_0x4B9FA68A3AC8C29D(iLocal_98, 17, 1);
				unk_0x4B9FA68A3AC8C29D(iLocal_98, 13, 0);
				unk_0x754376E2234CBB4A(iLocal_98, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_115(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_99(unk_0x81873881071CD9FE()) && func_99(iParam0))
	{
		if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
		if (func_129(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_128(unk_0x81873881071CD9FE(), iParam0, fParam2);
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
	
	if (func_99(unk_0x81873881071CD9FE()) && func_99(iParam0))
	{
		if (func_127(iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_118(iParam0, unk_0x81873881071CD9FE(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_119(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x48E480685981C7D4() - Local_48[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x26CECBCADF60693F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xCF0C46D719D5302C(iVar7))
	{
		func_99(iVar7);
		if (unk_0x8F1CCE5AF629C4D3(iVar7) == iParam4)
		{
			if (bLocal_89)
			{
				unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x48E480685981C7D4();
			return 1;
		}
		return 0;
	}
	if (unk_0xCF8AA94BAD0F766A(iVar7))
	{
		func_99(iVar7);
		if (unk_0xE5AB05962FA1FF3F(iParam4, 0))
		{
			if (unk_0x522C7043B2B961F9(iVar7) == unk_0xE68E6B44DABA9C05(iParam4, 0))
			{
				if (bLocal_89)
				{
					unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x48E480685981C7D4();
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
		iVar0 = unk_0x2E0A9E3291F398E3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB6AE0DAE06D56288(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB6AE0DAE06D56288(iParam0, 1);
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
	
	Var0 = { func_124(unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_124(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_128(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC99223BD7E489FC6(iParam0) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
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
	if (func_99(unk_0x81873881071CD9FE()) && func_99(iParam0))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar2, 1);
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
			if (unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE()))
			{
				if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
					if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x6DF2A27FBC647AEC(Var0, Var3, 1))
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
	
	if ((((unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_124(Param1 - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_124(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_134()
{
	if (bLocal_141 || unk_0x930F8FBB8E9537CC(iLocal_98))
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
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
	if (func_153(iParam1) && unk_0x1DB417C2D78C2390(iParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			unk_0xDADDFD5743EF6B4C(unk_0x8F1CCE5AF629C4D3(iParam1));
			unk_0xAA2EC5375B3FAE29(unk_0x8F1CCE5AF629C4D3(iParam1), 1);
			if (unk_0x06B618A8746F665B(unk_0x8F1CCE5AF629C4D3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xCF8AA94BAD0F766A(iParam1))
		{
			unk_0xFBE0C43B6A21C8D0(unk_0x522C7043B2B961F9(iParam1));
			if (unk_0x29C2AB191ACB1F1A(unk_0x522C7043B2B961F9(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam1))
		{
			unk_0x078BE1F12FC92912(unk_0x440E5F4F3C17D1EB(iParam1));
			if (unk_0x336B49310DF9C666(unk_0x440E5F4F3C17D1EB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xCA020F3125A93EB9())
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
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_85(iVar0))
							{
								func_90(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_85(iVar0))
						{
							func_90(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
			if (!unk_0x4357449749A521B1(sParam5))
			{
				if (func_85(sParam5))
				{
					unk_0xB8BB626315D394F5(1);
				}
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_155(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
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
	if (func_153(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(1);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_141(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
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
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_85(sParam0)) || func_85("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
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
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
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
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_144()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_145(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x930F8FBB8E9537CC(iParam1))
	{
		func_155(uParam0, 0, 0);
	}
	if (func_55(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			uVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(uVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_146())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xBFC4295E811860E5(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0D7089406F6A5C6E(0);
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
	unk_0xA9076AE35130AE29(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iParam1, -1, iVar3, iVar4);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_146()
{
	return func_147(unk_0x1329891157A54C63());
}

int func_147(var uParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
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
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_152(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
				if (!func_151(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
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
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(0);
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

void func_155(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_85(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_85(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

float func_156(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

int func_157(int iParam0, int iParam1)
{
	if (func_112(iParam0))
	{
		if (unk_0xFA1212DE7C455679(iParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(iParam0, iParam1) == 0)
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
	if (unk_0xD994929E13CC1ED5(sParam0, sParam0))
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
	unk_0xEAD984C2869B8B7C(&uLocal_104);
	unk_0xF88735A9354A45F3(0, iLocal_98, 750);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x31C1393E4ACFD794(0, cLocal_367, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x56D9ED1541046AF6(uLocal_104);
	unk_0xC65002CAA1212AF9(iLocal_99, uLocal_104);
	unk_0xA3561415EB3DA3A3(&uLocal_104);
	if (unk_0xFBACB273AA628CC5(iLocal_101))
	{
		unk_0x0A8175F24237A3D4(&iLocal_101);
	}
	if (!unk_0xFBACB273AA628CC5(iLocal_102))
	{
		iLocal_102 = func_92(iLocal_98, 1, 0);
	}
	unk_0x3C8D013C840ADA0A(iLocal_102, 1);
	unk_0xA9DF4B73BBB06CE5(0);
	unk_0x5B6D37392F5991C3(0.1f);
	func_108();
	if ((unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x0D6E79537424BACE(Local_94, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0x0D6E79537424BACE(Local_94, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_105(unk_0x81873881071CD9FE(), iLocal_99, 1) < 50f)
		{
			func_109(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0);
			iLocal_136 = 1;
		}
	}
	iLocal_109 = unk_0x48E480685981C7D4();
	unk_0xC1B1E9A034A63A62(0);
	if (func_99(unk_0x81873881071CD9FE()))
	{
		unk_0xC9E1121219C75417(unk_0x81873881071CD9FE(), 1);
	}
	func_162(1);
}

int func_162(int iParam0)
{
	if (func_164())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_163(Global_98920))
		{
			func_89(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_163(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
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
	switch (func_165(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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
		if (Global_88620.f_44 == 1)
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
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
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
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
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
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_35443);
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
	if (Global_35443 == 15)
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
		if (unk_0x763F2CFB73975AA7())
		{
			if (unk_0x331E7ACCFD0869AD(iLocal_98))
			{
				iLocal_345 = unk_0x48E480685981C7D4();
			}
		}
	}
	else if (unk_0x48E480685981C7D4() > iLocal_345 + 1000)
	{
		return 1;
	}
	if (unk_0xF46EAA2C25D08B6F(-1, Local_94, 50f))
	{
		return 1;
	}
	if ((unk_0x48E480685981C7D4() - iLocal_346) > 30000)
	{
		if (!unk_0x895C275673BCEAB0(iLocal_98))
		{
			return 1;
		}
		else
		{
			func_253();
		}
	}
	if (unk_0xFBACB273AA628CC5(iLocal_102))
	{
		if ((unk_0x0D6E79537424BACE(Local_94, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0x0D6E79537424BACE(Local_94, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0x0D6E79537424BACE(Local_94, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x547A2AA158CA2804(unk_0xB6AE0DAE06D56288(iLocal_98, 0), 2.5f))
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
		if (!unk_0xFBACB273AA628CC5(iLocal_102))
		{
			if (func_99(iLocal_99) && func_99(unk_0x81873881071CD9FE()))
			{
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_102 = func_92(iLocal_98, 1, 0);
					unk_0x3C8D013C840ADA0A(iLocal_102, 0);
				}
			}
		}
		else
		{
			func_106(iLocal_102, &uLocal_113);
		}
	}
	else if (!unk_0xFBACB273AA628CC5(iLocal_102))
	{
		if (func_99(iLocal_99) && func_99(unk_0x81873881071CD9FE()))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_99, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_102 = func_92(iLocal_98, 1, 0);
				unk_0x3C8D013C840ADA0A(iLocal_102, 0);
			}
		}
	}
	else
	{
		func_106(iLocal_102, &uLocal_113);
	}
	if (iLocal_346 == -1)
	{
		iLocal_346 = unk_0x48E480685981C7D4();
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
			unk_0x4C3631ADC50FC70D("ATM_1");
			unk_0x32A12757CBF48A33(iLocal_157);
			while (!unk_0x33ACB874CECA2D4B(iLocal_157))
			{
				if (func_183())
				{
					func_253();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xB5A91586385F755B(iLocal_157, 1);
		}
		else
		{
			Local_117 = { -2968.5f, 494.48f, 14.82f };
			fLocal_123 = 55.24f;
			Local_120 = { -2973.03f, 496.38f, 14.96f };
			fLocal_124 = 3.18f;
			Local_347 = { -259.0351f, -865.7119f, 28f };
			Local_350 = { -130.3981f, -908.8096f, 40f };
			unk_0x32A12757CBF48A33(iLocal_157);
			while (!unk_0x33ACB874CECA2D4B(iLocal_157))
			{
				if (func_183())
				{
					func_253();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xB5A91586385F755B(iLocal_157, 1);
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
		unk_0x32A12757CBF48A33(iLocal_157);
		while (!unk_0x33ACB874CECA2D4B(iLocal_157))
		{
			if (func_183())
			{
				func_253();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB5A91586385F755B(iLocal_157, 1);
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
		unk_0xB6C8D9F5CF4D4600(0);
		unk_0x3DD1ED742E99F292(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0x32A12757CBF48A33(iLocal_157);
		while (!unk_0x33ACB874CECA2D4B(iLocal_157))
		{
			if (func_183())
			{
				func_253();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB5A91586385F755B(iLocal_157, 1);
	}
	else if (iLocal_108 == 5)
	{
		func_196();
	}
	if (func_174())
	{
		unk_0x7C6BF0CD5D7454C9(Local_94, Var6.f_0, 0, 0, 0, 0);
		uLocal_106 = unk_0x13705C66F125D98D(Local_94 - Var6, Local_94 + Var6, 0, 1, 1, 1);
		iLocal_99 = unk_0x206897C6DBC12488(5, iLocal_156, Local_94, uLocal_97, 1, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_99, 13, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_99, 11, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_99, 17, 0);
		unk_0x03F73D35E5AC583A(iLocal_99, 6, 1, 0, 0);
		unk_0x3B7AFF7DCE22C1CF(iLocal_99, 1);
		unk_0x4351E8D40CE67994(iLocal_99, 1);
		unk_0x33B1E568CEF14B0D(iLocal_99, 0);
		unk_0xEF1A2C5B3EE83E3E(iLocal_99, sLocal_366);
		unk_0x0CD6B65135C8C3FE(iLocal_99, 0);
		if (iLocal_114 == 1)
		{
			unk_0x03F73D35E5AC583A(iLocal_99, 0, 0, 0, 0);
			unk_0x03F73D35E5AC583A(iLocal_99, 2, 0, 1, 0);
			unk_0x03F73D35E5AC583A(iLocal_99, 3, 0, 1, 0);
			unk_0x03F73D35E5AC583A(iLocal_99, 4, 0, 2, 0);
		}
		iLocal_98 = unk_0x206897C6DBC12488(22, iLocal_155, Local_94, 0, 1, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_98, 17, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_98, 13, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_98, 6, 1);
		unk_0x7F5F0D37173E518C(iLocal_98, 128, 1);
		unk_0x3B7AFF7DCE22C1CF(iLocal_98, 1);
		unk_0x1D15D99A10A15334(iLocal_98, 1);
		unk_0xCE566DBDCACD245E(iLocal_98, 42, 1);
		unk_0xCE566DBDCACD245E(iLocal_98, 281, 1);
		unk_0xCE566DBDCACD245E(iLocal_98, 172, 0);
		unk_0xCE566DBDCACD245E(iLocal_98, 137, 1);
		unk_0x018A75B0AC9238DF(iLocal_98);
		unk_0xEF1A2C5B3EE83E3E(iLocal_98, sLocal_365);
		unk_0x632435B4905EF92E(iLocal_98, 1);
		unk_0xB901CB880393ADF7(iLocal_98, unk_0x5F1005EAF356FBDD(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2), 0, 0, 1);
		Var9 = { unk_0x0AAE77D72ADAC4C6(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2) };
		unk_0xC24172029826A66F(iLocal_98, Var9.f_2);
		if (func_99(iLocal_99))
		{
			if (unk_0xBFC4295E811860E5(iLocal_99))
			{
				unk_0xB901CB880393ADF7(iLocal_99, unk_0x5F1005EAF356FBDD("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0x0AAE77D72ADAC4C6("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2) };
			}
			else
			{
				unk_0xB901CB880393ADF7(iLocal_99, unk_0x5F1005EAF356FBDD("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0x0AAE77D72ADAC4C6("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2) };
			}
			unk_0xC24172029826A66F(iLocal_99, Var9.f_2);
		}
		unk_0x31C1393E4ACFD794(iLocal_98, cLocal_143, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xBFC4295E811860E5(iLocal_99))
		{
			unk_0x31C1393E4ACFD794(iLocal_99, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xD8323B49BAE93D80("random@atmrobberygen@female");
		}
		else
		{
			unk_0x31C1393E4ACFD794(iLocal_99, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xD8323B49BAE93D80("random@atmrobberygen@male");
		}
		unk_0x9909A5E972866C34(iLocal_98, 1);
		unk_0x1D15D99A10A15334(iLocal_99, 1);
		unk_0x8E4A427F5C43E416(iLocal_98, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xF15BF8369D77A14D(iLocal_98, joaat("weapon_pistol"), 34);
		unk_0x649CF94A4282A7FD(iLocal_98, joaat("weapon_pistol"), 0);
		unk_0xA0E2C72EEFBD5858(iLocal_98, 1, 0);
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
		func_173(&Local_158, 0, unk_0x81873881071CD9FE(), sLocal_323, 0, 1);
		func_173(&Local_158, 1, iLocal_99, sLocal_325, 0, 1);
		func_173(&Local_158, 2, iLocal_98, "ATMRobber", 0, 1);
		if (iLocal_108 == 1 || iLocal_108 == 2)
		{
			iLocal_116 = unk_0xE00F8DEA9778FC87(iLocal_157, Local_117, fLocal_123, 1, 1);
			unk_0x686D6CDC14C4BA6C(iLocal_116, 1, 1);
			unk_0x7DB4FC1A893751E2(iLocal_116);
			unk_0x0E465BF3FB5C8001(iLocal_116, 1);
			if (iLocal_108 == 2)
			{
				unk_0x4DBA43D6DE677017(iLocal_116, 0, 0, 0);
			}
			else if (iLocal_108 == 1)
			{
				unk_0x06618C182FDAA45F(iLocal_98, 0);
				unk_0x150101BCDC17D828(iLocal_98, 3);
			}
			else if (iLocal_108 == 4)
			{
				unk_0xC390A6485FB80923(iLocal_116, 3);
			}
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

int func_174()
{
	unk_0x295DC04FC13E025B("random@atmrobberygen@male");
	unk_0x295DC04FC13E025B("random@atmrobberygen@female");
	if (!iLocal_132)
	{
		func_182(&Local_383, 3);
		Local_383.f_146 = unk_0x5CE96B2C9C8B727F();
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
	if ((unk_0x8E8B546E1A81D27F("random@atmrobberygen@male") && unk_0x8E8B546E1A81D27F("random@atmrobberygen@female")) && func_175(&Local_383))
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0x236D8AD7EE179F46(iParam0, 30))
	{
		if (unk_0x236D8AD7EE179F46(iParam0, 29))
		{
			switch (func_178(iParam0))
			{
				case 0:
					return unk_0x33ACB874CECA2D4B(iParam2);
					break;
				
				case 1:
					return unk_0x8E8B546E1A81D27F(sParam1);
					break;
				
				case 2:
					return unk_0xDBB20E5B224C075C(sParam1);
					break;
				
				case 3:
					return unk_0x682001A921A80123(sParam1);
					break;
				
				case 4:
					return unk_0x498998F33897432E(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x0F7866B4F5BE7CD4(sParam1);
					break;
				
				case 6:
					return unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(iParam0, 27));
					break;
				
				case 7:
					return unk_0x55D66FAE859776D2(iParam2);
					break;
				
				case 8:
					return unk_0xCD8DA898314F3016(iParam2);
					break;
				
				case 9:
					return unk_0x7A74065A1435C8AB();
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
		if (unk_0x236D8AD7EE179F46(iParam0, iVar0))
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xD994929E13CC1ED5(sParam3, "NULL"))
					{
						if (unk_0xD994929E13CC1ED5(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], 30);
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_90) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_195())
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_32(func_30()))
		{
			iVar36 = func_190();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_185(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
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
	switch (Global_98931.f_1750.f_539.f_3549)
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
	return Global_98649 > 0;
}

int func_193()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_195()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
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
		iLocal_114 = unk_0x2E0A9E3291F398E3(1, 5);
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
				iVar0 = unk_0x2E0A9E3291F398E3(0, 3);
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
				iVar0 = unk_0x2E0A9E3291F398E3(0, 3);
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
				iVar0 = unk_0x2E0A9E3291F398E3(0, 3);
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
	if (unk_0x0D6E79537424BACE(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_353 = { -197.64f, -863.25f, 28.33f };
		fLocal_356 = 334.5007f;
		Local_357 = { -187.24f, -856.77f, 28.97f };
		fLocal_360 = 162.69f;
		iLocal_115 = 1;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_353 = { 286.5f, -1256.73f, 28.29f };
		fLocal_356 = 167.3216f;
		Local_357 = { 250.55f, -1239.27f, 28.84f };
		fLocal_360 = 265.51f;
		iLocal_115 = 2;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_353 = { -3044.66f, 595.7f, 6.59f };
		fLocal_356 = 296.7338f;
		Local_357 = { -3037.55f, 608.53f, 7.34f };
		fLocal_360 = 202.3f;
		iLocal_115 = 3;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_353 = { 175.57f, 6636.58f, 30.57f };
		fLocal_356 = 260.4868f;
		Local_357 = { 188.97f, 6616.2f, 31.48f };
		fLocal_360 = 93.97f;
		iLocal_115 = 4;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_353 = { 23.65f, -948.26f, 28.36f };
		fLocal_356 = 258.8732f;
		Local_357 = { 22.19f, -955.82f, 28.94f };
		fLocal_360 = 70.66f;
		iLocal_115 = 6;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_353 = { 294.64f, -893.6f, 28.18f };
		fLocal_356 = 156.7222f;
		Local_357 = { 286.4f, -897.28f, 28.57f };
		fLocal_360 = 341.97f;
		iLocal_115 = 8;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_353 = { 1077.64f, -773.86f, 57.09f };
		fLocal_356 = 275.6593f;
		Local_357 = { 1081.93f, -764.08f, 57.35f };
		fLocal_360 = 268.57f;
		iLocal_115 = 11;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_353 = { -2074.93f, -316.75f, 12.16f };
		fLocal_356 = 157.3363f;
		Local_357 = { -2101.2f, -293.74f, 12.74f };
		fLocal_360 = 263.12f;
		iLocal_115 = 16;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_353 = { -819.39f, -1084.12f, 10.03f };
		fLocal_356 = 236.6294f;
		Local_357 = { -803.18f, -1075.91f, 11.13f };
		fLocal_360 = 209.53f;
		iLocal_115 = 17;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_353 = { -712.88f, -820.47f, 22.61f };
		fLocal_356 = 268.2568f;
		Local_357 = { -721.63f, -826.84f, 22.82f };
		fLocal_360 = 93.14f;
		iLocal_115 = 18;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_353 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_356 = 223.2838f;
		Local_357 = { -406.23f, 6045.69f, 31.06f };
		fLocal_360 = 229.52f;
		iLocal_115 = 19;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_353 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_356 = 286.139f;
		Local_357 = { -304.56f, -840.76f, 31.26f };
		fLocal_360 = 77.59f;
		iLocal_115 = 22;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_353 = { -253.51f, -689.26f, 32.57f };
		fLocal_356 = 209.9227f;
		Local_357 = { -250.91f, -684.01f, 33f };
		fLocal_360 = 230.65f;
		iLocal_115 = 23;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_353 = { 88.7f, 0.01f, 67.38f };
		fLocal_356 = 71.0114f;
		Local_357 = { 91.35f, -7.07f, 67.82f };
		fLocal_360 = 70.28f;
		iLocal_115 = 25;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_353 = { -530.11f, -1217.33f, 17.26f };
		fLocal_356 = 53.768f;
		Local_357 = { -522.45f, -1196.35f, 18.45f };
		fLocal_360 = 297.22f;
		iLocal_115 = 30;
	}
	else if (unk_0x0D6E79537424BACE(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f)
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
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_195())
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
	if ((Global_98920 == func_200() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_201(Var0);
	return uVar16;
}

int func_201(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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
		if ((unk_0x5CE96B2C9C8B727F() >= (uParam0->f_146 + uParam0->f_147) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 2)) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
					{
						func_203(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x5CE96B2C9C8B727F();
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
	if (unk_0x236D8AD7EE179F46(*uParam0, 30))
	{
		switch (func_178(*uParam0))
		{
			case 0:
				unk_0x32A12757CBF48A33(uParam2);
				break;
			
			case 1:
				unk_0x295DC04FC13E025B(uParam1);
				break;
			
			case 2:
				unk_0xF147E5A343BAF150(sParam1);
				break;
			
			case 3:
				unk_0xB711FC19ADBD3C70(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 28));
				break;
			
			case 4:
				unk_0x995DCDA796A47049(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2D148CBB17A2B0C7(sParam1);
				break;
			
			case 6:
				unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0A3E2A43DEA2DB9D(iParam2);
				break;
			
			case 8:
				unk_0x86B83C54AF71BD12(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x18C8823792832C78();
				break;
			
			default:
				break;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 29);
	}
}

void func_205(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x48E480685981C7D4();
	}
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		iVar0 = (unk_0x48E480685981C7D4() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x8849D149F1DEE8C1(iParam0) != 255)
				{
					unk_0x9DA87A96BDB876EC(iParam0, 255);
				}
			}
			else if (unk_0x8849D149F1DEE8C1(iParam0) != 0)
			{
				unk_0x9DA87A96BDB876EC(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x8849D149F1DEE8C1(iParam0) != 255)
			{
				unk_0x9DA87A96BDB876EC(iParam0, 255);
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
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_209();
}

void func_209()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_210(int iParam0)
{
	Global_98920 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_195())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
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
		if (Global_98920 != -1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
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
		if (!func_246(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
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
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
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
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_235(0, 0))
		{
			return 0;
		}
		if (Global_25092)
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
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_234(iVar8))
				{
					if (func_212(iVar4))
					{
						if (!func_55(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_224(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
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
	
	func_233(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_232(&uVar0, unk_0x25B31B877207A3A9());
	func_231(&uVar0, unk_0x0C937048CF6952B5());
	func_230(&uVar0, unk_0x8B6B3DD84CE74978());
	func_229(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_228(&uVar0, unk_0x57E483B654EDD986());
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
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_244()) || Global_97978) || Global_24948) || func_243()) || func_51(8, -1)) || func_242()) || func_241()) || func_240()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_244()) || Global_24948) || func_243()) || func_51(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_244()) || Global_97978) || Global_24948) || func_243()) || func_51(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_244()) || Global_97978) || Global_24948) || func_243()) || func_51(8, -1)) || func_242()) || func_241()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_244() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_51(8, -1)) || func_239()) || func_238()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_242()) || func_241()) || func_238()) || func_237())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_244()) || Global_24948) || func_243()) || func_51(8, -1)) || func_241()) || func_240()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_244()) || func_241()) || Global_97978) || Global_24948) || func_243()) || Global_36493) || func_51(8, -1)) || func_240()) || func_238()) || func_239()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_244()) || Global_97978) || Global_24948) || func_243()) || func_51(8, -1)) || func_240()) || func_238()) || func_242()) || func_241()) || func_239())
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
	return Global_90848.f_1;
}

int func_238()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_239()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_241()
{
	return Global_90861.f_297 > 0;
}

bool func_242()
{
	return Global_90861.f_296 > 0;
}

var func_243()
{
	return Global_1315892;
}

int func_244()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
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
	return Global_98931.f_6302.f_919[iParam0];
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
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_250()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_251(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_252()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF3148AAF69AF9CBC(&iVar0, 2);
				unk_0xF3148AAF69AF9CBC(&iVar0, 4);
				unk_0xF3148AAF69AF9CBC(&iVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_253()
{
	if (bLocal_338)
	{
		if (unk_0x7404950238A154C2(iLocal_116, 0))
		{
			if (unk_0xD135D1F36209168D(iLocal_116))
			{
				unk_0x298028A164A4361E(iLocal_116);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_98))
	{
		unk_0x71A8BCA218722FA1(&iLocal_98);
	}
	unk_0x6CBCF8F4B982C3FD(0);
	if (iLocal_112 != 0)
	{
		unk_0xB506887196D58A15(iLocal_112);
	}
	unk_0x6CBCF8F4B982C3FD(0);
	if (!unk_0x5FEB513A4402FD59(iLocal_99))
	{
		unk_0x1D15D99A10A15334(iLocal_99, 0);
		unk_0x33B1E568CEF14B0D(iLocal_99, 1);
		unk_0x71A8BCA218722FA1(&iLocal_99);
	}
	if (iLocal_108 == 4)
	{
		unk_0x3DD1ED742E99F292(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_155(&uLocal_371, 0, 0);
	if (func_199())
	{
		unk_0x5B6D37392F5991C3(1f);
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xC9E1121219C75417(unk_0x81873881071CD9FE(), 0);
	}
	func_266(&Local_383, 0);
	func_254(-1);
	unk_0xB6C8D9F5CF4D4600(1);
	unk_0xE91F714E010C7127(uLocal_106, 0);
	unk_0xC23A229F78DAD92A();
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
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_98920, 1), 64);
		if (func_256(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_255(&Global_25005);
	Global_98921 = 0;
	func_210(-1);
}

void func_255(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
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
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
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
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
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
	func_229(uParam0, iParam5);
	func_230(uParam0, iParam4);
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		switch (func_178(iParam0))
		{
			case 0:
				unk_0x887F4488DA99FD21(uParam2);
				break;
			
			case 1:
				unk_0xD8323B49BAE93D80(uParam1);
				break;
			
			case 2:
				unk_0x89A95366100690C0(sParam1);
				break;
			
			case 3:
				unk_0x9B331DCFDFC55491(sParam1);
				break;
			
			case 4:
				unk_0x4855165A2773595C(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x010ACF5A865CA942(sParam1);
				break;
			
			case 6:
				unk_0xABF33AFE6B2877A8();
				break;
			
			case 7:
				unk_0xEDEECB22A033000E(uParam2);
				break;
			
			case 8:
				unk_0xBEE99C97A1B87F95(uParam2, unk_0x236D8AD7EE179F46(iParam0, 26));
				break;
			
			case 9:
				unk_0x954FB3FC1E04A7A9();
				break;
			
			default:
				break;
		}
	}
}

void func_271(bool bParam0)
{
	Global_98923 = { Local_94 };
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
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
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_280(iParam0, iParam1) != 322)
		{
			func_276(func_280(iParam0, iParam1), Local_90.f_0, Local_90.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_287(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_278() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_273();
				}
			}
		}
	}
}

int func_278()
{
	return Global_24946;
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_282(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_283(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_283(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_284();
	}
}

void func_284()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_286(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

void func_287(int iParam0)
{
	Global_98917 = iParam0;
}


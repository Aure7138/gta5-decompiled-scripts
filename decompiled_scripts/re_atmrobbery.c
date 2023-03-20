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
	uLocal_46 = unk_0xEBE67A6803CC2677();
	uLocal_47 = unk_0x0CE068B6E4456899();
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
	if (unk_0x9CEB376419A71A96(11))
	{
		if (bLocal_147)
		{
			bLocal_148 = true;
			func_272(0);
		}
		else
		{
			func_254();
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
	if (func_212(Local_95, 1, iLocal_109, 1, 0))
	{
		func_209(-1);
	}
	else
	{
		unk_0xF5DF8F3392CDD07B();
	}
	unk_0xC1B1E9A034A63A62(0);
	func_208();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_207();
		func_206(uLocal_102, &uLocal_108);
		func_203(&Local_384);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xFC01730D781E8C65(unk_0xE0BDAFA1A39552D6());
		}
		if (!func_200())
		{
			if (func_199())
			{
				func_254();
			}
			if (unk_0x920167EE0888FA4E())
			{
				switch (iLocal_94)
				{
					case 0:
						if (func_173())
						{
							iLocal_94 = 1;
						}
						break;
					
					case 1:
						func_172();
						if (iLocal_113 == 0)
						{
							iLocal_113 = unk_0x728FDD09FBC3E195(99, Local_95, 30000f);
						}
						if (unk_0xC1EDB61CE0A4B94E(iLocal_99))
						{
						}
						if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
						{
						}
						if (!unk_0xCFC04A38F256EE06(iLocal_99))
						{
							if (unk_0xCFC04A38F256EE06(iLocal_100))
							{
								unk_0x331679E15ACD8EC7(iLocal_99, Local_95, 200f, -1, 0, 0);
								unk_0x97C5D2BB8E47131D(iLocal_99, 1);
								unk_0x4EDE34FBADD967A6(0);
								func_254();
							}
							if (!unk_0xCFC04A38F256EE06(iLocal_100))
							{
								if (unk_0x7515D29C901C4E76(Local_95, 2.5f))
								{
									if (iLocal_109 == 2)
									{
										if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 120f, 120f, 8f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (iLocal_109 == 1)
									{
										if (unk_0x2A488C176D52CCA5(Local_95, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 100f, 100f, 8f, 0, 1, 0) || func_171())
											{
												func_162();
											}
										}
										else if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 170f, 170f, 8f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (unk_0x2A488C176D52CCA5(Local_95, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 65f, 65f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (unk_0xA1F52EC3ECE1D42E(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 50f, 50f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (unk_0xA1F52EC3ECE1D42E(Local_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 60f, 60f, 5f, 0, 1, 0) || func_171())
										{
											func_162();
										}
									}
									else if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 30f, 30f, 8f, 0, 1, 0) || func_171())
									{
										func_162();
									}
								}
							}
						}
						else
						{
							if (Local_159[2 /*10*/].f_7)
							{
								func_161(&Local_159, 2);
							}
							if (!unk_0xCFC04A38F256EE06(iLocal_100))
							{
								unk_0x331679E15ACD8EC7(iLocal_100, Local_95, 200f, -1, 0, 0);
								unk_0x97C5D2BB8E47131D(iLocal_100, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_254();
						}
						break;
				}
			}
			else
			{
				func_159("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_254();
			}
		}
		else
		{
			if (unk_0xC1EDB61CE0A4B94E(iLocal_99))
			{
				if (!unk_0xCFC04A38F256EE06(iLocal_99))
				{
					if (func_158(iLocal_99, -251125078))
					{
						if (func_157(iLocal_99, Local_95, 1) >= 190f)
						{
							unk_0x1F6717C33A02B7AC(iLocal_99);
							unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
						}
					}
					else if (func_158(iLocal_99, -982327190))
					{
						unk_0x1F6717C33A02B7AC(iLocal_99);
						unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
			{
			}
			if (unk_0x1ADBAAC322D61F73() > iLocal_110 + 3000)
			{
				func_135();
			}
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (!func_115() && !func_112())
				{
					unk_0x09973A258F9AC4D4(unk_0xE0BDAFA1A39552D6());
					if (!iLocal_137 && !bLocal_142)
					{
						if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
						{
							if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0xA1F52EC3ECE1D42E(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0xA1F52EC3ECE1D42E(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_110(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_110(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
								{
									iLocal_137 = 1;
								}
							}
						}
					}
					if (unk_0xCDB4C4200A9B478A(iLocal_103))
					{
						if (!unk_0xCFC04A38F256EE06(iLocal_99))
						{
							if (iLocal_338)
							{
								if (unk_0x53B456945AE5C7DE(iLocal_99, unk_0x06736567F820A39E(), fLocal_344, fLocal_344, fLocal_344, 0, 1, 0))
								{
									if (!unk_0x0FDFEC0DD29106EE(iLocal_99, 0))
									{
										if (unk_0x83666F9FB8FEBD4B() > 1000)
										{
											if (unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iLocal_99))
											{
												fLocal_344 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_99, 1));
												fLocal_344 = (fLocal_344 * 1.5f);
												unk_0xC1B1E9A034A63A62(0);
											}
											unk_0xD14E5ED9D5665519(iLocal_99, 17, 0);
										}
									}
								}
								else if (!iLocal_340)
								{
									if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x0FDFEC0DD29106EE(iLocal_99, 0))
										{
											unk_0xD14E5ED9D5665519(iLocal_99, 17, 1);
											unk_0xD14E5ED9D5665519(iLocal_99, 13, 0);
											func_109();
											iLocal_340 = 1;
										}
									}
								}
							}
							else if (!iLocal_139)
							{
								if ((unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iLocal_99) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iLocal_99)) || unk_0x1D58D319587D567F(iLocal_99, unk_0x06736567F820A39E(), 0))
								{
									func_110(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									fLocal_344 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_99, 1));
									fLocal_344 = (fLocal_344 * 1.5f);
									iLocal_338 = 1;
									iLocal_139 = 1;
								}
								if (unk_0x1B6292EA51632C25(iLocal_117, 0))
								{
									if (unk_0x1D58D319587D567F(iLocal_117, unk_0x06736567F820A39E(), 1))
									{
										unk_0xD14E5ED9D5665519(iLocal_99, 17, 0);
										if (unk_0x7A6749CADAC50206(iLocal_99))
										{
											unk_0x480BD8426B2323B0(iLocal_99, iLocal_117, unk_0x06736567F820A39E(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
										}
										func_110(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										fLocal_344 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_99, 1));
										fLocal_344 = (fLocal_344 * 1.5f);
										iLocal_338 = 1;
										iLocal_139 = 1;
									}
								}
							}
							if ((iLocal_340 || iLocal_338) || bLocal_342)
							{
								if (unk_0xCDB4C4200A9B478A(iLocal_103))
								{
									if (unk_0x0132AB0755C9C088(iLocal_103) == 1)
									{
									}
									else
									{
										unk_0xF2B74C6AE979DE74(iLocal_103, 0);
										unk_0x8A6C20F61A3C4CFA(iLocal_103, 1);
									}
								}
								if (!iLocal_340)
								{
									func_109();
									iLocal_340 = 1;
								}
							}
							else
							{
								if (unk_0x7C6333A22EDB4BF7(iLocal_99, unk_0x06736567F820A39E()))
								{
									bLocal_342 = true;
								}
								func_107(iLocal_103, &uLocal_114);
							}
							if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
							{
								if (!iLocal_139)
								{
									if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_110(&Local_159, cLocal_335, sLocal_328, 4, 0, 0, 0))
										{
											unk_0xD6763C9F81772BAE(&uLocal_105);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x6F275D9063DAF754(uLocal_105);
											unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
											unk_0xDD1A4EE55D86FE71(&uLocal_105);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_139 = 1;
										}
									}
								}
								else if (!iLocal_140)
								{
									if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iLocal_99) && !unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iLocal_99)) && !unk_0x98D424FE7497139D(unk_0x06736567F820A39E())) && func_106(iLocal_100, iLocal_99, 1) > 30f)
										{
											if (func_110(&Local_159, cLocal_335, sLocal_329, 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_140 = 1;
											}
										}
									}
								}
								else if (!unk_0x2E9ED2F77514260C(iLocal_100))
								{
									func_104(iLocal_100, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_102())
							{
								func_101();
								if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
								{
									Var0 = { unk_0xF4745590D18D14B8(iLocal_100, 1) };
								}
								if (!unk_0x8853522CEFF93BE9(iLocal_99, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_99, 12f, 12f, 12f, 0, 1, 0))
								{
									if (unk_0x83666F9FB8FEBD4B() > 20000)
									{
										if (func_100(iLocal_99) && !unk_0x9C4162CAC2B459EC(iLocal_99))
										{
											if (func_110(&Local_159, cLocal_335, sLocal_330, 4, 0, 0, 0))
											{
												bLocal_342 = true;
												unk_0xC1B1E9A034A63A62(0);
											}
										}
									}
								}
							}
							else if (func_100(iLocal_100))
							{
								if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, Global_19, 0, 1, 0))
								{
									if (func_110(&Local_159, cLocal_335, sLocal_333, 4, 0, 0, 0))
									{
										unk_0xD6763C9F81772BAE(&uLocal_105);
										unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 3000);
										unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
										unk_0x6F275D9063DAF754(uLocal_105);
										unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
										unk_0xDD1A4EE55D86FE71(&uLocal_105);
										bLocal_339 = true;
										func_254();
									}
								}
								else if (bLocal_342)
								{
									if (func_110(&Local_159, cLocal_335, sLocal_334, 4, 0, 0, 0))
									{
										unk_0x841E84F12BA2CFC5(iLocal_100, 1193033728, 0);
										unk_0x968F3EF866966AAB(iLocal_100, joaat("MotionState_Walk"), 0, 0, 0);
										bLocal_339 = true;
										func_254();
									}
								}
								else
								{
									unk_0x841E84F12BA2CFC5(iLocal_100, 1193033728, 0);
									unk_0x968F3EF866966AAB(iLocal_100, joaat("MotionState_Walk"), 0, 0, 0);
									bLocal_339 = true;
									func_254();
								}
							}
							else
							{
								bLocal_339 = true;
								func_254();
							}
						}
						else if (func_102())
						{
							if ((unk_0xCFC04A38F256EE06(iLocal_99) || unk_0xC9E4F5D17ACABA9A(iLocal_99, 1)) || func_158(iLocal_99, -1899872703))
							{
								func_110(&Local_159, cLocal_335, sLocal_337, 4, 0, 0, 0);
								func_97();
								func_161(&Local_159, 2);
								unk_0x2239ED27B231AE2E(&iLocal_103);
							}
						}
					}
					else if (!unk_0xCDB4C4200A9B478A(uLocal_102))
					{
						if (bLocal_147)
						{
							if (unk_0xCDB4C4200A9B478A(iLocal_104))
							{
								unk_0x2239ED27B231AE2E(&iLocal_104);
							}
							iLocal_104 = 0;
							unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
							iLocal_102 = func_93(iLocal_100, 0, 0);
							func_92(&uLocal_108);
							if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
							{
								fLocal_134 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_100, 0));
								unk_0xFE26A2643AFB7A3B(iLocal_100);
							}
							if (fLocal_134 > 750f)
							{
								func_272(0);
							}
						}
						else
						{
							func_89();
						}
					}
					else
					{
						if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
						{
							if (bLocal_147)
							{
								func_272(0);
							}
							else
							{
								func_254();
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
							if (!unk_0xCFC04A38F256EE06(iLocal_100))
							{
								if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_100, 0)) > (fLocal_134 + 100f))
								{
									if (bLocal_147)
									{
										func_272(0);
									}
									else
									{
										unk_0xFEDD46326A41DB46(iLocal_100, unk_0x06736567F820A39E(), 100f, -1, 0, 0);
										func_254();
									}
								}
								else if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_100, 0)) < fLocal_134)
								{
									fLocal_134 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_100, 0));
								}
								if (unk_0x1D58D319587D567F(iLocal_100, unk_0x06736567F820A39E(), 1))
								{
									if (bLocal_147)
									{
										func_272(0);
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
	if (!unk_0xCFC04A38F256EE06(iLocal_100))
	{
		unk_0xFEDD46326A41DB46(iLocal_100, unk_0x06736567F820A39E(), 100f, -1, 0, 0);
		func_104(iLocal_100, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x97C5D2BB8E47131D(iLocal_100, 1);
		unk_0xBA63517ADBC1E5E3(iLocal_100, 0);
		unk_0xA26A1133034ECD59(iLocal_100, 1);
		unk_0x5318F6C4C2B82FA7(&iLocal_100);
	}
	func_89();
	if (bLocal_142)
	{
		if (unk_0xCDB4C4200A9B478A(iLocal_104))
		{
			if (unk_0x4D1576E136542F35(uLocal_141))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xD8225E41270F7ABE(uLocal_141)) > 100f)
				{
					func_254();
				}
			}
		}
		else if (bLocal_147)
		{
			func_272(0);
		}
		else if (unk_0xCFC04A38F256EE06(iLocal_99))
		{
			func_254();
		}
	}
	if (unk_0xCDB4C4200A9B478A(iLocal_103))
	{
		if (unk_0xCFC04A38F256EE06(iLocal_99))
		{
			unk_0x2239ED27B231AE2E(&iLocal_103);
		}
		else if (!func_102())
		{
			func_254();
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
	
	if (!unk_0xCFC04A38F256EE06(iLocal_100))
	{
		if (!bLocal_151)
		{
			if (iLocal_341)
			{
				if (!iLocal_343)
				{
					if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 15f, 15f, 20f, 0, 1, 0))
					{
						func_104(iLocal_100, "GENERIC_HI", 5);
						iLocal_343 = 1;
					}
				}
				if (unk_0xA1F52EC3ECE1D42E(Local_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 5f;
					}
				}
				else if (unk_0xA1F52EC3ECE1D42E(Local_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 4f;
					}
				}
				if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, fLocal_135, fLocal_135, fLocal_135, 0, 1, 0) && !func_88())
				{
					if (func_85(2))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
					if (!func_112())
					{
						if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
						{
							if (func_84(1, 0, 1))
							{
								if (!unk_0x7DA173D4FD42F36B(Global_2283, 11) || func_83())
								{
									if (!unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
									{
										unk_0x310F6B4E168A8F5D(1);
										if (func_82())
										{
											func_81();
										}
										if (iLocal_153 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_101 = unk_0xE6B4261E1DAB4EE0(iLocal_154, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_101 = unk_0xE6B4261E1DAB4EE0(iLocal_153, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 1, 1, 0);
										}
										if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
										{
											unk_0x4819029CE8AA1780(iLocal_101, unk_0x06736567F820A39E(), unk_0x1E8E6BB8337EDD5C(unk_0x06736567F820A39E(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0x13B79909077BBD84(iLocal_101, 0, 0);
										func_72(1, 1, 1, 0);
										if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
										{
											if (unk_0xC1EDB61CE0A4B94E(iLocal_101))
											{
												while ((!func_71(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), uLocal_136, 1, 1056964608, 0, 1, 0) || func_82()) || !unk_0x2D08B60CBF8230F6(iLocal_101))
												{
													if (!func_71(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), uLocal_136, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_82())
													{
													}
													if (!unk_0x2D08B60CBF8230F6(iLocal_101))
													{
													}
													unk_0x4EDE34FBADD967A6(0);
												}
												if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
												{
													unk_0x748A759556B70724(unk_0x06736567F820A39E(), 0, 0);
												}
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iLocal_101))
										{
											while (func_82() || !unk_0x2D08B60CBF8230F6(iLocal_101))
											{
												unk_0x4EDE34FBADD967A6(0);
											}
										}
										unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 0);
										if (!unk_0xCFC04A38F256EE06(iLocal_100))
										{
											unk_0x7F075F9DEA8FE763(iLocal_100, 0);
										}
										unk_0x13506ECCCD4E72E8(0);
										unk_0x002592D6ED6E951E(iLocal_113);
										unk_0x5C71BE1938CCDE2A(unk_0x06736567F820A39E(), 0, 0);
										func_69();
										func_65();
										unk_0x4EDE34FBADD967A6(0);
										if (func_100(iLocal_100))
										{
											if (unk_0xFB27C72734065835(iLocal_100))
											{
												sLocal_146 = "move_m@hurry@b";
											}
											else
											{
												sLocal_146 = "move_f@hurry@a";
											}
										}
										unk_0xEF31CD7E99173A29(sLocal_146);
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
					func_63(unk_0xF4745590D18D14B8(iLocal_100, 1), &fLocal_135, &uLocal_136);
					if (!func_88())
					{
						if (!func_158(iLocal_100, 1227113341) && !unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
						{
							unk_0x1F6717C33A02B7AC(iLocal_100);
							unk_0x1C7285D2BF9E26A8(iLocal_100, unk_0x06736567F820A39E(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_158(iLocal_100, 1227113341))
					{
						unk_0x1F6717C33A02B7AC(iLocal_100);
						unk_0xDD1A4EE55D86FE71(&uLocal_105);
						unk_0xD6763C9F81772BAE(&uLocal_105);
						unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 2048, 2);
						unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
						unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_105);
						unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
						unk_0xDD1A4EE55D86FE71(&uLocal_105);
						unk_0xA9FA4149DF18912C(iLocal_100, 0, 0);
					}
				}
			}
			else if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 25f, 25f, 20f, 0, 1, 1) || unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_88())
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
					{
						unk_0x1F6717C33A02B7AC(iLocal_100);
						unk_0xDD1A4EE55D86FE71(&uLocal_105);
						unk_0xD6763C9F81772BAE(&uLocal_105);
						unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 2048, 2);
						unk_0x1C7285D2BF9E26A8(0, unk_0x06736567F820A39E(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x6F275D9063DAF754(uLocal_105);
						unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
						unk_0xDD1A4EE55D86FE71(&uLocal_105);
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
					if (((!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) && !unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) && !unk_0x667E80D24B958845(unk_0x06736567F820A39E())) && !unk_0x1514DF028FBE7449(unk_0x06736567F820A39E()))
					{
						if (bLocal_132)
						{
							if (unk_0xA1F52EC3ECE1D42E(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_126 = { -710.1279f, -821.3084f, 22.6169f };
								Local_129 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0xCFC04A38F256EE06(iLocal_100))
							{
								Var19 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
								func_60(iLocal_100, &Local_126, &Local_129, cLocal_362, sLocal_364);
								if ((Local_126.f_2 - Var19.f_2) > 20f)
								{
									Local_126 = { Var19 };
								}
								Local_126.f_2 = (Local_126.f_2 + 2f);
								unk_0x00FBAE9BB89D4FC2(Local_126, &(Local_126.f_2), 0);
								if (Local_126.f_2 == 0f)
								{
									Local_126 = { Local_354 };
									Local_129.f_2 = fLocal_357;
								}
								if (unk_0xA1F52EC3ECE1D42E(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
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
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x795DFAC3136F0C6E(Local_126, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_126 = { -814.0593f, -1082.483f, 10.0671f };
									Local_129.f_2 = 275.5752f;
								}
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x795DFAC3136F0C6E(Local_126, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_126 = { -375.0627f, 6030.533f, 30.5313f };
									Local_129.f_2 = 222.9049f;
								}
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x795DFAC3136F0C6E(Local_126, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_126 = { -379.7835f, 6029.472f, 30.5014f };
									Local_129.f_2 = 213.2611f;
								}
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
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
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_129.f_2 > 244.444f && Local_129.f_2 < 326.2103f)
										{
											Local_129.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0xA1F52EC3ECE1D42E(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_126 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var10 = { unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 0f, 2) };
								Var13 = { Var10 - Local_126 };
								Var13.f_2 = 0f;
								fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
								unk_0x00FBAE9BB89D4FC2(Var10, &(Var10.f_2), 0);
								fVar23 = (Local_126.f_2 - Var10.f_2);
								Local_129.f_0 = unk_0xF862252F5BA87CD3(fVar23, fVar24);
								if (Local_129.f_0 > 20f || Local_129.f_0 < -330f)
								{
									Local_126 = { Local_354 };
									Local_129.f_0 = 0f;
									Local_129.f_2 = fLocal_357;
									Var10 = { unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 0f, 2) };
									Var13 = { Var10 - Local_126 };
									Var13.f_2 = 0f;
									fVar24 = unk_0x652D2EEEF1D3E62C(Var13);
									unk_0x00FBAE9BB89D4FC2(Var10, &(Var10.f_2), 0);
									fVar23 = (Local_126.f_2 - Var10.f_2);
								}
							}
							if (func_59(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x795DFAC3136F0C6E(Local_126, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
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
							if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 183.6065f, 6636.653f, 30.6299f) < unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 172.2291f, 6631.007f, 30.7398f))
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
							Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
							if (!unk_0xCFC04A38F256EE06(iLocal_100))
							{
								Var4 = { unk_0xF4745590D18D14B8(iLocal_100, 1) };
							}
							Var7 = { Var1 - Var4 };
							Local_126 = { Var1 };
							Local_126 = { Local_126.f_0, Local_126.f_1, (Local_126.f_2 - 1f) };
							Local_129 = { 0f, 0f, unk_0x10BFB9592B558291(Var7.f_0, Var7.f_1) };
						}
						if (unk_0xA1F52EC3ECE1D42E(Local_126, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_126 = { -521.475f, -1210.47f, 17.1848f };
							Local_129 = { 0f, 0f, 308.502f };
						}
						if (unk_0x1B6292EA51632C25(iLocal_117, 0))
						{
							unk_0x768B37F1452D4834(&iLocal_117);
						}
						if (unk_0x1B6292EA51632C25(unk_0xF222904387CE4946(), 0))
						{
							if (!unk_0x1B6292EA51632C25(iVar0, 0))
							{
								iVar0 = unk_0xF222904387CE4946();
								unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iVar0), &Local_348, &Local_351);
								if (unk_0x8853522CEFF93BE9(iVar0, Local_126, (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 3f, 0, 1, 0) || unk_0x8853522CEFF93BE9(iVar0, unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2), (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_59(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0x28038661A095FD94(iVar0, 0, 1, 1, 1);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
									else if (unk_0xA1F52EC3ECE1D42E(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
									else if (unk_0xA1F52EC3ECE1D42E(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
									else if (unk_0xA1F52EC3ECE1D42E(Local_95, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
									else if ((unk_0xA1F52EC3ECE1D42E(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x923F1BB1676259BF(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
									else
									{
										Var16 = { 2.9f, 12f, 8f };
										fLocal_125 = unk_0x3CAD22C2D36A7F14(iVar0);
										Local_121 = { func_56(Local_126, unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2)) };
										if (func_55(0f, 0f, 0f, Local_121, 0))
										{
											Local_121 = { unk_0xF4745590D18D14B8(iVar0, 1) };
										}
										if (unk_0xEF439FAE899F725F(unk_0x79469DA5833EACA8(iVar0)))
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
											if (func_58(iVar0))
											{
												unk_0xA9AD2484206C8140(iVar0, Local_121, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iVar0, fLocal_125);
												unk_0xCE889B96E78E6DC5(iVar0);
											}
										}
										else if (unk_0xC1EDB61CE0A4B94E(iVar0))
										{
											if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
											{
												unk_0x5D91DDE62ED9EC5E(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_58(iVar0))
						{
							unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iVar0), &Local_348, &Local_351);
							if (unk_0x8853522CEFF93BE9(iVar0, Local_126, (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 1f, 0, 1, 0) || unk_0x8853522CEFF93BE9(iVar0, unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 0, 2), (Local_351.f_1 + 1f), (Local_351.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0xA9AD2484206C8140(iVar0, Local_358, 1, 0, 0, 1);
								unk_0xEF32567B3A5047F5(iVar0, fLocal_361);
								unk_0xCE889B96E78E6DC5(iVar0);
							}
						}
						if (unk_0xC1EDB61CE0A4B94E(iLocal_101))
						{
							unk_0x13B79909077BBD84(iLocal_101, 1, 0);
						}
						unk_0x2A5A7A67155CA694(Local_126 - Vector(10f, 10f, 10f), Local_126 + Vector(10f, 10f, 10f), 0);
						unk_0x0ED9A5787AC4BFC9(Local_126, 20f, 0);
						unk_0x463C4DB5BC64DCA2(Local_126, 10f, 0);
						unk_0x79D9EC458879E8B8(Local_126, (Local_351.f_1 + 1f), 1, 0, 0, 0);
						unk_0x1D2204CE0D02765E(Local_126, 25f);
						unk_0x4C366CFBA8BBF653(unk_0x06736567F820A39E(), 1);
						unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
						uLocal_112 = unk_0x70D62E1C98FBC411(Local_126, Local_129, 2);
						unk_0xF0B400EA537067E0(uLocal_112, 0);
						uLocal_149 = unk_0x45D67480D6D39C7E("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x97552B9A3B1A6CC6(uLocal_149, 15f);
						unk_0x0EE4AE2956B8434F(uLocal_149, uLocal_112, sLocal_365, cLocal_362);
						unk_0x66F20C27DFBDFC38(unk_0x06736567F820A39E());
						unk_0x9A12E803B1184012(unk_0x06736567F820A39E());
						unk_0x13F17EF7A260536D(unk_0x06736567F820A39E(), uLocal_112, cLocal_362, sLocal_363, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0xA9FA4149DF18912C(unk_0x06736567F820A39E(), 0, 0);
						if (!unk_0xCFC04A38F256EE06(iLocal_100))
						{
							unk_0x66F20C27DFBDFC38(iLocal_100);
							unk_0x13F17EF7A260536D(iLocal_100, uLocal_112, cLocal_362, sLocal_364, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x78EE57C40B1C74AA(uLocal_149, 1);
						unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_336, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_332, 16);
						StringConCat(&cVar29, "_1", 16);
						func_43(&Local_159, cLocal_335, sLocal_336, &cVar25, cLocal_332, &cVar29, 7, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x13506ECCCD4E72E8(0);
						func_42(joaat("rc_wallets_returned"), 1);
						unk_0xFF4D252D25F54A29(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_150++;
					}
					else
					{
						if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
						{
						}
						if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
						{
						}
						if (unk_0x667E80D24B958845(unk_0x06736567F820A39E()))
						{
						}
						if (unk_0x1514DF028FBE7449(unk_0x06736567F820A39E()))
						{
						}
					}
					unk_0xEA8377A713D575EE();
					break;
				
				case 1:
					if ((unk_0x4958900440DDE4E4(uLocal_112) && unk_0x3B5FD456D45F2AAE(uLocal_112) == 1f) || func_39())
					{
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
						unk_0x63479DF16C91AEDB(unk_0xE0BDAFA1A39552D6(), 0);
						if (!unk_0xCFC04A38F256EE06(iLocal_100))
						{
							unk_0x194510CFB3606077(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
							unk_0xBA63517ADBC1E5E3(iLocal_100, 0);
							unk_0x04347E3774A28B85(iLocal_100, sLocal_146, 1048576000);
						}
						if (unk_0x4FF34B5B023875E1())
						{
							unk_0x66F20C27DFBDFC38(iLocal_100);
							Var10 = { unk_0xF7CF52D5D69E32BB(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
							unk_0x00FBAE9BB89D4FC2(Var10, &(Var10.f_2), 0);
							unk_0xA9AD2484206C8140(iLocal_100, Var10, 1, 0, 0, 1);
							Var10 = { unk_0xF368E2B5887962DB(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
							unk_0xEF32567B3A5047F5(iLocal_100, Var10.f_2);
						}
						Var10 = { unk_0xF368E2B5887962DB(cLocal_362, sLocal_364, Local_126, Local_129, 1f, 2) };
						if (func_59(Local_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_38(unk_0x06736567F820A39E(), 215.68f, 60f))
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xDCA5DDD55544BA21(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
							else if (func_38(unk_0x06736567F820A39E(), 122.0371f, 60f))
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xDCA5DDD55544BA21(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
							else
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
						}
						else if (unk_0xA1F52EC3ECE1D42E(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_38(unk_0x06736567F820A39E(), 200.8887f, 60f))
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xDCA5DDD55544BA21(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
							else if (func_38(unk_0x06736567F820A39E(), 347.8599f, 60f))
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xDCA5DDD55544BA21(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
							else
							{
								unk_0xD6763C9F81772BAE(&uLocal_105);
								unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
								unk_0x6F275D9063DAF754(uLocal_105);
								unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
								unk_0xDD1A4EE55D86FE71(&uLocal_105);
							}
						}
						else
						{
							unk_0xD6763C9F81772BAE(&uLocal_105);
							unk_0xDCA5DDD55544BA21(0, unk_0xF42E2289B33D5C38(iLocal_100, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0x841E84F12BA2CFC5(0, unk_0x3CAD22C2D36A7F14(iLocal_100), 1);
							unk_0x6F275D9063DAF754(uLocal_105);
							unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
							unk_0xDD1A4EE55D86FE71(&uLocal_105);
						}
						unk_0x968F3EF866966AAB(iLocal_100, joaat("MotionState_Walk"), 1, 0, 0);
						unk_0x7F075F9DEA8FE763(iLocal_100, 1);
						unk_0x97C5D2BB8E47131D(iLocal_100, 1);
						func_37(&iLocal_117);
						unk_0x5AE11BC36633DE4E(0);
						unk_0xC07D0B27D5ABBE46(0);
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							unk_0x66F20C27DFBDFC38(unk_0x06736567F820A39E());
							if (!func_36())
							{
								unk_0xA9FA4149DF18912C(unk_0x06736567F820A39E(), 0, 0);
							}
						}
						if (unk_0xC1EDB61CE0A4B94E(iLocal_101))
						{
							unk_0xF30CBC00D9F6D48D(&iLocal_101);
						}
						if (!unk_0xCFC04A38F256EE06(iLocal_100))
						{
							unk_0x194510CFB3606077(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
						}
						unk_0x4C366CFBA8BBF653(unk_0x06736567F820A39E(), 0);
						unk_0x086A554C80BC6C5D(0f);
						unk_0x78EE57C40B1C74AA(uLocal_149, 0);
						func_35();
						unk_0xC2F547D33F9342CC(uLocal_149, 0);
						unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
						if (unk_0x4FF34B5B023875E1())
						{
							unk_0x8EA2EEF67922F899(500);
							while (unk_0xEC708A793EB17979())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						iVar34 = (iLocal_345 / 100);
						iVar34 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x9DA0B763BB403976(0, 0, 3, 0);
						func_72(0, 1, 1, 0);
						func_3(func_30(), 1, iVar34);
						func_272(1);
					}
					else
					{
						unk_0xEA8377A713D575EE();
						if (unk_0x1EE9148034B5AF84(unk_0x06736567F820A39E(), joaat("detach")))
						{
							if (!unk_0xCFC04A38F256EE06(iLocal_100) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
							{
								if (unk_0x046CEB8397234DA8(iLocal_101, unk_0x06736567F820A39E()))
								{
									unk_0xD02CD3284DDA0268(iLocal_101, 0, 1);
									if (unk_0xFB27C72734065835(iLocal_100))
									{
										unk_0x4819029CE8AA1780(iLocal_101, iLocal_100, unk_0x1E8E6BB8337EDD5C(iLocal_100, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x4819029CE8AA1780(iLocal_101, iLocal_100, unk_0x1E8E6BB8337EDD5C(iLocal_100, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101186.f_32651[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_101186.f_32651[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0xFC71FD0B03208C77())
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
	iVar5 = (Global_52954[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52954[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52954[iVar2] = 2147483647;
				}
				else
				{
					Global_52954[iVar2] = (Global_52954[iVar2] + iParam3);
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
				if ((Global_52954[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52954[iVar2];
			Global_52954[iVar2] = (Global_52954[iVar2] - iParam3);
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
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_2[Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101186.f_25165.f_233[iVar2 /*69*/]++;
		Global_101186.f_25165.f_233[iVar2 /*69*/].f_1++;
		if (Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101186.f_25165.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_35742 == 15)
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
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101186.f_25165.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52962[iVar0 /*3*/][0] = Global_101186.f_25165[iVar0];
		Global_52962.f_31[iVar0 /*3*/][0] = Global_101186.f_25165.f_11[iVar0];
		Global_52962.f_62[iVar0 /*3*/][0] = Global_101186.f_25165.f_22[iVar0];
		Global_52962.f_93[iVar0 /*3*/][0] = Global_101186.f_25165.f_33[iVar0];
		Global_52962.f_124[iVar0 /*3*/][0] = Global_101186.f_25165.f_44[iVar0];
		Global_52962.f_155[iVar0 /*3*/][0] = Global_101186.f_25165.f_55[iVar0];
		Global_52962.f_186[iVar0 /*3*/][0] = Global_101186.f_25165.f_66[iVar0];
		Global_52962.f_217[iVar0 /*3*/][0] = Global_101186.f_25165.f_77[iVar0];
		Global_52962.f_248[iVar0 /*3*/][0] = Global_101186.f_25165.f_88[iVar0];
		if (!bParam0)
		{
			Global_52962[iVar0 /*3*/][1] = Global_101186.f_25165[iVar0];
			Global_52962.f_31[iVar0 /*3*/][1] = Global_101186.f_25165.f_11[iVar0];
			Global_52962.f_62[iVar0 /*3*/][1] = Global_101186.f_25165.f_22[iVar0];
			Global_52962.f_93[iVar0 /*3*/][1] = Global_101186.f_25165.f_33[iVar0];
			Global_52962.f_124[iVar0 /*3*/][1] = Global_101186.f_25165.f_44[iVar0];
			Global_52962.f_155[iVar0 /*3*/][1] = Global_101186.f_25165.f_55[iVar0];
			Global_52962.f_186[iVar0 /*3*/][1] = Global_101186.f_25165.f_66[iVar0];
			Global_52962.f_217[iVar0 /*3*/][1] = Global_101186.f_25165.f_77[iVar0];
			Global_52962.f_248[iVar0 /*3*/][1] = Global_101186.f_25165.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52954[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x57B5A527FBAC251E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x57B5A527FBAC251E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x57B5A527FBAC251E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x17CC0D5008835470())
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0) || unk_0x7DA173D4FD42F36B(Global_2097152[func_9() /*10510*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x99BCB15F954AF579(&(Global_101186.f_25165.f_471), iParam0);
		unk_0x99BCB15F954AF579(&(Global_2097152[func_9() /*10510*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x999E5F6D1B49D87B("COUP_RED");
		unk_0x4C5D86B5B659C953(func_8(iParam0));
		unk_0x850E49B6757F562E(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x17CC0D5008835470())
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_25165.f_471, iParam0);
	}
	return unk_0x7DA173D4FD42F36B(Global_2097152[func_9() /*10510*/].f_7704.f_10, iParam0);
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3BC5AA36405F01BF(27))
	{
		return 0;
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFF4D252D25F54A29(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFF4D252D25F54A29(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x57B5A527FBAC251E(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x3BC5AA36405F01BF(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25398 != 0 && !Global_69521)
	{
		return 0;
	}
	if (func_24(&Global_2568285))
	{
		if (func_22(&Global_2568285, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2568285, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4B72953FB5C2CF5B(iParam0))
		{
			return 0;
		}
		if (unk_0x3BC5AA36405F01BF(iParam0))
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
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
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
	
	if (unk_0x3BC5AA36405F01BF(iParam1))
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
	func_20(uParam0, (Global_2568284 - 0.5f));
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
	return Global_35742 == iParam0;
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
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
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
	if (Global_51522[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x17CC0D5008835470())
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/])
	{
		unk_0xFF4D252D25F54A29(Global_51522[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x57B5A527FBAC251E(Global_51522[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_29()
{
	int iVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		unk_0xFF4D252D25F54A29(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52954[0] == iVar0)
		{
			Global_52954[0] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52954[1] == iVar0)
		{
			Global_52954[1] = iVar0;
		}
		unk_0xFF4D252D25F54A29(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52954[2] == iVar0)
		{
			Global_52954[2] = iVar0;
		}
	}
}

int func_30()
{
	func_31();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_31()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_34(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_33(unk_0x06736567F820A39E());
			if (func_32(iVar0) && (!func_26(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_32(Global_101186.f_1902.f_539.f_3549))
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

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()
{
	var uVar0;
	
	uVar0 = unk_0x1BB5D74247ED2C1E(26379945, unk_0xF42E2289B33D5C38(unk_0x06736567F820A39E(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x3CAD22C2D36A7F14(unk_0x06736567F820A39E()), 1115815936, 1, 2);
	unk_0x78EE57C40B1C74AA(uVar0, 1);
}

int func_36()
{
	if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_37(int iParam0)
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
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0x3CAD22C2D36A7F14(iParam0) < fVar0 && unk_0x3CAD22C2D36A7F14(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0x3CAD22C2D36A7F14(iParam0) < fVar0 || unk_0x3CAD22C2D36A7F14(iParam0) > fVar1)
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
		unk_0xEBA0934AA600C515(500);
		while (unk_0x58CFBE8B8644D59B())
		{
			unk_0xEA8377A713D575EE();
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
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
			if (func_41())
			{
				Global_27 = unk_0x1ADBAAC322D61F73();
				return 1;
			}
		}
	}
	return 0;
}

int func_41()
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

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xFF4D252D25F54A29(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x57B5A527FBAC251E(iParam0, iVar0, 1);
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
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (bParam3 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
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
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_50();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = { Global_15892[0 /*6*/] };
			Global_15866[1 /*6*/] = { Global_15892[1 /*6*/] };
			Global_15918[0 /*6*/] = { Global_15944[0 /*6*/] };
			Global_15918[1 /*6*/] = { Global_15944[1 /*6*/] };
			Global_15879[0 /*6*/] = { Global_15905[0 /*6*/] };
			Global_15879[1 /*6*/] = { Global_15905[1 /*6*/] };
			Global_15931[0 /*6*/] = { Global_15957[0 /*6*/] };
			Global_15931[1 /*6*/] = { Global_15957[1 /*6*/] };
		}
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam3)
			{
				func_49();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_48())
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
					if (Global_15970 == 0)
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
			}
			if (func_47())
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
			}
			func_46();
			Global_15722 = bParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_45();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
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
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
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

void func_49()
{
	if (func_26(14))
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
		Global_14413 = func_30();
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

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
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

void func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15709 = iParam0;
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
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
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
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
	iVar0 = unk_0xF222904387CE4946();
	if (!unk_0xC9A01F9792B3D486(iVar0))
	{
		unk_0xB7E6C6AE18F1EDA6(iVar0, 1, 0);
	}
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iVar0), &Var7, &Var10);
	unk_0xEBBD48CB0344518F(Param0, 3, &Var4, 1, 1077936128, 0);
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x290E65F6C850B833(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x31BBF34543BA157F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xA1F52EC3ECE1D42E(Var1, Param0, 1) <= 5f || unk_0xA1F52EC3ECE1D42E(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x290E65F6C850B833(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x31BBF34543BA157F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xA1F52EC3ECE1D42E(Var1, Param0, 1) <= 5f || unk_0xA1F52EC3ECE1D42E(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x290E65F6C850B833(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x31BBF34543BA157F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xA1F52EC3ECE1D42E(Var1, Param0, 1) <= 5f || unk_0xA1F52EC3ECE1D42E(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0xF42E2289B33D5C38(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xF42E2289B33D5C38(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
					{
						Var22 = { func_57(Var1, 0f, Var10) };
						Var25 = { func_57(Var1, 0f, Var7) };
						uVar29 = unk_0x290E65F6C850B833(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0x31BBF34543BA157F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0xA1F52EC3ECE1D42E(Var1, Param0, 1) <= 5f || unk_0xA1F52EC3ECE1D42E(Var1, Param3, 1) <= 5f)
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
	if (func_100(iParam0))
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

int func_59(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xF87C669B882D93C0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	*uParam1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
	uParam2->f_2 = func_62(iParam0, unk_0x06736567F820A39E(), 1);
	fVar3 = func_62(iParam0, unk_0x06736567F820A39E(), 1);
	fVar4 = func_62(iParam0, unk_0x06736567F820A39E(), 1);
	Var16 = { unk_0xF4745590D18D14B8(iParam0, 0) - unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
	if (unk_0x7B43775D6E0D7325(sParam3))
	{
		Var13 = { unk_0xF7CF52D5D69E32BB(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_61(unk_0xF4745590D18D14B8(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x90B89006901451E8(unk_0xF4745590D18D14B8(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0xFC3A4A3117A93B79(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x31BBF34543BA157F(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
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
							*uParam1 = { unk_0x90B89006901451E8(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), fVar4, Var16) };
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
		fVar0 = unk_0xF862252F5BA87CD3(fVar1, fVar2);
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
	
	Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	return func_61(Var0, Var3, iParam2);
}

void func_63(struct<3> Param0, float fParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) - Param0 };
		fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
		if (func_64(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
		fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
		if (func_64(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fVar4, 15f))
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

void func_65()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_68(0))
		{
			func_66(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
	}
}

void func_66(int iParam0)
{
	if (Global_14571)
	{
		func_67(0, 0);
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
	if (!func_47())
	{
		Global_14413.f_1 = 3;
	}
}

void func_67(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_68(0))
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

int func_68(int iParam0)
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

void func_69()
{
	Global_14578 = 0;
	func_70();
}

void func_70()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
	}
}

int func_71(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
		unk_0xD5739C1C2A4441D5(iParam0, uParam1, iParam2, iParam4);
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

void func_72(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_80(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_47())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_79(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_80(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_79(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_77(unk_0xE0BDAFA1A39552D6())) && !func_74(unk_0xE0BDAFA1A39552D6(), 0)) && !func_73())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_77(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_73()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

bool func_74(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_75(-1, 0) == 8;
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

int func_75(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
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

int func_76()
{
	return Global_1312747;
}

int func_77(int iParam0)
{
	if (func_74(iParam0, 0))
	{
		return 1;
	}
	if (func_78())
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

bool func_78()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_79(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_80(int iParam0)
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

void func_81()
{
	Global_14578 = 0;
	func_52();
}

int func_82()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (func_82())
		{
			return 1;
		}
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1, bool bParam2)
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

bool func_85(int iParam0)
{
	return func_86(func_87(iParam0));
}

bool func_86(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

char* func_87(int iParam0)
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

int func_88()
{
	switch (iLocal_116)
	{
		case 1:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_89()
{
	var uVar0;
	
	if (!bLocal_147)
	{
		if (iLocal_338)
		{
			func_97();
		}
		else
		{
			if (!unk_0xCFC04A38F256EE06(iLocal_99))
			{
				if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iLocal_99) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iLocal_99))
				{
					if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_338 = 1;
					}
				}
			}
			else
			{
				iLocal_338 = 1;
			}
			func_107(iLocal_103, &uLocal_114);
		}
		if (!bLocal_339)
		{
			if (bLocal_142)
			{
				if (unk_0x8B8218E22927A0DA(uLocal_141))
				{
					func_42(joaat("rc_wallets_recovered"), 1);
					unk_0xFF4D252D25F54A29(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x4F60E323B2EDB989(0, 200, 250);
					func_90(2);
					bLocal_147 = true;
				}
				else if (unk_0xCDB4C4200A9B478A(iLocal_104))
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xD8225E41270F7ABE(uLocal_141)) > 150f)
					{
						if (unk_0xCFC04A38F256EE06(iLocal_100))
						{
							func_254();
						}
						else if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_100, 1)) > 100f)
						{
							func_254();
						}
					}
				}
			}
		}
	}
}

void func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101186.f_29596.f_2 < 3)
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_91(func_87(iParam0), -1);
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
					func_91(func_87(iParam0), -1);
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
					func_91(func_87(iParam0), -1);
					Global_101186.f_29596.f_4++;
					unk_0xE27C8E42A97895CF(&Global_101182, 2);
				}
			}
			break;
	}
}

void func_91(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

void func_92(var uParam0)
{
	*uParam0 = -99;
}

int func_93(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_94(iParam0, bParam1, 145);
}

int func_94(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_95(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCDB4C4200A9B478A(uVar0)) && unk_0xDC1F9F222D09400F(&(Global_101186.f_32651[iParam2 /*29*/].f_3)))
	{
		unk_0x4BFEA7590F203BDF(iVar0, &(Global_101186.f_32651[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDB8B533098769F4F(iParam0);
	if (unk_0xFCBEC4C2079B0872(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_96(unk_0x17CC0D5008835470(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF2B74C6AE979DE74(uVar0, bParam1);
		}
		else
		{
			unk_0x8A6C20F61A3C4CFA(iVar0, 2);
		}
	}
	else if (unk_0x77CB3F400804EDD1(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(iVar0, func_96(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
		unk_0xF2B74C6AE979DE74(iVar0, bParam1);
	}
	else if (unk_0x25EBA3BDCAE4CD26(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(iVar0, func_96(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_96(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_97()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_142)
	{
		unk_0xE27C8E42A97895CF(&uVar1, 3);
		unk_0xE27C8E42A97895CF(&uVar1, 4);
		unk_0xE27C8E42A97895CF(&uVar1, 1);
		uLocal_141 = unk_0xF9DD11396397B9D7(iVar0, unk_0xF8A76F9FC4A015AB(iLocal_99, 1067030938, 1069547520), uVar1, iLocal_345, 1, iLocal_153);
		bLocal_142 = true;
		iLocal_104 = func_98(uLocal_141);
		func_110(&Local_159, cLocal_335, sLocal_331, 4, 0, 0, 0);
		if (unk_0xCDB4C4200A9B478A(iLocal_103))
		{
			unk_0x2239ED27B231AE2E(&iLocal_103);
		}
		if (func_100(iLocal_100))
		{
			unk_0x1F6717C33A02B7AC(iLocal_100);
		}
	}
	else
	{
		if (!iLocal_143)
		{
			if (!func_158(iLocal_100, 242628503) && !unk_0xCFC04A38F256EE06(iLocal_100))
			{
				unk_0xD6763C9F81772BAE(&uLocal_105);
				if (!unk_0x8853522CEFF93BE9(iLocal_100, Local_354, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0x45B6AF61833199EC(0, Local_354, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
				unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x6F275D9063DAF754(uLocal_105);
				unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
				unk_0xDD1A4EE55D86FE71(&uLocal_105);
			}
		}
		if (iLocal_143)
		{
			if (!bLocal_147)
			{
				if (!unk_0xCFC04A38F256EE06(iLocal_100))
				{
					if (unk_0x46E9388908C80483(iLocal_100, cLocal_145, "pickup_low", 3))
					{
						if (unk_0xD26997147908D65E(iLocal_100, cLocal_145, "pickup_low") > 0.35f)
						{
							if (unk_0x4D1576E136542F35(uLocal_141))
							{
								func_110(&Local_159, cLocal_335, cLocal_332, 4, 0, 0, 0);
								unk_0x1959A326D0A4CB2F(uLocal_141);
								unk_0x194510CFB3606077(iLocal_100, iLocal_345);
								unk_0xBA63517ADBC1E5E3(iLocal_100, 0);
								unk_0x5318F6C4C2B82FA7(&iLocal_100);
								func_272(1);
							}
						}
					}
					else if (unk_0xFB900D9EE2ACC400(iLocal_100, 242628503) == 7)
					{
						unk_0x1F6717C33A02B7AC(iLocal_100);
						unk_0xD6763C9F81772BAE(&uLocal_105);
						unk_0x28B5966B12DC5B0F(0, cLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), 3000, 2048, 2);
						unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 3000);
						unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
						unk_0x6F275D9063DAF754(uLocal_105);
						unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
						unk_0xDD1A4EE55D86FE71(&uLocal_105);
						unk_0x97C5D2BB8E47131D(iLocal_100, 1);
					}
				}
			}
		}
		else if (!unk_0xCFC04A38F256EE06(iLocal_100))
		{
			if (unk_0x4D1576E136542F35(uLocal_141))
			{
				if (unk_0x8853522CEFF93BE9(iLocal_100, unk_0xD8225E41270F7ABE(uLocal_141), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0x1F6717C33A02B7AC(iLocal_100);
					unk_0xD6763C9F81772BAE(&uLocal_105);
					unk_0xDCA5DDD55544BA21(0, unk_0xD8225E41270F7ABE(uLocal_141), 1f, 20000, 1f, 512, 1193033728);
					unk_0xB825CA4B750354E2(0, unk_0xD8225E41270F7ABE(uLocal_141), 0);
					unk_0x28B5966B12DC5B0F(0, cLocal_145, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), 3000, 2048, 2);
					unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 3000);
					unk_0x841E84F12BA2CFC5(0, 1193033728, 0);
					unk_0x6F275D9063DAF754(uLocal_105);
					unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
					unk_0xDD1A4EE55D86FE71(&uLocal_105);
					unk_0x97C5D2BB8E47131D(iLocal_100, 1);
					iLocal_143 = 1;
				}
			}
		}
	}
}

int func_98(var uParam0)
{
	return func_99(uParam0);
}

int func_99(var uParam0)
{
	var uVar0;
	
	if (!unk_0x4D1576E136542F35(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x1D3807CE4626BC11(uParam0);
	unk_0xC5B281EF0EBC2AA6(uVar0, func_96(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	return iVar0;
}

int func_100(int iParam0)
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

void func_101()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (unk_0x1D58D319587D567F(iLocal_99, unk_0x06736567F820A39E(), 1))
			{
				unk_0xFE26A2643AFB7A3B(iLocal_99);
				bVar0 = true;
			}
			if (unk_0x1B6292EA51632C25(iLocal_117, 0) && unk_0x93E49C491856D7AD(iLocal_99, iLocal_117, 0))
			{
				if (unk_0x50FC0E6FE77AD137(iLocal_117))
				{
					if (unk_0x847F144A1FC7D9DA(iLocal_117))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0x1B6292EA51632C25(iLocal_117, 0) || !func_158(iLocal_99, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x0DA2000F5C8A8ECC(iLocal_99))
			{
				if (unk_0xFB900D9EE2ACC400(iLocal_99, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_138)
				{
					if (unk_0x93E49C491856D7AD(iLocal_99, iLocal_117, 0))
					{
						if (unk_0xFB900D9EE2ACC400(iLocal_99, 242628503) != 1 && unk_0xFB900D9EE2ACC400(iLocal_99, 242628503) != 0)
						{
							unk_0xD6763C9F81772BAE(&uLocal_106);
							unk_0x748A759556B70724(0, 0, 0);
							unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
							unk_0x6F275D9063DAF754(uLocal_106);
							unk_0x457C4844450FF70E(iLocal_99, uLocal_106);
							unk_0xDD1A4EE55D86FE71(&uLocal_106);
						}
					}
					else if (unk_0xFB900D9EE2ACC400(iLocal_99, 242628503) != 1 && unk_0xFB900D9EE2ACC400(iLocal_99, 242628503) != 0)
					{
						unk_0xD6763C9F81772BAE(&uLocal_106);
						unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_106);
						unk_0x457C4844450FF70E(iLocal_99, uLocal_106);
						unk_0xDD1A4EE55D86FE71(&uLocal_106);
					}
					iVar1 = unk_0x52809775B6D28ABD(iLocal_99);
					if (iVar1 == 2)
					{
						unk_0x1F6717C33A02B7AC(iLocal_99);
						if (func_100(unk_0x06736567F820A39E()))
						{
							unk_0xFB9941AAF643A23C(iLocal_99, unk_0x06736567F820A39E(), 0, 16);
						}
						iLocal_138 = 1;
					}
				}
			}
			break;
	}
}

int func_102()
{
	if (!unk_0xCFC04A38F256EE06(iLocal_99))
	{
		if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_99, 180f, 180f, 50f, 0, 1, 0) || !unk_0x8831C606DC492098(iLocal_99))
		{
			func_103(iLocal_103, iLocal_99, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_159[2 /*10*/].f_7)
			{
				func_161(&Local_159, 2);
			}
			unk_0xDAF1451794AD09A3(&iLocal_99);
			if (unk_0x1B6292EA51632C25(iLocal_117, 0))
			{
				if (unk_0x8831C606DC492098(iLocal_117))
				{
					unk_0x5D91DDE62ED9EC5E(&iLocal_117);
				}
			}
		}
	}
	else if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(iLocal_99, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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
						unk_0xC450F6DE1A06C309(iParam0, 1);
						unk_0x7535364E752B61AE(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xC450F6DE1A06C309(iParam0, 0);
						unk_0x7535364E752B61AE(iParam0, 255);
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
						unk_0xC450F6DE1A06C309(iParam0, 1);
						unk_0x7535364E752B61AE(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xC450F6DE1A06C309(iParam0, 0);
						unk_0x7535364E752B61AE(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	unk_0x6057437695115495(iParam0, sParam1, func_105(iParam2), 1);
}

int func_105(int iParam0)
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

float func_106(int iParam0, int iParam1, int iParam2)
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
	if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

void func_107(int iParam0, var uParam1)
{
	if (unk_0xCDB4C4200A9B478A(uParam0))
	{
		if (unk_0x1ADBAAC322D61F73() > *uParam1 + 500)
		{
			if (unk_0x0132AB0755C9C088(iParam0) == 1)
			{
				unk_0xF2B74C6AE979DE74(iParam0, true);
			}
			else
			{
				unk_0xF2B74C6AE979DE74(iParam0, false);
				unk_0x8A6C20F61A3C4CFA(iParam0, 1);
			}
			*uParam1 = unk_0x1ADBAAC322D61F73();
		}
		if (!unk_0x6146EFE5BC2DD8DC() && func_108(0))
		{
			func_90(1);
		}
	}
}

bool func_108(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_101182, iParam0);
}

void func_109()
{
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (unk_0x1B6292EA51632C25(iLocal_117, 0))
			{
				if (iLocal_338)
				{
					if (unk_0x954A6C5EBD942B9E(iLocal_99, iLocal_117) || unk_0xFB900D9EE2ACC400(iLocal_99, -1273030092) == 1)
					{
						unk_0x0EB9529F238B742E(iLocal_99, iLocal_117, Local_95, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x50FC0E6FE77AD137(iLocal_117))
					{
						unk_0x32262EF76BB45D6B(iLocal_117, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x0EB9529F238B742E(iLocal_99, iLocal_117, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_338)
			{
				unk_0xD6763C9F81772BAE(&uLocal_105);
				unk_0xDCA5DDD55544BA21(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xDCA5DDD55544BA21(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
				unk_0x6F275D9063DAF754(uLocal_105);
				unk_0x457C4844450FF70E(iLocal_99, uLocal_105);
				unk_0xDD1A4EE55D86FE71(&uLocal_105);
			}
			else
			{
				unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0xA1F52EC3ECE1D42E(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0x331679E15ACD8EC7(iLocal_99, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 300f, -1, 0, 0);
				unk_0xDD1A4EE55D86FE71(&uLocal_105);
			}
			else if (iLocal_338)
			{
				unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0x331679E15ACD8EC7(iLocal_99, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0xCFC04A38F256EE06(iLocal_99))
	{
		unk_0x97C5D2BB8E47131D(iLocal_99, 1);
	}
}

bool func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_111(sParam2, iParam3, 0);
}

int func_111(char* sParam0, int iParam1, bool bParam2)
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_50();
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
				func_49();
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
				if (func_48())
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
			if (func_47())
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
		func_52();
	}
	return 0;
}

bool func_112()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (!unk_0xCFC04A38F256EE06(iLocal_100))
	{
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iLocal_100))
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
		if (unk_0xDECA6CE314913AC1(unk_0xB90C4C04BACF96A1(iLocal_100, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0xB90C4C04BACF96A1(iLocal_100, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0xB90C4C04BACF96A1(iLocal_100, 31086, 0f, 0f, 0f) };
		if ((unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0xC2CECF0E5D6DD55B(unk_0xB90C4C04BACF96A1(iLocal_100, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x3A55B6AA596FF586(-1, unk_0xB90C4C04BACF96A1(iLocal_100, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_114())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0xFB900D9EE2ACC400(iLocal_100, 474215631) != 1)
			{
				if (func_113(iLocal_100))
				{
					unk_0x366AD87F9FB096E3(iLocal_100, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_113(int iParam0)
{
	if (func_100(iParam0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	if (func_100(iLocal_99))
	{
		if (func_106(iLocal_100, iLocal_99, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_115()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xC1EDB61CE0A4B94E(iLocal_100))
	{
		if (unk_0xCFC04A38F256EE06(iLocal_100))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0x1D58D319587D567F(iLocal_100, unk_0x06736567F820A39E(), 1) && unk_0x9C4162CAC2B459EC(iLocal_100))
			{
				bVar0 = true;
				unk_0xFE26A2643AFB7A3B(iLocal_100);
			}
			if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iLocal_100, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_116(iLocal_100, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_114())
		{
			bVar0 = false;
			if (unk_0xFB900D9EE2ACC400(iLocal_100, 474215631) != 1)
			{
				if (func_113(iLocal_100))
				{
					unk_0x366AD87F9FB096E3(iLocal_100, 2000);
				}
			}
		}
		else if (!unk_0xCFC04A38F256EE06(iLocal_99))
		{
			if (unk_0xFB900D9EE2ACC400(iLocal_99, 1805844857) == 7)
			{
				unk_0xD14E5ED9D5665519(iLocal_99, 17, 1);
				unk_0xD14E5ED9D5665519(iLocal_99, 13, 0);
				unk_0xFEDD46326A41DB46(iLocal_99, unk_0x06736567F820A39E(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_116(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_100(unk_0x06736567F820A39E()) && func_100(iParam0))
	{
		if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
		{
			return 1;
		}
		if (func_130(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
		{
			if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
			{
				Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) - unk_0xF4745590D18D14B8(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_129(unk_0x06736567F820A39E(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_117(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_100(unk_0x06736567F820A39E()) && func_100(iParam0))
	{
		if (func_128(iParam0) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
		{
			if (unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_118(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_118(int iParam0, float fParam1)
{
	return func_119(iParam0, unk_0x06736567F820A39E(), fParam1, 1, 250, 7);
}

bool func_119(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_127(iParam0, iParam1);
	if (!func_100(iParam0) || !func_100(iParam1))
	{
		if (iVar4 != -1)
		{
			func_126(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_123(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_122();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_120(&(Local_49[iVar4 /*4*/]), Var1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1ADBAAC322D61F73() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_120(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_100(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_121(iParam4, iParam7) };
		*uParam0 = unk_0x290E65F6C850B833(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x31BBF34543BA157F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x77CB3F400804EDD1(iVar7))
	{
		func_100(iVar7);
		if (unk_0x406B8F450D0105AB(iVar7) == iParam4)
		{
			if (bLocal_90)
			{
				unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x1ADBAAC322D61F73();
			return 1;
		}
		return 0;
	}
	if (unk_0xFCBEC4C2079B0872(iVar7))
	{
		func_100(iVar7);
		if (unk_0x0FDFEC0DD29106EE(iParam4, 0))
		{
			if (unk_0x43AB2E726FCE3BF7(iVar7) == unk_0x34E1EF1E8BCD1BFC(iParam4, 0))
			{
				if (bLocal_90)
				{
					unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x1ADBAAC322D61F73();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xA6055C735E3DD877(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF4745590D18D14B8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF4745590D18D14B8(iParam0, 1);
}

int func_122()
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

int func_123(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_125(unk_0xF4745590D18D14B8(iParam1, 1) - unk_0xF4745590D18D14B8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_125(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_124(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_124(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_125(struct<3> Param0)
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

void func_126(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
{
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iParam0) && unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x1210C9F87A32AFD5(iParam0) };
	Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) - unk_0xF4745590D18D14B8(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_130(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_100(unk_0x06736567F820A39E()) && func_100(iParam0))
	{
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_134(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_131(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x82D364243A5848A1(unk_0x06736567F820A39E()))
			{
				if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
				{
					if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fVar0, 1))
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
				if (func_134(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_131(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_132(iParam0, fParam1))
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
			if (func_132(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x8CE40F22CEFDEA99(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_133(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_125(Param1 - unk_0xF4745590D18D14B8(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_125(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_124(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
		{
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	if (bLocal_142 || unk_0xBDA1F5E8A36BFA07(iLocal_99, 0))
	{
		func_156(&uLocal_372, 0, 0);
	}
	else
	{
		func_136(&uLocal_372, iLocal_99, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_136(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_137(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_137(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_138(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_138(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
	{
		func_156(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_139(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_139(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_86(iVar0))
	{
		func_155();
	}
	if (func_154(iParam1) && unk_0x666D4D13AC213458(iParam1))
	{
		iVar1 = 0;
		if (unk_0x77CB3F400804EDD1(iParam1))
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
			if (func_149(uParam0, bParam7, bParam9, 0))
			{
				func_146(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_143(iVar0))
				{
					if ((unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0)) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
					{
						if ((iVar1 && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
						{
							if (!func_86(iVar0))
							{
								func_91(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
								{
									func_142(1);
								}
							}
						}
					}
				}
			}
			else if (func_143(iVar0))
			{
				if (unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0))
				{
					if (((unk_0xE72EEEBA742753B0(iParam1) && iVar1) && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
					{
						if (!func_86(iVar0))
						{
							func_91(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
							{
								func_142(1);
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
				if (func_86(sParam5))
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
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC32E6148FEFD72AD(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(6) == 3 || unk_0x20EC647BB13B981D(6) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x06071C128D7E648A(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(4) == 3 || unk_0x20EC647BB13B981D(4) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF090AA685D55F909(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(5) == 3 || unk_0x20EC647BB13B981D(5) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC1B8A2E022EFC2C3(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(2) == 3 || unk_0x20EC647BB13B981D(2) == 4)
					{
						func_156(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8997C0D6F8CACEDC() == 3 || unk_0x8997C0D6F8CACEDC() == 4)
				{
					func_156(uParam0, iVar0, 1);
				}
			}
			if (!func_149(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_141(uParam0))
				{
					func_140(uParam0);
				}
			}
		}
	}
	else
	{
		func_156(uParam0, iVar0, 0);
	}
}

void func_140(var uParam0)
{
	if (func_154(unk_0x06736567F820A39E()))
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

int func_141(var uParam0)
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

int func_142(bool bParam0)
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

int func_143(char* sParam0)
{
	if (!func_144(1, 1, 0))
	{
		if ((!unk_0x226FA58470A21AEF(sParam0) && func_86(sParam0)) || func_86("CMN_HINT"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return 0;
	}
	switch (Global_35742)
	{
		case 0:
		case 3:
			if (func_142(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_142(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_142(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_68(0))
	{
		return 0;
	}
	if (func_145())
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

bool func_145()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

void func_146(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		func_156(uParam0, 0, 0);
	}
	if (func_55(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x77CB3F400804EDD1(iParam1))
		{
			uVar0 = unk_0x406B8F450D0105AB(iParam1);
			if (!unk_0x0FDFEC0DD29106EE(uVar0, 0))
			{
				if (unk_0x4E75E5867592AC01(iVar0))
				{
					if (!func_147())
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

bool func_147()
{
	return func_148(unk_0xE0BDAFA1A39552D6());
}

int func_148(var uParam0)
{
	if (unk_0x79469DA5833EACA8(unk_0x44A9253132E1DDE0(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_149(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_153(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_153(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_141(uParam0))
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
						if (!func_153(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1ADBAAC322D61F73();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_153(bParam1, bParam2, bParam3))
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
					if (!func_153(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_152(bParam1, bParam2, bParam3) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
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
				else if (!func_153(bParam1, bParam2, bParam3))
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
						if (func_151(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || func_150(bParam1, bParam2, bParam3))
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
					else if (func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_141(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_144(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_155();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_144(bParam0, bParam1, bParam2))
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

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_144(bParam0, bParam1, bParam2))
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

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_144(bParam0, bParam1, bParam2))
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

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_144(bParam0, bParam1, bParam2))
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

int func_154(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
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

void func_155()
{
	unk_0xE27C8E42A97895CF(&Global_2284, 4);
}

void func_156(var uParam0, int iParam1, int iParam2)
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
		if (func_86(uParam0->f_3))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
	if (!unk_0x60D87DA27F70EBBC(sVar0))
	{
		if (func_86(sVar0))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
}

float func_157(int iParam0, struct<3> Param1, int iParam4)
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

int func_158(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 1 || unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_159(char* sParam0)
{
	func_160(sParam0);
}

void func_160(char* sParam0)
{
	if (unk_0x2F6869889D97DFED(sParam0, sParam0))
	{
	}
}

void func_161(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_162()
{
	unk_0xD6763C9F81772BAE(&uLocal_105);
	unk_0x608A9ECA218C4D24(0, iLocal_99, 750);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x28B5966B12DC5B0F(0, cLocal_368, sLocal_371, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x6F275D9063DAF754(uLocal_105);
	unk_0x457C4844450FF70E(iLocal_100, uLocal_105);
	unk_0xDD1A4EE55D86FE71(&uLocal_105);
	if (unk_0xCDB4C4200A9B478A(iLocal_102))
	{
		unk_0x2239ED27B231AE2E(&iLocal_102);
	}
	if (!unk_0xCDB4C4200A9B478A(iLocal_103))
	{
		iLocal_103 = func_93(iLocal_99, 1, 0);
	}
	unk_0xF9737DB27C84BFEE(iLocal_103, 1);
	unk_0xC3A9543A81E69268(0);
	unk_0x71543B3C24188223(0.1f);
	func_109();
	if ((unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0xA1F52EC3ECE1D42E(Local_95, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0xA1F52EC3ECE1D42E(Local_95, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_106(unk_0x06736567F820A39E(), iLocal_100, 1) < 50f)
		{
			func_110(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0);
			iLocal_137 = 1;
		}
	}
	iLocal_110 = unk_0x1ADBAAC322D61F73();
	unk_0xC1B1E9A034A63A62(0);
	if (func_100(unk_0x06736567F820A39E()))
	{
		unk_0x66ADFA638E00731E(unk_0x06736567F820A39E(), 1);
	}
	func_163(1);
}

int func_163(int iParam0)
{
	if (func_165())
	{
		Global_101176 = 1;
		Global_101173 = unk_0x1ADBAAC322D61F73();
		if (func_164(Global_101175))
		{
			func_90(0);
		}
		unk_0xEEAF3825AA9B5231(1, "RE_TITLE");
		if (iParam0 && func_164(Global_101175))
		{
			unk_0xCB8EBF02739FC8EA();
		}
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
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

int func_165()
{
	switch (func_166(&Global_25211, 0, 5, 0, unk_0xAE832DCCE9CD3242()))
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

int func_166(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_170(0))
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
		if (!func_168(iParam2))
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
			func_167(uParam0, iParam4);
		}
	}
	return 2;
}

void func_167(var uParam0, int iParam1)
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

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_35742);
}

int func_169(int iParam0, int iParam1)
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

int func_170(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_171()
{
	if (iLocal_346 == -1)
	{
		if (unk_0x8B2DC483C96C65F6())
		{
			if (unk_0xE72EEEBA742753B0(iLocal_99))
			{
				iLocal_346 = unk_0x1ADBAAC322D61F73();
			}
		}
	}
	else if (unk_0x1ADBAAC322D61F73() > iLocal_346 + 1000)
	{
		return 1;
	}
	if (unk_0x3A55B6AA596FF586(-1, Local_95, 50f))
	{
		return 1;
	}
	if ((unk_0x1ADBAAC322D61F73() - iLocal_347) > 30000)
	{
		if (!unk_0x8831C606DC492098(iLocal_99))
		{
			return 1;
		}
		else
		{
			func_254();
		}
	}
	if (unk_0xCDB4C4200A9B478A(iLocal_103))
	{
		if ((unk_0xA1F52EC3ECE1D42E(Local_95, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0xA1F52EC3ECE1D42E(Local_95, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0xA1F52EC3ECE1D42E(Local_95, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x7515D29C901C4E76(unk_0xF4745590D18D14B8(iLocal_99, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_172()
{
	if (unk_0x2A488C176D52CCA5(Local_95, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0xCDB4C4200A9B478A(iLocal_103))
		{
			if (func_100(iLocal_100) && func_100(unk_0x06736567F820A39E()))
			{
				if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_103 = func_93(iLocal_99, 1, 0);
					unk_0xF9737DB27C84BFEE(iLocal_103, 0);
				}
			}
		}
		else
		{
			func_107(iLocal_103, &uLocal_114);
		}
	}
	else if (!unk_0xCDB4C4200A9B478A(iLocal_103))
	{
		if (func_100(iLocal_100) && func_100(unk_0x06736567F820A39E()))
		{
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_100, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_103 = func_93(iLocal_99, 1, 0);
				unk_0xF9737DB27C84BFEE(iLocal_103, 0);
			}
		}
	}
	else
	{
		func_107(iLocal_103, &uLocal_114);
	}
	if (iLocal_347 == -1)
	{
		iLocal_347 = unk_0x1ADBAAC322D61F73();
	}
}

int func_173()
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
		func_197();
		if (unk_0x2A488C176D52CCA5(Local_95, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_118 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_124 = 196f;
			Local_121 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_125 = 160.391f;
			Local_348 = { -259.0351f, -865.7119f, 28f };
			Local_351 = { -130.3981f, -908.8096f, 40f };
			unk_0x01E44CA98B5D791A("ATM_1");
			unk_0xBECC89ACB4E5D4ED(iLocal_158);
			while (!unk_0x5C9FE32E2FF37989(iLocal_158))
			{
				if (func_184())
				{
					func_254();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x2CC3164B94BF6E73(iLocal_158, 1);
		}
		else
		{
			Local_118 = { -2968.5f, 494.48f, 14.82f };
			fLocal_124 = 55.24f;
			Local_121 = { -2973.03f, 496.38f, 14.96f };
			fLocal_125 = 3.18f;
			Local_348 = { -259.0351f, -865.7119f, 28f };
			Local_351 = { -130.3981f, -908.8096f, 40f };
			unk_0xBECC89ACB4E5D4ED(iLocal_158);
			while (!unk_0x5C9FE32E2FF37989(iLocal_158))
			{
				if (func_184())
				{
					func_254();
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x2CC3164B94BF6E73(iLocal_158, 1);
		}
	}
	else if (iLocal_109 == 2)
	{
		func_197();
		Local_118 = { 283.31f, -1249.51f, 28.95f };
		fLocal_124 = 78.25f;
		Local_121 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_125 = 75.9756f;
		Local_348 = { 266.3643f, -1313.829f, 28.59103f };
		Local_351 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xBECC89ACB4E5D4ED(iLocal_158);
		while (!unk_0x5C9FE32E2FF37989(iLocal_158))
		{
			if (func_184())
			{
				func_254();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2CC3164B94BF6E73(iLocal_158, 1);
	}
	else if (iLocal_109 == 3)
	{
		func_197();
		Local_121 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_125 = 327f;
		Local_348 = { -1596.203f, -474.8844f, 32f };
		Local_351 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_109 == 4)
	{
		func_197();
		Local_118 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_124 = 182f;
		Local_121 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_125 = 165f;
		Local_348 = { 178.1817f, 6660.375f, 31f };
		Local_351 = { 179.1249f, 6530.043f, 38f };
		unk_0xC9616AA5F8E9E811(0);
		unk_0x41BBA77D020A0CEB(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0xBECC89ACB4E5D4ED(iLocal_158);
		while (!unk_0x5C9FE32E2FF37989(iLocal_158))
		{
			if (func_184())
			{
				func_254();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2CC3164B94BF6E73(iLocal_158, 1);
	}
	else if (iLocal_109 == 5)
	{
		func_197();
	}
	if (func_175())
	{
		unk_0x79D9EC458879E8B8(Local_95, Var6.f_0, 0, 0, 0, 0);
		uLocal_107 = unk_0x33189531E55C7E33(Local_95 - Var6, Local_95 + Var6, 0, 1, 1, 1);
		iLocal_100 = unk_0xB500796AAD639F82(5, iLocal_157, Local_95, uLocal_98, 1, 1);
		unk_0xD14E5ED9D5665519(iLocal_100, 13, 0);
		unk_0xD14E5ED9D5665519(iLocal_100, 11, 1);
		unk_0xD14E5ED9D5665519(iLocal_100, 17, 0);
		unk_0x47222A663B914109(iLocal_100, 6, 1, 0, 0);
		unk_0x215FFA3EE011BA3C(iLocal_100, 1);
		unk_0x1BBC7C4B775BFAAD(iLocal_100, 1);
		unk_0xA26A1133034ECD59(iLocal_100, 0);
		unk_0x0AB51FD6583D814C(iLocal_100, sLocal_367);
		unk_0x194510CFB3606077(iLocal_100, 0);
		if (iLocal_115 == 1)
		{
			unk_0x47222A663B914109(iLocal_100, 0, 0, 0, 0);
			unk_0x47222A663B914109(iLocal_100, 2, 0, 1, 0);
			unk_0x47222A663B914109(iLocal_100, 3, 0, 1, 0);
			unk_0x47222A663B914109(iLocal_100, 4, 0, 2, 0);
		}
		iLocal_99 = unk_0xB500796AAD639F82(22, iLocal_156, Local_95, 0, 1, 1);
		unk_0xD14E5ED9D5665519(iLocal_99, 17, 1);
		unk_0xD14E5ED9D5665519(iLocal_99, 13, 0);
		unk_0xD14E5ED9D5665519(iLocal_99, 6, 1);
		unk_0x6E2532A21AB2C125(iLocal_99, 128, 1);
		unk_0x215FFA3EE011BA3C(iLocal_99, 1);
		unk_0xBA63517ADBC1E5E3(iLocal_99, 1);
		unk_0x6553935614875699(iLocal_99, 42, 1);
		unk_0x6553935614875699(iLocal_99, 281, 1);
		unk_0x6553935614875699(iLocal_99, 172, 0);
		unk_0x6553935614875699(iLocal_99, 137, 1);
		unk_0x960711B13846DF2F(iLocal_99);
		unk_0x0AB51FD6583D814C(iLocal_99, sLocal_366);
		unk_0x61D7C8D2DB2887AA(iLocal_99, 1);
		unk_0x7C15BF0B58B608BA(iLocal_99, unk_0xF7CF52D5D69E32BB(cLocal_144, "b_atm_mugging", Var0, Var3, 0, 2), 0, 0, 1);
		Var9 = { unk_0xF368E2B5887962DB(cLocal_144, "b_atm_mugging", Var0, Var3, 0, 2) };
		unk_0xEF32567B3A5047F5(iLocal_99, Var9.f_2);
		if (func_100(iLocal_100))
		{
			if (unk_0xFB27C72734065835(iLocal_100))
			{
				unk_0x7C15BF0B58B608BA(iLocal_100, unk_0xF7CF52D5D69E32BB("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0xF368E2B5887962DB("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2) };
			}
			else
			{
				unk_0x7C15BF0B58B608BA(iLocal_100, unk_0xF7CF52D5D69E32BB("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { unk_0xF368E2B5887962DB("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2) };
			}
			unk_0xEF32567B3A5047F5(iLocal_100, Var9.f_2);
		}
		unk_0x28B5966B12DC5B0F(iLocal_99, cLocal_144, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xFB27C72734065835(iLocal_100))
		{
			unk_0x28B5966B12DC5B0F(iLocal_100, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6B09668CBB188BED("random@atmrobberygen@female");
		}
		else
		{
			unk_0x28B5966B12DC5B0F(iLocal_100, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6B09668CBB188BED("random@atmrobberygen@male");
		}
		unk_0xE8F16DB86D0CC8C9(iLocal_99, 1);
		unk_0xBA63517ADBC1E5E3(iLocal_100, 1);
		unk_0xF0683EF788D4342B(iLocal_99, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x69B86C49D9D24334(iLocal_99, joaat("weapon_pistol"), 34);
		unk_0xDC8345A5D9F4B348(iLocal_99, joaat("weapon_pistol"), 0);
		unk_0x7D86F9C4E675434D(iLocal_99, 1, 0);
		switch (func_30())
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
		func_174(&Local_159, 0, unk_0x06736567F820A39E(), sLocal_324, 0, 1);
		func_174(&Local_159, 1, iLocal_100, sLocal_326, 0, 1);
		func_174(&Local_159, 2, iLocal_99, "ATMRobber", 0, 1);
		if (iLocal_109 == 1 || iLocal_109 == 2)
		{
			iLocal_117 = unk_0x75409DE1FC985A9D(iLocal_158, Local_118, fLocal_124, 1, 1);
			unk_0x68018E1A807B2CF1(iLocal_117, 1, 1, 0);
			unk_0xA05011CDAF5DD6A1(iLocal_117);
			unk_0xB7768D1080F53979(iLocal_117, 1);
			if (iLocal_109 == 2)
			{
				unk_0xFAE5DD72895807B1(iLocal_117, 0, 0, 0);
			}
			else if (iLocal_109 == 1)
			{
				unk_0x711BF7DCF9AE7AC2(iLocal_99, 0);
				unk_0x6D515FB30F3EFA74(iLocal_99, 3);
			}
			else if (iLocal_109 == 4)
			{
				unk_0x818E8D7BA45E01E7(iLocal_117, 3);
			}
		}
		unk_0x6553935614875699(unk_0x06736567F820A39E(), 32, 0);
		return 1;
	}
	else if (func_184())
	{
		func_254();
	}
	return 0;
}

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_175()
{
	unk_0x198E497B820DA913("random@atmrobberygen@male");
	unk_0x198E497B820DA913("random@atmrobberygen@female");
	if (!iLocal_133)
	{
		func_183(&Local_384, 3);
		Local_384.f_146 = unk_0x58269F25C361D8C5();
		func_182(&Local_384, iLocal_156);
		func_182(&Local_384, iLocal_157);
		func_182(&Local_384, iLocal_153);
		func_182(&Local_384, iLocal_154);
		func_180(&Local_384, cLocal_144);
		func_180(&Local_384, cLocal_368);
		func_180(&Local_384, cLocal_362);
		func_180(&Local_384, cLocal_145);
		iLocal_133 = 1;
	}
	if ((unk_0x7B43775D6E0D7325("random@atmrobberygen@male") && unk_0x7B43775D6E0D7325("random@atmrobberygen@female")) && func_176(&Local_384))
	{
		return 1;
	}
	return 0;
}

int func_176(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_177(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_177(var uParam0)
{
	return func_178(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_178(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(iParam0, 30))
	{
		if (unk_0x7DA173D4FD42F36B(iParam0, 29))
		{
			switch (func_179(iParam0))
			{
				case 0:
					return unk_0x5C9FE32E2FF37989(iParam2);
					break;
				
				case 1:
					return unk_0x7B43775D6E0D7325(sParam1);
					break;
				
				case 2:
					return unk_0xA1BA689A4F0EEFFA(sParam1);
					break;
				
				case 3:
					return unk_0xF3DECB9D15F48CFF(sParam1);
					break;
				
				case 4:
					return unk_0xD71BD2B3964F6EDA(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x2AC46029737589CC(sParam1);
					break;
				
				case 6:
					return unk_0x63BA14E731F141F2(sParam1, unk_0x7DA173D4FD42F36B(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x9FEA346640601D2C(iParam2);
					break;
				
				case 8:
					return unk_0x7710127C9E7C52D8(iParam2);
					break;
				
				case 9:
					return unk_0x137D26BF6B6827A1();
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

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7DA173D4FD42F36B(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_180(var uParam0, char* sParam1)
{
	func_181(uParam0, 1, -1, sParam1, 0);
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x2F6869889D97DFED(sParam3, "NULL"))
					{
						if (unk_0x2F6869889D97DFED(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xE27C8E42A97895CF(uParam0[iVar0 /*18*/], iParam1);
			unk_0xE27C8E42A97895CF(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_182(var uParam0, int iParam1)
{
	func_181(uParam0, 0, iParam1, "NULL", 0);
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_184()
{
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_91) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_185(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_185(float fParam0, bool bParam1)
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
		if (func_32(func_30()))
		{
			iVar36 = func_191();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 2) && !unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 3))
				{
					func_186(iVar32, &Var0);
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

void func_186(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_187(uParam1, "Abigail1", func_189(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 1:
			func_187(uParam1, "Abigail2", func_189(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 2:
			func_187(uParam1, "Barry1", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 3:
			func_187(uParam1, "Barry2", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 4:
			func_187(uParam1, "Barry3", func_189(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 5:
			func_187(uParam1, "Barry3A", func_189(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 6:
			func_187(uParam1, "Barry3C", func_189(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 7:
			func_187(uParam1, "Barry4", func_189(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_188(iParam0), 0, 0);
			break;
		
		case 8:
			func_187(uParam1, "Dreyfuss1", func_189(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 9:
			func_187(uParam1, "Epsilon1", func_189(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 10:
			func_187(uParam1, "Epsilon2", func_189(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 11:
			func_187(uParam1, "Epsilon3", func_189(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 12:
			func_187(uParam1, "Epsilon4", func_189(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 13:
			func_187(uParam1, "Epsilon5", func_189(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 14:
			func_187(uParam1, "Epsilon6", func_189(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 15:
			func_187(uParam1, "Epsilon7", func_189(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 16:
			func_187(uParam1, "Epsilon8", func_189(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 17:
			func_187(uParam1, "Extreme1", func_189(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 18:
			func_187(uParam1, "Extreme2", func_189(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 19:
			func_187(uParam1, "Extreme3", func_189(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 20:
			func_187(uParam1, "Extreme4", func_189(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 21:
			func_187(uParam1, "Fanatic1", func_189(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_188(iParam0), 1, 0);
			break;
		
		case 22:
			func_187(uParam1, "Fanatic2", func_189(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_188(iParam0), 1, 0);
			break;
		
		case 23:
			func_187(uParam1, "Fanatic3", func_189(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_188(iParam0), 0, 1);
			break;
		
		case 24:
			func_187(uParam1, "Hao1", func_189(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_188(iParam0), 0, 1);
			break;
		
		case 25:
			func_187(uParam1, "Hunting1", func_189(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 26:
			func_187(uParam1, "Hunting2", func_189(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 27:
			func_187(uParam1, "Josh1", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 28:
			func_187(uParam1, "Josh2", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 29:
			func_187(uParam1, "Josh3", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 30:
			func_187(uParam1, "Josh4", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 31:
			func_187(uParam1, "Maude1", func_189(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 32:
			func_187(uParam1, "Minute1", func_189(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 33:
			func_187(uParam1, "Minute2", func_189(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 34:
			func_187(uParam1, "Minute3", func_189(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 35:
			func_187(uParam1, "MrsPhilips1", func_189(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 36:
			func_187(uParam1, "MrsPhilips2", func_189(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 37:
			func_187(uParam1, "Nigel1", func_189(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 38:
			func_187(uParam1, "Nigel1A", func_189(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 39:
			func_187(uParam1, "Nigel1B", func_189(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 40:
			func_187(uParam1, "Nigel1C", func_189(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 41:
			func_187(uParam1, "Nigel1D", func_189(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
		
		case 42:
			func_187(uParam1, "Nigel2", func_189(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 43:
			func_187(uParam1, "Nigel3", func_189(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
		
		case 44:
			func_187(uParam1, "Omega1", func_189(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 45:
			func_187(uParam1, "Omega2", func_189(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 46:
			func_187(uParam1, "Paparazzo1", func_189(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 47:
			func_187(uParam1, "Paparazzo2", func_189(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 48:
			func_187(uParam1, "Paparazzo3", func_189(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 49:
			func_187(uParam1, "Paparazzo3A", func_189(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 50:
			func_187(uParam1, "Paparazzo3B", func_189(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 51:
			func_187(uParam1, "Paparazzo4", func_189(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 52:
			func_187(uParam1, "Rampage1", func_189(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 54:
			func_187(uParam1, "Rampage3", func_189(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 55:
			func_187(uParam1, "Rampage4", func_189(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 56:
			func_187(uParam1, "Rampage5", func_189(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
		
		case 53:
			func_187(uParam1, "Rampage2", func_189(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
		
		case 57:
			func_187(uParam1, "TheLastOne", func_189(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 58:
			func_187(uParam1, "Tonya1", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 59:
			func_187(uParam1, "Tonya2", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 60:
			func_187(uParam1, "Tonya3", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 61:
			func_187(uParam1, "Tonya4", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		case 62:
			func_187(uParam1, "Tonya5", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_187(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_188(int iParam0)
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

struct<2> func_189(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_190(iParam0) };
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

struct<2> func_190(int iParam0)
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

int func_191()
{
	func_31();
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

int func_192()
{
	if (func_195() && !func_196())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_100904 > 0;
}

int func_194()
{
	if (Global_88565 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
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

void func_197()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_115 == 0 && iLocal_109 == 5)
	{
		iLocal_115 = unk_0xA6055C735E3DD877(1, 5);
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
			switch (func_30())
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
				iVar0 = unk_0xA6055C735E3DD877(0, 3);
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
					bVar1 = func_198();
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
			switch (func_30())
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
			switch (func_30())
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
				iVar0 = unk_0xA6055C735E3DD877(0, 3);
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
					bVar2 = func_198();
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
			switch (func_30())
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
				iVar0 = unk_0xA6055C735E3DD877(0, 3);
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
					bVar3 = func_198();
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
	if (unk_0xA1F52EC3ECE1D42E(Local_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_354 = { -197.64f, -863.25f, 28.33f };
		fLocal_357 = 334.5007f;
		Local_358 = { -187.24f, -856.77f, 28.97f };
		fLocal_361 = 162.69f;
		iLocal_116 = 1;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_354 = { 286.5f, -1256.73f, 28.29f };
		fLocal_357 = 167.3216f;
		Local_358 = { 250.55f, -1239.27f, 28.84f };
		fLocal_361 = 265.51f;
		iLocal_116 = 2;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_354 = { -3044.66f, 595.7f, 6.59f };
		fLocal_357 = 296.7338f;
		Local_358 = { -3037.55f, 608.53f, 7.34f };
		fLocal_361 = 202.3f;
		iLocal_116 = 3;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_354 = { 175.57f, 6636.58f, 30.57f };
		fLocal_357 = 260.4868f;
		Local_358 = { 188.97f, 6616.2f, 31.48f };
		fLocal_361 = 93.97f;
		iLocal_116 = 4;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_354 = { 23.65f, -948.26f, 28.36f };
		fLocal_357 = 258.8732f;
		Local_358 = { 22.19f, -955.82f, 28.94f };
		fLocal_361 = 70.66f;
		iLocal_116 = 6;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_354 = { 294.64f, -893.6f, 28.18f };
		fLocal_357 = 156.7222f;
		Local_358 = { 286.4f, -897.28f, 28.57f };
		fLocal_361 = 341.97f;
		iLocal_116 = 8;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_354 = { 1077.64f, -773.86f, 57.09f };
		fLocal_357 = 275.6593f;
		Local_358 = { 1081.93f, -764.08f, 57.35f };
		fLocal_361 = 268.57f;
		iLocal_116 = 11;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_354 = { -2074.93f, -316.75f, 12.16f };
		fLocal_357 = 157.3363f;
		Local_358 = { -2101.2f, -293.74f, 12.74f };
		fLocal_361 = 263.12f;
		iLocal_116 = 16;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_354 = { -819.39f, -1084.12f, 10.03f };
		fLocal_357 = 236.6294f;
		Local_358 = { -803.18f, -1075.91f, 11.13f };
		fLocal_361 = 209.53f;
		iLocal_116 = 17;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_354 = { -712.88f, -820.47f, 22.61f };
		fLocal_357 = 268.2568f;
		Local_358 = { -721.63f, -826.84f, 22.82f };
		fLocal_361 = 93.14f;
		iLocal_116 = 18;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_354 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_357 = 223.2838f;
		Local_358 = { -406.23f, 6045.69f, 31.06f };
		fLocal_361 = 229.52f;
		iLocal_116 = 19;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_354 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_357 = 286.139f;
		Local_358 = { -304.56f, -840.76f, 31.26f };
		fLocal_361 = 77.59f;
		iLocal_116 = 22;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_354 = { -253.51f, -689.26f, 32.57f };
		fLocal_357 = 209.9227f;
		Local_358 = { -250.91f, -684.01f, 33f };
		fLocal_361 = 230.65f;
		iLocal_116 = 23;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_354 = { 88.7f, 0.01f, 67.38f };
		fLocal_357 = 71.0114f;
		Local_358 = { 91.35f, -7.07f, 67.82f };
		fLocal_361 = 70.28f;
		iLocal_116 = 25;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_354 = { -530.11f, -1217.33f, 17.26f };
		fLocal_357 = 53.768f;
		Local_358 = { -522.45f, -1196.35f, 18.45f };
		fLocal_361 = 297.22f;
		iLocal_116 = 30;
	}
	else if (unk_0xA1F52EC3ECE1D42E(Local_95, -2956.78f, 488.19f, 14.47f, 1) < 5f)
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

int func_198()
{
	if (unk_0x7DA173D4FD42F36B(unk_0xA6055C735E3DD877(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (!func_168(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_185(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	if ((Global_101175 == func_201() && unk_0x8B2C262B815BC3D1()) && Global_101176)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x47B34031F915C179(), 64);
	uVar16 = func_202(Var0);
	return uVar16;
}

int func_202(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_203(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x58269F25C361D8C5() >= (uParam0->f_146 + uParam0->f_147) || unk_0x7DA173D4FD42F36B(Global_91310.f_20, 2)) || unk_0x7DA173D4FD42F36B(Global_91310.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 29))
					{
						func_204(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x58269F25C361D8C5();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_204(var uParam0)
{
	func_205(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_205(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 30))
	{
		switch (func_179(*uParam0))
		{
			case 0:
				unk_0xBECC89ACB4E5D4ED(uParam2);
				break;
			
			case 1:
				unk_0x198E497B820DA913(uParam1);
				break;
			
			case 2:
				unk_0xEF31CD7E99173A29(sParam1);
				break;
			
			case 3:
				unk_0xC35C76B8E0A47F9F(sParam1, unk_0x7DA173D4FD42F36B(*uParam0, 28));
				break;
			
			case 4:
				unk_0x59D46EE810784603(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x53CCB63EA1A462EE(sParam1);
				break;
			
			case 6:
				unk_0x63BA14E731F141F2(sParam1, unk_0x7DA173D4FD42F36B(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xCEDDB3DA12B8D291(iParam2);
				break;
			
			case 8:
				unk_0x18DF389F542183A3(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x400383B21251468A();
				break;
			
			default:
				break;
		}
		unk_0xE27C8E42A97895CF(uParam0, 29);
	}
}

void func_206(int iParam0, var uParam1)
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
				if (unk_0x736983525DD90B1D(iParam0) != 255)
				{
					unk_0x7535364E752B61AE(iParam0, 255);
				}
			}
			else if (unk_0x736983525DD90B1D(iParam0) != 0)
			{
				unk_0x7535364E752B61AE(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x736983525DD90B1D(iParam0) != 255)
			{
				unk_0x7535364E752B61AE(iParam0, 255);
			}
		}
	}
}

void func_207()
{
}

void func_208()
{
}

void func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_211(iParam0);
	unk_0x3DD2E6934C5B4B1B(0);
	unk_0xCD2EAE5EF958BEB1(1);
	Global_101172 = 0;
	func_210();
}

void func_210()
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

void func_211(int iParam0)
{
	Global_101175 = iParam0;
}

int func_212(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_201();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_253())
		{
			return 0;
		}
	}
	Local_91 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_196())
			{
				return 0;
			}
		}
		if (!Global_101186.f_7851)
		{
			return 0;
		}
		if (func_252(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_251())
		{
			return 0;
		}
		if (Global_101175 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_185(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_91.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_250(iParam3))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_249(func_30()) == 4 || func_249(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_248(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_247(Global_101186.f_29596.f_43[iParam3]))
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
		if (func_246())
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
		if (!func_237(4))
		{
			return 0;
		}
		if (!func_168(5))
		{
			return 0;
		}
		if (func_236(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_236(0, 0))
		{
			return 0;
		}
		if (Global_25298)
		{
			return 0;
		}
		if (func_250(30) && !func_236(30, 0))
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
				Var5 = { Global_101186.f_1902.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101186.f_1902.f_539.f_1524[iVar4];
				if (func_235(iVar8))
				{
					if (func_213(iVar4))
					{
						if (!func_55(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var5) < (210f * 210f))
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

bool func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101186.f_1902.f_539.f_1524[iParam0];
	return func_214(iVar0);
}

int func_214(int iParam0)
{
	return func_215(iParam0, 1);
}

int func_215(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_235(iParam0))
	{
		return 0;
	}
	func_216(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_217(func_228(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_227(iParam0, iParam1))
	{
		iVar0 = func_226(iParam1);
		iVar1 = func_224(iParam0);
		iVar2 = (func_224(iParam0) - func_224(iParam1));
		iVar3 = (func_226(iParam0) - func_226(iParam1));
		iVar4 = (func_223(iParam0) - func_223(iParam1));
		iVar5 = (func_222(iParam0) - func_222(iParam1));
		iVar6 = (func_221(iParam0) - func_221(iParam1));
		iVar7 = (func_220(iParam0) - func_220(iParam1));
	}
	else
	{
		iVar0 = func_226(iParam0);
		iVar1 = func_224(iParam1);
		iVar2 = (func_224(iParam1) - func_224(iParam0));
		iVar3 = (func_226(iParam1) - func_226(iParam0));
		iVar4 = (func_223(iParam1) - func_223(iParam0));
		iVar5 = (func_222(iParam1) - func_222(iParam0));
		iVar6 = (func_221(iParam1) - func_221(iParam0));
		iVar7 = (func_220(iParam1) - func_220(iParam0));
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
		iVar4 = (iVar4 + func_219(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_218(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_218(float fParam0, float fParam1, float fParam2)
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

int func_219(int iParam0, int iParam1)
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

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_223(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_224(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_225(unk_0x7DA173D4FD42F36B(iParam0, 31), -1, 1)) + 2011;
}

int func_225(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_226(int iParam0)
{
	return iParam0 & 15;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_235(iParam1) || !func_235(iParam0))
	{
		return 1;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_228()
{
	var uVar0;
	
	func_234(&uVar0, unk_0xF14A94DD5AC25E5A());
	func_233(&uVar0, unk_0x4DD90C24B73F9042());
	func_232(&uVar0, unk_0xEC5C0F25A9A364A0());
	func_231(&uVar0, unk_0xED13857F967C0912());
	func_230(&uVar0, unk_0x39BDC971C31BA81C());
	func_229(&uVar0, unk_0x6EBF2ECA5972D1E7());
	return uVar0;
}

void func_229(var uParam0, int iParam1)
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

void func_230(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_224(*uParam0);
	if (iParam1 < 1 || iParam1 > func_219(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_233(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_235(int iParam0)
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
	iVar0 = func_220(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_221(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_222(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_224(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_226(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_223(iParam0);
	if (iVar5 < 1 || iVar5 > func_219(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_236(int iParam0, int iParam1)
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29596.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
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
						if (((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_245()) || Global_100233) || Global_25154) || func_244()) || func_51(8, -1)) || func_243()) || func_242()) || func_241()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1) || func_245()) || Global_25154) || func_244()) || func_51(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_245()) || Global_100233) || Global_25154) || func_244()) || func_51(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5) || Global_36289 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_245()) || Global_100233) || Global_25154) || func_244()) || func_51(8, -1)) || func_243()) || func_242()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_245() || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || func_51(8, -1)) || func_240()) || func_239()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_243()) || func_242()) || func_239()) || func_238())
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
							if ((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_245()) || Global_25154) || func_244()) || func_51(8, -1)) || func_242()) || func_241()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || func_245()) || func_242()) || Global_100233) || Global_25154) || func_244()) || Global_36870) || func_51(8, -1)) || func_241()) || func_239()) || func_240()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0)) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_245()) || Global_100233) || Global_25154) || func_244()) || func_51(8, -1)) || func_241()) || func_239()) || func_243()) || func_242()) || func_240())
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

var func_238()
{
	return Global_91349.f_1;
}

int func_239()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 13);
	}
	return 0;
}

int func_240()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_241()
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

bool func_242()
{
	return Global_91362.f_297 > 0;
}

bool func_243()
{
	return Global_91362.f_296 > 0;
}

var func_244()
{
	return Global_1315913;
}

int func_245()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

int func_246()
{
	func_49();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return func_227(func_228(), iParam0);
}

int func_248(int iParam0, int iParam1, int iParam2)
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

int func_249(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_101186.f_6454.f_919[iParam0];
}

bool func_250(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_253())
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

int func_251()
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

bool func_252(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

int func_253()
{
	int iVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		if (unk_0x8885412CB28B8667())
		{
			if (unk_0x85D4C81816DC7E73())
			{
				unk_0xFF4D252D25F54A29(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xE27C8E42A97895CF(&iVar0, 2);
				unk_0xE27C8E42A97895CF(&iVar0, 4);
				unk_0xE27C8E42A97895CF(&iVar0, 6);
				unk_0xE27C8E42A97895CF(&Global_25, 2);
				unk_0xE27C8E42A97895CF(&Global_25, 4);
				unk_0xE27C8E42A97895CF(&Global_25, 6);
				unk_0x57B5A527FBAC251E(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

void func_254()
{
	if (bLocal_339)
	{
		if (unk_0x1B6292EA51632C25(iLocal_117, 0))
		{
			if (unk_0x50FC0E6FE77AD137(iLocal_117))
			{
				unk_0x4E9000E5E76332B4(iLocal_117);
			}
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_99))
	{
		unk_0x5318F6C4C2B82FA7(&iLocal_99);
	}
	unk_0x13506ECCCD4E72E8(0);
	if (iLocal_113 != 0)
	{
		unk_0x002592D6ED6E951E(iLocal_113);
	}
	unk_0x13506ECCCD4E72E8(0);
	if (!unk_0xCFC04A38F256EE06(iLocal_100))
	{
		unk_0xBA63517ADBC1E5E3(iLocal_100, 0);
		unk_0xA26A1133034ECD59(iLocal_100, 1);
		unk_0x5318F6C4C2B82FA7(&iLocal_100);
	}
	if (iLocal_109 == 4)
	{
		unk_0x41BBA77D020A0CEB(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_156(&uLocal_372, 0, 0);
	if (func_200())
	{
		unk_0x71543B3C24188223(1f);
	}
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0x66ADFA638E00731E(unk_0x06736567F820A39E(), 0);
	}
	func_267(&Local_384, 0);
	func_255(-1);
	unk_0xC9616AA5F8E9E811(1);
	unk_0x8659A4920DA95096(uLocal_107, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_255(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_260(iParam0);
		unk_0xEEAF3825AA9B5231(0, 0);
		Global_101177 = unk_0x1ADBAAC322D61F73();
		func_259(30000);
		StringCopy(&cVar0, func_258(Global_101175, 1), 64);
		if (func_257(Global_101175) > 0)
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
	func_256(&Global_25211);
	Global_101176 = 0;
	func_211(-1);
}

void func_256(var uParam0)
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

int func_257(int iParam0)
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

char* func_258(int iParam0, bool bParam1)
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

void func_259(int iParam0)
{
	Global_36293 = (unk_0x1ADBAAC322D61F73() + iParam0);
}

void func_260(int iParam0)
{
	func_261(iParam0, 0, func_266(iParam0));
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_228();
	func_264(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_263(iParam0, &uVar0);
	Var1 = { func_262(&uVar0) };
}

struct<16> func_262(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_226(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_224(*uParam0), 64);
	return Var0;
}

void func_263(int iParam0, var uParam1)
{
	Global_101186.f_29596.f_43[iParam0] = *uParam1;
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_224(*uParam0);
	iVar1 = func_226(*uParam0);
	iVar2 = func_223(*uParam0);
	iVar3 = func_222(*uParam0);
	iVar4 = func_221(*uParam0);
	iVar5 = func_220(*uParam0);
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
	iVar6 = func_219(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_219(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_265(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_234(uParam0, iParam1);
	func_233(uParam0, iParam2);
	func_232(uParam0, iParam3);
	func_230(uParam0, iParam5);
	func_231(uParam0, iParam4);
	func_229(uParam0, iParam6);
}

int func_266(int iParam0)
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

void func_267(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_269(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_268(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_268(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x7DA173D4FD42F36B((*uParam0)[iVar0 /*18*/], 30))
		{
			func_270(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_270(var uParam0)
{
	func_271(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_271(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x7DA173D4FD42F36B(uParam0, 30))
	{
		switch (func_179(iParam0))
		{
			case 0:
				unk_0x0B87AFC0B2EECA19(uParam2);
				break;
			
			case 1:
				unk_0x6B09668CBB188BED(uParam1);
				break;
			
			case 2:
				unk_0x12F6DF5DDA266BDC(sParam1);
				break;
			
			case 3:
				unk_0x0DBF9B65543A44DC(sParam1);
				break;
			
			case 4:
				unk_0x271ED3A59A006150(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x828EA6BAF1847352(sParam1);
				break;
			
			case 6:
				unk_0xD0C4079F23F3A690();
				break;
			
			case 7:
				unk_0x2AE938938932EDE0(uParam2);
				break;
			
			case 8:
				unk_0x035F40534E3C26BD(uParam2, unk_0x7DA173D4FD42F36B(iParam0, 26));
				break;
			
			case 9:
				unk_0xA4684B3EB6CAC9B9();
				break;
			
			default:
				break;
		}
	}
}

void func_272(bool bParam0)
{
	Global_101178 = { Local_95 };
	if (bParam0)
	{
		func_288(3);
	}
	func_276(1, 0);
	if (!bLocal_148)
	{
		func_275();
	}
	func_273();
	func_254();
}

void func_273()
{
	func_274();
}

int func_274()
{
	if (func_252(0))
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

int func_275()
{
	return 1;
}

void func_276(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_201();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_257(iParam0))
	{
		func_287(iParam0, iParam1);
		if (!func_286(51))
		{
			func_283("RE_REWARD", 1, 0, 4000, 10000, func_191(), 0, 138, 0);
			func_282(51);
		}
		if (func_164(iParam0))
		{
			Global_101186.f_29596.f_2 = 3;
		}
		if (func_281(iParam0, iParam1) != 322)
		{
			func_277(func_281(iParam0, iParam1), Local_91.f_0, Local_91.f_1);
		}
		Global_101174 = iParam1;
		if (Global_101172 == 0)
		{
			if (((Global_101175 == 1 || Global_101175 == 5) || Global_101175 == 11) || Global_101175 == 25)
			{
				func_288(2);
			}
			else if ((Global_101175 == 26 || Global_101175 == 8) || Global_101175 == 17)
			{
				func_288(7);
			}
			else
			{
				func_288(1);
			}
		}
	}
}

void func_277(int iParam0, var uParam1, var uParam2)
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
		func_280((891 + iParam0), 1, -1, 1);
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
		func_278();
	}
}

void func_278()
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
		func_27(13, unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853));
	}
	if (!unk_0xD67AADBB828CC3BE())
	{
		if (!Global_69521)
		{
			if (func_279() == 2 == 0 && !unk_0x17CC0D5008835470())
			{
				if (unk_0x614D6A182129DE96())
				{
					Global_100920 = 0;
				}
				if (!Global_55780)
				{
					func_274();
				}
			}
		}
	}
}

int func_279()
{
	return Global_25152;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_76();
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

int func_281(int iParam0, int iParam1)
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

void func_282(int iParam0)
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

void func_283(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_284(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_284(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_285();
	}
}

void func_285()
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

int func_286(int iParam0)
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

void func_287(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_101186.f_29596.f_8[iParam0]), iParam1);
}

void func_288(int iParam0)
{
	Global_101172 = iParam0;
}


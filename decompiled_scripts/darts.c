#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<9> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	bool bLocal_133 = 0;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_163 = 0;
	struct<68> Local_164 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 8;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 2;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 8;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 8;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	float fLocal_280 = 0f;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	struct<3> Local_292 = { 0, 0, 0 } ;
	var uLocal_295[2] = { 0, 0 };
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	bool bLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	bool bLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	struct<3> Local_375 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	struct<3> Local_381 = { 0, 0, 0 } ;
	float fLocal_384 = 0f;
	float fLocal_385 = 0f;
	float fLocal_386 = 0f;
	float fLocal_387 = 0f;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	char* sLocal_390 = NULL;
	char* sLocal_391 = NULL;
	int iLocal_392 = 0;
	char* sLocal_393 = NULL;
	char* sLocal_394 = NULL;
	char* sLocal_395[3] = { NULL, NULL, NULL };
	char* sLocal_399[3] = { NULL, NULL, NULL };
	char* sLocal_403[3] = { NULL, NULL, NULL };
	char* sLocal_407[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	struct<3> Var471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1767;
	bool bVar1768;
	bool bVar1769;
	bool bVar1770;
	var uVar1771;
	int iVar1772;
	int iVar1773;
	int iVar1774;
	float fVar1775;
	float fVar1776;
	struct<3> Var1777;
	struct<3> Var1780;
	struct<3> Var1783;
	struct<3> Var1786;
	struct<3> Var1789;
	char* sVar1792;
	var uVar1793;
	var uVar1796;
	var uVar1799;
	var uVar1802[20];
	var uVar1823;
	int iVar1824;
	int iVar1825;
	int iVar1826;
	int iVar1827;
	int iVar1828;
	int iVar1829;
	float fVar1830;
	int iVar1831;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_55 = 0.063f;
	Local_56 = { -0.0035f, 0f, -0.001f };
	iLocal_60 = joaat("prop_target_bull");
	Local_85 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_92 = 0.1f;
	iLocal_103 = 3;
	fLocal_106 = 80f;
	fLocal_107 = 140f;
	fLocal_108 = 180f;
	iLocal_114 = 1;
	iLocal_115 = 65;
	iLocal_116 = 49;
	iLocal_117 = 64;
	iLocal_140 = 65;
	iLocal_142 = 660;
	fLocal_147 = 0.27f;
	fLocal_148 = 0.1f;
	fLocal_149 = -120f;
	fLocal_150 = 127f;
	fLocal_280 = ((0.05f + 0.275f) - 0.01f);
	fLocal_283 = -0.05f;
	fLocal_284 = 0.92f;
	fLocal_285 = 1.94f;
	fLocal_286 = 2.99f;
	fLocal_287 = 3.7f;
	Local_292 = { 500f, 500f, 500f };
	bLocal_307 = true;
	Local_372 = { -573.1373f, 294.0269f, 78.1765f };
	Local_375 = { -574.1169f, 292.7964f, 78.1766f };
	Local_378 = { 1995.295f, 3050.084f, 46.91535f };
	Local_381 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_384 = 172.6813f;
	fLocal_385 = 274.5094f;
	fLocal_386 = 142.6717f;
	fLocal_387 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1773 = 0;
	sLocal_393 = "facials@gen_female@variations@happy";
	switch (func_480(unk_0xC8B93D94F8954288()))
	{
		case 0:
			sLocal_394 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_394 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_394 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_395[0] = "mood_happy_1";
	sLocal_395[1] = "mood_happy_2";
	sLocal_395[2] = "mood_happy_3";
	sLocal_399[0] = "darts_outro_01_guy1";
	sLocal_399[1] = "darts_outro_02_guy2";
	sLocal_399[2] = "darts_outro_03_guy2";
	sLocal_403[0] = "darts_outro_01_guy2";
	sLocal_403[1] = "darts_outro_02_guy1";
	sLocal_403[2] = "darts_outro_03_guy1";
	sLocal_407[0] = "darts_outro_01_cam";
	sLocal_407[1] = "darts_outro_02_cam";
	sLocal_407[2] = "darts_outro_03_cam";
	uLocal_295[0] = unk_0xC8B93D94F8954288();
	bLocal_310 = true;
	Var1777 = { 1992.293f, 3050.583f, 47.98973f };
	Var1780 = { -572.0406f, 294.1958f, 79.9374f };
	func_479();
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		iLocal_334 = 1;
		switch (unk_0x531444754C426278(0, 2))
		{
			case 0:
				iLocal_331 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_331 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_329 = 10;
		unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0x95CCECA3948CFE7B(ScriptParam_0.f_4))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (iLocal_334 == 2)
			{
				ScriptParam_0 = { Var1780 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1777 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x32AADF258A6B79F2(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0xB999434FB1CECA11(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x920F8295764C38C6(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1783, 0);
				ScriptParam_0.f_3 = Var1783.f_2;
			}
		}
	}
	else
	{
		Var1783 = { unk_0x44C17CCB85A88A1F(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(func_478()))
	{
		func_476(iLocal_329, 1);
		if (unk_0x277ECDA23D8CCEB4(func_478(), 0))
		{
			unk_0xE5F6BE3F8E937ACE(func_478(), 0, 0);
		}
		uLocal_295[1] = func_478();
	}
	else
	{
		unk_0x5B0FC38A6C315E32(1);
	}
	if (unk_0x24862A9CDC8F8874(67))
	{
		func_467();
		func_448(&Var0, &Var508, &Var1191);
	}
	unk_0x3FF0F697A7CC3CE7(0);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
	func_446(1);
	iLocal_325 = func_443(func_480(uLocal_295[0]), 1);
	fVar1775 = (unk_0xBBDA792448DB5A89(iLocal_325) / 100f);
	fVar1776 = (fVar1775 * 1200f);
	iLocal_142 = unk_0xF2DB717A73826179(fVar1776);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_442(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x68A38902ADFD05FE(2);
		unk_0xC5E066210BF7DEBB();
		unk_0x6304F4F223560FF0(15, 0f, -0.0375f);
		if (iLocal_317 && Var0.f_0 < 13)
		{
			unk_0xC785022A2AF03298(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0x2DC9BA2299B45EA6(ScriptParam_0.f_5) && !unk_0x95CCECA3948CFE7B(func_478())) || (unk_0x95CCECA3948CFE7B(func_478()) && unk_0x2DC9BA2299B45EA6(func_478())))
		{
			func_448(&Var0, &Var508, &Var1191);
		}
		if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]))
		{
			unk_0x1F64302AA4F597A7(uLocal_295[0], 239, 1);
			unk_0x1F64302AA4F597A7(uLocal_295[0], 124, 1);
			func_441();
			unk_0xBD76D2728ECB1AC6(0);
			unk_0xBD76D2728ECB1AC6(2);
			iVar1774 = 0;
			while (iVar1774 < unk_0x06C00074433E3408(unk_0xC8B93D94F8954288(), &uVar1802, -1))
			{
				if (uVar1802[iVar1774] != uLocal_295[1])
				{
					if (!unk_0x2DC9BA2299B45EA6(uVar1802[iVar1774]))
					{
						unk_0x1F64302AA4F597A7(uVar1802[iVar1774], 240, 1);
					}
				}
				iVar1774++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x9F4AA6F234E8A860(1);
					func_440(&(Var0.f_243), &ScriptParam_0);
					func_439(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x95CCECA3948CFE7B(Var0.f_243))
					{
						Local_366 = { unk_0xCC31DB73C65552D8(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_369 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = unk_0x785B53D5654A2FFD(26379945, Local_366, Local_369, 65f, 0, 2);
						unk_0xD9D8D5E5A50FF6D5(uLocal_129, 30f);
					}
					func_438();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
					{
						unk_0x98371F41D43CDFA9(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
						{
							unk_0xA9351C9309E03069(&uLocal_332);
							unk_0x3E2E609450787FFE(&uLocal_332);
							unk_0xE5F6BE3F8E937ACE(0, 0, 0);
							unk_0x939BC11172AA1303(uLocal_332);
							unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uLocal_332);
						}
						Local_85 = { Local_85 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar1824 = 0;
					while (iVar1824 < 2)
					{
						iVar1825 = 0;
						while (iVar1825 < 3)
						{
							func_437(&(Var0.f_5[iVar1824 /*79*/][iVar1825 /*26*/]), iVar1824);
							iVar1825++;
						}
						iVar1824++;
					}
					iVar1826 = 0;
					while (iVar1826 < 3)
					{
						func_437(&(Var0.f_164[iVar1826 /*26*/]), 0);
						iVar1826++;
					}
					iVar464 = 2;
					func_436(0);
					func_434(&Var477, iLocal_334, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x95CCECA3948CFE7B(Var0.f_243))
					{
						Var1783 = { unk_0xEABAE14292BF78FB(Var0.f_243, Var477.f_18) };
					}
					func_431(&Var477, &Var508);
					unk_0xF7CE1213DA9898BD(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_428(&Var477, &Var508))
					{
						func_425(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_388 = func_480(uLocal_295[0]);
						switch (iLocal_388)
						{
							case 0:
								sLocal_390 = func_424("MICHAEL");
								if (!unk_0xDCC86F723E82125E(Global_100937, 0))
								{
									sVar1792 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_390 = func_424("FRANKLIN");
								bLocal_314 = true;
								if (!unk_0xDCC86F723E82125E(Global_100937, 0))
								{
									sVar1792 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_390 = func_424("TREVOR");
								if (!unk_0xDCC86F723E82125E(Global_100937, 0))
								{
									sVar1792 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0xB6900B8CB0ABBD2B(func_478()))
						{
							iLocal_389 = func_480(func_478());
							if (iLocal_389 == 145)
							{
								iLocal_389 = func_422(func_478());
							}
							switch (iLocal_389)
							{
								case 0:
									sLocal_391 = func_424("MICHAEL");
									break;
								
								case 1:
									sLocal_391 = func_424("FRANKLIN");
									break;
								
								case 2:
									sLocal_391 = func_424("TREVOR");
									break;
								
								case 19:
									sLocal_391 = func_424("LAMAR");
									unk_0x8C245572EDB27776(func_478(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_391 = func_424("JIMMY");
									break;
								
								default:
									sLocal_391 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1772 = unk_0x531444754C426278(0, 200);
							if (iLocal_334 == 2)
							{
								if (iVar1772 < 51)
								{
									sLocal_391 = func_424("RAYMOND");
									iLocal_392 = 954610991;
								}
								else if (iVar1772 < 101)
								{
									sLocal_391 = func_424("JOHAN");
									iLocal_392 = 94453331;
								}
								else if (iVar1772 < 151)
								{
									sLocal_391 = func_424("STAN");
									iLocal_392 = 1891555423;
								}
								else
								{
									sLocal_391 = func_424("VINCE");
									iLocal_392 = -1067630349;
								}
							}
							else if (iVar1772 < 51)
							{
								sLocal_391 = func_424("KRISTY");
								iLocal_392 = 885327384;
							}
							else if (iVar1772 < 101)
							{
								sLocal_391 = func_424("MARLENE");
								iLocal_392 = -1791000994;
							}
							else if (iVar1772 < 151)
							{
								sLocal_391 = func_424("LORIE");
								iLocal_392 = 1954368234;
							}
							else
							{
								sLocal_391 = func_424("SHELLEY");
								iLocal_392 = -863218904;
							}
						}
						uLocal_59 = unk_0x7C62BC1EB194D985(iLocal_60, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0xAE2EF02A21378D8D())
					{
						uVar1823 = unk_0x7C62BC1EB194D985(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_419(Var0.f_243.f_4, Var465, &uVar1802, &ScriptParam_0);
						func_417(&Var477, sLocal_390, sLocal_391);
						unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
						uLocal_333 = unk_0x785B53D5654A2FFD(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_416(&(Var0.f_257), 0, unk_0xC8B93D94F8954288(), sLocal_390, 0, 1);
						if (unk_0xB6900B8CB0ABBD2B(func_478()))
						{
							if (iLocal_334 == 2)
							{
								func_416(&(Var0.f_257), 3, uLocal_295[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_416(&(Var0.f_257), 3, uLocal_295[1], "DartsMelHick1", 0, 1);
							}
							iVar1773 = -1;
						}
						else
						{
							func_416(&(Var0.f_257), 3, func_478(), sLocal_391, 0, 1);
							func_414(&uVar1799);
							iVar1773 = 6;
						}
						if (!unk_0xDCC86F723E82125E(Global_100937, 0))
						{
							iVar1773 = -1;
						}
						else
						{
							iVar1773 = 3;
						}
						func_413(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x2DC9BA2299B45EA6(uLocal_295[1]) && unk_0xCD8A4525A9B5A276(uLocal_295[0])) && !unk_0x277ECDA23D8CCEB4(uLocal_295[0], 1)) && unk_0xCD8A4525A9B5A276(uLocal_295[1])) && !unk_0x277ECDA23D8CCEB4(uLocal_295[1], 1))
					{
						bLocal_305 = func_411(&uLocal_321);
						if ((func_410() && unk_0x693EBB4F13506457() >= iLocal_323 + 1000) && iVar1773 != 9)
						{
							if (!unk_0xD5DFCA69ACAA20E3() && !unk_0xE71FCE10773CF7B0())
							{
								unk_0x00F9843B9C06C2E9(500);
							}
						}
						if (unk_0xD5DFCA69ACAA20E3() && iVar1773 != 9)
						{
							func_407(0);
							func_405();
							iVar1773 = 9;
						}
						switch (iVar1773)
						{
							case -1:
								if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
								{
									uLocal_327 = unk_0x0B15BB6DFB729046(unk_0xCC31DB73C65552D8(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x59DD203239FBDCAD(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xEC805A65A86B9D68(uLocal_333, uLocal_327, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x7D1795B1E14EDFFD(uLocal_333, 1);
									unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
									unk_0xD1FE26E80A6E2C00(uLocal_295[0]);
									unk_0xD1FE26E80A6E2C00(uLocal_295[1]);
									unk_0xBA73099E237C7E5E(uLocal_295[0]);
									unk_0xBA73099E237C7E5E(uLocal_295[1]);
									unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x5323F488E6A1B660(uLocal_295[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x5323F488E6A1B660(uLocal_295[0], "mini@dartsintro", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x16A73DD34A0EE6C3(uVar1823, uLocal_327, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_404(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 0:
								if (unk_0xBC6B93737FCDC466(uLocal_327))
								{
									if (!bVar1769)
									{
										if (func_403(&uVar1799) > 1.5f)
										{
											func_402(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_401(&uVar1799);
										}
									}
									else if (!unk_0x0D211C48FB8578B7(uLocal_295[0]))
									{
										if (!bVar1770)
										{
											if (!func_400(&uVar1799))
											{
												func_414(&uVar1799);
											}
											else if (func_403(&uVar1799) > 0.5f)
											{
												func_399(uLocal_295[1]);
												func_401(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_404(&uVar1799);
											func_398("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x2091E42376999826(uLocal_327) > 0.25f)
											{
												func_404(&uVar1799);
												func_398("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x2091E42376999826(uLocal_327) > 0.55f)
											{
												func_398("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x2091E42376999826(uLocal_327) > 0.85f)
											{
												func_398("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x2091E42376999826(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1773++;
									}
									else if ((unk_0x693EBB4F13506457() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x2091E42376999826(uLocal_327) > 0.99f)
								{
									if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
									{
										func_395(Var0.f_243.f_1, Var0.f_243.f_4, func_397(2), func_396(0), 0, 1);
										iLocal_31 = 0;
										unk_0x9F4AA6F234E8A860(1);
										unk_0x5CF5A880ED809DDA(uLocal_333, 0);
										unk_0x5124C5FA52D2AF3E(uLocal_295[0]);
										unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
										unk_0x20D399098E17A191(uVar1823, -1000f, 0);
										unk_0xA278ECBE30D8AE4F(&uVar1823);
										unk_0xDB9D78E5137EE7AD(func_394(0));
										func_401(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
								{
									uLocal_327 = unk_0x0B15BB6DFB729046(unk_0xCC31DB73C65552D8(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x59DD203239FBDCAD(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xEC805A65A86B9D68(uLocal_333, uLocal_327, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x7D1795B1E14EDFFD(uLocal_333, 1);
									unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
									unk_0xD1FE26E80A6E2C00(uLocal_295[0]);
									unk_0xD1FE26E80A6E2C00(uLocal_295[1]);
									unk_0xBA73099E237C7E5E(uLocal_295[0]);
									unk_0xBA73099E237C7E5E(uLocal_295[1]);
									unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x5323F488E6A1B660(uLocal_295[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x5323F488E6A1B660(uLocal_295[0], "mini@dartsintro_alt1", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x16A73DD34A0EE6C3(uVar1823, uLocal_327, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_404(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 4:
								if (unk_0xBC6B93737FCDC466(uLocal_327))
								{
									if (!bVar1769)
									{
										if (func_403(&uVar1799) > 0.5f)
										{
											func_402(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_401(&uVar1799);
										}
									}
									else if (!unk_0x0D211C48FB8578B7(uLocal_295[0]))
									{
										if (!bVar1770)
										{
											if (!func_400(&uVar1799))
											{
												func_414(&uVar1799);
											}
											else if (func_403(&uVar1799) > 0.25f)
											{
												func_399(uLocal_295[1]);
												func_401(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									if (unk_0x2091E42376999826(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1773++;
									}
									else if ((unk_0x693EBB4F13506457() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x2091E42376999826(uLocal_327) > 0.99f)
								{
									if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
									{
										func_393();
										unk_0x5CF5A880ED809DDA(uLocal_333, 0);
										unk_0x5124C5FA52D2AF3E(uLocal_295[0]);
										unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
										unk_0x20D399098E17A191(uVar1823, -1000f, 0);
										unk_0xA278ECBE30D8AE4F(&uVar1823);
										unk_0xDB9D78E5137EE7AD(func_394(0));
										func_401(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0xD5DFCA69ACAA20E3())
								{
									iLocal_317 = 1;
									iLocal_31 = 0;
									unk_0x9F4AA6F234E8A860(1);
									if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
									{
										unk_0xC76B5C68AB6DC7DF(uLocal_295[0], Var465, 1, 0, 0, 1);
										unk_0x765E3FA65D011F03(uLocal_295[0], Var0.f_243.f_4);
										unk_0xC76B5C68AB6DC7DF(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
										unk_0x765E3FA65D011F03(uLocal_295[1], Var0.f_243.f_4);
										unk_0x5124C5FA52D2AF3E(uLocal_295[0]);
										unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
									}
									unk_0x5CF5A880ED809DDA(uLocal_333, 0);
									unk_0x20D399098E17A191(uVar1823, -1000f, 0);
									unk_0xA278ECBE30D8AE4F(&uVar1823);
									if (!unk_0xDCC86F723E82125E(Global_100937, 0))
									{
										func_395(Var0.f_243.f_1, Var0.f_243.f_4, func_397(2), func_396(0), 0, 1);
									}
									else
									{
										func_393();
									}
									unk_0xDB9D78E5137EE7AD(func_394(0));
									func_401(&uVar1799);
									unk_0x31E6EB2040318451(500);
									Var0.f_0 = 6;
									iVar1773 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1773)
					{
						case 0:
							iLocal_323 = unk_0x693EBB4F13506457();
							if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
							{
								unk_0xC76B5C68AB6DC7DF(uLocal_295[0], Var465, 1, 0, 0, 1);
								unk_0x765E3FA65D011F03(uLocal_295[0], Var0.f_243.f_4);
								unk_0xC76B5C68AB6DC7DF(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
								unk_0x765E3FA65D011F03(uLocal_295[1], Var0.f_243.f_4);
							}
							unk_0x925AE2E6F6E41362(func_394(1));
							iVar1773 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x693EBB4F13506457() - iLocal_323) > 1500)
							{
								func_391(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1773++;
							}
							break;
						
						case 2:
							if (!func_390(&(Var508.f_57), 1, 0))
							{
								unk_0x925AE2E6F6E41362(func_394(1));
								iVar1773 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xDCC86F723E82125E(Global_100937, 0))
					{
						if (func_387(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1796))
						{
							unk_0x59A0729D503ED758(&Global_100937, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x7D1795B1E14EDFFD(uLocal_120, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0xD5DFCA69ACAA20E3())
					{
						unk_0x31E6EB2040318451(500);
					}
					switch (iVar1773)
					{
						case 0:
							if (!unk_0x95CCECA3948CFE7B(func_478()))
							{
								if (!unk_0xDCC86F723E82125E(Global_100937, 10))
								{
									unk_0x59A0729D503ED758(&Global_100937, 10);
								}
								else
								{
									unk_0x77621132305B133B(&Global_100937, 10);
								}
								func_385(&Var508);
								iVar1773++;
							}
							else
							{
								func_385(&Var508);
								iVar1773++;
							}
							break;
						
						case 1:
							if (unk_0x68B0A67658F2D9C2())
							{
								if (fLocal_134 != unk_0xA2A5649E3ACE3459(0))
								{
									fLocal_134 = unk_0xA2A5649E3ACE3459(0);
									unk_0xD9D8D5E5A50FF6D5(uLocal_120, func_384(fLocal_134));
									unk_0xD9D8D5E5A50FF6D5(uLocal_121, func_384(fLocal_134));
								}
							}
							if (func_325(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xDB9D78E5137EE7AD(func_394(1));
								if (Var0.f_452 > 0)
								{
									iVar1773 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_324(&Var477, 0, 0, 0, 0);
										bVar1768 = true;
									}
									func_321(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_314(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_100976.f_17604.f_5 >= 5 && Global_100976.f_17604.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_100976.f_17604.f_5 >= 3 && Global_100976.f_17604.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_313(Global_100976.f_17604.f_5, &iLocal_326))
						{
							func_312(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_311(Global_100976.f_17604.f_5);
						fLocal_91 = func_310(Global_100976.f_17604.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
						{
							unk_0xBA73099E237C7E5E(uLocal_295[1]);
							unk_0xC76B5C68AB6DC7DF(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
							unk_0x765E3FA65D011F03(uLocal_295[1], Var0.f_243.f_4);
						}
						if (func_400(&uVar1793))
						{
							func_401(&uVar1793);
						}
						unk_0x925AE2E6F6E41362(func_394(2));
						func_309(uLocal_295[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x68B0A67658F2D9C2())
					{
						if (fLocal_134 != unk_0xA2A5649E3ACE3459(0))
						{
							fLocal_134 = unk_0xA2A5649E3ACE3459(0);
							unk_0xD9D8D5E5A50FF6D5(uLocal_120, func_384(fLocal_134));
							unk_0xD9D8D5E5A50FF6D5(uLocal_121, func_384(fLocal_134));
						}
					}
					if (!bLocal_315)
					{
						unk_0xC0E8B67A4385D37D("mini@dartsoutro");
						bLocal_315 = true;
					}
					if (!iLocal_316)
					{
						if (bLocal_315)
						{
							if (!unk_0xF9B86DC1728F1339("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_316 = 1;
							}
						}
					}
					func_227(&Var0, &Var471, &Var477, &Var508, &uVar1793);
					break;
				
				case 11:
					switch (iVar1773)
					{
						case 0:
							if (func_403(&(Var0.f_254)) > 0.5f)
							{
								unk_0x9F4AA6F234E8A860(1);
								unk_0x7846F09C04C34C46();
								func_226(unk_0xC8B93D94F8954288());
								func_324(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1827 = 0;
								while (iVar1827 < 2)
								{
									iVar1828 = 0;
									while (iVar1828 < 3)
									{
										func_225(&(Var0.f_5[iVar1827 /*79*/][iVar1828 /*26*/]));
										iVar1828++;
									}
									func_224(&Var477, iVar1827);
									iVar1827++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_222(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_222(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_222(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_222(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1830 = unk_0xA2A5649E3ACE3459(1);
								if (fVar1830 > 2f)
								{
									Var1786 = { 1992.294f, 3047.577f, 46.21517f };
									Var1789 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var1786 = { 1992.336f, 3047.924f, 46.21517f };
									Var1789 = { 0f, 0f, 136.74f };
								}
								iVar1829 = func_221();
								uLocal_327 = unk_0x0B15BB6DFB729046(Var1786, Var1789, 2);
								uLocal_333 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xEC805A65A86B9D68(uLocal_333, uLocal_327, sLocal_407[iVar1829], "mini@dartsoutro");
								unk_0x7D1795B1E14EDFFD(uLocal_333, 1);
								unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
								if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1831 = 1;
										}
										else
										{
											iVar1831 = 0;
										}
										unk_0xC4EE38A4CFF7544C(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_220(&uLocal_295, iVar1831);
										unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), sLocal_394, sLocal_395[unk_0x531444754C426278(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC4EE38A4CFF7544C(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_219(&uLocal_295);
										unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x5323F488E6A1B660(uLocal_295[1], sLocal_393, sLocal_395[unk_0x531444754C426278(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1773++;
							}
							break;
						
						case 1:
							if (!func_217(&(Var508.f_62), 1))
							{
								iVar1773++;
							}
							break;
						
						case 2:
							func_401(&(Var0.f_254));
							iLocal_311 = 0;
							unk_0xDB9D78E5137EE7AD(func_394(3));
							func_393();
							if (unk_0x844838E5D8A21336(uLocal_333))
							{
								unk_0x5CF5A880ED809DDA(uLocal_333, 0);
							}
							iVar1773 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_403(&(Var0.f_254)) > 0.92f)
					{
						func_38(&Var0, &Var508, &Var477, &Var1191, bVar1768);
					}
					break;
				
				case 13:
					uVar1771 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0xB6900B8CB0ABBD2B(func_478()))
					{
						unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1773)
					{
						case 0:
							unk_0x5124C5FA52D2AF3E(uLocal_295[0]);
							if (!bLocal_313)
							{
								unk_0x2544549FDE4C3A7E(0, bLocal_313, 3000, 1, 0, 0);
							}
							else
							{
								unk_0xCEDE7EE5970B48B8(0, 0, 3, 0);
							}
							unk_0x8C67D2FDE360FBCA(0);
							unk_0x0F9FDCEB321235AB(0, 1065353216);
							unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
							unk_0x7846F09C04C34C46();
							unk_0xE48D9147BC1F4CD7(uLocal_295[0], uLocal_295[1], 5000, 2049, 3);
							func_414(&uVar1799);
							iVar1773++;
							break;
						
						case 1:
							if (func_7(&uVar1799) > 0.1f)
							{
								if (!bVar1767)
								{
								}
								func_414(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1799) > 0.3f)
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
								{
									if (!bVar1767)
									{
										func_4(uLocal_295[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_414(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 3:
							if (uVar1771 || bVar1767)
							{
								Var0.f_0 = 15;
								iVar1773++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (unk_0x58F80A8B3A06F53C(2, 201))
					{
						func_1(uLocal_295[1]);
						iLocal_330 = 2;
						bVar1767 = true;
						if (unk_0xB5F5536784683C33(func_394(2)))
						{
							unk_0xDB9D78E5137EE7AD(func_394(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x58F80A8B3A06F53C(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_100 = 0;
						}
						func_312(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_448(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0x2BF05095F2389894())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_312(&(uParam0->f_666), 8, 1);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 16, 0);
			func_312(&(uParam0->f_666), 17, 0);
		}
		unk_0xBBF8B3515A14CFFC();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_312(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xB6900B8CB0ABBD2B(func_478()) || iParam2)
	{
		func_402(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x7033366221CC71C6(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(var uParam0)
{
	if (func_400(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xB36863F9C6D42649() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xB36863F9C6D42649();
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0x902595DAD7718896(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x0004D91ADE7A063A(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xD5DFCA69ACAA20E3() || unk_0xE71FCE10773CF7B0())
		{
			unk_0x4A7FE215482FE126(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
			{
				unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
			}
		}
	}
	unk_0x68A38902ADFD05FE(7);
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(19);
	unk_0x2BE3C7FA4FCCA784(2, 19, 1);
	unk_0x2BE3C7FA4FCCA784(0, 37, 1);
	unk_0x2BE3C7FA4FCCA784(0, 21, 1);
	unk_0x2BE3C7FA4FCCA784(0, 28, 1);
	unk_0x2BE3C7FA4FCCA784(0, 29, 1);
	unk_0x2BE3C7FA4FCCA784(0, 171, 1);
	func_36();
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (unk_0xFC35045C03517B6A() || (unk_0xD5DFCA69ACAA20E3() && !unk_0x2230725B418B1240()))
		{
			unk_0xE4D30FD564C6B6BB();
		}
	}
	Global_36250 = 1;
	if (!uParam0->f_563)
	{
		switch (func_480(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A())))
		{
			case 1:
				unk_0xD7F5001BB6D13A64("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xD7F5001BB6D13A64("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xD7F5001BB6D13A64("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_35(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_35(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_35((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_35(30f) - func_35(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_34(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x7C38F93AF52620B1(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xD013AC29829DDC02();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x7C38F93AF52620B1(uParam0->f_1, "TRANSITION_OUT");
			unk_0xD013AC29829DDC02();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x7EF0ED41FC8F3EC1(2))
			{
				if (unk_0xF518F3C7FACD43B7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x8D9008B8900A28D0(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xF518F3C7FACD43B7(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x7C38F93AF52620B1(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xD013AC29829DDC02();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x7C38F93AF52620B1(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xD013AC29829DDC02();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x7C38F93AF52620B1(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xD013AC29829DDC02();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x8D9008B8900A28D0(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_34(0);
			}
			return !bVar0;
		}
	}
	func_34(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0x7C38F93AF52620B1(uParam0->f_4, "CLEAR_ALL");
	unk_0xD013AC29829DDC02();
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x7C38F93AF52620B1(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x0139C89EE907A315(true);
		unk_0xD013AC29829DDC02();
	}
	unk_0x7C38F93AF52620B1(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(0);
	func_13(unk_0x3F78CAF40CD146C4(2, 215, true));
	func_12("ES_HELP");
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x0139C89EE907A315(true);
		unk_0x65960B4E2ADC9F6D(215);
	}
	unk_0xD013AC29829DDC02();
	if (bParam1)
	{
		unk_0x7C38F93AF52620B1(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x65960B4E2ADC9F6D(1);
		func_13(unk_0x3F78CAF40CD146C4(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0x68B0A67658F2D9C2())
		{
			unk_0x0139C89EE907A315(true);
			unk_0x65960B4E2ADC9F6D(216);
		}
		unk_0xD013AC29829DDC02();
	}
	unk_0x7C38F93AF52620B1(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xD013AC29829DDC02();
}

void func_12(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

void func_13(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_15(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_33() * 0.25f);
	if (unk_0xF518F3C7FACD43B7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7C38F93AF52620B1(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				func_12(&(uParam0->f_13));
				unk_0x65960B4E2ADC9F6D(100);
				unk_0x0139C89EE907A315(true);
				unk_0x65960B4E2ADC9F6D(uParam0->f_56);
				unk_0x0139C89EE907A315(bParam2);
				unk_0x65960B4E2ADC9F6D(69);
				unk_0xD013AC29829DDC02();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x7C38F93AF52620B1(uParam0->f_1, "TRANSITION_UP");
				unk_0x512B59C08EAFA3B9(0.15f);
				unk_0x0139C89EE907A315(true);
				unk_0xD013AC29829DDC02();
				uParam0->f_3 = 1;
			}
		}
		func_32();
		unk_0x16387DB49A36A0F3(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_35((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_33());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_31(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0xA2A5649E3ACE3459(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_31(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_33()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x80904D7F494D0C30(2, 215);
	unk_0x80904D7F494D0C30(2, 216);
	unk_0x80904D7F494D0C30(2, 200);
	unk_0x2BE3C7FA4FCCA784(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_28((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0xD5DFCA69ACAA20E3())
			{
				unk_0xD2423E2A80750319();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x68A38902ADFD05FE(7);
				unk_0x68A38902ADFD05FE(8);
				unk_0x68A38902ADFD05FE(9);
				unk_0x68A38902ADFD05FE(6);
				unk_0x16387DB49A36A0F3(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x2BE3C7FA4FCCA784(0, 140, 1);
				unk_0x2BE3C7FA4FCCA784(0, 141, 1);
				unk_0x2BE3C7FA4FCCA784(0, 142, 1);
				unk_0x2BE3C7FA4FCCA784(2, 188, 1);
				if (unk_0x3BE6F47A1187EFE0(2, 188))
				{
					unk_0xC4EE38A4CFF7544C(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xC4EE38A4CFF7544C(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x2BE3C7FA4FCCA784(2, 187, 1);
				if (unk_0x3BE6F47A1187EFE0(2, 187))
				{
					unk_0xC4EE38A4CFF7544C(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xC4EE38A4CFF7544C(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x2BE3C7FA4FCCA784(2, 202, 1);
				if (unk_0x3BE6F47A1187EFE0(2, 202))
				{
					unk_0xC4EE38A4CFF7544C(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xC4EE38A4CFF7544C(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x68A38902ADFD05FE(7);
				unk_0x68A38902ADFD05FE(8);
				unk_0x68A38902ADFD05FE(9);
				unk_0x68A38902ADFD05FE(6);
				unk_0x2BE3C7FA4FCCA784(0, 140, 1);
				unk_0x2BE3C7FA4FCCA784(0, 141, 1);
				unk_0x2BE3C7FA4FCCA784(0, 142, 1);
				if (unk_0x8D9008B8900A28D0(2, 215) || unk_0x3BE6F47A1187EFE0(2, 200))
				{
					unk_0xC4EE38A4CFF7544C(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xC4EE38A4CFF7544C(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x7068E8DB78AD0A08(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xE626AAE57E9B7B3E(iVar13, iVar14, iVar15, iVar0);
	unk_0xC745BF043BF36DC4(fVar9, fVar10);
	unk_0x46315B58B57BBE2A(0);
	unk_0x3990B11991B0B160(1f, 0.4f);
	fVar1 = (fVar1 - func_35(6f));
	fVar1 = (fVar1 + (func_35(30f) - func_35((2f * 2f))));
	fVar11 = (fVar2 - func_35((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_35(25f))), 0f, 1f);
		func_32();
		unk_0x27C156B95D022EC9(0.5f, (fVar1 - (func_35((2f - 0.5f)) - 0.001388889f)), fVar6, func_27(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_35((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_35(25f))), 0f, 1f);
			func_24(uParam0, iVar17, (fVar1 + func_35(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_35(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_35(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_35(25f))), 0f, 1f);
			func_32();
			unk_0x27C156B95D022EC9(0.5f, (fVar1 + func_35((2f * 0.5f))), fVar6, func_27(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_35(25f))), 0f, 1f);
			unk_0xE626AAE57E9B7B3E(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x884056BD9590BF29() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_33()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_33()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_33()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_33()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0xC745BF043BF36DC4(fVar20, fVar21);
			unk_0x46315B58B57BBE2A(1);
			unk_0x3990B11991B0B160(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_35((2f * 2f))), 0, 0, 0);
			unk_0xC745BF043BF36DC4(fVar20, fVar21);
			unk_0x46315B58B57BBE2A(2);
			unk_0x3990B11991B0B160(1f, 0.4f);
			unk_0xB29CE0BA729EE68B(0);
			func_32();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xC745BF043BF36DC4(fVar20, fVar22);
			unk_0xE626AAE57E9B7B3E(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0xCF61D472051E607A("PERCENTAGE");
					unk_0x6DC80A902A91958F(uParam0->f_554);
					unk_0x0A3C6E0278C7BCEF(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xCF61D472051E607A("FO_TWO_NUM");
					unk_0x6DC80A902A91958F(uParam0->f_554);
					unk_0x6DC80A902A91958F(uParam0->f_555);
					unk_0x0A3C6E0278C7BCEF(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xCF61D472051E607A("MTPHPER_XPNO");
					unk_0x6DC80A902A91958F(uParam0->f_554);
					unk_0x0A3C6E0278C7BCEF(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x7068E8DB78AD0A08(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x7068E8DB78AD0A08(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x7068E8DB78AD0A08(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_35(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0xA64F50A8AA9DA3F5(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_35(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xB29CE0BA729EE68B(iParam3);
	unk_0x1F0FA9FF044DCA99(iParam5);
	func_32();
	if (bParam4)
	{
		unk_0xCF61D472051E607A("STRING");
		unk_0x2DED6C1306496257(sParam0);
	}
	else
	{
		unk_0xCF61D472051E607A(sParam0);
	}
	unk_0x0A3C6E0278C7BCEF(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_23(iParam0);
	uVar1 = func_21(iParam0, bParam1);
	if (unk_0x7CBED6EFED40E7EB(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x94AEC7924AE05010(&iVar2, &iVar3);
			fVar5 = unk_0xA2A5649E3ACE3459(0);
			if (func_20())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
			{
				fVar4 = 1f;
			}
			if (unk_0xCBC8FFE55DC722B5(joaat("director_mode")) > 0)
			{
				unk_0x6DDF2AF05E6AEC85(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x6DDF2AF05E6AEC85(&iVar2, &iVar3);
		}
		Var7 = { unk_0xA5CAA351B4D63EED(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_19(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_19(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xDDC43401E4A15041() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_20()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x94AEC7924AE05010(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_6682[iParam0 /*16*/])))
	{
		return func_22(&(Global_17257.f_6682[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)
{
	return uParam0;
}

char* func_23(int iParam0)
{
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_5881[iParam0 /*16*/])))
	{
		return func_22(&(Global_17257.f_5881[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_24(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iParam5);
	unk_0xC745BF043BF36DC4(fParam3, fParam4);
	unk_0x46315B58B57BBE2A(1);
	unk_0x3990B11991B0B160(1f, func_26(14f));
	unk_0xB29CE0BA729EE68B(0);
	unk_0x1F0FA9FF044DCA99(0);
	func_32();
	if (uParam0->f_531[iParam1])
	{
		unk_0xCF61D472051E607A("STRING");
		unk_0x2DED6C1306496257(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xCF61D472051E607A(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x6DC80A902A91958F(uParam0->f_489[iParam1]);
		}
	}
	unk_0x0A3C6E0278C7BCEF(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xA64F50A8AA9DA3F5("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xA64F50A8AA9DA3F5("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xA64F50A8AA9DA3F5("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x46315B58B57BBE2A(1);
	}
	else
	{
		unk_0x46315B58B57BBE2A(2);
	}
	unk_0x3990B11991B0B160(1f, func_26(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xC745BF043BF36DC4(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xC745BF043BF36DC4(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iParam5);
	func_25(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_25(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xB29CE0BA729EE68B(0);
	unk_0x1F0FA9FF044DCA99(0);
	func_32();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x3990B11991B0B160(1f, func_26(18f));
			unk_0x1F0FA9FF044DCA99(4);
			if (iParam0 < 0)
			{
				unk_0xC8E81EDC1522FA75("ESMINDOLLA");
				unk_0x5CDA8F588F01C361((-1 * iParam0), 1);
				fVar1 = unk_0xF274F7A6105B230D(0);
			}
			else
			{
				unk_0xC8E81EDC1522FA75("ESDOLLA");
				unk_0x5CDA8F588F01C361(iParam0, 1);
				fVar1 = unk_0xF274F7A6105B230D(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xA64F50A8AA9DA3F5("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xA64F50A8AA9DA3F5("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xA64F50A8AA9DA3F5("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x3990B11991B0B160(1f, func_26(14f));
			break;
	}
	unk_0x1AE578B67805BFB7(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xCF61D472051E607A("PERCENTAGE");
			unk_0x6DC80A902A91958F(iParam0);
			break;
		
		case 1:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("FO_NUM");
			unk_0x6DC80A902A91958F(iParam0);
			break;
		
		case 2:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("FO_TWO_NUM");
			unk_0x6DC80A902A91958F(iParam0);
			unk_0x6DC80A902A91958F(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x3990B11991B0B160(1f, func_26(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xCF61D472051E607A("ESMINDOLLA");
				unk_0x5CDA8F588F01C361((-1 * iParam0), 1);
			}
			else
			{
				unk_0xCF61D472051E607A("ESDOLLA");
				unk_0x5CDA8F588F01C361(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xCF61D472051E607A(sParam4);
			break;
		
		case 7:
			unk_0xCF61D472051E607A("STRING");
			unk_0x2DED6C1306496257(sParam4);
			break;
		
		case 8:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("STRING");
			unk_0xE4CFBF63F6DBED8E(iParam0, 14);
			break;
		
		case 9:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("STRING");
			unk_0xE4CFBF63F6DBED8E(iParam0, 6);
			break;
		
		case 10:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("STRING");
			unk_0xE4CFBF63F6DBED8E(iParam0, 2055);
			break;
		
		case 18:
			unk_0x1F0FA9FF044DCA99(5);
			unk_0xCF61D472051E607A("STRING");
			unk_0xE4CFBF63F6DBED8E(iParam0, 2055);
			break;
		
		case 12:
			unk_0xCF61D472051E607A("AHD_DIST");
			unk_0x6DC80A902A91958F(iParam0);
			break;
		
		case 13:
			unk_0xCF61D472051E607A(sParam4);
			unk_0x6DC80A902A91958F(iParam0);
			unk_0x6DC80A902A91958F(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xCF61D472051E607A(sParam4);
			unk_0x6DC80A902A91958F(iParam0);
			unk_0x6DC80A902A91958F(iParam1);
			break;
		
		case 16:
			unk_0xCF61D472051E607A(sParam4);
			unk_0x6DC80A902A91958F(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x0A3C6E0278C7BCEF((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x3990B11991B0B160(1f, func_26(14f));
		}
		else
		{
			unk_0x0A3C6E0278C7BCEF(fParam2, fParam3, 0);
		}
	}
}

float func_26(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_27(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_28(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_30(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_29(7, iVar0);
		Global_1339929.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = iParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = iParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_29(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_30(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

float func_31(char* sParam0)
{
	unk_0xC8E81EDC1522FA75(sParam0);
	return (unk_0xF274F7A6105B230D(1) / 2f);
}

void func_32()
{
	unk_0x7F1F2564B5CE06AF(1);
	if (unk_0xE71FCE10773CF7B0() || unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x7F1F2564B5CE06AF(7);
	}
	unk_0xFE9574E90C2FA360(0);
}

float func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x68B0A67658F2D9C2())
	{
	}
	return fVar0;
}

void func_34(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

float func_35(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_36()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_37(0))
		{
			func_407(0);
		}
		unk_0x59A0729D503ED758(&Global_2284, 2);
	}
}

int func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		unk_0x2BE3C7FA4FCCA784(2, 199, 1);
	}
	if (unk_0x5AA202D345A0E889())
	{
		if (!iLocal_318)
		{
			if (func_200(uParam1, 0, &iLocal_319))
			{
				func_312(&(uParam1->f_666), 9, 0);
				iLocal_318 = 1;
			}
		}
	}
	if (iLocal_300)
	{
		if (unk_0xBDC482FE4AF5F4F1(2))
		{
			unk_0xE4D30FD564C6B6BB();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x5AA202D345A0E889())
			{
				uParam1->f_646 = func_191(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_312(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_113(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_109(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x8D9008B8900A28D0(2, 202))
				{
					uParam1->f_680 = 0;
					func_312(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x8D9008B8900A28D0(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x8D9008B8900A28D0(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_108(&(uParam1->f_72)))
			{
				if (!bLocal_320)
				{
					bLocal_320 = true;
					func_107(&(uParam1->f_509), 0, 0, 1, 1);
					func_106(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_106(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_106(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_106(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_103(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_96(uParam1, 0, 0, iLocal_318);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xBC6B93737FCDC466(uLocal_327) && unk_0x2091E42376999826(uLocal_327) >= 0.995f) || !unk_0xBC6B93737FCDC466(uLocal_327))
		{
			bLocal_313 = true;
			if (unk_0x844838E5D8A21336(uLocal_333))
			{
				unk_0x5CF5A880ED809DDA(uLocal_333, 0);
				if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
				{
					unk_0xBA73099E237C7E5E(uLocal_295[0]);
					unk_0xBA73099E237C7E5E(uLocal_295[1]);
					unk_0x01BAA21528B22625(uLocal_295[0], 0, 0);
					unk_0x01BAA21528B22625(uLocal_295[1], 0, 0);
				}
			}
			func_95();
		}
		if (func_403(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_311)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_220(&uLocal_295, iVar2);
				}
				else
				{
					func_219(&uLocal_295);
				}
				iLocal_311 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x9F4AA6F234E8A860(1);
			unk_0xDB9D78E5137EE7AD(func_394(3));
			if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
			{
				unk_0xD1FE26E80A6E2C00(uLocal_295[0]);
				unk_0xD1FE26E80A6E2C00(uLocal_295[1]);
			}
			func_94(uParam3);
			if (bParam4)
			{
				func_324(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_401(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_311 = 0;
			iLocal_309 = 0;
			bLocal_313 = false;
			func_91();
			iLocal_318 = 0;
			iLocal_289 = 0;
			uParam1->f_680 = 0;
			iLocal_319 = 0;
			bLocal_320 = false;
			func_83(&(uParam1->f_72));
			func_438();
		}
		else if (iVar0 == 2)
		{
			func_82(uParam3);
			unk_0xDB9D78E5137EE7AD(func_394(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_50(func_78(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x7846F09C04C34C46();
			*uParam0 = 13;
		}
		else if (((unk_0x8D9008B8900A28D0(0, 234) || unk_0x8D9008B8900A28D0(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_299)
			{
				Var3 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var3, 0, iLocal_299);
				iLocal_299 = 0;
			}
			else if (unk_0x8D9008B8900A28D0(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				Var3 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_47(Var3);
			}
			else if (unk_0x8D9008B8900A28D0(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_47(Var3);
			}
		}
		else if (((unk_0x8D9008B8900A28D0(0, 211) || unk_0x3BE6F47A1187EFE0(0, 211)) && bVar1) && (iLocal_318 || !unk_0x5AA202D345A0E889()))
		{
			uParam1->f_680 = 1;
			func_107(&(uParam1->f_509), 0, 0, 1, 1);
			func_106(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_106(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_106(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_320)
			{
				func_106(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_103(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x9F4AA6F234E8A860(1);
		unk_0x7846F09C04C34C46();
		func_43(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0xA2A5649E3ACE3459(1);
		if (fVar6 > 2f)
		{
			Var7 = { 1992.294f, 3047.577f, 46.21517f };
			Var10 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var7 = { 1992.336f, 3047.924f, 46.21517f };
			Var10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_221();
		uLocal_327 = unk_0x0B15BB6DFB729046(Var7, Var10, 2);
		uLocal_333 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xEC805A65A86B9D68(uLocal_333, uLocal_327, sLocal_407[iVar13], "mini@dartsoutro");
		unk_0x7D1795B1E14EDFFD(uLocal_333, 1);
		unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
		if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), sLocal_394, sLocal_395[unk_0x531444754C426278(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xA5666A46C1079EFE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xA5666A46C1079EFE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x5323F488E6A1B660(uLocal_295[1], sLocal_393, sLocal_395[unk_0x531444754C426278(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_313 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x693EBB4F13506457();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_225(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_224(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((unk_0x693EBB4F13506457() - uParam1->f_671) > 400 && func_39(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xC4EE38A4CFF7544C(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_300 = 1;
	}
}

int func_39(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_42(uParam0);
	func_41(uParam0);
	if (unk_0xF8D041B05C3D1FD4(&(uParam0->f_550), "SPR_RESULT") || (unk_0xF8D041B05C3D1FD4(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x1F0D08B8266D20DB("CommonMenu", 0);
		unk_0x1F0D08B8266D20DB("MPLeaderboard", 0);
		unk_0x1F0D08B8266D20DB("MPHud", 0);
		uParam0->f_1 = unk_0x31DC2CEFEF13C96D("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xB6AA3C7BA00BEAFB("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xF518F3C7FACD43B7(uParam0->f_1) || !unk_0x701C5CF3E1956924("CommonMenu")) || !unk_0x701C5CF3E1956924("MPLeaderboard")) || !unk_0x701C5CF3E1956924("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xF518F3C7FACD43B7(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xF518F3C7FACD43B7(uParam0->f_1) || !unk_0x701C5CF3E1956924("CommonMenu")) || !unk_0x701C5CF3E1956924("MPLeaderboard")) || !unk_0x701C5CF3E1956924("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xF518F3C7FACD43B7(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_40(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_69578 = 1;
	return 1;
}

void func_40(var uParam0)
{
	unk_0x7C38F93AF52620B1(uParam0->f_4, "CLEAR_ALL");
	unk_0xD013AC29829DDC02();
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x7C38F93AF52620B1(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x0139C89EE907A315(true);
		unk_0xD013AC29829DDC02();
	}
	unk_0x7C38F93AF52620B1(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(2);
	func_13(unk_0x3F78CAF40CD146C4(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(1);
	func_13(unk_0x3F78CAF40CD146C4(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x65960B4E2ADC9F6D(0);
	func_13(unk_0x3F78CAF40CD146C4(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xD013AC29829DDC02();
}

void func_41(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x46315B58B57BBE2A(0);
	unk_0x3990B11991B0B160(1f, func_26(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xC8E81EDC1522FA75("STRING");
			unk_0x2DED6C1306496257(&(uParam0->f_13));
			fVar0 = unk_0xF274F7A6105B230D(1);
		}
		else
		{
			unk_0xC8E81EDC1522FA75(&(uParam0->f_13));
			fVar0 = unk_0xF274F7A6105B230D(1);
		}
	}
	else
	{
		unk_0xC8E81EDC1522FA75("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x6DC80A902A91958F(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xCE59E3E42586D52D(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x2DED6C1306496257(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xF274F7A6105B230D(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_42(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_43(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_46(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_46(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_45(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_45(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_45(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_45(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_45(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_45(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_44(uParam0, 0, "", 0, 0, 0, 0);
	func_34(1);
}

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

void func_45(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_46(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_47(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bLocal_133)
	{
		unk_0x279ADEB173DD9DEE(uLocal_131, Var0);
		unk_0xB306DBE9AFBD23A6(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		unk_0x279ADEB173DD9DEE(uLocal_130, Var0);
		unk_0xB306DBE9AFBD23A6(uLocal_130, uLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_48(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_49(struct<3> Param0, bool bParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bParam3)
	{
		unk_0x279ADEB173DD9DEE(uLocal_130, Var0);
		unk_0xB306DBE9AFBD23A6(uLocal_130, uLocal_129, 1500, 1, 1);
		unk_0x7D1795B1E14EDFFD(uLocal_129, 0);
		unk_0x279ADEB173DD9DEE(uLocal_131, Var0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		unk_0x279ADEB173DD9DEE(uLocal_130, Var0);
		unk_0xB306DBE9AFBD23A6(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		unk_0x7D1795B1E14EDFFD(uLocal_130, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_51(Global_100976.f_32519[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x5F0618A5FDAD55C4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x071958EFED9481F5(iVar1, iVar0, 1);
	}
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_77();
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
					func_76(99, 1);
					func_75(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_75(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_75(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_59(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_58(5))
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
							func_75(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_58(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_75(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xFD88B4E9AD4F4CC0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_58(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_57(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_54(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_54(iVar1);
	}
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_75(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_75(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_75(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_100976.f_25033.f_233[iVar2 /*69*/]++;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_1++;
		if (Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_53(iParam0);
	if (Global_35700 == 15)
	{
		func_52(0);
	}
	return 1;
}

void func_52(bool bParam0)
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
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_100976.f_25033[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_100976.f_25033.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_100976.f_25033.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_100976.f_25033.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_100976.f_25033.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_100976.f_25033.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_100976.f_25033.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_100976.f_25033.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_100976.f_25033.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_100976.f_25033[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_100976.f_25033.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_100976.f_25033.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_100976.f_25033.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_100976.f_25033.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_100976.f_25033.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_100976.f_25033.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_100976.f_25033.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_100976.f_25033.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x071958EFED9481F5(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x071958EFED9481F5(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x071958EFED9481F5(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_54(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0) || unk_0xDCC86F723E82125E(Global_2097152[func_56() /*10270*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		unk_0x77621132305B133B(&(Global_2097152[func_56() /*10270*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x12F4A48D84A3989D("COUP_RED");
		unk_0xCE59E3E42586D52D(func_55(iParam0));
		unk_0x5EAB76FB4193096C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_55(int iParam0)
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

int func_56()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_57(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_58(int iParam0)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0);
	}
	return unk_0xDCC86F723E82125E(Global_2097152[func_56() /*10270*/].f_7698.f_10, iParam0);
}

int func_59(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xE7748C036820596E(27))
	{
		return 0;
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5F0618A5FDAD55C4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x071958EFED9481F5(joaat("num_cash_spent"), iVar1, 1);
		func_74(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (func_73(14) && !func_72(iParam0))
	{
		return 0;
	}
	if (unk_0xE7748C036820596E(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_71(&Global_2559690))
	{
		if (func_69(&Global_2559690, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_2559690, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x345CE5A66E49ED43(iParam0))
		{
			return 0;
		}
		if (unk_0xE7748C036820596E(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_67(uParam0, (Global_2559689 - 0.5f));
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_67(var uParam0, float fParam1)
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

float func_68(var uParam0)
{
	return uParam0->f_72;
}

bool func_69(var uParam0, int iParam1)
{
	return func_70(uParam0, iParam1) != -1;
}

int func_70(var uParam0, int iParam1)
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

bool func_71(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_72(int iParam0)
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

bool func_73(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_74(int iParam0, int iParam1)
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
	}
	return 0;
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5F0618A5FDAD55C4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x071958EFED9481F5(iParam0, iVar0, 1);
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_77()
{
	int iVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		unk_0x5F0618A5FDAD55C4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_78()
{
	func_79();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_79()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_81(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_480(unk_0xC8B93D94F8954288());
			if (func_80(iVar0) && (!func_73(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_80(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	if (func_80(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_82(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_83(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_89(uParam0);
		func_88(uParam0);
		func_87(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_85();
	}
	if (unk_0xB5F5536784683C33("LEADERBOARD_SCENE"))
	{
		unk_0xDB9D78E5137EE7AD("LEADERBOARD_SCENE");
	}
	if (unk_0xDC6347A8EBB9281E())
	{
		func_84(&(Global_1840922.f_49));
	}
	Global_2458121.f_3819 = 0;
}

void func_84(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_86(&(Global_1835390.f_2780));
	func_84(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_84(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_84(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_86(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_87(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_84(&(Global_1835390.f_2830));
}

void func_88(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_84(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_89(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_90(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_84(&(Global_1835008.f_1));
	unk_0xDD0114265EE39977(*uParam2, uParam2->f_1, -1);
}

void func_91()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_93(&(Global_1835013.f_73));
	func_93(&(Global_1835013.f_142));
	func_93(&(Global_1835013.f_211));
	func_93(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_92(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_92(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_93(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_94(var uParam0)
{
	func_42(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_95()
{
	unk_0x7D1795B1E14EDFFD(uLocal_126, 1);
}

int func_96(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_34(1);
			func_107(&(uParam0->f_509), 0, 0, 1, 1);
			func_106(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_106(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_106(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x5AA202D345A0E889())
			{
				func_106(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_103(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_99(func_102(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_101(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_99(func_102(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_101(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_99(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_390(&(uParam0->f_57), 0, 0);
			}
			func_109(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x2BF05095F2389894())
		{
			if ((unk_0x693EBB4F13506457() - uParam0->f_671) > 900)
			{
				if (unk_0x0139E142C27412BC(2, 216))
				{
					unk_0xC4EE38A4CFF7544C(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_312(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x8D9008B8900A28D0(2, 215))
				{
					unk_0xC4EE38A4CFF7544C(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_98();
					func_97();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x58F80A8B3A06F53C(2, 201))
		{
			return 2;
		}
		else if (unk_0x58F80A8B3A06F53C(2, 202))
		{
			func_312(&(uParam0->f_666), 9, 0);
			func_312(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_97()
{
	if (Global_2426867.f_2138[0 /*72*/].f_2 != 0)
	{
		Global_2426867.f_2138[0 /*72*/].f_2 = 5;
	}
}

void func_98()
{
	Global_25259 = 1;
}

void func_99(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_100(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_30(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_29(3, iVar0);
		Global_1339929.f_2311[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_2311.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_2311.f_183[iVar0] = iParam3;
		Global_1339929.f_2311.f_172[iVar0] = iParam2;
		Global_1339929.f_2311.f_205[iVar0] = iParam4;
		Global_1339929.f_2311.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1339929.f_2311.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1339929.f_2311.f_420[iVar0] = iParam7;
		Global_1339929.f_2311.f_453[iVar0] = iParam8;
		Global_1339929.f_2311.f_431[iVar0] = iParam9;
		Global_1339929.f_2311.f_442[iVar0] = iParam10;
		Global_1339929.f_2311.f_464[iVar0] = iParam11;
	}
}

int func_100(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_101(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_105(&(uParam0->f_1), 1024);
	}
	else
	{
		func_104(&(uParam0->f_1), 1024);
	}
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_106(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_107(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xB6AA3C7BA00BEAFB("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_105(&(uParam0->f_1), 32);
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		func_105(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x766E22CC7C616E59(*uParam0, 1);
		}
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (bParam3)
		{
			func_105(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_105(&(uParam0->f_1), 8192);
	}
}

int func_108(var uParam0)
{
	if ((unk_0xDCC86F723E82125E(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_109(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240()) || unk_0xD5DFCA69ACAA20E3()) || unk_0x0B7B1F8E572996A4())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_112(uParam0))
	{
		return;
	}
	unk_0xD2423E2A80750319();
	unk_0x7F1F2564B5CE06AF(iParam2);
	if (!func_111(uParam0->f_1, 256) || (func_111(uParam0->f_1, 8192) && unk_0x7EF0ED41FC8F3EC1(2)))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_CLEAR_SPACE");
		unk_0x512B59C08EAFA3B9(fParam1);
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(*uParam0, "SET_MAX_WIDTH");
		unk_0x512B59C08EAFA3B9(fParam5);
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD013AC29829DDC02();
		if (unk_0x68B0A67658F2D9C2())
		{
			unk_0x7C38F93AF52620B1(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x0139C89EE907A315(func_111(uParam0->f_1, 4096));
			unk_0xD013AC29829DDC02();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xBDC482FE4AF5F4F1(2);
					break;
				
				case 2:
					bVar4 = !unk_0xBDC482FE4AF5F4F1(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x65960B4E2ADC9F6D(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xDCC86F723E82125E(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xDCC86F723E82125E(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x3F78CAF40CD146C4(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x52374D5DBC0F5DC7(iVar0, iVar1, bVar2);
						}
						if (!unk_0xB8A06E7E729EED0A(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xB8A06E7E729EED0A(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x68B0A67658F2D9C2())
					{
						if (func_111(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x0139C89EE907A315(true);
								unk_0x65960B4E2ADC9F6D(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x0139C89EE907A315(false);
								unk_0x65960B4E2ADC9F6D(-1);
							}
						}
					}
					unk_0xD013AC29829DDC02();
				}
			}
			iVar6++;
		}
		fVar8 = func_110(bParam4, func_110(func_111(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7C38F93AF52620B1(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x512B59C08EAFA3B9(fVar8);
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x512B59C08EAFA3B9(0f);
		unk_0x512B59C08EAFA3B9(0f);
		unk_0x512B59C08EAFA3B9(0f);
		unk_0x512B59C08EAFA3B9(80f);
		unk_0xD013AC29829DDC02();
		func_105(&(uParam0->f_1), 256);
		func_104(&(uParam0->f_1), 128);
	}
	unk_0x16387DB49A36A0F3(*uParam0, 255, 255, 255, 0, 0);
}

float func_110(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_112(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			func_105(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_113(var uParam0, var uParam1)
{
	func_114(uParam1, uParam0);
}

void func_114(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	func_190(&(Global_1840922.f_49), 1, 0);
	unk_0x0CD0751316BC99F7();
	func_189();
	func_36();
	unk_0xC5E066210BF7DEBB();
	func_187();
	unk_0x68A38902ADFD05FE(10);
	func_186(1);
	func_185(1);
	if (!func_182())
	{
		if (!unk_0xB5F5536784683C33("LEADERBOARD_SCENE"))
		{
			unk_0x925AE2E6F6E41362("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xDCC86F723E82125E(uParam1->f_42, 3))
	{
		*uParam0 = func_181();
		unk_0x59A0729D503ED758(&(uParam1->f_42), 3);
	}
	Var32 = { func_180(unk_0xA34E7C2A5118D638()) };
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (((!unk_0x04A97E271BED9566() || !unk_0x5AA202D345A0E889()) || (!unk_0x2987DBAFED6F4E7C() && unk_0xCE2AB8E6CC461E87())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x5AA202D345A0E889())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x77621132305B133B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x2987DBAFED6F4E7C() && unk_0xCE2AB8E6CC461E87())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x77621132305B133B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0x04A97E271BED9566())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x77621132305B133B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x77621132305B133B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xDCC86F723E82125E(uParam1->f_42, 1))
			{
				unk_0x7C38F93AF52620B1(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xD013AC29829DDC02();
				func_179(*uParam0, Global_1835390.f_2780);
				if (unk_0xF2831232D38CD691(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_178(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_176(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0x59A0729D503ED758(&iVar31, 4);
				func_175(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0x59A0729D503ED758(&iVar31, 5);
				func_175(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0x59A0729D503ED758(&iVar31, 6);
				func_175(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0x59A0729D503ED758(&(uParam1->f_42), 1);
				func_174(*uParam0);
				unk_0x77621132305B133B(&(uParam1->f_42), 2);
				unk_0x9F4AA6F234E8A860(1);
			}
			else
			{
				func_174(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x77621132305B133B(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_139(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x77621132305B133B(&(uParam1->f_42), 1);
				if (!unk_0xDCC86F723E82125E(uParam1->f_42, 0))
				{
					unk_0x7C38F93AF52620B1(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD013AC29829DDC02();
					func_179(*uParam0, Global_1835390.f_2780);
					if (unk_0xF2831232D38CD691(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_178(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_176(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0x59A0729D503ED758(&(uParam1->f_42), 0);
					unk_0x77621132305B133B(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 4);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 5);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 6);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0x59A0729D503ED758(&iVar31, 7);
						func_138(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_84(&(Global_1835390.f_2823));
				}
				else if (func_136(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 4);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 5);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0x59A0729D503ED758(&iVar31, 6);
							func_175(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0x59A0729D503ED758(&iVar31, 7);
						func_138(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_84(&(Global_1835390.f_2823));
				}
				func_174(*uParam0);
			}
			else
			{
				unk_0x77621132305B133B(&(uParam1->f_42), 0);
				if (!unk_0xDCC86F723E82125E(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x7C38F93AF52620B1(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD013AC29829DDC02();
					func_179(*uParam0, Global_1835390.f_2780);
					if (unk_0xF2831232D38CD691(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_178(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_177(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_176(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xDCC86F723E82125E(uParam1->f_42, 6))
					{
						func_87(&Global_1839721);
						func_132(uParam1, &Global_1839721);
						func_131(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_178(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									unk_0x59A0729D503ED758(&iVar31, 4);
									func_175(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0x59A0729D503ED758(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_178(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_175(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_175(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0x59A0729D503ED758(&iVar31, 6);
									if (!unk_0x74FE6501DE77C9F9())
									{
										bVar63 = true;
									}
									else if (!unk_0x09E31B73ADE03974())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_178(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_175(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_175(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_130(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_178(uParam1->f_44))
								{
									unk_0x2B04579D8D504593(unk_0xA34E7C2A5118D638(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xF8D041B05C3D1FD4(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_129(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0x59A0729D503ED758(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x59A0729D503ED758(&iVar31, 3);
											}
										}
									}
									if (func_178(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xB8A06E7E729EED0A(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xF8D041B05C3D1FD4(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_128(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_128(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0xDCC86F723E82125E(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_123(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_123(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_120(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_120(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_119();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x59A0729D503ED758(&iVar31, 2);
											unk_0x59A0729D503ED758(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_118(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						unk_0x59A0729D503ED758(&iVar31, 4);
						func_175(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0x59A0729D503ED758(&iVar31, 5);
						func_175(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0x59A0729D503ED758(&iVar31, 6);
						func_175(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0x59A0729D503ED758(&(uParam1->f_42), 1);
					unk_0x77621132305B133B(&(uParam1->f_42), 2);
					func_174(*uParam0);
					unk_0x9F4AA6F234E8A860(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x59A0729D503ED758(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_118(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_174(*uParam0);
					func_115(uParam0, uParam1);
				}
			}
		}
	}
}

void func_115(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		unk_0xE4D30FD564C6B6BB();
		unk_0x80904D7F494D0C30(2, 239);
		unk_0x80904D7F494D0C30(2, 240);
		unk_0x80904D7F494D0C30(2, 237);
		unk_0x80904D7F494D0C30(2, 238);
		unk_0x2BE3C7FA4FCCA784(2, 200, 1);
		if (unk_0x69ED83B6DEBA60F9(2, 241))
		{
			unk_0xB3769C3CBC2E32C2(2, 188, 1f);
		}
		if (unk_0x69ED83B6DEBA60F9(2, 242))
		{
			unk_0xB3769C3CBC2E32C2(2, 187, 1f);
		}
		if (unk_0x648597D3187D7DF9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xB3769C3CBC2E32C2(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		func_117(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xDCC86F723E82125E(uParam1->f_246, 0))
		{
			if ((unk_0x0139E142C27412BC(2, 188) || unk_0x69ED83B6DEBA60F9(2, 188)) || iVar6 < -100)
			{
				unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x59A0729D503ED758(&(uParam1->f_246), 0);
				func_84(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_116(uParam1, 188))
		{
			unk_0x77621132305B133B(&(uParam1->f_246), 0);
		}
		if (!unk_0xDCC86F723E82125E(uParam1->f_246, 1))
		{
			if ((unk_0x0139E142C27412BC(2, 187) || unk_0x69ED83B6DEBA60F9(2, 187)) || iVar6 > 100)
			{
				unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x59A0729D503ED758(&(uParam1->f_246), 1);
				func_84(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_116(uParam1, 187))
		{
			unk_0x77621132305B133B(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0xDCC86F723E82125E(uParam1->f_246, 3))
	{
		if ((unk_0x0139E142C27412BC(2, 204) || unk_0x3BE6F47A1187EFE0(2, 204)) || unk_0x8D9008B8900A28D0(2, 237))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_246), 3);
			func_84(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_116(uParam1, 204))
	{
		unk_0x77621132305B133B(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x77621132305B133B(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_118(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x59A0729D503ED758(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_118(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x77621132305B133B(&(uParam1->f_42), 2);
		}
		if (func_130(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xDCC86F723E82125E(uParam1->f_246, 2))
			{
				if (unk_0x0139E142C27412BC(2, 217) || unk_0x3BE6F47A1187EFE0(2, 217))
				{
					if (!unk_0x0B03487F3F07FC6C())
					{
						unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x59A0729D503ED758(&(uParam1->f_246), 2);
						unk_0xFCE3256ED9977240(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x0139E142C27412BC(2, 217))
			{
				unk_0x77621132305B133B(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_116(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_117(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x0139E142C27412BC(2, iParam1) && !unk_0x69ED83B6DEBA60F9(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_136(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x0139E142C27412BC(2, iParam1) && !unk_0x69ED83B6DEBA60F9(2, iParam1)) || func_136(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 221) * 127f));
		}
	}
}

void func_118(var uParam0, int iParam1, int iParam2)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT_STATE");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0xD013AC29829DDC02();
}

void func_119()
{
	unk_0xD013AC29829DDC02();
}

void func_120(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x36E8D9048E194806(fParam44, 2);
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x6DC80A902A91958F(unk_0xF34EE736CF047844(fParam44));
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!unk_0xC3D849E6E05C31A7())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_122(fParam44);
					}
					else
					{
						fParam44 = func_121(fParam44);
					}
				}
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x36E8D9048E194806(fParam44, 2);
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 0:
			break;
	}
}

float func_121(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_122(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_123(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x6DC80A902A91958F(iParam44);
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x6DC80A902A91958F(-iParam44);
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 14);
					unk_0x354E2E7AA52E941F();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 6);
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 2055);
					unk_0x354E2E7AA52E941F();
				}
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x276F16E002D00C0C("SC_LB_EMPTY");
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 14);
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 2055);
					unk_0x354E2E7AA52E941F();
				}
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 14);
					unk_0x354E2E7AA52E941F();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 6);
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam44, 2055);
					unk_0x354E2E7AA52E941F();
				}
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xE85F777AD06F7310(iParam44))
				{
					unk_0x276F16E002D00C0C("SCLB_VEH_CUST");
					unk_0xCE59E3E42586D52D(unk_0x4C35C75D2CE82630(iParam44));
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					unk_0x276F16E002D00C0C("SC_LB_EMPTY");
					unk_0x354E2E7AA52E941F();
				}
			}
			else if (unk_0xE85F777AD06F7310(iParam44))
			{
				unk_0x276F16E002D00C0C(unk_0x4C35C75D2CE82630(iParam44));
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 8:
			if (func_127(iParam44) != 0)
			{
				unk_0x276F16E002D00C0C(func_124(func_127(iParam44), 0));
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!unk_0xC3D849E6E05C31A7())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_122(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_121(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x276F16E002D00C0C("NUMBER");
				unk_0x6DC80A902A91958F(iParam44);
				unk_0x354E2E7AA52E941F();
			}
			else
			{
				unk_0x276F16E002D00C0C("SC_LB_EMPTY");
				unk_0x354E2E7AA52E941F();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_124(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		default:
			if (func_126(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_125(&(Var0.f_31));
				}
				else
				{
					return func_125(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_125(var uParam0)
{
	return uParam0;
}

int func_126(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xBF63A843F5FFBEF2();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE8067788A3D17AD6(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_128(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	if (iParam3 > 0)
	{
		unk_0x276F16E002D00C0C("NUMBER");
		unk_0x6DC80A902A91958F(iParam3);
		unk_0x354E2E7AA52E941F();
	}
	else
	{
		unk_0x276F16E002D00C0C("SC_LB_EMPTY");
		unk_0x354E2E7AA52E941F();
	}
	unk_0x621B4D0F6ED2315D(cParam4);
	unk_0x621B4D0F6ED2315D(uParam5);
}

int func_129(var uParam0, var uParam1)
{
	if (!func_130(*uParam0))
	{
		return 0;
	}
	if (!func_130(*uParam1))
	{
		return 0;
	}
	if (unk_0x7B7D10220EEEBC47(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

void func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xDCC86F723E82125E(uParam0->f_42, 5) && !unk_0xDCC86F723E82125E(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_132(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xDCC86F723E82125E(uParam0->f_42, 5) && !unk_0xDCC86F723E82125E(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_135(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_135(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_135(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_133(uParam1);
	}
}

void func_133(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_180(unk_0xA34E7C2A5118D638()) };
	if (unk_0x1CC4BB306BEC7DFB(Global_1835390.f_2826))
	{
		iVar16 = unk_0xDD6D3CD4E9A64489(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_134(&Global_1839591);
				iVar2 = 0;
				unk_0x23CBCE811619697E(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xDCC86F723E82125E(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xDCC86F723E82125E(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xDCC86F723E82125E(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xDCC86F723E82125E(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_129(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xDCC86F723E82125E(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_134(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_135(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_180(unk_0xA34E7C2A5118D638()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBBDA792448DB5A89((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_136(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_137(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_137(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

void func_138(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x59A0729D503ED758(&iParam2, 7);
	unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0x276F16E002D00C0C(sParam3);
	unk_0x0595013EB4305D80();
	unk_0xD013AC29829DDC02();
}

int func_139(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_173(&(Global_1835390.f_2827)))
		{
			func_137(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_136(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x04A97E271BED9566() || !unk_0x5AA202D345A0E889()) || (!unk_0x2987DBAFED6F4E7C() && unk_0xCE2AB8E6CC461E87())) || Global_1835390.f_2832 != 0)
	{
		unk_0x77621132305B133B(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_42, 4))
	{
		func_172(uParam0);
		unk_0x59A0729D503ED758(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xDCC86F723E82125E(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_170(uParam0))
	{
		return 0;
	}
	if (!func_168(uParam0))
	{
		return 0;
	}
	if (!func_155(uParam0))
	{
		return 0;
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_42, 6))
	{
		func_87(&Global_1839721);
		func_132(uParam0, &Global_1839721);
		func_131(uParam0, &Global_1839721);
		unk_0x59A0729D503ED758(&(uParam0->f_42), 6);
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_42, 7))
	{
		if (!func_173(&(Global_1835390.f_2830)))
		{
			func_137(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_136(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0x59A0729D503ED758(&(uParam0->f_42), 7);
		}
		if (func_152(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_149(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_144(&Global_1839721))
		{
			func_140(&Global_1839721);
			unk_0x59A0729D503ED758(&(uParam0->f_42), 7);
			func_140(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_143(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_142(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_134(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xF8D041B05C3D1FD4(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_130((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x59A0729D503ED758(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x77621132305B133B(&(Global_1839591.f_61), 0);
			}
			unk_0x59A0729D503ED758(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xDCC86F723E82125E(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			unk_0xB856969EA05BFA9E(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_141(unk_0xA34E7C2A5118D638()) };
}

Vector3 func_141(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x1CC4BB306BEC7DFB(Global_1838575.f_81[iParam1]))
		{
			unk_0xDA34E42FB67E8B70(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x1CC4BB306BEC7DFB(iParam0))
		{
			unk_0xDA34E42FB67E8B70(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x1CC4BB306BEC7DFB(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x86DBEFE67A480431(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_148(uParam0);
			if (unk_0x62F8BA7ED89768FB() && !unk_0xE028438B8B6A57B6(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_130((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_147(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_145(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_130((uParam0[iVar0 /*100*/])->f_32) && func_130(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x7B7D10220EEEBC47(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_145(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0xE0C269B7F3E0D49E())
			{
			}
			else
			{
				unk_0xE02972119177F55B();
				unk_0x23D5E7E162B6B2B6(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xE0C269B7F3E0D49E())
			{
				if (unk_0xD5CB0AF8B560C902())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (unk_0xFBB6C7AFC7668595(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_146(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0xE0C269B7F3E0D49E())
			{
				unk_0x0D4E136854628580();
			}
			else
			{
				unk_0xE02972119177F55B();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_146(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

int func_147(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_130(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x7B7D10220EEEBC47(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_148(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_92(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0xE0C269B7F3E0D49E())
		{
			unk_0xE02972119177F55B();
		}
	}
	if (unk_0xE0C269B7F3E0D49E())
	{
		unk_0x0D4E136854628580();
	}
	Global_1841018.f_206 = 0;
}

int func_149(var uParam0)
{
	int iVar0;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	else if (unk_0xF7FE713C9F786F8C())
	{
		if (!func_151(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_150(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_150(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_130(*uParam1))
			{
				if (!unk_0xE3E0CC0E2F54D42E(uParam1))
				{
					if (unk_0xF7FE713C9F786F8C())
					{
						if (unk_0x531D7A11771D1EB1(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xC07DCB0D0C199EDF())
					{
						if (unk_0x531D7A11771D1EB1(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xC4DC0B3456E32DD2(uParam1), 64);
						if (unk_0x5769873E00C06500())
						{
						}
						else if (unk_0x62F8BA7ED89768FB())
						{
						}
						else if (unk_0x68B0A67658F2D9C2())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x74C5CB21CF9F1178(unk_0x005EF09BBC76ACC4(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xE3E0CC0E2F54D42E(uParam1))
			{
				if (!unk_0xD3DE676E08D71960())
				{
					if (unk_0x81947682674B7A5D())
					{
						StringCopy(sParam2, unk_0xC4DC0B3456E32DD2(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x74C5CB21CF9F1178(unk_0x005EF09BBC76ACC4(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_151(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF7FE713C9F786F8C())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_92(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_130((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xA99753B0ACF7B519(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF8828D8276FFFD76((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_130((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0)
{
	int iVar0;
	
	if (unk_0xF7FE713C9F786F8C())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_154(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_153(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xB8A06E7E729EED0A(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x09BB241392A09EFE(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_130(Var0))
			{
				if (!unk_0xE3E0CC0E2F54D42E(&Var0))
				{
					if (unk_0xC07DCB0D0C199EDF() || unk_0xF7FE713C9F786F8C())
					{
						if (unk_0x531D7A11771D1EB1(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xC4DC0B3456E32DD2(&Var0), 64);
						if (unk_0x5769873E00C06500())
						{
						}
						else if (unk_0x62F8BA7ED89768FB())
						{
						}
						else if (unk_0x68B0A67658F2D9C2())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x74C5CB21CF9F1178(unk_0x005EF09BBC76ACC4(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xE3E0CC0E2F54D42E(&Var0))
			{
				if (!unk_0xD3DE676E08D71960())
				{
					if (unk_0x81947682674B7A5D())
					{
						StringCopy(sParam17, unk_0xC4DC0B3456E32DD2(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x74C5CB21CF9F1178(unk_0x005EF09BBC76ACC4(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_154(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xF7FE713C9F786F8C())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x09BB241392A09EFE(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_130(Var1[0 /*13*/]))
			{
				if (!unk_0xE3E0CC0E2F54D42E(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xA99753B0ACF7B519(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x74C5CB21CF9F1178(unk_0x005EF09BBC76ACC4(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF8828D8276FFFD76(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_155(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_180(unk_0xA34E7C2A5118D638()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x14F2268F2CD21E48())
			{
				if (unk_0x0BB7D2D2CAAFD70C(&Var116))
				{
					if (unk_0x59E0C66A4FA07806(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_167(), 0, 0, 0))
			{
				func_165(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_167())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xB1271A2925F81F21(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_129(&Var0, &Var116) || func_129(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0xDCC86F723E82125E(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x24D699AE1337F619(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x6A6B4BDE036503D1(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_164(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xB1271A2925F81F21(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_167() && iVar109 == 0)
								{
									func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_167() && (func_129(&Var0, &Var116) || func_129(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_129(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_162(uParam0->f_44))
									{
										iVar108 = unk_0x24D699AE1337F619(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_178(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x24D699AE1337F619(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x6A6B4BDE036503D1(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835390.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						if (!func_167())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_164(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xB1271A2925F81F21(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_167() && iVar109 == iVar111)
								{
									if (!func_129(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_167() && (func_129(&Var0, &Var116) || func_129(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_130(Var0) && !func_129(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_129(&Var0, &Var116))
										{
											if (Global_1835390.f_2775[iVar113] < 0)
											{
												Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_162(uParam0->f_44))
										{
											iVar108 = unk_0x24D699AE1337F619(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_178(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x24D699AE1337F619(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x6A6B4BDE036503D1(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_164(&Var0);
							iVar111++;
						}
						unk_0xD2D92ED470041D39();
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_167())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						unk_0xD2D92ED470041D39();
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_157(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_165(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xB1271A2925F81F21(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_167() && (func_129(&Var0, &Var116) || func_129(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_162(uParam0->f_44))
									{
										iVar108 = unk_0x24D699AE1337F619(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_178(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x24D699AE1337F619(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x6A6B4BDE036503D1(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835390.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_162(uParam0->f_44))
									{
										iVar108 = unk_0x24D699AE1337F619(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_178(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x24D699AE1337F619(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x6A6B4BDE036503D1(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_164(&Var0);
							iVar106++;
						}
					}
					unk_0xD2D92ED470041D39();
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xD2D92ED470041D39();
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x59A0729D503ED758(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_167())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_156(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_167() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_167())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_157(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_160() && !func_159())
			{
				func_158(*uParam2);
				if (unk_0x9E70EC8667399944(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x506718546F41A932(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xD2406FC80C00910D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_158(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_190(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_159()
{
	if (unk_0x2BF05095F2389894() && !func_182())
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if (unk_0x551B02A4254B5A4D() || Global_1835008)
	{
		func_161();
		return 1;
	}
	return 0;
}

void func_161()
{
	if (func_136(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xDD0114265EE39977(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_84(&(Global_1835008.f_1));
	}
}

int func_162(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_163(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_178(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), 64);
		sParam1->f_32 = { func_180(unk_0xA34E7C2A5118D638()) };
	}
	sParam1->f_59 = iParam2;
	if (func_162(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (unk_0xDCC86F723E82125E(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_164(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_165(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_166(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_160() && !func_159())
			{
				func_158(*uParam2);
				if (bParam5)
				{
					if (unk_0xDCC86F723E82125E(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x88B525A483DB1487(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x78D5EDBEA0E12B4F(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x34D1B5F8AF854580(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x506718546F41A932(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xD2406FC80C00910D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_167()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_168(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_180(unk_0xA34E7C2A5118D638()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0xA430F6D98D2EC554();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_167())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_169(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_165(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var98))
					{
						if (func_167())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xB1271A2925F81F21(iVar110, &Var0);
									if (func_178(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_129(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xDCC86F723E82125E(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x24D699AE1337F619(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x6A6B4BDE036503D1(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_164(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_167() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xB1271A2925F81F21(0, &Var0);
							if (func_167() && (func_129(&Var0, &Var114) || func_129(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_130(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_129(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_162(uParam0->f_44))
								{
									iVar111 = unk_0x24D699AE1337F619(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_178(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x24D699AE1337F619(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x6A6B4BDE036503D1(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_164(&Var0);
								unk_0xD2D92ED470041D39();
								func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_167())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_164(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_164(&Var0);
							unk_0xD2D92ED470041D39();
							func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_167())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_167())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							unk_0xB1271A2925F81F21(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_167() && iVar108 == iVar110)
								{
									if (!func_129(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_167() && (func_129(&Var0, &Var114) || func_129(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_130(Var0) && !func_129(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_129(&Var0, &Var114))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_162(uParam0->f_44))
										{
											iVar111 = unk_0x24D699AE1337F619(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_178(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0x24D699AE1337F619(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0x6A6B4BDE036503D1(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_164(&Var0);
							iVar110++;
						}
						unk_0xD2D92ED470041D39();
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_167())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_163(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x59A0729D503ED758(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_156(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_169(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_160() && !func_159())
			{
				func_158(*uParam2);
				if (unk_0x918B101666F9CB83(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x506718546F41A932(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xD2406FC80C00910D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_170(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_180(unk_0xA34E7C2A5118D638()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_171(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_167(), 0, 0, 0))
			{
				func_165(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_167())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xB1271A2925F81F21(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_129(&Var13, &Var0) || func_129(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0xDCC86F723E82125E(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x24D699AE1337F619(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x6A6B4BDE036503D1(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_164(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xB1271A2925F81F21(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_167() && iVar122 == 0)
								{
									func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_167() && (func_129(&Var13, &Var0) || func_129(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_129(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_162(uParam0->f_44))
									{
										iVar121 = unk_0x24D699AE1337F619(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_178(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x24D699AE1337F619(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x6A6B4BDE036503D1(0, Global_1835390.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835390.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						if (!func_167())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_164(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xB1271A2925F81F21(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_167() && iVar122 == iVar124)
								{
									if (!func_129(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_167() && (func_129(&Var13, &Var0) || func_129(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_130(Var13) && !func_129(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_129(&Var13, &Var0))
										{
											if (Global_1835390.f_2775[iVar126] < 0)
											{
												Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_162(uParam0->f_44))
										{
											iVar121 = unk_0x24D699AE1337F619(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_178(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x24D699AE1337F619(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x6A6B4BDE036503D1(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_164(&Var13);
							iVar124++;
						}
						unk_0xD2D92ED470041D39();
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_167())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
								Global_1835390.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						unk_0xD2D92ED470041D39();
						func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_157(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_165(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xB1271A2925F81F21(iVar119, &Var13);
							if (func_167() && (func_129(&Var13, &Var0) || func_129(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835390.f_2704[iVar126] < 12 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_162(uParam0->f_44))
										{
											iVar121 = unk_0x24D699AE1337F619(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_178(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x24D699AE1337F619(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x6A6B4BDE036503D1(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835390.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar126]++;
											}
										}
										else if (Global_1835390.f_2704[iVar126] == 1 && Global_1835390.f_2775[iVar126] == -1)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
									else if (Global_1835390.f_2704[iVar126] < 12)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_162(uParam0->f_44))
										{
											iVar121 = unk_0x24D699AE1337F619(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_178(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x24D699AE1337F619(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x6A6B4BDE036503D1(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
								}
							}
							func_164(&Var13);
							iVar119++;
						}
					}
					unk_0xD2D92ED470041D39();
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0x59A0729D503ED758(&(Global_1835390.f_2832), iVar126);
					func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_167())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_163(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_156(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_171(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0.f_0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0xF8D041B05C3D1FD4(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xF8D041B05C3D1FD4(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_172(var uParam0)
{
	int iVar0;
	
	if (unk_0x1CC4BB306BEC7DFB(Global_1835390.f_2826))
	{
		iVar0 = unk_0x86DBEFE67A480431(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam0->f_42), 5);
			func_142(Global_1835390.f_2826, -1);
		}
	}
}

bool func_173(var uParam0)
{
	return uParam0->f_1;
}

void func_174(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(uParam0))
	{
		unk_0x16387DB49A36A0F3(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_175(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (unk_0xDCC86F723E82125E(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xDCC86F723E82125E(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xDCC86F723E82125E(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xDC6347A8EBB9281E() && unk_0x14F2268F2CD21E48())
		{
			if (unk_0x62F8BA7ED89768FB() && !unk_0xE028438B8B6A57B6(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_180(unk_0xA34E7C2A5118D638()) };
				if (unk_0x0BB7D2D2CAAFD70C(&Var53))
				{
					unk_0x59E0C66A4FA07806(&Var1, 35, &Var53);
					if (!unk_0xB8A06E7E729EED0A(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT");
	unk_0x65960B4E2ADC9F6D(*iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	if (bVar52)
	{
		unk_0x276F16E002D00C0C(sVar0);
		unk_0x6B0C98F2CFD22419(&Var36);
		unk_0x354E2E7AA52E941F();
	}
	else
	{
		unk_0x276F16E002D00C0C(sVar0);
		unk_0x354E2E7AA52E941F();
	}
	unk_0xD013AC29829DDC02();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0x59A0729D503ED758(&iVar66, 7);
		unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT");
		unk_0x65960B4E2ADC9F6D(*iParam1);
		unk_0x65960B4E2ADC9F6D(iVar66);
		if (!unk_0xDC6347A8EBB9281E())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x04A97E271BED9566())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x276F16E002D00C0C(sVar0);
		unk_0x0595013EB4305D80();
		unk_0xD013AC29829DDC02();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xDCC86F723E82125E(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xDCC86F723E82125E(iParam2, 5))
		{
			if (unk_0xA430F6D98D2EC554() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xDCC86F723E82125E(iParam2, 6))
		{
			if (unk_0x74FE6501DE77C9F9())
			{
				if (unk_0x09E31B73ADE03974())
				{
					if (unk_0xDC6347A8EBB9281E() && unk_0x14F2268F2CD21E48())
					{
						if (unk_0x62F8BA7ED89768FB() && !unk_0xE028438B8B6A57B6(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_180(unk_0xA34E7C2A5118D638()) };
							if (unk_0x0BB7D2D2CAAFD70C(&Var67))
							{
								unk_0x59E0C66A4FA07806(&Var1, 35, &Var67);
								if (!unk_0xB8A06E7E729EED0A(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		unk_0x59A0729D503ED758(&iVar80, 7);
		unk_0x7C38F93AF52620B1(uParam0, "SET_SLOT");
		unk_0x65960B4E2ADC9F6D(*iParam1);
		unk_0x65960B4E2ADC9F6D(iVar80);
		if (bVar52)
		{
			unk_0x276F16E002D00C0C(sVar0);
			unk_0x6B0C98F2CFD22419(&Var36);
			unk_0x0595013EB4305D80();
		}
		else
		{
			unk_0x276F16E002D00C0C(sVar0);
			unk_0x0595013EB4305D80();
		}
		unk_0xD013AC29829DDC02();
		*iParam1++;
	}
}

void func_176(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x7C38F93AF52620B1(uParam0, "SET_TITLE");
	unk_0x276F16E002D00C0C(sParam1);
	unk_0x354E2E7AA52E941F();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x276F16E002D00C0C(uParam2[iVar0 /*6*/]);
		unk_0x354E2E7AA52E941F();
		iVar0++;
	}
	unk_0xD013AC29829DDC02();
}

void func_177(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x276F16E002D00C0C(sParam1);
	if (!unk_0xB8A06E7E729EED0A(sParam2))
	{
		unk_0xCE59E3E42586D52D(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				unk_0x6B0C98F2CFD22419(sParam3);
			}
		}
		else if (!unk_0xB8A06E7E729EED0A(sParam3))
		{
			unk_0xCE59E3E42586D52D(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				unk_0x6B0C98F2CFD22419(sParam3);
			}
		}
		else if (!unk_0xB8A06E7E729EED0A(sParam3))
		{
			unk_0xCE59E3E42586D52D(sParam3);
		}
		unk_0x6DC80A902A91958F(iParam5);
	}
	unk_0x354E2E7AA52E941F();
	unk_0xD013AC29829DDC02();
}

int func_178(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0, int iParam1)
{
	unk_0x7C38F93AF52620B1(uParam0, "SET_DISPLAY_TYPE");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

struct<13> func_180(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

var func_181()
{
	return unk_0x31DC2CEFEF13C96D("SC_LEADERBOARD");
}

bool func_182()
{
	return func_183(unk_0xA34E7C2A5118D638());
}

int func_183(int iParam0)
{
	switch (func_184(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return 0;
		
		default:
	}
	return 1;
}

int func_184(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177;
}

void func_185(int iParam0)
{
	Global_1318753 = iParam0;
}

void func_186(int iParam0)
{
	Global_1339929.f_932 = iParam0;
}

void func_187()
{
	func_189();
	func_188(4, -1);
	func_188(6, -1);
	func_188(7, -1);
	func_188(3, -1);
	func_188(1, -1);
	func_188(2, -1);
	func_188(11, -1);
	func_188(13, -1);
	func_188(14, -1);
	func_188(16, -1);
}

void func_188(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1338611.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338611.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_189()
{
	Global_2458121.f_4384 = 0;
}

void func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2AA13A84EE2D3B24();
		}
		else
		{
			*uParam0 = unk_0x3BC33547A5F418E8();
		}
	}
	else
	{
		*uParam0 = unk_0x693EBB4F13506457();
	}
	uParam0->f_1 = 1;
}

int func_191(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0xB36863F9C6D42649() && Global_1840922.f_2 > 0)
	{
		func_84(&Global_1840922);
		func_84(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_199(0);
	}
	Global_1840922.f_2 = unk_0xB36863F9C6D42649();
	iVar1 = -1;
	if (unk_0x62F8BA7ED89768FB())
	{
		if (unk_0xD5C4136995633577() == 0)
		{
			iVar1 = unk_0xF88DBA8FCE903044();
		}
	}
	if ((unk_0x62F8BA7ED89768FB() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_197() && unk_0xDC6347A8EBB9281E()))
	{
		if (unk_0xC6D394D95637854C())
		{
			func_194(&(Global_1840922.f_3), func_196(&(Global_1840922.f_3)));
			if (!unk_0xDCC86F723E82125E(*uParam0, 4))
			{
				unk_0x59A0729D503ED758(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_192(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_197())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0xDCC86F723E82125E(*uParam0, 0))
			{
				if (!unk_0x0139E142C27412BC(2, 201))
				{
					unk_0x59A0729D503ED758(uParam0, 0);
				}
			}
			else if (unk_0x58F80A8B3A06F53C(2, 201))
			{
				func_84(&(Global_1840922.f_49));
				func_84(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_199(0);
				return 1;
			}
		}
	}
	else
	{
		func_194(&(Global_1840922.f_3), func_196(&(Global_1840922.f_3)));
		if ((func_173(&(Global_1840922.f_49)) && !func_136(&(Global_1840922.f_49), 2000, 1)) && !unk_0xDC6347A8EBB9281E())
		{
			unk_0x59A0729D503ED758(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_192(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xDCC86F723E82125E(*uParam0, 3))
		{
			if (!unk_0xDCC86F723E82125E(*uParam0, 1))
			{
				unk_0x308850C66B1A39A4(0);
				unk_0x59A0729D503ED758(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_192(&(Global_1840922.f_3), 0);
			}
		}
		if (func_173(&Global_1840922))
		{
			if (!func_136(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xDC6347A8EBB9281E())
				{
					if (unk_0x34D71CFAE7364A78())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x0B03487F3F07FC6C())
					{
						if (!unk_0xDCC86F723E82125E(*uParam0, 0))
						{
							if (!unk_0x0139E142C27412BC(2, 201))
							{
								unk_0x59A0729D503ED758(uParam0, 0);
							}
						}
						else if (unk_0x58F80A8B3A06F53C(2, 201))
						{
							func_84(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_199(0);
							return 1;
						}
					}
				}
				else
				{
					func_84(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_199(0);
					return 1;
				}
			}
			else if (unk_0xDCC86F723E82125E(*uParam0, 3))
			{
				if (unk_0x34D71CFAE7364A78())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0xDCC86F723E82125E(*uParam0, 0))
				{
					if (!unk_0x0139E142C27412BC(2, 201))
					{
						unk_0x59A0729D503ED758(uParam0, 0);
					}
				}
				else if (unk_0x58F80A8B3A06F53C(2, 201))
				{
					func_84(&(Global_1840922.f_49));
					func_84(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_199(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x34D71CFAE7364A78())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x0B03487F3F07FC6C())
				{
					if (!unk_0xDCC86F723E82125E(*uParam0, 0))
					{
						if (!unk_0x0139E142C27412BC(2, 201))
						{
							unk_0x59A0729D503ED758(uParam0, 0);
						}
					}
					else if (unk_0x58F80A8B3A06F53C(2, 201))
					{
						func_84(&(Global_1840922.f_49));
						func_84(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_199(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, bool bParam1)
{
	func_193(uParam0);
	if (bParam1)
	{
		func_199(0);
	}
	uParam0->f_35 = 1;
}

void func_193(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_194(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_195(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0x6DC80A902A91958F(uParam0->f_33);
			unk_0x6DC80A902A91958F(uParam0->f_34);
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0x6DC80A902A91958F(uParam0->f_33);
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0x2DED6C1306496257(&(uParam0->f_17));
			unk_0x6DC80A902A91958F(uParam0->f_33);
			unk_0x6DC80A902A91958F(uParam0->f_34);
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0x2DED6C1306496257(&(uParam0->f_17));
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0xE4CFBF63F6DBED8E(uParam0->f_33, 70);
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		else
		{
			unk_0xA70D79905D9602C3(&(uParam0->f_1));
			unk_0x643C501C25C7D804(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_195(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_196(var uParam0)
{
	return uParam0->f_35;
}

int func_197()
{
	if (func_198())
	{
		return 0;
	}
	if (unk_0x91629FFED455823B() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_198()
{
	return Global_2441455;
}

void func_199(bool bParam0)
{
	unk_0xA3C956EAA38F10C0();
	if (bParam0)
	{
		unk_0xCBDFD4E19E5AF8C2();
	}
}

int func_200(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_289)
	{
		func_212(&(uParam0->f_72), bParam1);
		iLocal_289 = 1;
		func_312(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_209(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_201(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_178(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_180(unk_0xA34E7C2A5118D638()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_208(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_165(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0AABE178B084CC04(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_207(uParam0->f_44, iVar188))
					{
						if (func_206(uParam0->f_44, 4, iVar188))
						{
							unk_0x59A0729D503ED758(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x77621132305B133B(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xB1271A2925F81F21(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_130(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_207(uParam0->f_44, iVar188))
								{
									if (func_206(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x24D699AE1337F619(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = unk_0x6A6B4BDE036503D1(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xD2D92ED470041D39();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_205();
				if (Global_1835013.f_4)
				{
					if (func_204(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x03E89CECC6222646(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0xBBAE3E0C60A8AD4B() && func_203())
			{
				if (func_202())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_204(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x03E89CECC6222646(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_165(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x3F87BB50B7512EC8(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xB1271A2925F81F21(0, &Var0);
						if (unk_0xF8D041B05C3D1FD4(&(Var0.f_13), ""))
						{
							Global_976098.f_1 = -1;
						}
						else
						{
							Global_976098.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_976098.f_1 = -1;
					}
					unk_0xD2D92ED470041D39();
				}
				else
				{
					Global_976098.f_1 = -1;
				}
				Global_1835013 = 999;
				func_90(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_202()
{
	return unk_0xDCC86F723E82125E(Global_967557.f_8, 1);
}

var func_203()
{
	return Global_2439759.f_3;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_205()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x4393484DCC0A2C62(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_207(int iParam0, int iParam1)
{
	if (unk_0xA023B715C6DAAAC0(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_208(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_160() && !func_159())
			{
				func_158(*uParam2);
				if (unk_0x6418520806506840(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x506718546F41A932(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xD2406FC80C00910D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_209(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x5AA202D345A0E889())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_211(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_210(190, 131, 0, 0f, 1);
		func_210(190, 103, iLocal_151[1], 0f, 0);
		func_210(190, 99, iLocal_151[2], 0f, 0);
		func_210(190, 109, iLocal_151[3], 0f, 0);
		func_210(190, 106, iLocal_151[5], 0f, 0);
		func_210(190, 2, iLocal_151[10], 0f, 0);
		func_210(190, 107, iLocal_151[8], 0f, 0);
		func_210(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_210(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x0E68C97A53548AA2(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0AABE178B084CC04(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_206(iParam0, 4, iVar1))
				{
					unk_0x59A0729D503ED758(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x77621132305B133B(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x77621132305B133B(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xA023B715C6DAAAC0(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x59A0729D503ED758(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x77621132305B133B(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_211(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xDC6347A8EBB9281E())
	{
	}
	if ((!unk_0xD3806BCA60629B3F() && (unk_0x2987DBAFED6F4E7C() || !unk_0xCE2AB8E6CC461E87())) && unk_0xDACB8C1598DAD773())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x14F2268F2CD21E48())
			{
				Var69 = { func_180(unk_0xA34E7C2A5118D638()) };
				if (unk_0x0BB7D2D2CAAFD70C(&Var69))
				{
					if (unk_0x59E0C66A4FA07806(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xBBAE3E0C60A8AD4B() && Global_2439759.f_3)
			{
				unk_0x5BEDAFD51BD250F9(&Var0, &(Global_1710194.f_10));
			}
			else
			{
				unk_0xB7CCCBC5D4D05F4D(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xD3806BCA60629B3F())
	{
	}
	if (!unk_0x2987DBAFED6F4E7C())
	{
	}
	if (unk_0xCE2AB8E6CC461E87())
	{
	}
	if (!unk_0xDACB8C1598DAD773())
	{
	}
	return 0;
}

void func_212(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_213(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_213(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0xB8A06E7E729EED0A(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_216())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_216())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x2B04579D8D504593(unk_0xA34E7C2A5118D638(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_216())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_216())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_216())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_216())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_216())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_215(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1613622.f_44 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					if (Global_1613622.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1613622.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB8A06E7E729EED0A(sParam3))
				{
					if (Global_1613622.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1613622.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xB8A06E7E729EED0A(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x77621132305B133B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xB8A06E7E729EED0A(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x59A0729D503ED758(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835390.f_2708)
	{
		if (unk_0xDCC86F723E82125E(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0x59A0729D503ED758(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_214(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_214(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_178(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return unk_0x7CBED6EFED40E7EB(&cVar0);
}

struct<6> func_215(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_216()
{
	if (((((((Global_1613622.f_32534 == 1 || Global_1613622.f_32534 == 3) || Global_1613622.f_32534 == 5) || Global_1613622.f_32534 == 7) || Global_1613622.f_32534 == 8) || Global_1613622.f_32534 == 9) || Global_1613622.f_32534 == 11) || Global_1613622.f_32534 == 13)
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0, int iParam1)
{
	if (!func_400(&(uParam0->f_2)))
	{
		func_414(&(uParam0->f_2));
	}
	unk_0x68A38902ADFD05FE(14);
	unk_0x16387DB49A36A0F3(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x8D9008B8900A28D0(2, 201) || uParam0->f_8)
		{
			if (!func_400(&(uParam0->f_5)))
			{
				func_414(&(uParam0->f_5));
				func_218(uParam0, 1051260355);
			}
		}
		if (func_400(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_401(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_400(&(uParam0->f_5)))
		{
			func_414(&(uParam0->f_5));
			func_218(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_401(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_218(var uParam0, float fParam1)
{
	unk_0x7C38F93AF52620B1(*uParam0, "SHARD_ANIM_OUT");
	unk_0x65960B4E2ADC9F6D(uParam0->f_9);
	unk_0x512B59C08EAFA3B9(fParam1);
	unk_0xD013AC29829DDC02();
}

void func_219(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x2DC9BA2299B45EA6((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_220(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x2DC9BA2299B45EA6((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_221()
{
	int iVar0;
	
	if (!bLocal_314)
	{
		iVar0 = (unk_0x531444754C426278(0, 65535) % 3);
	}
	else
	{
		iLocal_328++;
		iVar0 = (iLocal_328 % 2);
	}
	return iVar0;
}

void func_222(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_223(iParam4);
	if (iParam4 != 5)
	{
		unk_0x7C38F93AF52620B1(*uParam0, "RESET_MOVIE");
		unk_0xD013AC29829DDC02();
	}
	unk_0x7C38F93AF52620B1(*uParam0, sVar0);
	unk_0x276F16E002D00C0C("STRING");
	unk_0xCE59E3E42586D52D(sParam1);
	unk_0x354E2E7AA52E941F();
	func_12(sParam2);
	unk_0xD013AC29829DDC02();
	func_414(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_224(var uParam0, int iParam1)
{
	unk_0x7C38F93AF52620B1(*uParam0, "CLEAR_SCORES");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

int func_225(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xA278ECBE30D8AE4F(uParam0);
	}
	return 1;
}

void func_226(int iParam0)
{
	unk_0xB306DBE9AFBD23A6(uLocal_122, uLocal_120, 1500, 1, 1);
	unk_0x7D1795B1E14EDFFD(uLocal_123, 1);
	unk_0xB306DBE9AFBD23A6(uLocal_122, uLocal_123, 8000, 1, 1);
	unk_0x9260EF17CCEC43E4(uLocal_125, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0xCB0D07EF49E95CDD(uLocal_125, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0xD9D8D5E5A50FF6D5(uLocal_125, 35f);
}

void func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0xABE82A757E4DE125(uLocal_120))
	{
		bVar0 = false;
		func_308(uParam0);
		if (!bLocal_306)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x9F4AA6F234E8A860(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0xDCC86F723E82125E(Global_100937, 3))
						{
							func_398("DARTS_INSTR_W", -1);
							unk_0x59A0729D503ED758(&Global_100937, 3);
						}
						func_312(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0xDCC86F723E82125E(Global_100937, 4))
						{
							func_398("DARTS_INSTR_B", -1);
							unk_0x59A0729D503ED758(&Global_100937, 4);
						}
						func_312(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x9F4AA6F234E8A860(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0xABE82A757E4DE125(uLocal_129) && uParam0->f_3 == 2)
			{
				func_307(uParam3);
			}
		}
		else
		{
			func_305(uParam3, iLocal_30);
		}
		func_304(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_301(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_293(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_286(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x0139E142C27412BC(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_285(iLocal_31, 0);
				if (((((!func_284("DARTS_SHT_USE") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B")) && !func_284("DARTS_AIM_HLP")) && !func_284("DARTS_STD_HLP")) && !func_284("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_398("DARTS_LEVEL", -1);
						unk_0x59A0729D503ED758(&(Global_100976.f_17604.f_6), iLocal_326);
						func_312(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_312(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_312(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (func_274(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x7846F09C04C34C46();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_301)
				{
					if (!func_400(uParam4))
					{
						func_272(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_271(uLocal_295[(1 - iLocal_30)]);
						func_401(uParam4);
						iLocal_301 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_324 = 0;
				func_270(&(uParam0->f_422), &(uParam0->f_249));
				func_267(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x531444754C426278(1250, 2500))
			{
				func_270(&(uParam0->f_422), &(uParam0->f_249));
				func_267(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_254(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_253(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_251(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_236(uParam0, uParam3);
			break;
		
		case 5:
			func_229(uParam0, uParam2, uParam3);
			if (func_400(uParam4))
			{
				func_401(uParam4);
			}
			break;
		
		case 6:
			func_228(uParam0, uParam3);
			break;
	}
}

void func_228(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_324++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_308 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_251(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_236(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_307)
			{
				if (unk_0x95CCECA3948CFE7B(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xA278ECBE30D8AE4F(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0xE79F1883B253E5B8(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x95CCECA3948CFE7B(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xC76B5C68AB6DC7DF(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_251(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_236(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x7C62BC1EB194D985(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_79, 1, 1, 0);
					Var0 = { unk_0xE79F1883B253E5B8(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0xC76B5C68AB6DC7DF(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0xC6D38B918E72181E(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0x68931E8B45B3CA92(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_270(&(uParam0->f_422), &(uParam0->f_249));
			func_267(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_251(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_312(&(uParam1->f_666), 2, 0);
				func_312(&(uParam1->f_666), 3, 0);
				func_312(&(uParam1->f_666), 4, 0);
				func_312(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_236(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = unk_0x7C62BC1EB194D985(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, Local_79, 1, 1, 0);
							Var0 = { unk_0xE79F1883B253E5B8(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0x95CCECA3948CFE7B(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								unk_0xC76B5C68AB6DC7DF(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0xC6D38B918E72181E(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0x68931E8B45B3CA92(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_324 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_229(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_235();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_234("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_233("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_234("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_234("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_234("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_233("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_234("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_234("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x8D9008B8900A28D0(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				Var0 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_47(Var0);
			}
			if (unk_0x8D9008B8900A28D0(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_47(Var0);
			}
			if (unk_0x8D9008B8900A28D0(2, 202))
			{
				Var0 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x8D9008B8900A28D0(2, 201))
			{
				iLocal_298 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x8D9008B8900A28D0(2, 201) || (iLocal_308 && bLocal_307))
			{
				iLocal_298 = 1;
			}
			if ((unk_0x8D9008B8900A28D0(2, 189) || unk_0x8D9008B8900A28D0(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0x44C17CCB85A88A1F(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_303)
				{
					if (func_232(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_303 = 1;
					}
				}
				else if ((unk_0x693EBB4F13506457() % 500) < 50)
				{
				}
			}
			else if (!iLocal_303)
			{
				if (func_231(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_303 = 1;
				}
			}
			else if ((unk_0x693EBB4F13506457() % 500) < 50)
			{
			}
			if (iLocal_298 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_308 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_225(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_230(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0xE55275772E833643(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_413(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_393();
				if (!bLocal_307)
				{
					unk_0xBBF8B3515A14CFFC();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				iLocal_304 = 0;
				iLocal_301 = 0;
				iLocal_303 = 0;
				iLocal_298 = 0;
				iLocal_322 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_230(var uParam0, int iParam1, int iParam2)
{
	unk_0x7C38F93AF52620B1(*uParam0, "ADD_DARTS_SCORE");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0xD013AC29829DDC02();
}

int func_231(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x59A0729D503ED758(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x59A0729D503ED758(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x59A0729D503ED758(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x59A0729D503ED758(&iVar0, 3);
		}
	}
	iVar1 = unk_0x531444754C426278(0, 100);
	iVar2 = unk_0x531444754C426278(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xDCC86F723E82125E(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_232(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x59A0729D503ED758(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x59A0729D503ED758(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x59A0729D503ED758(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x59A0729D503ED758(&iVar0, 3);
		}
	}
	iVar1 = unk_0x531444754C426278(0, 100);
	iVar2 = unk_0x531444754C426278(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xDCC86F723E82125E(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x95CCECA3948CFE7B(func_478()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xDCC86F723E82125E(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xC8B93D94F8954288(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_233(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

void func_234(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0x6DC80A902A91958F(iParam1);
	unk_0xEE90E717A80AA597(iParam2, 1);
}

void func_235()
{
	unk_0x7D1795B1E14EDFFD(uLocal_129, 1);
	unk_0x7D1795B1E14EDFFD(uLocal_120, 0);
}

void func_236(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_248(uParam0);
		func_312(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_246(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_246(0);
					iLocal_151[1]++;
				}
			}
			func_312(&(uParam1->f_666), 2, 0);
			func_312(&(uParam1->f_666), 3, 0);
			func_312(&(uParam1->f_666), 4, 0);
			func_312(&(uParam1->f_666), 5, 1);
			func_248(uParam0);
			func_312(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_234("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_312(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_312(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_234("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_234("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_303)
			{
				if (func_245(uLocal_295[(1 - iLocal_30)]))
				{
					iLocal_303 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			unk_0xC1B1E9A034A63A62(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_312(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_244(uParam1, 1);
					func_246(0);
					iLocal_151[1]++;
				}
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_243(uLocal_295[iLocal_30]))
					{
						iLocal_303 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					func_242(uLocal_295[(1 - iLocal_30)]);
					iLocal_303 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_241(uLocal_295[1], iLocal_30 == 0))
					{
						iLocal_303 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_244(uParam1, 0);
					func_246(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_239(uLocal_295[iLocal_30], iLocal_30 == 0))
					{
						iLocal_303 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_312(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_312(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_302)
						{
							func_238(uLocal_295[1]);
							iLocal_302 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_312(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_237("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_304(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			unk_0xC1B1E9A034A63A62(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_312(&(uParam1->f_666), 3, 0);
			func_312(&(uParam1->f_666), 2, 0);
			func_312(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_237(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0x6DC80A902A91958F(iParam1);
	unk_0x6DC80A902A91958F(iParam2);
	unk_0xEE90E717A80AA597(iParam3, 1);
}

void func_238(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_239(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x95CCECA3948CFE7B(func_478()))
		{
			if (bParam1)
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_478(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_240())
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_240()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x95CCECA3948CFE7B(func_478()))
		{
			if (bParam1)
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_478(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_240())
			{
				func_4(unk_0xC8B93D94F8954288(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			iVar1 = 1;
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_244(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_245(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0xC8B93D94F8954288())
	{
		iVar0 = 1;
	}
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_100976.f_17604++;
			func_247("DARTS_STAT_NUM_BULLSEYES", Global_100976.f_17604);
			break;
		
		case 1:
			Global_100976.f_17604.f_1++;
			func_247("DARTS_STAT_NUM_180S", Global_100976.f_17604.f_1);
			break;
		
		case 2:
			Global_100976.f_17604.f_2++;
			func_247("DARTS_STAT_NUM_WINS", Global_100976.f_17604.f_2);
			break;
		
		case 3:
			Global_100976.f_17604.f_3++;
			func_247("DARTS_STAT_NUM_LOSS", Global_100976.f_17604.f_3);
			break;
		
		case 4:
			Global_100976.f_17604.f_4++;
			func_247("DARTS_STAT_DARTS_THROWN", Global_100976.f_17604.f_4);
			break;
		
		case 5:
			Global_100976.f_17604.f_5++;
			func_247("DARTS_STAT_NUM_GAMES", Global_100976.f_17604.f_5);
			break;
		
		case 7:
			Global_100976.f_17604.f_7 = (unk_0xBBDA792448DB5A89(Global_100976.f_17604.f_2) / unk_0xBBDA792448DB5A89(Global_100976.f_17604.f_5));
			break;
		
		case 8:
			Global_100976.f_17604.f_8 = (unk_0xBBDA792448DB5A89(Global_100976.f_17604.f_4) / unk_0xBBDA792448DB5A89(Global_100976.f_17604.f_5));
			break;
	}
}

void func_247(char* sParam0, var uParam1)
{
}

void func_248(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_246(5);
	unk_0xBBF8B3515A14CFFC();
	unk_0x9F4AA6F234E8A860(1);
	if (unk_0xB5F5536784683C33(func_394(2)))
	{
		unk_0xDB9D78E5137EE7AD(func_394(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_235();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_312 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_246(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_246(3);
		iLocal_151[9]++;
	}
	func_246(7);
	func_414(&(uParam0->f_254));
	if (func_250(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_249(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_151[3]++;
			iLocal_330 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_330 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x925AE2E6F6E41362(func_394(3));
	iLocal_309 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_249(bool bParam0)
{
	char* sVar0;
	
	unk_0xF7CE1213DA9898BD(0);
	switch (func_78())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xDB48434AC780ECD9(sVar0);
}

int func_250(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_151[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_251(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = unk_0x3CD093DDA8B5D04F(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_252(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0xE55275772E833643(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0xE55275772E833643(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0xE55275772E833643(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0xE55275772E833643(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0xE55275772E833643(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0xE55275772E833643(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_252(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_253(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_254(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_255("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = unk_0x6CE7EDC8B5C46819();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		unk_0xC76B5C68AB6DC7DF(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	unk_0xC76B5C68AB6DC7DF(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0x68931E8B45B3CA92(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_255(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_266(&Var0);
			break;
		
		case 1:
			func_265(&Var0);
			break;
		
		case 5:
			func_264(&Var0);
			break;
		
		case 6:
			func_263(&Var0);
			break;
		
		case 7:
			func_262(&Var0);
			break;
		
		case 8:
			func_261(&Var0);
			break;
		
		case 9:
			func_260(&Var0);
			break;
	}
	if (func_258())
	{
		unk_0x7F1F2564B5CE06AF(iParam5);
		if (iParam3 == 1)
		{
			unk_0xA64F50A8AA9DA3F5(sParam0, sParam1, func_257(Var0.f_0), func_256(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xA64F50A8AA9DA3F5(sParam0, sParam1, func_257(Var0.f_0), func_256(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x7F1F2564B5CE06AF(4);
	}
}

float func_256(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_257(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_258()
{
	if (func_259())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_259()
{
	return Global_1312438;
}

void func_260(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_261(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_262(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_263(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_264(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_265(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_266(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_267(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0xC6D38B918E72181E(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xC6D38B918E72181E(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x531444754C426278(0, 100);
		iVar6 = unk_0x531444754C426278(func_269(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xC6D38B918E72181E(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xC6D38B918E72181E(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xC6D38B918E72181E(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xC6D38B918E72181E(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xC6D38B918E72181E(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xC6D38B918E72181E(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x531444754C426278(0, 100);
		iVar6 = unk_0x531444754C426278(func_269(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xC6D38B918E72181E(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xC6D38B918E72181E(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xC6D38B918E72181E(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xC6D38B918E72181E(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xC6D38B918E72181E(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xC6D38B918E72181E(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (unk_0x0BADBFA3B172435F(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (unk_0xD0FFB162F40A139C(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_268(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_268(uParam0);
		*uParam0 = unk_0x7C62BC1EB194D985(uParam0->f_1, Local_79, 0, 0, 0);
		fVar1 = unk_0xC6D38B918E72181E(0f, 90f);
		Var7 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, Local_82) };
		Var10 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = unk_0x949D03817D2A6977((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x68931E8B45B3CA92(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_82 };
		*uParam2 = 3;
		unk_0x90EA80826C00FB10(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_268(var uParam0)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_82 - uParam0->f_8 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = unk_0x949D03817D2A6977(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0x55931CB52905C222(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_82 - uParam0->f_11 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_269(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_270(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_240())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_271(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_272(var uParam0)
{
	func_273(uParam0, 0f);
}

void func_273(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) + fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_274(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_97)
			{
				if (unk_0xC9D9444186B5A374() > 50)
				{
					iLocal_98 = 0;
					iLocal_99 = 0;
					iLocal_101 = 0;
					if (func_283(uParam0, uParam1, 0))
					{
						unk_0x90EA80826C00FB10(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x8D9008B8900A28D0(2, 223) && iLocal_101) && !bParam4)
				{
					iLocal_98 = 1;
					iLocal_99 = 1;
					if (!iLocal_100)
					{
						func_282(uParam0, *uParam2);
						iLocal_100 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_281();
						}
						func_280(uParam0, iParam6);
						func_279(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xC6D38B918E72181E(0.02f, 0.1f);
						iVar1 = unk_0x531444754C426278(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0xC6D38B918E72181E(0.02f, 0.1f);
						iVar1 = unk_0x531444754C426278(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_82 };
						iLocal_98 = 1;
						iLocal_99 = 1;
					}
					if (iLocal_98 && iLocal_99)
					{
						if (!iLocal_97)
						{
							unk_0x7846F09C04C34C46();
							iLocal_97 = 1;
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_97)
			{
				func_255("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_283(uParam0, uParam1, 1))
					{
						unk_0x90EA80826C00FB10(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!func_275(uParam0))
			{
				if (!iLocal_100)
				{
					func_282(uParam0, *uParam2);
				}
				else
				{
					func_281();
					func_280(uParam0, iParam6);
					func_279(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_97)
			{
				iLocal_97 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
	}
	return 0;
}

int func_275(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x17D1A438B237C217(2, 220);
	fVar2 = unk_0x17D1A438B237C217(2, 221);
	iLocal_136 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x693EBB4F13506457();
				iLocal_135 = 1;
			}
			if (iLocal_136 < -100)
			{
				iLocal_141 = unk_0xF2DB717A73826179(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x693EBB4F13506457();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (unk_0x693EBB4F13506457() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = unk_0x693EBB4F13506457();
				if ((iLocal_138 - iLocal_137) < 500)
				{
					iLocal_141 = unk_0xF2DB717A73826179(fVar1);
					iLocal_139 = (iLocal_138 - iLocal_137);
					iLocal_135 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_139 > iLocal_140)
			{
				if (iLocal_139 > 100 && iLocal_139 < 150)
				{
					fLocal_144 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
				else
				{
					fLocal_143 = (unk_0xBBDA792448DB5A89(iLocal_140) / unk_0xBBDA792448DB5A89(iLocal_139));
					fLocal_144 = ((1f - fLocal_143) * fLocal_147);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
			}
			else
			{
				fLocal_144 = 0f;
			}
			if (iLocal_141 > 7)
			{
				fLocal_145 = (unk_0xBBDA792448DB5A89(iLocal_141) / fLocal_150);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 + fLocal_146);
			}
			else if (iLocal_141 < -7)
			{
				fLocal_145 = (unk_0xBBDA792448DB5A89(iLocal_141) / fLocal_149);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 - fLocal_146);
			}
			else
			{
				fLocal_146 = 0f;
			}
			if (fLocal_144 < 0.066477f && fLocal_146 == 0f)
			{
				func_278();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_277();
			}
			else
			{
				func_276();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_276()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_277()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_278()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_279(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	unk_0x3075AFAE67834272(Var0, &Local_61, &(Local_61.f_1));
	if ((unk_0x693EBB4F13506457() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_255("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_255("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!iLocal_101)
		{
			iLocal_101 = 1;
		}
	}
}

void func_280(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0x882A55CDEA060AA5(2, 218);
	fVar4 = unk_0x882A55CDEA060AA5(2, 219);
	fVar5 = unk_0x17D1A438B237C217(2, 220);
	fVar6 = unk_0x17D1A438B237C217(2, 221);
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (unk_0xA3C5926D6E5619AE(fVar5) > unk_0xA3C5926D6E5619AE(fVar3) || unk_0xA3C5926D6E5619AE(fVar6) > unk_0xA3C5926D6E5619AE(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xC41E7799A66E5FCB())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x720887E96C08F0E8())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x0139E142C27412BC(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0xBDC482FE4AF5F4F1(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_92 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_92 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_92 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_92 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_92 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_92 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_92 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_92 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0xC6D38B918E72181E((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xC6D38B918E72181E((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xC6D38B918E72181E((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xC6D38B918E72181E((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_92 = 0.5f;
		if (iLocal_135 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0xC6D38B918E72181E((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xC6D38B918E72181E((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xC6D38B918E72181E((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xC6D38B918E72181E((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_281()
{
	if (unk_0x0139E142C27412BC(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (unk_0x0139E142C27412BC(2, 229))
	{
		if (bLocal_94)
		{
			if (unk_0x83666F9FB8FEBD4B() > iLocal_142)
			{
				fLocal_88 = fLocal_90;
				fLocal_89 = fLocal_91;
				fLocal_92 = 0.1f;
				bLocal_94 = false;
			}
		}
		else if (iLocal_93 < 1)
		{
			fLocal_88 = 0.03f;
			fLocal_89 = 0.05f;
			fLocal_92 = 0.1f;
			unk_0xC1B1E9A034A63A62(0);
			bLocal_94 = true;
			iLocal_93++;
		}
		else if ((((((!func_284("DARTS_FST_HLP") && !func_284("DARTS_AIM_HLP")) && !func_284("DARTS_CLOCK")) && !func_284("DARTS_STD_HLP")) && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B")) && !iLocal_95)
		{
			iLocal_95 = 1;
			if (!unk_0xDCC86F723E82125E(Global_100937, 1))
			{
				func_398("DARTS_SHT_USE", -1);
				unk_0x59A0729D503ED758(&Global_100937, 1);
			}
		}
	}
	else if (bLocal_94)
	{
		fLocal_88 = fLocal_90;
		fLocal_89 = fLocal_91;
		fLocal_92 = 0.1f;
		bLocal_94 = false;
	}
}

void func_282(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0xC6D38B918E72181E(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0xC6D38B918E72181E(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_82 };
}

int func_283(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xC76B5C68AB6DC7DF(*uParam0, Local_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x7C62BC1EB194D985(uParam0->f_1, Local_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_268(uParam0);
	fVar10 = unk_0xC6D38B918E72181E(0f, 90f);
	Var3 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, Local_82) };
	Var6 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = unk_0x949D03817D2A6977((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0x68931E8B45B3CA92(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_255("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	Var0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	unk_0x3075AFAE67834272(Var0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_284(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_285(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0xDCC86F723E82125E(Global_100937, 9))
		{
			if ((!func_284("DARTS_SHT_USE") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_398("DARTS_AIM_HLP", -1);
				unk_0x59A0729D503ED758(&Global_100937, 9);
			}
		}
		else if (iParam1 && !unk_0xDCC86F723E82125E(Global_100937, 7))
		{
			if ((!func_284("DARTS_AIM_HLP") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_398("DARTS_CLOCK", -1);
				unk_0x59A0729D503ED758(&Global_100937, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xDCC86F723E82125E(Global_100937, 8))
		{
			if ((!func_284("DARTS_SHT_USE") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_398("DARTS_STD_HLP", -1);
				unk_0x59A0729D503ED758(&Global_100937, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_284("DARTS_SHT_USE")) && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
		{
			if (!unk_0xDCC86F723E82125E(Global_100937, 2))
			{
				func_398("DARTS_FST_HLP", -1);
				unk_0x59A0729D503ED758(&Global_100937, 2);
			}
			iLocal_96 = 1;
		}
	}
}

int func_286(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_289(iParam0) };
			*uParam3 = { unk_0xCC31DB73C65552D8(*uParam1, Var0) };
			func_288(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0x8D9008B8900A28D0(2, 201))
			{
				func_287();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_287()
{
	unk_0xB306DBE9AFBD23A6(uLocal_120, uLocal_132, 2000, 1, 1);
	unk_0x5CF5A880ED809DDA(uLocal_132, 0);
}

void func_288(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = unk_0x785B53D5654A2FFD(26379945, Param0, Var0, 65f, 0, 2);
	unk_0xB306DBE9AFBD23A6(uLocal_132, uLocal_120, 2000, 1, 1);
}

Vector3 func_289(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_292(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_291(fVar0);
		Var1.f_2 = func_290(fVar0);
	}
	return Var1;
}

float func_290(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_291(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_293(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x0139E142C27412BC(2, 228))
			{
				func_300(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x0139E142C27412BC(2, 228))
			{
				if (!unk_0xABE82A757E4DE125(uLocal_129))
				{
					func_298();
					func_297(&uLocal_335, Local_366, Local_369, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x0139E142C27412BC(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_294(&uLocal_335, 1, 1, 0, 0, 1045220557, 0, 1065353216);
			}
			break;
		
		case 3:
			func_300(0);
			func_479();
			if (unk_0x844838E5D8A21336(uLocal_335))
			{
				if (unk_0xF96FC657C212A30E(uLocal_335))
				{
					unk_0x7D1795B1E14EDFFD(uLocal_335, 0);
				}
				unk_0x5CF5A880ED809DDA(uLocal_335, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_294(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	unk_0xBD76D2728ECB1AC6(2);
	func_296(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x720887E96C08F0E8())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar5 = unk_0x882A55CDEA060AA5(2, 239);
		fVar6 = unk_0x882A55CDEA060AA5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF2DB717A73826179(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF2DB717A73826179(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x882A55CDEA060AA5(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x882A55CDEA060AA5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_295((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_295((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x693EBB4F13506457())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xBDC482FE4AF5F4F1(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * unk_0x0000000050597EE2());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xBDC482FE4AF5F4F1(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0xBDC482FE4AF5F4F1(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xBDC482FE4AF5F4F1(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x3BE6F47A1187EFE0(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x3BE6F47A1187EFE0(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x693EBB4F13506457() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	unk_0xF24FE6EB928DD893(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		if (unk_0xF96FC657C212A30E(*uParam0))
		{
			if (unk_0xB1E18FA70927BDAB(*uParam0))
			{
				unk_0x4C7566DC433A2982();
			}
		}
	}
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_296(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xD78553F3D1E80C89(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 218) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 219) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 220) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 221) * 127f));
		}
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (bParam5)
		{
			if (unk_0x720887E96C08F0E8())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xC41E7799A66E5FCB())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_297(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7D1795B1E14EDFFD(*uParam0, 1);
	unk_0xF24FE6EB928DD893(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xB61A035EB3575B09(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xBCE58DAD703266B5(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x81AF63D011F20A17(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_298()
{
	if (iLocal_291)
	{
		return;
	}
	func_299();
	unk_0x15B0C8EC5FC1A265("Darts Zoom");
	iLocal_291 = 1;
}

void func_299()
{
	if (iLocal_290 || iLocal_291)
	{
		unk_0xF5BE0F19AB14A307();
		iLocal_290 = 0;
		iLocal_291 = 0;
	}
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		unk_0xB306DBE9AFBD23A6(uLocal_120, uLocal_129, 1000, 1, 1);
	}
}

void func_301(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_222(&(uParam0->f_62), func_303(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_217(&(uParam0->f_62), 0))
			{
				func_302(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_302(var uParam0)
{
	uParam0->f_8 = 0;
	func_401(&(uParam0->f_2));
	func_401(&(uParam0->f_5));
}

char* func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_304(var uParam0)
{
	if (!iLocal_99)
	{
		if (!unk_0x0139E142C27412BC(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x0139E142C27412BC(2, 201) || unk_0x8D9008B8900A28D0(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_305(var uParam0, int iParam1)
{
	if (!unk_0x2BF05095F2389894())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_107(&(uParam0->f_509), 0, 0, 0, 1);
				func_106(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_106(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_306(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_106(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_106(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_106(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_103(&(uParam0->f_509), 1);
				func_312(&(uParam0->f_666), 8, 0);
				func_312(&(uParam0->f_666), 16, 0);
				func_312(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_107(&(uParam0->f_509), 0, 0, 0, 1);
				func_106(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_106(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_306(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_106(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_106(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_103(&(uParam0->f_509), 1);
				func_312(&(uParam0->f_666), 8, 0);
				func_312(&(uParam0->f_666), 16, 0);
				func_312(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_107(&(uParam0->f_509), 1, 0, 0, 1);
			func_106(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_106(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_103(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 16, 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 17, 0);
			func_312(&(uParam0->f_666), 23, 0);
		}
		unk_0xF799955FDE53592F(76, 66);
		unk_0x9490392D9BB13748(0f, 0f, 0f, 0f);
		unk_0xFA99CE7438CDE58B();
		func_186(func_102(func_3(&(uParam0->f_666), 16), 1, 2));
		func_109(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_312(&(uParam0->f_666), 15, 0);
		func_312(&(uParam0->f_666), 16, 0);
		func_312(&(uParam0->f_666), 23, 0);
	}
}

int func_306(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x59A0729D503ED758(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_307(var uParam0)
{
	if (!unk_0x2BF05095F2389894())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_107(&(uParam0->f_509), 0, 0, 0, 1);
			func_306(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_106(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_103(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 23, 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 16, 0);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 17, 0);
		}
		func_109(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_312(&(uParam0->f_666), 15, 0);
		func_312(&(uParam0->f_666), 16, 0);
		func_312(&(uParam0->f_666), 23, 0);
		func_312(&(uParam0->f_666), 17, 0);
	}
}

void func_308(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_99)
	{
		if (!unk_0x0139E142C27412BC(2, 201) && !unk_0x0139E142C27412BC(2, 202))
		{
			iLocal_99 = 1;
		}
		else
		{
			iLocal_99 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_99 && iLocal_98 == 0)
			{
				iLocal_99 = 0;
				bVar0 = false;
				bLocal_306 = false;
				unk_0x9F4AA6F234E8A860(1);
			}
		}
		if (unk_0x58F80A8B3A06F53C(2, 235) || unk_0x595DCDF66B3BBC26(2, 235))
		{
			if (!bLocal_306)
			{
				*uParam0 = 14;
				bLocal_306 = true;
				unk_0x9F4AA6F234E8A860(1);
			}
		}
		else if (func_284("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_306 = false;
		}
	}
}

void func_309(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_310(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_311(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_312(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x59A0729D503ED758(uParam0, iParam1);
	}
	else
	{
		unk_0x77621132305B133B(uParam0, iParam1);
	}
}

int func_313(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0xDCC86F723E82125E(Global_100976.f_17604.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_225(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_224(uParam1, iVar0);
		func_230(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_322 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	iLocal_299 = 1;
	iLocal_300 = 0;
	iLocal_302 = 0;
	iLocal_95 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_308 = 0;
	func_312(&(uParam2->f_666), 6, 0);
	func_320();
	func_318(uParam2);
	if (iParam0->f_457)
	{
		func_315(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_315(bool bParam0)
{
	unk_0xB7709513BF7C1AC0(0);
	if (unk_0xF96FC657C212A30E(uLocal_122))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_122, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_126))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_126, 0);
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		func_317();
		unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
		unk_0x31E6EB2040318451(500);
	}
	func_316(bParam0);
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7D1795B1E14EDFFD(uLocal_120, 1);
	}
}

void func_317()
{
	unk_0x7D1795B1E14EDFFD(uLocal_122, 1);
}

void func_318(var uParam0)
{
	func_319();
	uParam0->f_670 = 3;
	func_312(&(uParam0->f_666), 15, 0);
	func_312(&(uParam0->f_666), 16, 0);
	func_312(&(uParam0->f_666), 17, 0);
}

void func_319()
{
	int iVar0;
	
	Local_164.f_66 = -1;
	Local_164.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_164.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_5 = 0;
		Local_164.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_164.f_5 = 0;
	Local_164.f_5.f_1 = -1f;
	Local_164.f_5.f_2 = 0;
	Local_164.f_0 = 0;
	Local_164.f_1 = 0;
}

void func_320()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_99 = 0;
	unk_0xBBF8B3515A14CFFC();
}

void func_321(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_323(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7857)
	{
		unk_0x19479CF94A711302(15);
		Global_17257.f_7857 = 0;
	}
	unk_0x416AE03EAAA9AE80(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x48591CDE727D1F6A(9, 0);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0x26574ED84900A376("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0x26574ED84900A376("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_322(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_322(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			unk_0xEF145906684E3D72(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_323(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && unk_0xEE66E067C1F8D1F4())
		{
			iParam2 = unk_0x3CB5E30F656B4CAA();
		}
	}
	StringCopy(&cVar0, unk_0xC4E68AF0B559FAC4(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x7CBED6EFED40E7EB(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_324(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7C38F93AF52620B1(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0x65960B4E2ADC9F6D(iParam2);
	unk_0x65960B4E2ADC9F6D(iParam3);
	unk_0x65960B4E2ADC9F6D(iParam4);
	unk_0xD013AC29829DDC02();
}

int func_325(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x2BE3C7FA4FCCA784(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_381(0, 0, 0, 1);
		func_380(0, -1, 1);
		if (func_379())
		{
			if (Global_2558198 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_2558198;
				func_378(uParam0->f_660, 1, 1);
				unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0xF2831232D38CD691(sVar0))
				{
					func_377(sVar0, 0, 0);
				}
			}
			Global_2558199 = unk_0x693EBB4F13506457() + 300;
		}
		else if (func_376() && unk_0x693EBB4F13506457() > Global_2558199)
		{
			if (Global_2558198 == uParam0->f_660)
			{
				iVar2 = func_375(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_2558199 = unk_0x693EBB4F13506457() + 300;
		}
		if (func_374(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_378(uParam0->f_660, 1, 1);
			unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xF2831232D38CD691(sVar0))
			{
				func_377(sVar0, 0, 0);
			}
		}
		if (func_373(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_378(uParam0->f_660, 1, 1);
			unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xF2831232D38CD691(sVar0))
			{
				func_377(sVar0, 0, 0);
			}
		}
		if (func_372(&(uParam0->f_633)) || func_371(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0xC4EE38A4CFF7544C(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_354(uParam0);
		}
		if (func_353(&(uParam0->f_636)) || func_351(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0xC4EE38A4CFF7544C(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_354(uParam0);
		}
		if ((unk_0x8D9008B8900A28D0(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_350(uParam0->f_662 + 1, 1);
			*uParam2 = func_350(uParam0->f_664 + 1, 0);
			unk_0xC4EE38A4CFF7544C(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_328(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x58F80A8B3A06F53C(2, 202) || func_327())
		{
			func_326(0);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x58F80A8B3A06F53C(2, 201))
		{
			func_34(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x58F80A8B3A06F53C(2, 202))
		{
			func_354(uParam0);
			func_312(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_326(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441493[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5881[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6682[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2558122.f_16), "", 16);
	Global_2558122.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2558122.f_21), "", 16);
	Global_2558122.f_61 = 0;
	Global_2558122.f_62 = 0;
	Global_2558122.f_63 = 0;
	Global_2558122.f_64 = 0;
	Global_2558122.f_65 = 0;
	Global_2558122.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2558122.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2558122.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7853 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7827 = 0;
	Global_17257.f_7837 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7849 = 0;
	Global_17257.f_7855 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0xA2A5649E3ACE3459(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_327()
{
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (unk_0x8D9008B8900A28D0(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_328(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_323(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_347(0, bParam6))
	{
		return;
	}
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_18(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) == unk_0x7CBED6EFED40E7EB("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x94AEC7924AE05010(&iVar57, &iVar58);
		fVar60 = unk_0xA2A5649E3ACE3459(0);
		if (func_20())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_20())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0x6DDF2AF05E6AEC85(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) == unk_0x7CBED6EFED40E7EB("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xA64F50A8AA9DA3F5(func_23(29), func_21(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7827)
				{
					iVar1 = Global_17257.f_7823;
					iVar2 = Global_17257.f_7824;
					iVar3 = Global_17257.f_7825;
					iVar4 = Global_17257.f_7826;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_346(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) != 0)
				{
					func_345();
					unk_0xCF61D472051E607A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x6DC80A902A91958F(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x36E8D9048E194806(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x2DED6C1306496257(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x2DED6C1306496257(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x0A3C6E0278C7BCEF((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_345();
						func_343((((Global_17254 + fParam5) - 0.00390625f) - func_344("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7837)
			{
				iVar1 = Global_17257.f_7833;
				iVar2 = Global_17257.f_7834;
				iVar3 = Global_17257.f_7835;
				iVar4 = Global_17257.f_7836;
			}
			else
			{
				unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7842)
				{
					iVar1 = Global_17257.f_7838;
					iVar2 = Global_17257.f_7839;
					iVar3 = Global_17257.f_7840;
					iVar4 = Global_17257.f_7841;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_346(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xA5CAA351B4D63EED("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7855)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_18(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_342(fVar41);
				unk_0x548E1AD8C1DF94D8(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x4CFD8F4D70D1B26B(fVar41, (fVar49 + 0.00277776f));
				unk_0x7068E8DB78AD0A08(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_346(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_342(fVar41);
				unk_0xCF61D472051E607A(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x0A3C6E0278C7BCEF(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_18(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_341(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4638), func_21(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0x693EBB4F13506457() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_2558122.f_21)) != 0 && Global_2558122.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2558122.f_67 != 0)
				{
					func_18(Global_2558122.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_342(fVar41);
				unk_0x548E1AD8C1DF94D8(&(Global_2558122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2558122.f_61)
				{
					if (Global_2558122.f_25[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_2558122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2558122.f_25[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_2558122.f_34[iVar16], Global_2558122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2558122.f_25[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x4CFD8F4D70D1B26B(fVar41, (fVar49 + 0.00277776f));
				unk_0x7068E8DB78AD0A08(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_346(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_342(fVar41);
				unk_0xCF61D472051E607A(&(Global_2558122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2558122.f_61)
				{
					if (Global_2558122.f_25[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_2558122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2558122.f_25[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_2558122.f_34[iVar16], Global_2558122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2558122.f_25[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x0A3C6E0278C7BCEF(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2558122.f_67 != 0)
				{
					func_18(Global_2558122.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_341(Global_2558122.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xA64F50A8AA9DA3F5(func_23(Global_2558122.f_67), func_21(Global_2558122.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2558122.f_65 > 0)
				{
					if ((unk_0x693EBB4F13506457() - Global_2558122.f_66) > Global_2558122.f_65)
					{
						StringCopy(&(Global_2558122.f_21), "", 16);
						Global_2558122.f_65 = -1;
					}
				}
			}
			func_335(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xF799955FDE53592F(76, 84);
			unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7483[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7849)
					{
						unk_0x7068E8DB78AD0A08(Global_17257.f_7848, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x7068E8DB78AD0A08(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_333(bVar31, 1, 0, 0, 0, 0);
					unk_0xCF61D472051E607A("DFLT_MNU_OPT");
					unk_0x0A3C6E0278C7BCEF(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0xDCC86F723E82125E(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0xC8E81EDC1522FA75(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6DC80A902A91958F(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x36E8D9048E194806(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xF274F7A6105B230D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0xCF61D472051E607A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6DC80A902A91958F(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x36E8D9048E194806(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_18(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_341(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[(iVar22 + iVar28)]), func_21(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[(iVar22 + iVar28)]), func_21(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0x0A3C6E0278C7BCEF(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x0A3C6E0278C7BCEF((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_18(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_341(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[(iVar22 + iVar14)]), func_21(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[(iVar22 + iVar14)]), func_21(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[(iVar22 + iVar14)]), func_21(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0xC8E81EDC1522FA75("NUMBER");
											unk_0x6DC80A902A91958F(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0xF274F7A6105B230D(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_331((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0xC8E81EDC1522FA75("NUMBER");
											unk_0x36E8D9048E194806(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0xF274F7A6105B230D(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_333(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_330((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_18(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_341(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xA64F50A8AA9DA3F5(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_341(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xA64F50A8AA9DA3F5(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_18(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_341(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xA64F50A8AA9DA3F5(func_23(Global_17257.f_4433[iVar22]), func_21(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_329(Global_17257.f_4433[iVar22])), (fVar36 * func_329(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
								{
									if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7483[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0x693EBB4F13506457();
	unk_0x416AE03EAAA9AE80(Global_17257.f_5743);
	if (!Global_17257.f_7822)
	{
		func_36();
	}
	Global_17257.f_7822 = 0;
	if (bParam2)
	{
		unk_0x68A38902ADFD05FE(10);
	}
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(8);
	if (bParam0)
	{
		func_186(1);
	}
	unk_0xFA99CE7438CDE58B();
}

float func_329(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_330(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x36E8D9048E194806(uParam3, uParam4);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, 0);
}

void func_331(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x6DC80A902A91958F(iParam3);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, iParam4);
}

void func_332(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7068E8DB78AD0A08(Global_17257.f_7850[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x7068E8DB78AD0A08(Global_17257.f_7850[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
}

void func_333(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_334(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7068E8DB78AD0A08(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x7068E8DB78AD0A08(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
		}
		else
		{
			unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xE626AAE57E9B7B3E(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
	}
	else
	{
		unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
	}
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0x46315B58B57BBE2A(1);
	if (bParam5)
	{
		unk_0x3990B11991B0B160(0f, 0.425f);
		unk_0x1F0FA9FF044DCA99(4);
	}
	else
	{
		unk_0x1F0FA9FF044DCA99(0);
	}
	unk_0xC745BF043BF36DC4(0f, 1f);
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
}

void func_334(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_323(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_347(bParam4, bParam8))
	{
		return;
	}
	if (func_339())
	{
		return;
	}
	if (unk_0x23F863EF7FB5E687())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_336(unk_0xA34E7C2A5118D638(), 0))
		{
			return;
		}
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x3CD70C95B221E318() == 0 || unk_0x23F863EF7FB5E687())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x7EF0ED41FC8F3EC1(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x3F78CAF40CD146C4(2, Global_17257.f_4896[iVar1], true), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x52374D5DBC0F5DC7(2, Global_17257.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x512B59C08EAFA3B9((1f - (Global_17257.f_4951 / 100f)));
			unk_0xD013AC29829DDC02();
			if (unk_0x68B0A67658F2D9C2())
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x0139C89EE907A315(true);
				unk_0xD013AC29829DDC02();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x7CBED6EFED40E7EB("PREV"))
				{
					unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(iVar1);
					func_13(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x7CBED6EFED40E7EB("PREV"))
					{
						func_13(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_12(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x276F16E002D00C0C(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xE4CFBF63F6DBED8E(iParam2, 70);
						}
						else
						{
							unk_0x6DC80A902A91958F(iParam2);
						}
						unk_0x354E2E7AA52E941F();
					}
					if (unk_0x68B0A67658F2D9C2())
					{
						if (Global_17257.f_4896[iVar1] != 344 && unk_0xDCC86F723E82125E(Global_17257.f_4922, iVar1))
						{
							unk_0x0139C89EE907A315(true);
							unk_0x65960B4E2ADC9F6D(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x0139C89EE907A315(false);
							unk_0x65960B4E2ADC9F6D(344);
						}
					}
					unk_0xD013AC29829DDC02();
				}
				iVar1++;
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_2558122.f_16)) != unk_0x7CBED6EFED40E7EB(""))
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(Global_17257.f_4639);
				func_13(&Global_2558122);
				if (Global_2558122.f_20 == -1)
				{
					func_12(&(Global_2558122.f_16));
				}
				else
				{
					unk_0x276F16E002D00C0C(&(Global_2558122.f_16));
					if (bParam5)
					{
						unk_0xE4CFBF63F6DBED8E(iParam2, 70);
					}
					else
					{
						unk_0x6DC80A902A91958F(iParam2);
					}
					unk_0x354E2E7AA52E941F();
				}
				unk_0xD013AC29829DDC02();
			}
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(80);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0x65960B4E2ADC9F6D(1);
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(0);
			}
			unk_0xD013AC29829DDC02();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x65960B4E2ADC9F6D(iVar1);
					unk_0x276F16E002D00C0C(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xE4CFBF63F6DBED8E(iParam2, 70);
					}
					else
					{
						unk_0x6DC80A902A91958F(iParam2);
					}
					unk_0x354E2E7AA52E941F();
					unk_0xD013AC29829DDC02();
				}
			}
			iVar1++;
		}
		if (Global_2558122.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x65960B4E2ADC9F6D(iVar1);
				unk_0x276F16E002D00C0C(&(Global_2558122.f_16));
				if (bParam5)
				{
					unk_0xE4CFBF63F6DBED8E(iParam2, 70);
				}
				else
				{
					unk_0x6DC80A902A91958F(iParam2);
				}
				unk_0x354E2E7AA52E941F();
				unk_0xD013AC29829DDC02();
			}
		}
		unk_0xF799955FDE53592F(76, 66);
		unk_0x9490392D9BB13748(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7857)
			{
				unk_0x6304F4F223560FF0(15, 0f, -0.0375f);
				Global_17257.f_7857 = 1;
			}
		}
		else if (Global_17257.f_7857)
		{
			unk_0x19479CF94A711302(15);
			Global_17257.f_7857 = 0;
		}
		unk_0xFA99CE7438CDE58B();
		if (Global_17257.f_4925)
		{
			unk_0xF799955FDE53592F(82, 66);
			unk_0x9490392D9BB13748(0f, 0f, 0f, 0f);
			unk_0x06D856499865F31F(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xFA99CE7438CDE58B();
		}
		else
		{
			unk_0x16387DB49A36A0F3(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_336(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_337(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_337(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_338();
	}
	if (Global_1315889[iVar1] == 1)
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

int func_338()
{
	return Global_1312746;
}

int func_339()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_340())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xCE4D902766AE0E55(&Var0);
		if (Global_14358 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_340()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_341(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x7068E8DB78AD0A08(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_342(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x1F0FA9FF044DCA99(0);
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0xF9B9E0FCF7607494(2);
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
	unk_0xC745BF043BF36DC4(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
}

void func_343(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x6DC80A902A91958F(uParam3);
	unk_0x6DC80A902A91958F(uParam4);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, 0);
}

float func_344(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x544AEDB4A15228FF(sParam0))
	{
		if (unk_0x7CBED6EFED40E7EB(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_345();
	unk_0xC8E81EDC1522FA75(sParam0);
	unk_0x6DC80A902A91958F(uParam1);
	unk_0x6DC80A902A91958F(uParam2);
	return unk_0xF274F7A6105B230D(1);
}

void func_345()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7832)
	{
		iVar0 = Global_17257.f_7828;
		iVar1 = Global_17257.f_7829;
		iVar2 = Global_17257.f_7830;
		iVar3 = Global_17257.f_7831;
	}
	unk_0x1F0FA9FF044DCA99(0);
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
	unk_0xC745BF043BF36DC4((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
}

void func_346(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x27C156B95D022EC9((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_347(bool bParam0, bool bParam1)
{
	if (Global_2426867.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB66DD474AA9E764E() || (func_349(8, -1) && func_348() != 64)) || (unk_0x45D1BEB329799891() != 0 && !bParam1)) || (unk_0xA8D4B6BDCF6DE72B() && !bParam0)) || unk_0x2908391F2B0A4C57()) || Global_69577) || Global_17257.f_7856) || unk_0x0657FBBA38D8BD02()) || Global_91158.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_348()
{
	return Global_1315844;
}

bool func_349(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_350(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_351(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_375(0) == 1 && Global_2558198 == iParam1)
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

void func_352(var uParam0)
{
	if (!func_400(uParam0))
	{
		func_414(uParam0);
	}
}

int func_353(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar0 = unk_0x17D1A438B237C217(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x0139E142C27412BC(2, 190)) || unk_0x69ED83B6DEBA60F9(2, 190))
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

void func_354(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_326(0);
	unk_0x7068E8DB78AD0A08(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_370(uVar0, uVar1, uVar2, uVar3, 1);
	func_369(1, 2, 0, 0, 0);
	func_368(1, 2, 1, 1, 1);
	func_367(0, 1, 0, 0, 0);
	func_366("DARTS_TITLE");
	func_364(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_361(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_358(0, func_350(uParam0->f_662 + 1, 1), 0);
	func_361(1, "DARTS_SETS", 0, 1, 0, 0);
	func_358(1, func_350(uParam0->f_664 + 1, 0), 0);
	func_357(2, 141, 141, 1);
	func_361(2, "DARTS_START", 0, 1, 0, 0);
	func_356(0);
	func_378(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_377(func_101(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_355(201, "ITEM_SELECT", -1, 0);
	func_355(202, "IB_QUIT", -1, 0);
}

void func_355(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x3F78CAF40CD146C4(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2558122, sVar0, 64);
		StringCopy(&(Global_2558122.f_16), sParam1, 16);
		Global_2558122.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x59A0729D503ED758(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_356(int iParam0)
{
	Global_17257.f_5605 = iParam0;
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17257.f_7853 = iParam3;
	Global_17257.f_7850[0] = iParam1;
	Global_17257.f_7850[1] = iParam2;
	Global_17257.f_7854 = iParam0;
}

void func_358(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 2)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 2)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17257.f_3918[Global_17257.f_5092] = iParam1;
	Global_17257.f_5092++;
	fVar1 = func_360("NUMBER", iParam1);
	if (Global_17257.f_4945[Global_17257.f_5089])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
	{
		Global_17257.f_4938[Global_17257.f_5089] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_359("NUMBER", iParam1);
		if (fVar4 > Global_17257.f_5612[iParam0])
		{
			Global_17257.f_5612[iParam0] = fVar4;
		}
	}
	unk_0x59A0729D503ED758(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 2;
}

float func_359(char* sParam0, int iParam1)
{
	if (!unk_0xF2831232D38CD691(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x2BAF9380E92B73CD(0.35f, 0);
}

float func_360(char* sParam0, int iParam1)
{
	if (!unk_0xF2831232D38CD691(sParam0))
	{
		return 0f;
	}
	func_333(1, 1, 0, 0, 0, 0);
	unk_0xC8E81EDC1522FA75(sParam0);
	unk_0x6DC80A902A91958F(uParam1);
	return unk_0xF274F7A6105B230D(1);
}

void func_361(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xB8A06E7E729EED0A(sParam1) && !unk_0xF2831232D38CD691(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (iParam2 == 0)
	{
		fVar1 = func_363(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_362(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x59A0729D503ED758(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_362(char* sParam0)
{
	if (!unk_0xF2831232D38CD691(sParam0))
	{
	}
	return unk_0x2BAF9380E92B73CD(0.35f, 0);
}

float func_363(char* sParam0)
{
	if (!unk_0x544AEDB4A15228FF(uParam0))
	{
		if (unk_0x7CBED6EFED40E7EB(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_333(0, 1, 0, 0, 0, 0);
	unk_0xC8E81EDC1522FA75(sParam0);
	return unk_0xF274F7A6105B230D(1);
}

void func_364(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_365(29, sParam1, sParam2);
}

void func_365(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5881[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6682[iParam0 /*16*/]), sParam2, 64);
}

void func_366(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4945[0] = iParam0;
	Global_17257.f_4945[1] = iParam1;
	Global_17257.f_4945[2] = iParam2;
	Global_17257.f_4945[3] = iParam3;
	Global_17257.f_4945[4] = iParam4;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_370(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17257.f_7827 = iParam4;
	Global_17257.f_7823 = uParam0;
	Global_17257.f_7824 = uParam1;
	Global_17257.f_7825 = uParam2;
	Global_17257.f_7826 = uParam3;
}

int func_371(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_375(0) == -1 && Global_2558198 == iParam1)
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

int func_372(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar0 = unk_0x17D1A438B237C217(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x0139E142C27412BC(2, 189))
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

int func_373(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar0 = unk_0x17D1A438B237C217(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x0139E142C27412BC(2, 187))
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

int func_374(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		fVar0 = unk_0x17D1A438B237C217(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x0139E142C27412BC(2, 188))
	{
		if (!func_400(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_414(uParam0);
			return 1;
		}
	}
	else if (func_400(uParam0))
	{
		func_401(uParam0);
	}
	return 0;
}

int func_375(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_17256);
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	unk_0xF3B8873A3C140592(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xF3B8873A3C140592(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xFA99CE7438CDE58B();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_2558192 >= fVar0 && Global_2558192 < fVar5)
		{
			return -999;
		}
	}
	if (Global_2558192 >= fVar0 && Global_2558192 < fVar4)
	{
		return -1;
	}
	if (Global_2558192 >= fVar4 && Global_2558192 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_376()
{
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		return unk_0x69ED83B6DEBA60F9(2, 237);
	}
	return 0;
}

void func_377(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = unk_0x693EBB4F13506457();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_378(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2558122.f_21), "", 16);
	}
}

int func_379()
{
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (Global_2558198 > -1)
		{
			if (unk_0x8D9008B8900A28D0(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894() || unk_0x0657FBBA38D8BD02())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xE4D30FD564C6B6BB();
	}
	if (Global_2558198 == -6)
	{
		unk_0xA230EF2CD00B4205(4);
		if (iParam0 && unk_0x0139E142C27412BC(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2558198 = -1;
			return 0;
		}
	}
	if (((Global_2558198 > -1 || Global_2558198 == -3) || Global_2558198 == -2) || unk_0xCB27D2C7F9F87988())
	{
		unk_0xA230EF2CD00B4205(1);
		return 0;
	}
	if (Global_2558198 == -1 && iParam0)
	{
		if (unk_0x0139E142C27412BC(2, 237))
		{
			unk_0xA230EF2CD00B4205(4);
			Global_2558198 = -6;
			return 1;
		}
		else
		{
			unk_0xA230EF2CD00B4205(3);
			return 0;
		}
	}
	unk_0xA230EF2CD00B4205(1);
	return 0;
}

void func_381(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		Global_2558198 = -1;
		return;
	}
	unk_0xF0915BA609958963(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5600;
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = (Global_17257.f_5600 - 0.034722f);
	}
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xF3B8873A3C140592(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xF3B8873A3C140592(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xFA99CE7438CDE58B();
	func_383();
	if (Global_2558198 == -6)
	{
		return;
	}
	Global_2558198 = -1;
	fVar7 = Global_2558192;
	fVar8 = Global_2558193;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2558192 >= fVar0 && Global_2558192 <= fVar2) && Global_2558193 >= fVar3) && Global_2558193 < (fVar3 + fVar6))
		{
			Global_2558198 = -2;
			if (bParam3)
			{
				func_382(0);
			}
			return;
		}
		if (((Global_2558192 >= fVar0 && Global_2558192 <= fVar2) && Global_2558193 >= (fVar3 + fVar6)) && Global_2558193 < (fVar3 + 0.034722f))
		{
			Global_2558198 = -3;
			if (bParam3)
			{
				func_382(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5603 == -1)
		{
			Global_2558198 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xF799955FDE53592F(76, 84);
				unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
				func_346(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xFA99CE7438CDE58B();
			}
		}
		Global_2558198 = Global_17257.f_7483[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2558198 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2558198 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2558198 = -4;
		return;
	}
	Global_2558198 = -1;
}

void func_382(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	if (Global_2558198 == -2)
	{
		func_346(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2558198 == -3)
	{
		func_346(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xFA99CE7438CDE58B();
}

void func_383()
{
	Global_2558194 = Global_2558192;
	Global_2558195 = Global_2558193;
	Global_2558192 = unk_0x307ABB011D3E4B3A(2, 239);
	Global_2558193 = unk_0x307ABB011D3E4B3A(2, 240);
	Global_2558196 = (Global_2558192 - Global_2558194);
	Global_2558197 = (Global_2558193 - Global_2558195);
}

float func_384(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_385(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_326(0);
	unk_0x7068E8DB78AD0A08(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_370(uVar0, uVar1, uVar2, uVar3, 1);
	func_369(1, 2, 0, 0, 0);
	func_368(1, 2, 1, 1, 1);
	func_367(0, 1, 0, 0, 0);
	func_366("DARTS_TITLE");
	func_364(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_361(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_358(0, 1, 0);
	func_361(1, "DARTS_SETS", 0, 1, 0, 0);
	func_358(1, 1, 0);
	func_361(2, "DARTS_START", 0, 1, 0, 0);
	func_357(2, 141, 141, 1);
	func_356(0);
	func_378(0, 1, 1);
	func_377("DARTS_LEGD", 0, 0);
	func_386();
	func_355(201, "ITEM_SELECT", -1, 0);
	func_355(202, "IB_QUIT", -1, 0);
}

void func_386()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0xCD05C5449069D59C(0.325f, 0.3f);
	}
}

int func_387(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_410() && unk_0x693EBB4F13506457() >= iLocal_323 + 1000) && *iParam0 != 8)
	{
		if (!unk_0xD5DFCA69ACAA20E3() && !unk_0xE71FCE10773CF7B0())
		{
			unk_0x00F9843B9C06C2E9(500);
		}
	}
	if (unk_0xD5DFCA69ACAA20E3() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_323 = unk_0x693EBB4F13506457();
						func_395(uParam1->f_1, uParam1->f_4, func_397(2), func_396(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_267(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_254(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_414(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_403(uParam5) > 1f && !func_284("DARTS_DOUBLE_T"))
					{
						func_398("DARTS_DOUBLE_T", -1);
					}
					if (func_403(uParam5) > 5f)
					{
						func_414(uParam5);
						unk_0x9F4AA6F234E8A860(1);
						func_389(uParam1->f_1, uParam1->f_4, func_397(3), func_396(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xABE82A757E4DE125(uLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_267(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_254(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_414(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_403(uParam5) > 1f && !func_284("DARTS_TRIPLE_T"))
					{
						func_398("DARTS_TRIPLE_T", -1);
					}
					if (func_403(uParam5) > 5f)
					{
						func_414(uParam5);
						unk_0x9F4AA6F234E8A860(1);
						func_395(uParam1->f_1, uParam1->f_4, func_397(4), func_396(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xABE82A757E4DE125(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_267(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_254(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0xE55275772E833643(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_414(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_403(uParam5) > 1f && !func_284("DARTS_BULL_T"))
					{
						func_398("DARTS_BULL_T", -1);
					}
					if (func_403(uParam5) > 5f)
					{
						func_414(uParam5);
						unk_0x9F4AA6F234E8A860(1);
						unk_0xC4EE38A4CFF7544C(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_389(uParam1->f_1, uParam1->f_4, func_397(5), func_396(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0xABE82A757E4DE125(uLocal_128) && !func_284("DARTS_DBL_WIN"))
			{
				func_398("DARTS_DBL_WIN", -1);
			}
			if (func_403(uParam5) > 6f)
			{
				func_414(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xC4EE38A4CFF7544C(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xB306DBE9AFBD23A6(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0xABE82A757E4DE125(uLocal_120))
			{
				iLocal_31 = 0;
				unk_0x9F4AA6F234E8A860(1);
				unk_0x7846F09C04C34C46();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_388(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0xD5DFCA69ACAA20E3())
			{
				iLocal_31 = 0;
				unk_0x9F4AA6F234E8A860(1);
				unk_0x7846F09C04C34C46();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_388(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x7D1795B1E14EDFFD(uLocal_120, 1);
				unk_0x31E6EB2040318451(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_388(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xC76B5C68AB6DC7DF(*uParam0, Var0, 1, 0, 0, 1);
		unk_0xC2BB205CCEB68102(uParam0);
		unk_0xA278ECBE30D8AE4F(uParam0);
	}
}

void func_389(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0x6E177E0C55582995(uLocal_128);
	unk_0xD9D8D5E5A50FF6D5(uLocal_128, 35f);
	unk_0x279ADEB173DD9DEE(uLocal_128, unk_0xE79F1883B253E5B8(Param0, fParam3, Param4));
	unk_0xC990AF7C56A67ECD(uLocal_128, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0xB306DBE9AFBD23A6(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_390(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_400(&(uParam0->f_2)))
	{
		func_414(&(uParam0->f_2));
	}
	unk_0x68A38902ADFD05FE(14);
	if (!bParam2)
	{
		unk_0x16387DB49A36A0F3(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x16387DB49A36A0F3(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x0139E142C27412BC(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_401(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_391(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_392(iParam5);
	unk_0x7C38F93AF52620B1(*uParam0, "RESET_MOVIE");
	unk_0xD013AC29829DDC02();
	unk_0x7C38F93AF52620B1(*uParam0, sVar0);
	unk_0x276F16E002D00C0C("STRING");
	unk_0x1AE578B67805BFB7(iParam4);
	unk_0xCE59E3E42586D52D(sParam1);
	unk_0x354E2E7AA52E941F();
	if (!unk_0xB8A06E7E729EED0A(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x65960B4E2ADC9F6D(100);
		unk_0x0139C89EE907A315(true);
	}
	unk_0xD013AC29829DDC02();
	if (bParam6)
	{
		unk_0x7C38F93AF52620B1(*uParam0, "TRANSITION_UP");
		unk_0x512B59C08EAFA3B9(iParam7);
		unk_0xD013AC29829DDC02();
	}
	func_414(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_393()
{
	unk_0x7D1795B1E14EDFFD(uLocal_120, 1);
	unk_0x2544549FDE4C3A7E(1, false, 3000, 1, 0, 0);
	if (unk_0xF96FC657C212A30E(uLocal_127))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_127, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_122))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_122, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_123))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_123, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_124))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_124, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_125))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_125, 0);
	}
	if (unk_0xF96FC657C212A30E(uLocal_126))
	{
		unk_0x7D1795B1E14EDFFD(uLocal_126, 0);
	}
}

char* func_394(int iParam0)
{
	if (iLocal_334 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_334 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_395(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0x6E177E0C55582995(uLocal_127);
	unk_0xD9D8D5E5A50FF6D5(uLocal_127, 35f);
	unk_0x279ADEB173DD9DEE(uLocal_127, unk_0xE79F1883B253E5B8(Param0, fParam3, Param4));
	unk_0xC990AF7C56A67ECD(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0x7D1795B1E14EDFFD(uLocal_127, 1);
	}
	else
	{
		unk_0xB306DBE9AFBD23A6(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_396(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_398(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

int func_399(var uParam0)
{
	if (!unk_0xB6900B8CB0ABBD2B(func_478()))
	{
		func_4(func_478(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_400(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
}

void func_401(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_402(var uParam0, char* sParam1, int iParam2)
{
	unk_0x7ABE44FB19CAE2E1(uParam0, sParam1, func_6(iParam2), 1);
}

float func_403(var uParam0)
{
	if (func_400(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_404(var uParam0)
{
	if (!func_400(uParam0))
	{
		func_352(uParam0);
	}
	else
	{
		func_414(uParam0);
	}
}

void func_405()
{
	Global_14578 = 0;
	func_406();
}

void func_406()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_407(int iParam0)
{
	if (Global_14571)
	{
		func_409(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_408())
	{
		Global_14413.f_1 = 3;
	}
}

int func_408()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_409(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_410()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_411(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x974516F979AD07BC();
	if (unk_0x95CCECA3948CFE7B(uVar0))
	{
		if (!func_412(iVar0))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x5534579797ACFD77(iVar0, unk_0xC8B93D94F8954288(), Local_292, 0, 1, 0))
			{
				unk_0xA384C028CB596A07(iVar0);
				unk_0x8FB4254399424391(iVar0, 0, 0);
				unk_0x872B541D7953A19B(iVar0, 0, 0);
				unk_0xB7A2078CD1C9A82F(iVar0, 1);
				unk_0xFD816D0E738EB817(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
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

void func_413(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x7C38F93AF52620B1(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x65960B4E2ADC9F6D(iParam1);
	unk_0xD013AC29829DDC02();
}

void func_414(var uParam0)
{
	func_415(uParam0, 0f);
}

void func_415(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_416(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

void func_417(var uParam0, var uParam1, char* sParam2)
{
	unk_0x7C38F93AF52620B1(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_418(uParam1);
	func_418(sParam2);
	unk_0xD013AC29829DDC02();
}

void func_418(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(uParam0);
}

void func_419(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(func_478()) && !unk_0x2DC9BA2299B45EA6(func_478()))
	{
		unk_0x5980997C9ACA0572(func_478());
	}
	else
	{
		if (unk_0x95CCECA3948CFE7B(uParam8->f_5) && !unk_0x2DC9BA2299B45EA6(uParam8->f_5))
		{
			unk_0xFD816D0E738EB817(uParam8->f_5, 1, 1);
			uLocal_295[1] = uParam8->f_5;
			unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
		}
		else if (func_421(uParam7))
		{
			unk_0x5124C5FA52D2AF3E(uLocal_295[1]);
		}
		else
		{
			uLocal_295[1] = unk_0x71DD988C1B903F5D(26, iLocal_331, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0x3D32B80EFC48A92D(uLocal_295[1], "Darts_name"))
		{
			iVar0 = unk_0xFE76479AD91F5A0A(uLocal_295[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_391 = func_424("RAYMOND");
				iLocal_392 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_391 = func_424("JOHAN");
				iLocal_392 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_391 = func_424("STAN");
				iLocal_392 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_391 = func_424("VINCE");
				iLocal_392 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_391 = func_424("KRISTY");
				iLocal_392 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_391 = func_424("MARLENE");
				iLocal_392 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_391 = func_424("LORIE");
				iLocal_392 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_391 = func_424("SHELLEY");
				iLocal_392 = -863218904;
			}
		}
		unk_0x99230E3785E2C923(uLocal_295[1], "Darts_name", iLocal_392);
	}
	iVar1 = unk_0x6D5BB810CC209E15(uLocal_295[1]);
	func_420(iVar1);
	unk_0xC518AECFA9CF7722(uLocal_295[1], uLocal_295[0], 0);
	unk_0xC518AECFA9CF7722(uLocal_295[0], uLocal_295[1], 0);
}

void func_420(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_102 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_421(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x06C00074433E3408(unk_0xC8B93D94F8954288(), uParam0, -1))
	{
		if (!unk_0x2DC9BA2299B45EA6((*uParam0)[iVar0]))
		{
			if ((((((unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x6D5BB810CC209E15((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xFD816D0E738EB817((*uParam0)[iVar0], 1, 1);
				uLocal_295[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 3;
		while (iVar0 <= (147 - 1))
		{
			if (func_423(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_423(int iParam0)
{
	if (!func_80(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_424(char* sParam0)
{
	if (unk_0x884056BD9590BF29() == 7)
	{
		if (unk_0xF8D041B05C3D1FD4(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xF8D041B05C3D1FD4(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_425(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		uParam0->f_4 = unk_0x59DD203239FBDCAD(*uParam0);
	}
	if (!bParam3)
	{
		func_427(uParam1, uParam0);
	}
	Local_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	Local_82 = { Local_82 + Local_56 };
	Local_79 = { unk_0xE79F1883B253E5B8(uParam0->f_1, uParam0->f_4, Local_82) };
	func_426(uParam2, uParam0);
}

void func_426(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_56 };
	*uParam0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_427(var uParam0, var uParam1)
{
	*uParam0 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { unk_0xE79F1883B253E5B8(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_428(var uParam0, var uParam1)
{
	if (!unk_0xC4C141A321D45FD8("SCRIPT\DARTS", 0))
	{
		return 0;
	}
	if (!unk_0xC4C141A321D45FD8("SCRIPT\FAMILY1_2", 0))
	{
		return 0;
	}
	if ((((((((((((!unk_0x0845149A26DABBA5(iLocal_28) || !unk_0x0845149A26DABBA5(iLocal_29)) || !unk_0x0845149A26DABBA5(iLocal_60)) || !unk_0x0845149A26DABBA5(iLocal_331)) || !unk_0xF518F3C7FACD43B7(*uParam0)) || !unk_0xF518F3C7FACD43B7(uParam1->f_645)) || !unk_0xF518F3C7FACD43B7(uParam1->f_57)) || !unk_0xF518F3C7FACD43B7(uParam1->f_62)) || !unk_0xF0DCEBB4ADA5D981(3)) || !unk_0x701C5CF3E1956924("Darts")) || !unk_0xF9B86DC1728F1339(sLocal_393)) || !unk_0xF9B86DC1728F1339(sLocal_394)) || !func_429(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_429(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_323(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0xF3AC452C34BF0E13(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0xBDD1A745DB5C5678(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x1F0D08B8266D20DB("CommonMenu", 0);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0x701C5CF3E1956924("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x1F0D08B8266D20DB("MPShopSale", 0);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0x701C5CF3E1956924("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_430(&(Global_17257.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_430(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xF518F3C7FACD43B7(*uParam0))
			{
				*uParam0 = unk_0x31DC2CEFEF13C96D(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xF518F3C7FACD43B7(*uParam0))
					{
						uParam0->f_8 = unk_0x693EBB4F13506457();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x693EBB4F13506457();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xF518F3C7FACD43B7(*uParam0))
			{
				uParam0->f_8 = unk_0x693EBB4F13506457();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xF518F3C7FACD43B7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_431(var uParam0, var uParam1)
{
	unk_0x7567CEA8E6B5340B(iLocal_28);
	unk_0x7567CEA8E6B5340B(iLocal_29);
	unk_0x7567CEA8E6B5340B(iLocal_60);
	unk_0x7567CEA8E6B5340B(iLocal_331);
	unk_0x1F0D08B8266D20DB("Darts", 0);
	unk_0x1F0D08B8266D20DB("ShopUI_Title_Darts", 0);
	unk_0xC0E8B67A4385D37D(sLocal_393);
	unk_0xC0E8B67A4385D37D(sLocal_394);
	*uParam0 = unk_0x31DC2CEFEF13C96D("darts_scoreboard");
	uParam1->f_645 = func_181();
	uParam1->f_57 = func_433();
	uParam1->f_62 = func_432();
	unk_0xF3AC452C34BF0E13("DARTS", 3);
}

var func_432()
{
	return unk_0x31DC2CEFEF13C96D("MIDSIZED_MESSAGE");
}

var func_433()
{
	return unk_0x31DC2CEFEF13C96D("MP_BIG_MESSAGE_FREEMODE");
}

void func_434(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_435(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0xE79F1883B253E5B8(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_435(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_436(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61.f_0 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (unk_0xDDC43401E4A15041())
	{
		Local_61.f_2 = 0.05f;
		Local_61.f_3 = 0.095f;
	}
	else
	{
		Local_61.f_2 = 0.065f;
		Local_61.f_3 = 0.09f;
	}
	Local_61.f_4 = 255;
	Local_61.f_5 = 250;
	Local_61.f_6 = 255;
	Local_61.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	Local_61.f_8 = 0f;
	Local_70.f_0 = 0f;
	Local_70.f_1 = 0f;
	Local_70.f_2 = 0.061f;
	Local_70.f_3 = 0.105f;
	Local_70.f_4 = 200;
	Local_70.f_5 = 45;
	Local_70.f_6 = 40;
	Local_70.f_7 = 255;
	Local_70.f_8 = 0f;
}

void func_437(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_438()
{
	int iVar0;
	
	unk_0xF0A1A675B6A9C262();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_439(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	
	fLocal_134 = unk_0xA2A5649E3ACE3459(0);
	fVar21 = 30f;
	fVar21 = func_384(fLocal_134);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0xDDC43401E4A15041())
	{
		Var27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		Var27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	Var32 = { 0.261599f, -0.750354f, -0.392929f };
	Var38 = { 0.281314f, -0.573735f, -0.39603f };
	Var3 = { unk_0xE79F1883B253E5B8(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0xE79F1883B253E5B8(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0xE79F1883B253E5B8(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0xE79F1883B253E5B8(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = unk_0x785B53D5654A2FFD(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_121 = unk_0x785B53D5654A2FFD(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_122 = unk_0x785B53D5654A2FFD(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_123 = unk_0x785B53D5654A2FFD(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_124 = unk_0x785B53D5654A2FFD(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0x785B53D5654A2FFD(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0x785B53D5654A2FFD(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_128 = unk_0x785B53D5654A2FFD(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0x785B53D5654A2FFD(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0xD9D8D5E5A50FF6D5(uLocal_122, 43.35f);
	unk_0xD9D8D5E5A50FF6D5(uLocal_123, 42.35f);
	unk_0xB61A035EB3575B09(uLocal_122, "HAND_SHAKE", 0.1f);
	unk_0xB61A035EB3575B09(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_440(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x95CCECA3948CFE7B(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_441()
{
	Global_17118.f_6 = 1;
}

void func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_25359, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25359, iParam0);
	}
}

var func_443(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_444(iParam0, iParam1);
	unk_0x5F0618A5FDAD55C4(uVar1, &uVar0, -1);
	return uVar0;
}

var func_444(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_445(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_445(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		func_447();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_37(0))
		{
			func_407(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_447()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_448(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x3FF0F697A7CC3CE7(1);
	func_246(8);
	func_299();
	if (bLocal_305)
	{
		func_466(&uLocal_321);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_388(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x4BBD72565A0AF033(iLocal_28);
	unk_0x4BBD72565A0AF033(iLocal_29);
	if (!unk_0x2DC9BA2299B45EA6(uLocal_295[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_295[1]))
	{
		unk_0xD1FE26E80A6E2C00(uLocal_295[0]);
		unk_0xD1FE26E80A6E2C00(uLocal_295[1]);
	}
	func_465();
	unk_0x4BBD72565A0AF033(iLocal_60);
	func_464();
	func_463(uParam1->f_645);
	func_462(&(uParam1->f_57));
	if (!unk_0xB6900B8CB0ABBD2B(func_478()))
	{
		unk_0x13B202E60E04C733(func_478(), func_461());
		func_460(iLocal_329, iLocal_330);
	}
	else
	{
		func_458(&(uLocal_295[1]));
	}
	func_446(0);
	func_457(uParam2);
	func_34(0);
	unk_0x19479CF94A711302(15);
	if (unk_0x5AA202D345A0E889())
	{
		if (iParam0->f_460 && !iLocal_319)
		{
			func_456(190, 0);
		}
	}
	func_91();
	func_438();
	func_83(&(uParam1->f_72));
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_312)
	{
		func_452(130, 0, 0);
		func_449();
	}
	func_442(23, 0);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_449()
{
	func_450();
}

int func_450()
{
	if (func_451(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_451(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_452(int iParam0, int iParam1, int iParam2)
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
		func_455((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = iParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_453();
	}
}

void func_453()
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
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_74(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_454() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
				{
					func_450();
				}
			}
		}
	}
}

int func_454()
{
	return Global_25115;
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_338();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_456(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x5AA202D345A0E889())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_211(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		unk_0x0E68C97A53548AA2(103, iLocal_151[1], 0f);
		unk_0x0E68C97A53548AA2(99, iLocal_151[2], 0f);
		unk_0x0E68C97A53548AA2(109, iLocal_151[3], 0f);
		unk_0x0E68C97A53548AA2(106, iLocal_151[5], 0f);
		unk_0x0E68C97A53548AA2(2, iLocal_151[10], 0f);
		unk_0x0E68C97A53548AA2(107, iLocal_151[8], 0f);
		unk_0x0E68C97A53548AA2(116, iLocal_151[6], 0f);
	}
}

void func_457(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xEF145906684E3D72(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x68B0A67658F2D9C2())
		{
			unk_0x7C38F93AF52620B1(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x0139C89EE907A315(false);
			unk_0xD013AC29829DDC02();
		}
		unk_0xEF145906684E3D72(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x4A7FE215482FE126(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69585)
	{
		if (!unk_0x22583795917573A4(unk_0x1A96BAEAC664567A()))
		{
			if (!Global_69586)
			{
				if (unk_0xD5DFCA69ACAA20E3() && !func_451(0))
				{
					unk_0x31E6EB2040318451(800);
				}
			}
		}
	}
	func_34(0);
}

void func_458(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0) && !unk_0x2DC9BA2299B45EA6(*uParam0))
	{
		unk_0xA9351C9309E03069(&uLocal_332);
		unk_0x3E2E609450787FFE(&uLocal_332);
		if (unk_0x95CCECA3948CFE7B(uLocal_295[0]))
		{
			unk_0xE48D9147BC1F4CD7(0, uLocal_295[0], 8000, 2049, 3);
		}
		unk_0x1A95AE7201CE6376(0, 1000);
		if (bLocal_310)
		{
			if (!unk_0xDCC86F723E82125E(Global_100937, 10))
			{
				unk_0x81333BEA4837207C(0, func_459(iLocal_334 == 2, Local_375, Local_381), 1f, 20000, 0.25f, 0, func_110(iLocal_334 == 2, fLocal_385, fLocal_387));
			}
			else
			{
				unk_0x81333BEA4837207C(0, func_459(iLocal_334 == 2, Local_372, Local_378), 1f, 20000, 0.25f, 0, func_110(iLocal_334 == 2, fLocal_384, fLocal_386));
			}
			unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x81333BEA4837207C(0, func_459(iLocal_334 == 2, Local_372, Local_378), 1f, 20000, 0.25f, 0, func_110(iLocal_334 == 2, 172.6813f, 142.6717f));
			unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x939BC11172AA1303(uLocal_332);
		unk_0xBFE865E3B513451B(*uParam0, uLocal_332);
		unk_0xF1A02DDEC7E15D6E(*uParam0, 1);
	}
	unk_0x4BBD72565A0AF033(iLocal_331);
}

Vector3 func_459(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_460(int iParam0, var uParam1)
{
	if (Global_87265 == iParam0)
	{
		Global_87266 = Global_87265;
		Global_87267 = uParam1;
		Global_87265 = 23;
	}
}

var func_461()
{
	return unk_0x471BC3ECFB439FD6(unk_0x1A96BAEAC664567A());
}

void func_462(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
		*uParam0 = 0;
	}
}

void func_463(var uParam0)
{
	unk_0xEF145906684E3D72(&uParam0);
}

void func_464()
{
	unk_0x9F4AA6F234E8A860(1);
	unk_0x5269022A1D4CB9CC(0);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	unk_0xB7709513BF7C1AC0(1);
}

void func_465()
{
	if (unk_0x95CCECA3948CFE7B(uLocal_59))
	{
		unk_0xA278ECBE30D8AE4F(&iLocal_59);
	}
}

void func_466(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x95CCECA3948CFE7B(uVar0))
	{
		if (!func_412(iVar0))
		{
			unk_0x8FB4254399424391(iVar0, 1, 0);
			unk_0x872B541D7953A19B(iVar0, 1, 0);
			unk_0xB7A2078CD1C9A82F(iVar0, 0);
		}
	}
}

void func_467()
{
	int iVar0;
	
	if (unk_0xD838CD843F6FE18B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_100976.f_7719 || func_451(0))
	{
		if (!func_475())
		{
			iVar0 = func_474();
			if (iVar0 != -1)
			{
				if (!func_469(iVar0))
				{
					return;
				}
				unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_468();
		}
	}
}

void func_468()
{
	Global_91141 = 1;
	if (unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_78())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
	}
	else if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_78())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 25);
	}
}

int func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_468();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0xE3BB289E1C1F168E(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_473(iVar1, 1);
	unk_0x56A28F32E01DD318(unk_0xA34E7C2A5118D638());
	unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	func_470(&(Global_100976.f_1770.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_100976.f_7719.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xDCC86F723E82125E(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x0F976C80D8B6703E(0);
		}
	}
	Global_100976.f_7719.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_100976.f_7719)
		{
		}
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_470(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_472(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_471(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_471(var uParam0)
{
	*uParam0 = -15;
}

int func_472(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_472(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_472(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_473(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

int func_474()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_475()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

void func_476(int iParam0, bool bParam1)
{
	if (unk_0x2DC9BA2299B45EA6(func_478()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xA863CAB6B7856A4B(func_478(), func_461()))
		{
			return;
		}
		if (!unk_0x2DC9BA2299B45EA6(func_477()))
		{
			if (!unk_0xA863CAB6B7856A4B(func_477(), func_461()))
			{
				return;
			}
		}
	}
	if (Global_87265 == 23)
	{
		Global_87267 = 10;
		Global_87265 = iParam0;
	}
}

var func_477()
{
	return Global_87272;
}

int func_478()
{
	return Global_87271;
}

void func_479()
{
	if (iLocal_290 == 1)
	{
		return;
	}
	func_299();
	unk_0x15B0C8EC5FC1A265("Darts");
	iLocal_290 = 1;
}

int func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


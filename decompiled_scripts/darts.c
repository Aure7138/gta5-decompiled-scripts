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
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 10;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 8;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 8;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	float fLocal_285 = 0f;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	var uLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	float fLocal_297 = 0f;
	struct<3> Local_298 = { 0, 0, 0 } ;
	float fLocal_301 = 0f;
	struct<3> Local_302 = { 0, 0, 0 } ;
	float fLocal_305 = 0f;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	var uLocal_319[2] = { 0, 0 };
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	bool bLocal_330 = 0;
	bool bLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	bool bLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	bool bLocal_337 = 0;
	bool bLocal_338 = 0;
	bool bLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	var uLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	struct<3> Local_390 = { 0, 0, 0 } ;
	struct<3> Local_393 = { 0, 0, 0 } ;
	struct<3> Local_396 = { 0, 0, 0 } ;
	struct<3> Local_399 = { 0, 0, 0 } ;
	struct<3> Local_402 = { 0, 0, 0 } ;
	struct<3> Local_405 = { 0, 0, 0 } ;
	float fLocal_408 = 0f;
	float fLocal_409 = 0f;
	float fLocal_410 = 0f;
	float fLocal_411 = 0f;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	char* sLocal_414 = NULL;
	char* sLocal_415 = NULL;
	int iLocal_416 = 0;
	char* sLocal_417 = NULL;
	char* sLocal_418 = NULL;
	char* sLocal_419[3] = { NULL, NULL, NULL };
	char* sLocal_423[3] = { NULL, NULL, NULL };
	char* sLocal_427[3] = { NULL, NULL, NULL };
	char* sLocal_431[3] = { NULL, NULL, NULL };
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
	bool bVar1768;
	bool bVar1769;
	bool bVar1770;
	bool bVar1771;
	var uVar1772;
	int iVar1773;
	int iVar1774;
	int iVar1775;
	float fVar1776;
	float fVar1777;
	struct<3> Var1778;
	struct<3> Var1781;
	struct<3> Var1784;
	struct<3> Var1787;
	struct<3> Var1790;
	char* sVar1793;
	var uVar1794;
	var uVar1797;
	var uVar1800;
	var uVar1803[20];
	var uVar1824;
	int iVar1825;
	int iVar1826;
	int iVar1827;
	int iVar1828;
	int iVar1829;
	int iVar1830;
	float fVar1831;
	int iVar1832;
	
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
	fLocal_285 = ((0.05f + 0.275f) - 0.01f);
	fLocal_288 = -0.05f;
	fLocal_289 = 0.92f;
	fLocal_290 = 1.94f;
	fLocal_291 = 2.99f;
	fLocal_292 = 3.7f;
	Local_294 = { -0.4f, 0.96f, 0.85f };
	fLocal_297 = 0.95f;
	Local_298 = { 0f, 2f, 2.5f };
	fLocal_301 = 1.75f;
	Local_302 = { 0f, 0f, 120f };
	fLocal_305 = 35.5f;
	Local_316 = { 500f, 500f, 500f };
	bLocal_331 = true;
	Local_396 = { -573.1373f, 294.0269f, 78.1765f };
	Local_399 = { -574.1169f, 292.7964f, 78.1766f };
	Local_402 = { 1995.295f, 3050.084f, 46.91535f };
	Local_405 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_408 = 172.6813f;
	fLocal_409 = 274.5094f;
	fLocal_410 = 142.6717f;
	fLocal_411 = 44.8785f;
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
	iVar1774 = 0;
	sLocal_417 = "facials@gen_female@variations@happy";
	switch (func_485(unk_0x0031992CA618A445()))
	{
		case 0:
			sLocal_418 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_418 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_418 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_419[0] = "mood_happy_1";
	sLocal_419[1] = "mood_happy_2";
	sLocal_419[2] = "mood_happy_3";
	sLocal_423[0] = "darts_outro_01_guy1";
	sLocal_423[1] = "darts_outro_02_guy2";
	sLocal_423[2] = "darts_outro_03_guy2";
	sLocal_427[0] = "darts_outro_01_guy2";
	sLocal_427[1] = "darts_outro_02_guy1";
	sLocal_427[2] = "darts_outro_03_guy1";
	sLocal_431[0] = "darts_outro_01_cam";
	sLocal_431[1] = "darts_outro_02_cam";
	sLocal_431[2] = "darts_outro_03_cam";
	uLocal_319[0] = unk_0x0031992CA618A445();
	bLocal_334 = true;
	Var1778 = { 1992.293f, 3050.583f, 47.98973f };
	Var1781 = { -572.0406f, 294.1958f, 79.9374f };
	func_484();
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		iLocal_358 = 1;
		switch (unk_0x3AF262D7332EEDF5(0, 2))
		{
			case 0:
				iLocal_355 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_355 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_353 = 10;
		unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0x76B3C79DE564AFC6(ScriptParam_0.f_4))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (iLocal_358 == 2)
			{
				ScriptParam_0 = { Var1781 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1778 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x6DA91F6BA155FC6B(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0xE5277EB89570BEE8(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x4EB96080335F1ABC(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1784, 0);
				ScriptParam_0.f_3 = Var1784.f_2;
			}
		}
	}
	else
	{
		Var1784 = { unk_0xF177E0DA126D71C8(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0x7A6C051038031EFA(func_483(), 0))
	{
		func_481(iLocal_353, 1);
		if (unk_0x90219307C9D2728D(func_483(), 0))
		{
			unk_0x471E558A661279DE(func_483(), 0, 0);
		}
		uLocal_319[1] = func_483();
	}
	else
	{
		unk_0xB5533C0C8A2B9BF2(1);
	}
	if (unk_0xB9B05E900D325C36(67))
	{
		func_472();
		func_453(&Var0, &Var508, &Var1191);
	}
	unk_0x10B4620291F10FEF(0);
	unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
	func_451(1);
	iLocal_349 = func_448(func_485(uLocal_319[0]), 1);
	fVar1776 = (unk_0xBBDA792448DB5A89(iLocal_349) / 100f);
	fVar1777 = (fVar1776 * 1200f);
	iLocal_142 = unk_0xF2DB717A73826179(fVar1777);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_447(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xBD1C47D856010F09(2);
		unk_0x7CDDB154852DA508();
		unk_0xB8281495D778DB56(15, 0f, -0.0375f);
		if (iLocal_341 && Var0.f_0 < 13)
		{
			unk_0x381C955BC6B0FEE5(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0x8682D8A6269E52C9(ScriptParam_0.f_5) && !unk_0x76B3C79DE564AFC6(func_483())) || (unk_0x76B3C79DE564AFC6(func_483()) && unk_0x8682D8A6269E52C9(func_483())))
		{
			func_453(&Var0, &Var508, &Var1191);
		}
		if (!unk_0x8682D8A6269E52C9(uLocal_319[0]))
		{
			unk_0x49544FB997F0AADE(uLocal_319[0], 239, 1);
			unk_0x49544FB997F0AADE(uLocal_319[0], 124, 1);
			func_446();
			unk_0x97064E9008B25888(0);
			unk_0x97064E9008B25888(2);
			iVar1775 = 0;
			while (iVar1775 < unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), &uVar1803, -1))
			{
				if (uVar1803[iVar1775] != uLocal_319[1])
				{
					if (!unk_0x8682D8A6269E52C9(uVar1803[iVar1775]))
					{
						unk_0x49544FB997F0AADE(uVar1803[iVar1775], 240, 1);
					}
				}
				iVar1775++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x8C361F37C04084F4(1);
					func_445(&(Var0.f_243), &ScriptParam_0);
					func_444(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x76B3C79DE564AFC6(Var0.f_243))
					{
						Local_390 = { unk_0xCD59EF1D7098A4B4(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_393 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = unk_0x6BE82EFE6EE60BF4(26379945, Local_390, Local_393, 65f, 0, 2);
						unk_0x990E6357D338A9C8(uLocal_129, 30f);
					}
					func_443();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
					{
						unk_0x963AAB0E6FFD7E02(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
						{
							unk_0x1F5B34056C3CB80B(&uLocal_356);
							unk_0x173325AAF2CD766A(&uLocal_356);
							unk_0x471E558A661279DE(0, 0, 0);
							unk_0xF81AD3C937316CCA(uLocal_356);
							unk_0xEDD5437C49B7B1F8(unk_0x0031992CA618A445(), uLocal_356);
						}
						Local_85 = { Local_85 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar1825 = 0;
					while (iVar1825 < 2)
					{
						iVar1826 = 0;
						while (iVar1826 < 3)
						{
							func_442(&(Var0.f_5[iVar1825 /*79*/][iVar1826 /*26*/]), iVar1825);
							iVar1826++;
						}
						iVar1825++;
					}
					iVar1827 = 0;
					while (iVar1827 < 3)
					{
						func_442(&(Var0.f_164[iVar1827 /*26*/]), 0);
						iVar1827++;
					}
					iVar464 = 2;
					func_441(0);
					func_439(&Var477, iLocal_358, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x76B3C79DE564AFC6(Var0.f_243))
					{
						Var1784 = { unk_0x4FCF41D2B316BEF6(Var0.f_243, Var477.f_18) };
					}
					func_436(&Var477, &Var508);
					unk_0x8EF7C3B8BFF23680(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_433(&Var477, &Var508))
					{
						func_430(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_412 = func_485(uLocal_319[0]);
						switch (iLocal_412)
						{
							case 0:
								sLocal_414 = func_429("MICHAEL");
								if (!unk_0x2A3398C6222EB190(Global_104400, 0))
								{
									sVar1793 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_414 = func_429("FRANKLIN");
								bLocal_338 = true;
								if (!unk_0x2A3398C6222EB190(Global_104400, 0))
								{
									sVar1793 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_414 = func_429("TREVOR");
								if (!unk_0x2A3398C6222EB190(Global_104400, 0))
								{
									sVar1793 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x7A6C051038031EFA(func_483(), 0))
						{
							iLocal_413 = func_485(func_483());
							if (iLocal_413 == 145)
							{
								iLocal_413 = func_427(func_483());
							}
							switch (iLocal_413)
							{
								case 0:
									sLocal_415 = func_429("MICHAEL");
									break;
								
								case 1:
									sLocal_415 = func_429("FRANKLIN");
									break;
								
								case 2:
									sLocal_415 = func_429("TREVOR");
									break;
								
								case 19:
									sLocal_415 = func_429("LAMAR");
									unk_0xD5FF2158C8907CA9(func_483(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_415 = func_429("JIMMY");
									break;
								
								default:
									sLocal_415 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1773 = unk_0x3AF262D7332EEDF5(0, 200);
							if (iLocal_358 == 2)
							{
								if (iVar1773 < 51)
								{
									sLocal_415 = func_429("RAYMOND");
									iLocal_416 = 954610991;
								}
								else if (iVar1773 < 101)
								{
									sLocal_415 = func_429("JOHAN");
									iLocal_416 = 94453331;
								}
								else if (iVar1773 < 151)
								{
									sLocal_415 = func_429("STAN");
									iLocal_416 = 1891555423;
								}
								else
								{
									sLocal_415 = func_429("VINCE");
									iLocal_416 = -1067630349;
								}
							}
							else if (iVar1773 < 51)
							{
								sLocal_415 = func_429("KRISTY");
								iLocal_416 = 885327384;
							}
							else if (iVar1773 < 101)
							{
								sLocal_415 = func_429("MARLENE");
								iLocal_416 = -1791000994;
							}
							else if (iVar1773 < 151)
							{
								sLocal_415 = func_429("LORIE");
								iLocal_416 = 1954368234;
							}
							else
							{
								sLocal_415 = func_429("SHELLEY");
								iLocal_416 = -863218904;
							}
						}
						uLocal_59 = unk_0x766969A7CEBA91AE(iLocal_60, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x126145D7C1251B57())
					{
						uVar1824 = unk_0x766969A7CEBA91AE(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_424(Var0.f_243.f_4, Var465, &uVar1803, &ScriptParam_0);
						func_423(&Var477, sLocal_414, sLocal_415);
						unk_0xD706D9D85701BFBD(uLocal_319[1]);
						uLocal_357 = unk_0x6BE82EFE6EE60BF4(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							unk_0xF7B450DAAEDE7290(unk_0x0031992CA618A445(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_422(&(Var0.f_257), 0, unk_0x0031992CA618A445(), sLocal_414, 0, 1);
						if (unk_0x7A6C051038031EFA(func_483(), 0))
						{
							if (iLocal_358 == 2)
							{
								func_422(&(Var0.f_257), 3, uLocal_319[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_422(&(Var0.f_257), 3, uLocal_319[1], "DartsMelHick1", 0, 1);
							}
							iVar1774 = -1;
						}
						else
						{
							func_422(&(Var0.f_257), 3, func_483(), sLocal_415, 0, 1);
							func_420(&uVar1800);
							iVar1774 = 6;
						}
						if (!unk_0x2A3398C6222EB190(Global_104400, 0))
						{
							iVar1774 = -1;
						}
						else
						{
							iVar1774 = 3;
						}
						func_419(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x8682D8A6269E52C9(uLocal_319[1]) && unk_0x52559DAD5F31039D(uLocal_319[0])) && !unk_0x90219307C9D2728D(uLocal_319[0], 1)) && unk_0x52559DAD5F31039D(uLocal_319[1])) && !unk_0x90219307C9D2728D(uLocal_319[1], 1))
					{
						bLocal_329 = func_417(&uLocal_345);
						if ((func_416() && unk_0x31CD6E9F83C10233() >= iLocal_347 + 1000) && iVar1774 != 9)
						{
							if (!unk_0x5114FCEE2A997B95() && !unk_0x229840854A80E0D9())
							{
								unk_0x8351F65655759E0C(500);
							}
						}
						if (unk_0x5114FCEE2A997B95() && iVar1774 != 9)
						{
							func_413(0);
							func_411();
							iVar1774 = 9;
						}
						switch (iVar1774)
						{
							case -1:
								if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
								{
									uLocal_351 = unk_0x87070FAB863D4019(unk_0xCD59EF1D7098A4B4(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x69F9721375CE60CF(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_357 = unk_0xAC08B32D1D8EFE97("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xA68B8DF39003C10C(uLocal_357, uLocal_351, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x55CC07D5416539C8(uLocal_357, 1);
									unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
									unk_0xCFA3B07B6CEEF62C(uLocal_319[0]);
									unk_0xCFA3B07B6CEEF62C(uLocal_319[1]);
									unk_0x3000ECF14A659126(uLocal_319[0]);
									unk_0x3000ECF14A659126(uLocal_319[1]);
									unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xBE0E7D38FE7C495C(uLocal_319[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xBE0E7D38FE7C495C(uLocal_319[0], "mini@dartsintro", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x34F4B9710A21CB7F(uVar1824, uLocal_351, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_410(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 0:
								if (unk_0x00BF23259C14645D(uLocal_351))
								{
									if (!bVar1770)
									{
										if (func_409(&uVar1800) > 1.5f)
										{
											func_408(uLocal_319[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_407(&uVar1800);
										}
									}
									else if (!unk_0x903C2842D53DEC75(uLocal_319[0]))
									{
										if (!bVar1771)
										{
											if (!func_406(&uVar1800))
											{
												func_420(&uVar1800);
											}
											else if (func_409(&uVar1800) > 0.5f)
											{
												func_405(uLocal_319[1]);
												func_407(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_410(&uVar1800);
											func_404("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.25f)
											{
												func_410(&uVar1800);
												func_404("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.55f)
											{
												func_404("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.85f)
											{
												func_404("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.95f)
									{
										iLocal_341 = 1;
										iVar1774++;
									}
									else if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.99f)
								{
									if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
									{
										func_401(Var0.f_243.f_1, Var0.f_243.f_4, func_403(2), func_402(0), 0, 1);
										iLocal_31 = 0;
										unk_0x8C361F37C04084F4(1);
										unk_0x46B35AD2F641A4A3(uLocal_357, 0);
										unk_0xD706D9D85701BFBD(uLocal_319[0]);
										unk_0xD706D9D85701BFBD(uLocal_319[1]);
										unk_0x65F9639B4A46807A(uVar1824, -1000f, 0);
										unk_0xF2EFF31F204F4A7D(&uVar1824);
										unk_0xB3E27A9E412BBDF8(func_400(0));
										func_407(&uVar1800);
										Var0.f_0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
								{
									uLocal_351 = unk_0x87070FAB863D4019(unk_0xCD59EF1D7098A4B4(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x69F9721375CE60CF(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_357 = unk_0xAC08B32D1D8EFE97("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xA68B8DF39003C10C(uLocal_357, uLocal_351, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x55CC07D5416539C8(uLocal_357, 1);
									unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
									unk_0xCFA3B07B6CEEF62C(uLocal_319[0]);
									unk_0xCFA3B07B6CEEF62C(uLocal_319[1]);
									unk_0x3000ECF14A659126(uLocal_319[0]);
									unk_0x3000ECF14A659126(uLocal_319[1]);
									unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xBE0E7D38FE7C495C(uLocal_319[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xBE0E7D38FE7C495C(uLocal_319[0], "mini@dartsintro_alt1", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x34F4B9710A21CB7F(uVar1824, uLocal_351, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_410(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 4:
								if (unk_0x00BF23259C14645D(uLocal_351))
								{
									if (!bVar1770)
									{
										if (func_409(&uVar1800) > 0.5f)
										{
											func_408(uLocal_319[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_407(&uVar1800);
										}
									}
									else if (!unk_0x903C2842D53DEC75(uLocal_319[0]))
									{
										if (!bVar1771)
										{
											if (!func_406(&uVar1800))
											{
												func_420(&uVar1800);
											}
											else if (func_409(&uVar1800) > 0.25f)
											{
												func_405(uLocal_319[1]);
												func_407(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.95f)
									{
										iLocal_341 = 1;
										iVar1774++;
									}
									else if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0xB69F54D50B0A81C6(uLocal_351) > 0.99f)
								{
									if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
									{
										func_399();
										unk_0x46B35AD2F641A4A3(uLocal_357, 0);
										unk_0xD706D9D85701BFBD(uLocal_319[0]);
										unk_0xD706D9D85701BFBD(uLocal_319[1]);
										unk_0x65F9639B4A46807A(uVar1824, -1000f, 0);
										unk_0xF2EFF31F204F4A7D(&uVar1824);
										unk_0xB3E27A9E412BBDF8(func_400(0));
										func_407(&uVar1800);
										Var0.f_0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x5114FCEE2A997B95())
								{
									iLocal_341 = 1;
									iLocal_31 = 0;
									unk_0x8C361F37C04084F4(1);
									if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
									{
										unk_0x0A69FBBF51E1A08F(uLocal_319[0], Var465, 1, 0, 0, 1);
										unk_0x5082D1A6D078DB20(uLocal_319[0], Var0.f_243.f_4);
										unk_0x0A69FBBF51E1A08F(uLocal_319[1], Var465.f_3, 1, 0, 0, 1);
										unk_0x5082D1A6D078DB20(uLocal_319[1], Var0.f_243.f_4);
										unk_0xD706D9D85701BFBD(uLocal_319[0]);
										unk_0xD706D9D85701BFBD(uLocal_319[1]);
									}
									unk_0x46B35AD2F641A4A3(uLocal_357, 0);
									unk_0x65F9639B4A46807A(uVar1824, -1000f, 0);
									unk_0xF2EFF31F204F4A7D(&uVar1824);
									if (!unk_0x2A3398C6222EB190(Global_104400, 0))
									{
										func_401(Var0.f_243.f_1, Var0.f_243.f_4, func_403(2), func_402(0), 0, 1);
									}
									else
									{
										func_399();
									}
									unk_0xB3E27A9E412BBDF8(func_400(0));
									func_407(&uVar1800);
									unk_0x18D7C8000EDEAAB4(500);
									Var0.f_0 = 6;
									iVar1774 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1774)
					{
						case 0:
							iLocal_347 = unk_0x31CD6E9F83C10233();
							if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
							{
								unk_0x0A69FBBF51E1A08F(uLocal_319[0], Var465, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(uLocal_319[0], Var0.f_243.f_4);
								unk_0x0A69FBBF51E1A08F(uLocal_319[1], Var465.f_3, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(uLocal_319[1], Var0.f_243.f_4);
							}
							unk_0xFD69BDF108B32E5B(func_400(1));
							iVar1774 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x31CD6E9F83C10233() - iLocal_347) > 1500)
							{
								func_397(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1774++;
							}
							break;
						
						case 2:
							if (!func_396(&(Var508.f_57), 1, 0))
							{
								unk_0xFD69BDF108B32E5B(func_400(1));
								iVar1774 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0x2A3398C6222EB190(Global_104400, 0))
					{
						if (func_393(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1797))
						{
							unk_0xCD7E92DE2BFA0B0D(&Global_104400, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x55CC07D5416539C8(uLocal_120, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x5114FCEE2A997B95())
					{
						unk_0x18D7C8000EDEAAB4(500);
					}
					switch (iVar1774)
					{
						case 0:
							if (!unk_0x76B3C79DE564AFC6(func_483()))
							{
								if (!unk_0x2A3398C6222EB190(Global_104400, 10))
								{
									unk_0xCD7E92DE2BFA0B0D(&Global_104400, 10);
								}
								else
								{
									unk_0xD804ACF2A7171150(&Global_104400, 10);
								}
								func_391(&Var508);
								iVar1774++;
							}
							else
							{
								func_391(&Var508);
								iVar1774++;
							}
							break;
						
						case 1:
							if (unk_0x20551D6D924ED04B())
							{
								if (fLocal_134 != unk_0x5E61619C36D9095B(0))
								{
									fLocal_134 = unk_0x5E61619C36D9095B(0);
									unk_0x990E6357D338A9C8(uLocal_120, func_390(fLocal_134));
									unk_0x990E6357D338A9C8(uLocal_121, func_390(fLocal_134));
								}
							}
							if (func_330(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xB3E27A9E412BBDF8(func_400(1));
								if (Var0.f_452 > 0)
								{
									iVar1774 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_329(&Var477, 0, 0, 0, 0);
										bVar1769 = true;
									}
									func_326(1, -1);
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
					if (func_319(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_104439.f_18831.f_5 >= 5 && Global_104439.f_18831.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_104439.f_18831.f_5 >= 3 && Global_104439.f_18831.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_318(Global_104439.f_18831.f_5, &iLocal_350))
						{
							func_317(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_316(Global_104439.f_18831.f_5);
						fLocal_91 = func_315(Global_104439.f_18831.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
						{
							unk_0x3000ECF14A659126(uLocal_319[1]);
							unk_0x0A69FBBF51E1A08F(uLocal_319[1], Var465.f_3, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(uLocal_319[1], Var0.f_243.f_4);
						}
						if (func_406(&uVar1794))
						{
							func_407(&uVar1794);
						}
						unk_0xFD69BDF108B32E5B(func_400(2));
						func_314(uLocal_319[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x20551D6D924ED04B())
					{
						if (fLocal_134 != unk_0x5E61619C36D9095B(0))
						{
							fLocal_134 = unk_0x5E61619C36D9095B(0);
							unk_0x990E6357D338A9C8(uLocal_120, func_390(fLocal_134));
							unk_0x990E6357D338A9C8(uLocal_121, func_390(fLocal_134));
						}
					}
					if (!bLocal_339)
					{
						unk_0x9F62787D280BF2EC("mini@dartsoutro");
						bLocal_339 = true;
					}
					if (!iLocal_340)
					{
						if (bLocal_339)
						{
							if (!unk_0xB3379AC2E71D1E7E("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_340 = 1;
							}
						}
					}
					func_232(&Var0, &Var471, &Var477, &Var508, &uVar1794);
					break;
				
				case 11:
					switch (iVar1774)
					{
						case 0:
							if (func_409(&(Var0.f_254)) > 0.5f)
							{
								unk_0x8C361F37C04084F4(1);
								unk_0x27FC4121D73AF604();
								func_231(unk_0x0031992CA618A445());
								func_329(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1828 = 0;
								while (iVar1828 < 2)
								{
									iVar1829 = 0;
									while (iVar1829 < 3)
									{
										func_230(&(Var0.f_5[iVar1828 /*79*/][iVar1829 /*26*/]));
										iVar1829++;
									}
									func_229(&Var477, iVar1828);
									iVar1828++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_227(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_227(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_227(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_227(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1831 = unk_0x5E61619C36D9095B(1);
								if (fVar1831 > 2f)
								{
									Var1787 = { 1992.294f, 3047.577f, 46.21517f };
									Var1790 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var1787 = { 1992.336f, 3047.924f, 46.21517f };
									Var1790 = { 0f, 0f, 136.74f };
								}
								iVar1830 = func_226();
								uLocal_351 = unk_0x87070FAB863D4019(Var1787, Var1790, 2);
								uLocal_357 = unk_0xAC08B32D1D8EFE97("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xA68B8DF39003C10C(uLocal_357, uLocal_351, sLocal_431[iVar1830], "mini@dartsoutro");
								unk_0x55CC07D5416539C8(uLocal_357, 1);
								unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
								if (!unk_0x8682D8A6269E52C9(uLocal_319[0]) && !unk_0x8682D8A6269E52C9(uLocal_319[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1832 = 1;
										}
										else
										{
											iVar1832 = 0;
										}
										unk_0x18F1BFAF88AC511B(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_225(&uLocal_319, iVar1832);
										unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsoutro", sLocal_423[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsoutro", sLocal_427[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xBE0E7D38FE7C495C(unk_0x0031992CA618A445(), sLocal_418, sLocal_419[unk_0x3AF262D7332EEDF5(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x18F1BFAF88AC511B(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_224(&uLocal_319);
										unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsoutro", sLocal_423[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsoutro", sLocal_427[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xBE0E7D38FE7C495C(uLocal_319[1], sLocal_417, sLocal_419[unk_0x3AF262D7332EEDF5(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1774++;
							}
							break;
						
						case 1:
							if (!func_222(&(Var508.f_62), 1))
							{
								iVar1774++;
							}
							break;
						
						case 2:
							func_407(&(Var0.f_254));
							iLocal_335 = 0;
							unk_0xB3E27A9E412BBDF8(func_400(3));
							func_399();
							if (unk_0x2A3EA4C0BCED85F2(uLocal_357))
							{
								unk_0x46B35AD2F641A4A3(uLocal_357, 0);
							}
							iVar1774 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_409(&(Var0.f_254)) > 0.92f)
					{
						func_40(&Var0, &Var508, &Var477, &Var1191, bVar1769);
					}
					break;
				
				case 13:
					uVar1772 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0x7A6C051038031EFA(func_483(), 0))
					{
						unk_0xD706D9D85701BFBD(uLocal_319[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1774)
					{
						case 0:
							unk_0xD706D9D85701BFBD(uLocal_319[0]);
							if (!bLocal_337)
							{
								unk_0x087893C6FCE21842(0, bLocal_337, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x6D0D109B83202E2C(0, 0, 3, 0);
							}
							unk_0x31F42B23A853582E(0);
							unk_0xADE985F6BA90AED5(0, 1065353216);
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
							unk_0x27FC4121D73AF604();
							unk_0x43EC517AF665D2B9(uLocal_319[0], uLocal_319[1], 5000, 2049, 3);
							func_420(&uVar1800);
							iVar1774++;
							break;
						
						case 1:
							if (func_7(&uVar1800) > 0.1f)
							{
								if (!bVar1768)
								{
								}
								func_420(&uVar1800);
								iVar1774++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1800) > 0.3f)
							{
								if (!unk_0x8682D8A6269E52C9(uLocal_319[1]))
								{
									if (!bVar1768)
									{
										func_4(uLocal_319[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_420(&uVar1800);
								iVar1774++;
							}
							break;
						
						case 3:
							if (uVar1772 || bVar1768)
							{
								Var0.f_0 = 15;
								iVar1774++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (unk_0xBF946CEEECD8C935(2, 201))
					{
						func_1(uLocal_319[1]);
						iLocal_354 = 2;
						bVar1768 = true;
						if (unk_0x3A7B47D96E536F61(func_400(2)))
						{
							unk_0xB3E27A9E412BBDF8(func_400(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0xBF946CEEECD8C935(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_100 = 0;
						}
						func_317(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_453(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0x957E53BB191CB24D())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_317(&(uParam0->f_666), 8, 1);
			func_317(&(uParam0->f_666), 15, 0);
			func_317(&(uParam0->f_666), 16, 0);
			func_317(&(uParam0->f_666), 17, 0);
		}
		unk_0xB43ECA2D614EA904();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_317(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x7A6C051038031EFA(func_483(), 0) || iParam2)
	{
		func_408(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x90A3B3322B687517(uParam0, sParam1, sParam2, func_6(iParam3), 0);
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
	if (func_406(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xA83FFA3FA7711E6D() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xA83FFA3FA7711E6D();
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xF649304F12DD5940(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0xE4DAE84C6B39D47D(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
		{
			unk_0xCF304E352457AD63(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
			{
				unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
			}
		}
	}
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(19);
	unk_0xC9621A9AD282CC14(2, 19, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	unk_0xC9621A9AD282CC14(0, 21, 1);
	unk_0xC9621A9AD282CC14(0, 28, 1);
	unk_0xC9621A9AD282CC14(0, 29, 1);
	unk_0xC9621A9AD282CC14(0, 171, 1);
	func_38(0);
	if (unk_0xFF512A008EA368FF(2))
	{
		if (unk_0x055AABF22C9FC8DA() || (unk_0x5114FCEE2A997B95() && !unk_0x4413A34F0AAF1146()))
		{
			unk_0xB540BA8B3C93460F();
		}
	}
	Global_36363 = 1;
	if (!uParam0->f_563)
	{
		switch (func_485(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
		{
			case 1:
				unk_0xF177BD202464664F("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xF177BD202464664F("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xF177BD202464664F("SuccessMichael", 1000, 0);
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
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
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
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_1, "TRANSITION_OUT");
			unk_0x1C703A54AB4B12F6();
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
			if (unk_0xDE25F26B6B16CF7A(2))
			{
				if (unk_0x77FA56883245AD26(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xD887E21676314450(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x77FA56883245AD26(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
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
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
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
					if (unk_0xD887E21676314450(2, 215))
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
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "CLEAR_ALL");
	unk_0x1C703A54AB4B12F6();
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xE8240315678FDE8E(true);
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(0);
	func_13(unk_0xE344F89A3A395F9C(2, 215, true));
	func_12("ES_HELP");
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xE8240315678FDE8E(true);
		unk_0x32F9127910F63DFA(215);
	}
	unk_0x1C703A54AB4B12F6();
	if (bParam1)
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x32F9127910F63DFA(1);
		func_13(unk_0xE344F89A3A395F9C(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xE8240315678FDE8E(true);
			unk_0x32F9127910F63DFA(216);
		}
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x1C703A54AB4B12F6();
}

void func_12(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_13(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
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
	fVar1 = (func_35() * 0.25f);
	if (unk_0x77FA56883245AD26(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEBD23F68B1A617FC(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x27CA09C6DFAB1E79())
				{
					unk_0x32F9127910F63DFA(150);
				}
				else
				{
					unk_0x32F9127910F63DFA(100);
				}
				unk_0xE8240315678FDE8E(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x32F9127910F63DFA((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x32F9127910F63DFA(uParam0->f_56);
				}
				unk_0xE8240315678FDE8E(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x32F9127910F63DFA(2);
				}
				else
				{
					unk_0x32F9127910F63DFA(69);
				}
				unk_0x1C703A54AB4B12F6();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xEBD23F68B1A617FC(uParam0->f_1, "TRANSITION_UP");
				unk_0x90495002CD46BD88(0.15f);
				unk_0xE8240315678FDE8E(true);
				unk_0x1C703A54AB4B12F6();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x4237E72FB80FD332(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x5E61619C36D9095B(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
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
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x8662FAB20C4C3CFB(2, 215);
	unk_0x8662FAB20C4C3CFB(2, 216);
	unk_0x8662FAB20C4C3CFB(2, 200);
	unk_0xC9621A9AD282CC14(2, 200, 1);
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
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
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
			if (unk_0x5114FCEE2A997B95())
			{
				unk_0x2745EC8E79BD57E0();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xBD1C47D856010F09(7);
				unk_0xBD1C47D856010F09(8);
				unk_0xBD1C47D856010F09(9);
				unk_0xBD1C47D856010F09(6);
				unk_0x4237E72FB80FD332(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xC9621A9AD282CC14(0, 140, 1);
				unk_0xC9621A9AD282CC14(0, 141, 1);
				unk_0xC9621A9AD282CC14(0, 142, 1);
				unk_0xC9621A9AD282CC14(2, 188, 1);
				if (unk_0x42F812C5F1AA300A(2, 188))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xC9621A9AD282CC14(2, 187, 1);
				if (unk_0x42F812C5F1AA300A(2, 187))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xC9621A9AD282CC14(2, 202, 1);
				if (unk_0x42F812C5F1AA300A(2, 202))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xBD1C47D856010F09(7);
				unk_0xBD1C47D856010F09(8);
				unk_0xBD1C47D856010F09(9);
				unk_0xBD1C47D856010F09(6);
				unk_0xC9621A9AD282CC14(0, 140, 1);
				unk_0xC9621A9AD282CC14(0, 141, 1);
				unk_0xC9621A9AD282CC14(0, 142, 1);
				if (unk_0xD887E21676314450(2, 215) || unk_0x42F812C5F1AA300A(2, 200))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xB922891BFD232C45(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, iVar0);
	unk_0x7A1F4BBECE23C9E3(fVar9, fVar10);
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0x45A34FA87FBE9599(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x2DA8A432EC3C3D33() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x7A1F4BBECE23C9E3(fVar20, fVar21);
				unk_0x41D772AFFBD36843(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x41D772AFFBD36843(0);
			}
			unk_0xD1F2C9FF58856AEC(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar21);
			unk_0x41D772AFFBD36843(2);
			unk_0xD1F2C9FF58856AEC(1f, 0.4f);
			unk_0xAC1B647E90E8412A(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar22);
			unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x0B8B91F21AE25854("PERCENTAGE");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x0B8B91F21AE25854("FO_TWO_NUM");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x96577CAA1D1E72DB(uParam0->f_555);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x0B8B91F21AE25854("MTPHPER_XPNO");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x0B8B91F21AE25854("ESDOLLA");
					unk_0xCA44A68ABB26D497(uParam0->f_554, 1);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_37((2f * 2f))), 0);
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
						unk_0xB922891BFD232C45(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xB922891BFD232C45(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xB922891BFD232C45(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_37(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x1638116285563DAD(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAC1B647E90E8412A(iParam3);
	unk_0x4E250FE9E4D8720F(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0x0B8B91F21AE25854("STRING");
		unk_0x50B3C23D0902259F(sParam0);
	}
	else
	{
		unk_0x0B8B91F21AE25854(sParam0);
	}
	unk_0x7E43DE6F9866B44B(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar16, func_21(iParam0, bParam1), 64);
	if (unk_0x50B7853132D8438E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xD9151D5BCEE2689C(&iVar32, &iVar33);
			fVar35 = unk_0x5E61619C36D9095B(0);
			if (func_20())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_20())
			{
				fVar34 = 1f;
			}
			if (unk_0x7832F791572D5809(joaat("director_mode")) > 0)
			{
				unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xB9E4A5FCB2BE22B7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_19(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_19(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x3CCF948E5BFC63FE() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
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
	
	unk_0xD9151D5BCEE2689C(&iVar0, &iVar1);
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
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_23(unk_0x3D35F9864E4640B1()) };
			if (unk_0xFCA40B20F5AC75B0(&Var19, &uVar3))
			{
				return func_22(&uVar3);
			}
		}
		else
		{
			return func_22(&(Global_17290.f_6719[iParam0 /*16*/]));
		}
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
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
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

struct<13> func_23(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_23(unk_0x3D35F9864E4640B1()) };
			unk_0xFCA40B20F5AC75B0(&Var16, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iParam5);
	unk_0x7A1F4BBECE23C9E3(fParam3, fParam4);
	unk_0x41D772AFFBD36843(1);
	unk_0xD1F2C9FF58856AEC(1f, func_27(14f));
	unk_0xAC1B647E90E8412A(0);
	unk_0x4E250FE9E4D8720F(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0x0B8B91F21AE25854("STRING");
		unk_0x50B3C23D0902259F(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x0B8B91F21AE25854(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x96577CAA1D1E72DB(uParam0->f_489[iParam1]);
		}
	}
	unk_0x7E43DE6F9866B44B(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x41D772AFFBD36843(1);
	}
	else
	{
		unk_0x41D772AFFBD36843(2);
	}
	unk_0xD1F2C9FF58856AEC(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xAC1B647E90E8412A(0);
	unk_0x4E250FE9E4D8720F(0);
	func_33();
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
			unk_0xD1F2C9FF58856AEC(1f, func_27(18f));
			unk_0x4E250FE9E4D8720F(4);
			if (iParam0 < 0)
			{
				unk_0x54412EEBDB162F5C("ESMINDOLLA");
				unk_0xCA44A68ABB26D497((-1 * iParam0), 1);
				fVar1 = unk_0x51C2CBAC9E5D95A4(0);
			}
			else
			{
				unk_0x54412EEBDB162F5C("ESDOLLA");
				unk_0xCA44A68ABB26D497(iParam0, 1);
				fVar1 = unk_0x51C2CBAC9E5D95A4(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD1F2C9FF58856AEC(1f, func_27(14f));
			break;
	}
	unk_0xDBB8FCB00B701798(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x0B8B91F21AE25854("PERCENTAGE");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 1:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("FO_NUM");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 2:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("FO_TWO_NUM");
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xD1F2C9FF58856AEC(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x0B8B91F21AE25854("ESMINDOLLA");
				unk_0xCA44A68ABB26D497((-1 * iParam0), 1);
			}
			else
			{
				unk_0x0B8B91F21AE25854("ESDOLLA");
				unk_0xCA44A68ABB26D497(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x0B8B91F21AE25854(sParam4);
			break;
		
		case 7:
			unk_0x0B8B91F21AE25854("STRING");
			unk_0x50B3C23D0902259F(sParam4);
			break;
		
		case 8:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 14);
			break;
		
		case 9:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 6);
			break;
		
		case 10:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 2055);
			break;
		
		case 18:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 2055);
			break;
		
		case 12:
			unk_0x0B8B91F21AE25854("AHD_DIST");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 13:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 16:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x7E43DE6F9866B44B((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xD1F2C9FF58856AEC(1f, func_27(14f));
		}
		else
		{
			unk_0x7E43DE6F9866B44B(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_30(7, iVar0);
		Global_1356070.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = iParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = iParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0x54412EEBDB162F5C(sParam0);
	return (unk_0x51C2CBAC9E5D95A4(1) / 2f);
}

void func_33()
{
	unk_0x38C75B31337B3454(1);
	if (unk_0x229840854A80E0D9() || unk_0x5114FCEE2A997B95())
	{
		unk_0x38C75B31337B3454(7);
	}
	unk_0xED9541AF8190B3D1(0);
}

void func_34(char* sParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x20551D6D924ED04B())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_39(0))
		{
			func_413(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

int func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	
	if (unk_0xFF512A008EA368FF(2))
	{
		unk_0xC9621A9AD282CC14(2, 199, 1);
	}
	if (unk_0xED5FFF2E0422067E())
	{
		if (!iLocal_342)
		{
			if (func_201(uParam1, 0, &iLocal_343))
			{
				func_317(&(uParam1->f_666), 9, 0);
				iLocal_342 = 1;
			}
		}
	}
	if (iLocal_324)
	{
		if (unk_0xFF512A008EA368FF(2))
		{
			unk_0xB540BA8B3C93460F();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0xED5FFF2E0422067E())
			{
				uParam1->f_646 = func_192(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_317(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_115(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_111(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xD887E21676314450(2, 202))
				{
					uParam1->f_680 = 0;
					func_317(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xD887E21676314450(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xD887E21676314450(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_110(&(uParam1->f_72)))
			{
				if (!bLocal_344)
				{
					bLocal_344 = true;
					func_109(&(uParam1->f_509), 0, 0, 1, 1);
					func_108(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_108(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_108(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_108(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_105(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_98(uParam1, 0, 0, iLocal_342);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0x00BF23259C14645D(uLocal_351) && unk_0xB69F54D50B0A81C6(uLocal_351) >= 0.995f) || !unk_0x00BF23259C14645D(uLocal_351))
		{
			bLocal_337 = true;
			if (unk_0x2A3EA4C0BCED85F2(uLocal_357))
			{
				unk_0x46B35AD2F641A4A3(uLocal_357, 0);
				if (!unk_0x8682D8A6269E52C9(uLocal_319[0]) && !unk_0x8682D8A6269E52C9(uLocal_319[1]))
				{
					unk_0x3000ECF14A659126(uLocal_319[0]);
					unk_0x3000ECF14A659126(uLocal_319[1]);
					unk_0x7E54A33202605E52(uLocal_319[0], 0, 0);
					unk_0x7E54A33202605E52(uLocal_319[1], 0, 0);
				}
			}
			func_97();
		}
		if (func_409(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_335)
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
					func_225(&uLocal_319, iVar2);
				}
				else
				{
					func_224(&uLocal_319);
				}
				iLocal_335 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x8C361F37C04084F4(1);
			unk_0xB3E27A9E412BBDF8(func_400(3));
			if (!unk_0x8682D8A6269E52C9(uLocal_319[0]) && !unk_0x8682D8A6269E52C9(uLocal_319[1]))
			{
				unk_0xCFA3B07B6CEEF62C(uLocal_319[0]);
				unk_0xCFA3B07B6CEEF62C(uLocal_319[1]);
			}
			func_96(uParam3);
			if (bParam4)
			{
				func_329(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_407(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_335 = 0;
			iLocal_333 = 0;
			bLocal_337 = false;
			func_93();
			iLocal_342 = 0;
			iLocal_313 = 0;
			uParam1->f_680 = 0;
			iLocal_343 = 0;
			bLocal_344 = false;
			func_85(&(uParam1->f_72));
			func_443();
		}
		else if (iVar0 == 2)
		{
			func_84(uParam3);
			unk_0xB3E27A9E412BBDF8(func_400(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_52(func_80(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x27FC4121D73AF604();
			*uParam0 = 13;
		}
		else if (((unk_0xD887E21676314450(0, 234) || unk_0xD887E21676314450(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_323)
			{
				Var3 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_51(Var3, 0, iLocal_323);
				iLocal_323 = 0;
			}
			else if (unk_0xD887E21676314450(2, 190))
			{
				iLocal_346++;
				if (iLocal_346 >= uParam0->f_436)
				{
					iLocal_346 = 0;
				}
				Var3 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_49(Var3);
			}
			else if (unk_0xD887E21676314450(2, 189))
			{
				iLocal_346 = (iLocal_346 - 1);
				if (iLocal_346 < 0)
				{
					iLocal_346 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_49(Var3);
			}
		}
		else if (((unk_0xD887E21676314450(0, 211) || unk_0x42F812C5F1AA300A(0, 211)) && bVar1) && (iLocal_342 || !unk_0xED5FFF2E0422067E()))
		{
			uParam1->f_680 = 1;
			func_109(&(uParam1->f_509), 0, 0, 1, 1);
			func_108(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_108(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_108(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_344)
			{
				func_108(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_105(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x8C361F37C04084F4(1);
		unk_0x27FC4121D73AF604();
		func_45(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0x5E61619C36D9095B(1);
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
		iVar13 = func_226();
		uLocal_351 = unk_0x87070FAB863D4019(Var7, Var10, 2);
		uLocal_357 = unk_0xAC08B32D1D8EFE97("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xA68B8DF39003C10C(uLocal_357, uLocal_351, sLocal_431[iVar13], "mini@dartsoutro");
		unk_0x55CC07D5416539C8(uLocal_357, 1);
		unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
		if (!unk_0x8682D8A6269E52C9(uLocal_319[0]) && !unk_0x8682D8A6269E52C9(uLocal_319[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsoutro", sLocal_423[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsoutro", sLocal_427[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xBE0E7D38FE7C495C(unk_0x0031992CA618A445(), sLocal_418, sLocal_419[unk_0x3AF262D7332EEDF5(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5C774A8BEBE5BD26(uLocal_319[1], uLocal_351, "mini@dartsoutro", sLocal_423[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x5C774A8BEBE5BD26(uLocal_319[0], uLocal_351, "mini@dartsoutro", sLocal_427[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xBE0E7D38FE7C495C(uLocal_319[1], sLocal_417, sLocal_419[unk_0x3AF262D7332EEDF5(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_337 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x31CD6E9F83C10233();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_230(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_229(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((unk_0x31CD6E9F83C10233() - uParam1->f_671) > 400 && func_41(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x18F1BFAF88AC511B(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_324 = 1;
	}
}

int func_41(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_44(uParam0);
	func_43(uParam0);
	if (unk_0xB3404E397FF56B3B(&(uParam0->f_550), "SPR_RESULT") || (unk_0xB3404E397FF56B3B(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x59B2F61C9D01132B("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x59B2F61C9D01132B("CommonMenu", 0);
		unk_0x59B2F61C9D01132B("MPLeaderboard", 0);
		unk_0x59B2F61C9D01132B("MPHud", 0);
		uParam0->f_1 = unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xA429A9A606DF2BC3("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x77FA56883245AD26(uParam0->f_1) || !unk_0xB56F0E1C89B9E069("CommonMenu")) || !unk_0xB56F0E1C89B9E069("MPLeaderboard")) || !unk_0xB56F0E1C89B9E069("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x77FA56883245AD26(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x77FA56883245AD26(uParam0->f_1) || !unk_0xB56F0E1C89B9E069("CommonMenu")) || !unk_0xB56F0E1C89B9E069("MPLeaderboard")) || !unk_0xB56F0E1C89B9E069("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x77FA56883245AD26(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_42(uParam0);
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
	Global_71046 = 1;
	return 1;
}

void func_42(var uParam0)
{
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "CLEAR_ALL");
	unk_0x1C703A54AB4B12F6();
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xE8240315678FDE8E(true);
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(2);
	func_13(unk_0xE344F89A3A395F9C(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(1);
	func_13(unk_0xE344F89A3A395F9C(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(0);
	func_13(unk_0xE344F89A3A395F9C(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x1C703A54AB4B12F6();
}

void func_43(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x54412EEBDB162F5C("STRING");
			unk_0x50B3C23D0902259F(&(uParam0->f_13));
			fVar0 = unk_0x51C2CBAC9E5D95A4(1);
		}
		else
		{
			unk_0x54412EEBDB162F5C(&(uParam0->f_13));
			fVar0 = unk_0x51C2CBAC9E5D95A4(1);
		}
	}
	else
	{
		unk_0x54412EEBDB162F5C("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x96577CAA1D1E72DB(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x7C8A7ECFBAD2C8C4(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x50B3C23D0902259F(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x51C2CBAC9E5D95A4(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_44(var uParam0)
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

void func_45(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_48(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_48(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_47(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_47(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_47(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_47(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_46(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_47(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
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

void func_48(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_49(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_50(Param0) };
	if (bLocal_133)
	{
		unk_0x9DCCF01CC7010892(uLocal_131, Var0);
		unk_0xD0E2527DD961F86C(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		unk_0x9DCCF01CC7010892(uLocal_130, Var0);
		unk_0xD0E2527DD961F86C(uLocal_130, uLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_50(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_51(struct<3> Param0, bool bParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0 = { func_50(Param0) };
	if (bParam3)
	{
		unk_0x9DCCF01CC7010892(uLocal_130, Var0);
		unk_0xD0E2527DD961F86C(uLocal_130, uLocal_129, 1500, 1, 1);
		unk_0x55CC07D5416539C8(uLocal_129, 0);
		unk_0x9DCCF01CC7010892(uLocal_131, Var0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		unk_0x9DCCF01CC7010892(uLocal_130, Var0);
		unk_0xD0E2527DD961F86C(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			unk_0xD0E2527DD961F86C(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			unk_0xD0E2527DD961F86C(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		unk_0x55CC07D5416539C8(uLocal_130, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x2553A7EB99AABF55(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE931A869061F7BD2(iVar1, iVar0, 1);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_79();
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
					func_78(99, 1);
					func_77(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_77(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_77(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_61(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_60(5))
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
							func_77(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_77(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_77(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_60(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_77(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_77(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_77(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_77(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_77(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_77(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_77(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_77(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_77(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_77(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_77(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_77(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_77(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_77(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_77(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_60(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_77(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_77(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_77(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_77(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_77(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_77(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_59(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_78(95, iParam3);
					break;
				
				case 1:
					func_78(97, iParam3);
					break;
				
				case 2:
					func_78(96, iParam3);
					break;
			}
			func_78(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_77(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_77(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_77(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
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
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_55(iParam0);
	if (Global_35813 == 15)
	{
		func_54(0);
	}
	return 1;
}

void func_54(bool bParam0)
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
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_58() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_58() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_57(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)
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

int func_58()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_59(int iParam0)
{
	func_78(93, iParam0);
	func_78(29, iParam0);
	func_78(30, iParam0);
}

bool func_60(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_58() /*11035*/].f_7550.f_10, iParam0);
}

int func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_76(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_62(27, 1);
	return 1;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	if (func_75(14) && !func_74(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_73(&Global_2608378))
	{
		if (func_71(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
	func_69(uParam0, (Global_2608377 - 0.5f));
}

void func_68(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_69(var uParam0, float fParam1)
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

float func_70(var uParam0)
{
	return uParam0->f_72;
}

bool func_71(var uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)
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

bool func_73(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_74(int iParam0)
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

bool func_75(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_76(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_79()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_80()
{
	func_81();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_81()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_83(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_485(unk_0x0031992CA618A445());
			if (func_82(iVar0) && (!func_75(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_82(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_82(int iParam0)
{
	return iParam0 < 3;
}

int func_83(int iParam0)
{
	if (func_82(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_84(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_85(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_91(uParam0);
		func_90(uParam0);
		func_89(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_87();
	}
	if (unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
	{
		unk_0xB3E27A9E412BBDF8("LEADERBOARD_SCENE");
	}
	if (unk_0xE096BC82D913B3DB())
	{
		func_86(&(Global_1840922.f_49));
	}
	Global_2501777.f_3924 = 0;
}

void func_86(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_87()
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
	func_88(&(Global_1835390.f_2780));
	func_86(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_86(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_86(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_88(var uParam0)
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

void func_89(var uParam0)
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
	func_86(&(Global_1835390.f_2830));
}

void func_90(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_86(&(uParam0->f_246.f_3));
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

void func_91(var uParam0)
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

void func_92(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_86(&(Global_1835008.f_1));
	unk_0x6D26D20288D66A19(*uParam2, uParam2->f_1, -1);
}

void func_93()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_95(&(Global_1835013.f_73));
	func_95(&(Global_1835013.f_142));
	func_95(&(Global_1835013.f_211));
	func_95(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_94(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_94(var uParam0)
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

void func_95(var uParam0)
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

void func_96(var uParam0)
{
	func_44(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_97()
{
	unk_0x55CC07D5416539C8(uLocal_126, 1);
}

int func_98(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_109(&(uParam0->f_509), 0, 0, 1, 1);
			func_108(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_108(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_108(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0xED5FFF2E0422067E())
			{
				func_108(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_105(&(uParam0->f_509), 1);
			func_317(&(uParam0->f_666), 8, 0);
			func_317(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_101(func_104(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_103(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_101(func_104(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_103(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_101(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_396(&(uParam0->f_57), 0, 0);
			}
			func_111(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x957E53BB191CB24D())
		{
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_671) > 900)
			{
				if (unk_0x9148803485DEDF45(2, 216))
				{
					unk_0x18F1BFAF88AC511B(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_317(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xD887E21676314450(2, 215))
				{
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_100();
					func_99();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0xBF946CEEECD8C935(2, 201))
		{
			return 2;
		}
		else if (unk_0xBF946CEEECD8C935(2, 202))
		{
			func_317(&(uParam0->f_666), 9, 0);
			func_317(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_99()
{
	if (Global_2434915.f_2484[0 /*76*/].f_2 != 0)
	{
		Global_2434915.f_2484[0 /*76*/].f_2 = 5;
	}
}

void func_100()
{
	Global_25366 = 1;
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_102(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_30(3, iVar0);
		Global_1356070.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_2623.f_183[iVar0] = iParam3;
		Global_1356070.f_2623.f_172[iVar0] = iParam2;
		Global_1356070.f_2623.f_205[iVar0] = iParam4;
		Global_1356070.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_2623.f_420[iVar0] = iParam7;
		Global_1356070.f_2623.f_453[iVar0] = iParam8;
		Global_1356070.f_2623.f_431[iVar0] = iParam9;
		Global_1356070.f_2623.f_442[iVar0] = iParam10;
		Global_1356070.f_2623.f_464[iVar0] = iParam11;
	}
}

int func_102(var uParam0)
{
	if (unk_0x996B09F758C57FBE(uParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(uParam0, "") || unk_0xB3404E397FF56B3B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_103(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_104(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(&(uParam0->f_1), 1024);
	}
	else
	{
		func_106(&(uParam0->f_1), 1024);
	}
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_108(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_109(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA429A9A606DF2BC3("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_107(&(uParam0->f_1), 32);
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		func_107(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xA51E81D5CF49E5C7(*uParam0, 1);
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (bParam3)
		{
			func_107(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_107(&(uParam0->f_1), 8192);
	}
}

int func_110(var uParam0)
{
	if ((unk_0x2A3398C6222EB190(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_111(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146()) || unk_0x5114FCEE2A997B95()) || unk_0xC19E9068E7E4F6B0())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_114(uParam0))
	{
		return;
	}
	unk_0x2745EC8E79BD57E0();
	unk_0x38C75B31337B3454(iParam2);
	if (!func_113(uParam0->f_1, 256) || (func_113(uParam0->f_1, 8192) && unk_0xDE25F26B6B16CF7A(2)))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_CLEAR_SPACE");
		unk_0x90495002CD46BD88(fParam1);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_MAX_WIDTH");
		unk_0x90495002CD46BD88(fParam5);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1C703A54AB4B12F6();
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(func_113(uParam0->f_1, 4096));
			unk_0x1C703A54AB4B12F6();
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
					bVar4 = unk_0xFF512A008EA368FF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xFF512A008EA368FF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x32F9127910F63DFA(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xE344F89A3A395F9C(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x295E4023D39A7295(iVar0, iVar1, bVar2);
						}
						if (!unk_0x0BD3CCFB6C6CFA91(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x0BD3CCFB6C6CFA91(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (func_113(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xE8240315678FDE8E(true);
								unk_0x32F9127910F63DFA(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xE8240315678FDE8E(false);
								unk_0x32F9127910F63DFA(-1);
							}
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar6++;
		}
		fVar8 = func_112(bParam4, func_112(func_113(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEBD23F68B1A617FC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x90495002CD46BD88(fVar8);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(80f);
		unk_0x1C703A54AB4B12F6();
		func_107(&(uParam0->f_1), 256);
		func_106(&(uParam0->f_1), 128);
	}
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 0, 0);
}

float func_112(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			func_107(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_115(var uParam0, var uParam1)
{
	func_116(uParam1, uParam0);
}

void func_116(var uParam0, var uParam1)
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
	
	func_191(&(Global_1840922.f_49), 1, 0);
	unk_0x390920286F8D4571();
	func_190();
	func_38(0);
	unk_0x7CDDB154852DA508();
	func_188();
	unk_0xBD1C47D856010F09(10);
	func_187(1);
	func_186(1);
	if (!func_183())
	{
		if (!unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
		{
			unk_0xFD69BDF108B32E5B("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x2A3398C6222EB190(uParam1->f_42, 3))
	{
		*uParam0 = func_182();
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 3);
	}
	Var32 = { func_23(unk_0x3D35F9864E4640B1()) };
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0xED5FFF2E0422067E())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xD69069794497409F())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
			{
				unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x1C703A54AB4B12F6();
				func_181(*uParam0, Global_1835390.f_2780);
				if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_180(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_178(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
				func_177(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
				func_177(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
				func_177(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
				func_176(*uParam0);
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
				unk_0x8C361F37C04084F4(1);
			}
			else
			{
				func_176(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_141(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 0))
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_181(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_180(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_178(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 0);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
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
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_140(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_86(&(Global_1835390.f_2823));
				}
				else if (func_138(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_177(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_140(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_86(&(Global_1835390.f_2823));
				}
				func_176(*uParam0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 0);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_181(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_180(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_179(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_178(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x2A3398C6222EB190(uParam1->f_42, 6))
					{
						func_89(&Global_1839721);
						func_134(uParam1, &Global_1839721);
						func_133(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_180(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
									func_177(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_180(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_177(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_177(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
									if (!unk_0x4FB79719141588E9())
									{
										bVar63 = true;
									}
									else if (!unk_0x0B26CCD382388F16())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_180(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_177(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_177(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_132(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_180(uParam1->f_44))
								{
									unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xB3404E397FF56B3B(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_131(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xCD7E92DE2BFA0B0D(&iVar31, 3);
											}
										}
									}
									if (func_180(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0x0BD3CCFB6C6CFA91(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xB3404E397FF56B3B(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_130(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_130(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_125(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_125(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_122(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_122(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_121();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 2);
											unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_120(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
						func_177(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
						func_177(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
						func_177(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
					func_176(*uParam0);
					unk_0x8C361F37C04084F4(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_120(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_176(*uParam0);
					func_117(uParam0, uParam1);
				}
			}
		}
	}
}

void func_117(var uParam0, var uParam1)
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
	if (unk_0xFF512A008EA368FF(2))
	{
		unk_0xB540BA8B3C93460F();
		unk_0x8662FAB20C4C3CFB(2, 239);
		unk_0x8662FAB20C4C3CFB(2, 240);
		unk_0x8662FAB20C4C3CFB(2, 237);
		unk_0x8662FAB20C4C3CFB(2, 238);
		unk_0xC9621A9AD282CC14(2, 200, 1);
		if (unk_0x59ABF4F2C485FC38(2, 241))
		{
			unk_0xDE3AEA05A09ABFFC(2, 188, 1f);
		}
		if (unk_0x59ABF4F2C485FC38(2, 242))
		{
			unk_0xDE3AEA05A09ABFFC(2, 187, 1f);
		}
		if (unk_0x2F7BBD8CD73835A3(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xDE3AEA05A09ABFFC(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xFF512A008EA368FF(2))
	{
		func_119(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 0))
		{
			if ((unk_0x9148803485DEDF45(2, 188) || unk_0x59ABF4F2C485FC38(2, 188)) || iVar6 < -100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 0);
				func_86(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_118(uParam1, 188))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 0);
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 1))
		{
			if ((unk_0x9148803485DEDF45(2, 187) || unk_0x59ABF4F2C485FC38(2, 187)) || iVar6 > 100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 1);
				func_86(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_118(uParam1, 187))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 1);
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
	if (!unk_0x2A3398C6222EB190(uParam1->f_246, 3))
	{
		if ((unk_0x9148803485DEDF45(2, 204) || unk_0x42F812C5F1AA300A(2, 204)) || unk_0xD887E21676314450(2, 237))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 3);
			func_86(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_118(uParam1, 204))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_120(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_120(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
		}
		if (func_132(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_246, 2))
			{
				if (unk_0x9148803485DEDF45(2, 217) || unk_0x42F812C5F1AA300A(2, 217))
				{
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 2);
						unk_0xE6BB194246178292(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x9148803485DEDF45(2, 217))
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_118(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_119(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_138(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) || func_138(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 221) * 127f));
		}
	}
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT_STATE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x1C703A54AB4B12F6();
}

void func_121()
{
	unk_0x1C703A54AB4B12F6();
}

void func_122(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(unk_0xF34EE736CF047844(fParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_124(fParam44);
					}
					else
					{
						fParam44 = func_123(fParam44);
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_123(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_124(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_125(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(-iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x41BB80C0DBFA1AA4(iParam44))
				{
					unk_0x9BC6C9E77AAC792E("SCLB_VEH_CUST");
					unk_0x7C8A7ECFBAD2C8C4(unk_0x0C9AAE7EC92AB471(iParam44));
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else if (unk_0x41BB80C0DBFA1AA4(iParam44))
			{
				unk_0x9BC6C9E77AAC792E(unk_0x0C9AAE7EC92AB471(iParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 8:
			if (func_129(iParam44) != 0)
			{
				unk_0x9BC6C9E77AAC792E(func_126(func_129(iParam44), 0));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_124(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_123(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_126(int iParam0, bool bParam1)
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
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
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
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
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
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		default:
			if (func_128(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_127(&(Var0.f_31));
				}
				else
				{
					return func_127(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_127(var uParam0)
{
	return uParam0;
}

int func_128(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5AF51568FFC04EE8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4BEBDDD8F31C07D6(iVar0, uParam1))
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

int func_129(int iParam0)
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

void func_130(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (iParam3 > 0)
	{
		unk_0x9BC6C9E77AAC792E("NUMBER");
		unk_0x96577CAA1D1E72DB(iParam3);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x8E394933209D820A(cParam4);
	unk_0x8E394933209D820A(uParam5);
}

int func_131(var uParam0, var uParam1)
{
	if (!func_132(*uParam0))
	{
		return 0;
	}
	if (!func_132(*uParam1))
	{
		return 0;
	}
	if (unk_0xD996CD68BF90147F(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

void func_133(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
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

void func_134(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_137(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_137(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_137(uParam1, iVar3, &uVar2, 2))
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
		func_135(uParam1);
	}
}

void func_135(var uParam0)
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
	Var3 = { func_23(unk_0x3D35F9864E4640B1()) };
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar16 = unk_0x02015DE32A0ACA07(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_136(&Global_1839591);
				iVar2 = 0;
				unk_0x59DA7685088AF59D(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_131(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
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

void func_136(var uParam0)
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

int func_137(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0x3D35F9864E4640B1()) };
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

int func_138(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_139(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_139(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

void func_140(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xCD7E92DE2BFA0B0D(&iParam2, 7);
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x9BC6C9E77AAC792E(sParam3);
	unk_0x48B999C33828FA82();
	unk_0x1C703A54AB4B12F6();
}

int func_141(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_175(&(Global_1835390.f_2827)))
		{
			func_139(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_138(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
	{
		unk_0xD804ACF2A7171150(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 4))
	{
		func_174(uParam0);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_172(uParam0))
	{
		return 0;
	}
	if (!func_170(uParam0))
	{
		return 0;
	}
	if (!func_157(uParam0))
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		func_89(&Global_1839721);
		func_134(uParam0, &Global_1839721);
		func_133(uParam0, &Global_1839721);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 6);
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 7))
	{
		if (!func_175(&(Global_1835390.f_2830)))
		{
			func_139(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_138(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
		}
		if (func_154(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_151(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_146(&Global_1839721))
		{
			func_142(&Global_1839721);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
			func_142(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_145(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_144(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_136(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xB3404E397FF56B3B(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_132((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1839591.f_61), 0);
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
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
			unk_0xC29C637A32074B95(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_143(unk_0x3D35F9864E4640B1()) };
}

Vector3 func_143(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iParam1]))
		{
			unk_0x8B76A81F41DE7F64(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(iParam0))
		{
			unk_0x8B76A81F41DE7F64(iParam0);
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

int func_145(int iParam0)
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
		else if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x3A86D36AC82C3C8E(Global_1838575.f_81[iVar0]);
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

int func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_150(uParam0);
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_132((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_149(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_147(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_132((uParam0[iVar0 /*100*/])->f_32) && func_132(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0xD996CD68BF90147F(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_147(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x4A4751AFCB4615B0())
			{
			}
			else
			{
				unk_0xC5AAB53287726EAB();
				unk_0x0619630953F0E013(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x4A4751AFCB4615B0())
			{
				if (unk_0x3A5F88AE9F3EB441())
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
				if (unk_0x05EA1572EDF5EFC7(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_148(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x4A4751AFCB4615B0())
			{
				unk_0x6F54087FD4584338();
			}
			else
			{
				unk_0xC5AAB53287726EAB();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_148(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

int func_149(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_132(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xD996CD68BF90147F(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_150(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_94(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x4A4751AFCB4615B0())
		{
			unk_0xC5AAB53287726EAB();
		}
	}
	if (unk_0x4A4751AFCB4615B0())
	{
		unk_0x6F54087FD4584338();
	}
	Global_1841018.f_206 = 0;
}

int func_151(var uParam0)
{
	int iVar0;
	
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (!func_153(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_152(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_152(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_132(*uParam1))
			{
				if (!unk_0x7B30C254A284990A(uParam1))
				{
					if (unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x8BCF3CDD10AB0F3C())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(uParam1))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x9D3EA2635512FD6B())
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
				func_94(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_132((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x3022B3A95EDAABC0(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_132((uParam0[iVar1 /*100*/])->f_32))
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

int func_154(var uParam0)
{
	int iVar0;
	
	if (unk_0x9D3EA2635512FD6B())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_156(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_155(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_132(Var0))
			{
				if (!unk_0x7B30C254A284990A(&Var0))
				{
					if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(&Var0))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_156(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x9D3EA2635512FD6B())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_132(Var1[0 /*13*/]))
			{
				if (!unk_0x7B30C254A284990A(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x3022B3A95EDAABC0(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14(*uParam4, uParam3, 1);
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

int func_157(var uParam0)
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
	Var116 = { func_23(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x1AE803DF5F9B30C9())
			{
				if (unk_0xF3F1AD16A136B115(&Var116))
				{
					if (unk_0x7838EB8661A32D68(&(uParam0->f_7), 35, &Var116))
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
			if (func_168(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_169(), 0, 0, 0))
			{
				func_167(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_169())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_131(&Var0, &Var116) || func_131(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_166(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_169() && iVar109 == 0)
								{
									func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_169() && (func_131(&Var0, &Var116) || func_131(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_131(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_164(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_180(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_169())
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
						func_166(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_169() && iVar109 == iVar111)
								{
									if (!func_131(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_169() && (func_131(&Var0, &Var116) || func_131(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_132(Var0) && !func_131(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_131(&Var0, &Var116))
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
										if (func_164(uParam0->f_44))
										{
											iVar108 = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_180(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_166(&Var0);
							iVar111++;
						}
						unk_0xFD293D325337DBD7();
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_169())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0xFD293D325337DBD7();
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
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
			if (func_159(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_167(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_169() && (func_131(&Var0, &Var116) || func_131(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_164(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_180(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
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
									if (func_164(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_180(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_166(&Var0);
							iVar106++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xFD293D325337DBD7();
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_169())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_158(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_169() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_169())
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

int func_159(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_162() && !func_161())
			{
				func_160(*uParam2);
				if (unk_0xC651B7C97F161BBE(uParam2, iParam3, iParam4))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

void func_160(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_191(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_161()
{
	if (unk_0x957E53BB191CB24D() && !func_183())
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (unk_0x50EECC0E29B921C3() || Global_1835008)
	{
		func_163();
		return 1;
	}
	return 0;
}

void func_163()
{
	if (func_138(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x6D26D20288D66A19(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_86(&(Global_1835008.f_1));
	}
}

int func_164(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_180(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
		sParam1->f_32 = { func_23(unk_0x3D35F9864E4640B1()) };
	}
	sParam1->f_59 = iParam2;
	if (func_164(uParam0->f_44))
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
		if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_166(var uParam0)
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

void func_167(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_168(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_162() && !func_161())
			{
				func_160(*uParam2);
				if (bParam5)
				{
					if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xEB8700D3E849D9FD(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xE64A80A161C007AD(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x97519B8E5ABDB709(uParam2, iParam3, uParam4))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

int func_169()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_170(var uParam0)
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
	Var114 = { func_23(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x87482CCFC1C6709F();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_169())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_171(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_167(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
					{
						if (func_169())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xC2F7B578646A3EC1(iVar110, &Var0);
									if (func_180(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_131(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_166(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_169() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xC2F7B578646A3EC1(0, &Var0);
							if (func_169() && (func_131(&Var0, &Var114) || func_131(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_132(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_131(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_164(uParam0->f_44))
								{
									iVar111 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_180(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_166(&Var0);
								unk_0xFD293D325337DBD7();
								func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_169())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_166(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_166(&Var0);
							unk_0xFD293D325337DBD7();
							func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_169())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_169())
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
							unk_0xC2F7B578646A3EC1(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_169() && iVar108 == iVar110)
								{
									if (!func_131(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_169() && (func_131(&Var0, &Var114) || func_131(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_132(Var0) && !func_131(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_131(&Var0, &Var114))
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
										if (func_164(uParam0->f_44))
										{
											iVar111 = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_180(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_166(&Var0);
							iVar110++;
						}
						unk_0xFD293D325337DBD7();
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_169())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_165(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_158(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_171(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_162() && !func_161())
			{
				func_160(*uParam2);
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

int func_172(var uParam0)
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
	Var0 = { func_23(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_173(uParam0->f_44))
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
			if (func_168(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_169(), 0, 0, 0))
			{
				func_167(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_169())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_131(&Var13, &Var0) || func_131(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_166(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_169() && iVar122 == 0)
								{
									func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_169() && (func_131(&Var13, &Var0) || func_131(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_131(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_164(uParam0->f_44))
									{
										iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_180(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_169())
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
						func_166(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_169() && iVar122 == iVar124)
								{
									if (!func_131(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_169() && (func_131(&Var13, &Var0) || func_131(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_132(Var13) && !func_131(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_131(&Var13, &Var0))
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
										if (func_164(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_180(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_166(&Var13);
							iVar124++;
						}
						unk_0xFD293D325337DBD7();
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_169())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0xFD293D325337DBD7();
						func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
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
			if (func_159(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_167(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar119, &Var13);
							if (func_169() && (func_131(&Var13, &Var0) || func_131(&Var13, &(Global_1835013.f_361))))
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
										if (func_164(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_180(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_164(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_180(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_166(&Var13);
							iVar119++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
					func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_169())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_165(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_158(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_173(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_174(var uParam0)
{
	int iVar0;
	
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar0 = unk_0x3A86D36AC82C3C8E(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam0->f_42), 5);
			func_144(Global_1835390.f_2826, -1);
		}
	}
}

bool func_175(var uParam0)
{
	return uParam0->f_1;
}

void func_176(var uParam0)
{
	if (unk_0x77FA56883245AD26(uParam0))
	{
		unk_0x4237E72FB80FD332(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_177(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0x2A3398C6222EB190(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
		{
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_23(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var53))
				{
					unk_0x7838EB8661A32D68(&Var1, 35, &Var53);
					if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
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
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(*iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (bVar52)
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xA9895403BC230880(&Var36);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x1C703A54AB4B12F6();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xCD7E92DE2BFA0B0D(&iVar66, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar66);
		if (!unk_0xE096BC82D913B3DB())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xD69069794497409F())
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
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0x48B999C33828FA82();
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 5))
		{
			if (unk_0x87482CCFC1C6709F() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 6))
		{
			if (unk_0x4FB79719141588E9())
			{
				if (unk_0x0B26CCD382388F16())
				{
					if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
					{
						if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_23(unk_0x3D35F9864E4640B1()) };
							if (unk_0xF3F1AD16A136B115(&Var67))
							{
								unk_0x7838EB8661A32D68(&Var1, 35, &Var67);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
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
		unk_0xCD7E92DE2BFA0B0D(&iVar80, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar80);
		if (bVar52)
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0xA9895403BC230880(&Var36);
			unk_0x48B999C33828FA82();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0x48B999C33828FA82();
		}
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
}

void func_178(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xEBD23F68B1A617FC(uParam0, "SET_TITLE");
	unk_0x9BC6C9E77AAC792E(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x9BC6C9E77AAC792E(uParam2[iVar0 /*6*/]);
		unk_0xCC5EB3A492FB7D4B();
		iVar0++;
	}
	unk_0x1C703A54AB4B12F6();
}

void func_179(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x9BC6C9E77AAC792E(sParam1);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		unk_0x7C8A7ECFBAD2C8C4(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam5);
	}
	unk_0xCC5EB3A492FB7D4B();
	unk_0x1C703A54AB4B12F6();
}

int func_180(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_181(var uParam0, int iParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_DISPLAY_TYPE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x1C703A54AB4B12F6();
}

var func_182()
{
	return unk_0xB1E69EFAB6CB45A3("SC_LEADERBOARD");
}

bool func_183()
{
	return func_184(unk_0x3D35F9864E4640B1());
}

int func_184(int iParam0)
{
	switch (func_185(iParam0))
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

int func_185(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189;
}

void func_186(int iParam0)
{
	Global_1315691 = iParam0;
}

void func_187(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

void func_188()
{
	func_190();
	func_189(4, -1);
	func_189(6, -1);
	func_189(7, -1);
	func_189(3, -1);
	func_189(1, -1);
	func_189(2, -1);
	func_189(11, -1);
	func_189(13, -1);
	func_189(14, -1);
	func_189(16, -1);
}

void func_189(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1354565.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1354565.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_190()
{
	Global_2501777.f_4489 = 0;
}

void func_191(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_192(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0xA83FFA3FA7711E6D() && Global_1840922.f_2 > 0)
	{
		func_86(&Global_1840922);
		func_86(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_200(0);
	}
	Global_1840922.f_2 = unk_0xA83FFA3FA7711E6D();
	iVar1 = -1;
	if (unk_0x43F4A6D2081CC5ED())
	{
		if (unk_0xA62421972698424D() == 0)
		{
			iVar1 = unk_0x0B6EBEB489CB4646();
		}
	}
	if ((unk_0x43F4A6D2081CC5ED() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_198() && unk_0xE096BC82D913B3DB()))
	{
		if (unk_0x4EB878E178DC1C9A())
		{
			func_195(&(Global_1840922.f_3), func_197(&(Global_1840922.f_3)));
			if (!unk_0x2A3398C6222EB190(*uParam0, 4))
			{
				unk_0xCD7E92DE2BFA0B0D(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_193(&(Global_1840922.f_3), 0);
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
			else if (!func_198())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x2A3398C6222EB190(*uParam0, 0))
			{
				if (!unk_0x9148803485DEDF45(2, 201))
				{
					unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
				}
			}
			else if (unk_0xBF946CEEECD8C935(2, 201))
			{
				func_86(&(Global_1840922.f_49));
				func_86(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_200(0);
				return 1;
			}
		}
	}
	else
	{
		func_195(&(Global_1840922.f_3), func_197(&(Global_1840922.f_3)));
		if ((func_175(&(Global_1840922.f_49)) && !func_138(&(Global_1840922.f_49), 2000, 1)) && !unk_0xE096BC82D913B3DB())
		{
			unk_0xCD7E92DE2BFA0B0D(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_193(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x2A3398C6222EB190(*uParam0, 3))
		{
			if (!unk_0x2A3398C6222EB190(*uParam0, 1))
			{
				unk_0x40FB16B5061B30EC(0);
				unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_193(&(Global_1840922.f_3), 0);
			}
		}
		if (func_175(&Global_1840922))
		{
			if (!func_138(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xE096BC82D913B3DB())
				{
					if (unk_0x1F580D23FDC2CC88())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						if (!unk_0x2A3398C6222EB190(*uParam0, 0))
						{
							if (!unk_0x9148803485DEDF45(2, 201))
							{
								unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
							}
						}
						else if (unk_0xBF946CEEECD8C935(2, 201))
						{
							func_86(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_200(0);
							return 1;
						}
					}
				}
				else
				{
					func_86(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_200(0);
					return 1;
				}
			}
			else if (unk_0x2A3398C6222EB190(*uParam0, 3))
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x2A3398C6222EB190(*uParam0, 0))
				{
					if (!unk_0x9148803485DEDF45(2, 201))
					{
						unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201))
				{
					func_86(&(Global_1840922.f_49));
					func_86(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_200(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x4E5CFAAEE4D157CF())
				{
					if (!unk_0x2A3398C6222EB190(*uParam0, 0))
					{
						if (!unk_0x9148803485DEDF45(2, 201))
						{
							unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
						}
					}
					else if (unk_0xBF946CEEECD8C935(2, 201))
					{
						func_86(&(Global_1840922.f_49));
						func_86(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_200(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_193(var uParam0, bool bParam1)
{
	func_194(uParam0);
	if (bParam1)
	{
		func_200(0);
	}
	uParam0->f_35 = 1;
}

void func_194(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_195(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_196(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0xC2D818A5754306C0(uParam0->f_33, 70);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_196(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_197(var uParam0)
{
	return uParam0->f_35;
}

int func_198()
{
	if (func_199())
	{
		return 0;
	}
	if (unk_0x04F2E3CF902D6F5D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_199()
{
	return Global_2455609;
}

void func_200(bool bParam0)
{
	unk_0xFE185FFD730A31A1();
	if (bParam0)
	{
		unk_0x794851316BEA60A1();
	}
}

int func_201(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_313)
	{
		func_213(&(uParam0->f_72), bParam1);
		iLocal_313 = 1;
		func_317(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_210(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_202(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_202(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_180(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_23(unk_0x3D35F9864E4640B1()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_209(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_167(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_208(uParam0->f_44, iVar188))
					{
						if (func_207(uParam0->f_44, 4, iVar188))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_132(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_208(uParam0->f_44, iVar188))
								{
									if (func_207(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0xF8062BE67BAF24C8(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0xB5BFE902D3C42807(0, iVar188);
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
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_206();
				if (Global_1835013.f_4)
				{
					if (func_205(uParam0->f_44))
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
			unk_0x092AA112D47FE733(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x27CA09C6DFAB1E79() && func_204())
			{
				if (func_203())
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
			if (func_205(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x092AA112D47FE733(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_168(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_167(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (unk_0xB3404E397FF56B3B(&(Var0.f_13), ""))
						{
							Global_979575.f_1 = -1;
						}
						else
						{
							Global_979575.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979575.f_1 = -1;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_979575.f_1 = -1;
				}
				Global_1835013 = 999;
				func_92(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_203()
{
	return unk_0x2A3398C6222EB190(Global_970998.f_8, 1);
}

var func_204()
{
	return Global_2453457.f_3;
}

int func_205(int iParam0)
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

void func_206()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_207(int iParam0, int iParam1, int iParam2)
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
	iVar0 = unk_0xDB2AB5CF39682F77(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (unk_0x73B3A7F61ADF183E(iParam0, 4, iParam1) == 156)
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

int func_209(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_162() && !func_161())
			{
				func_160(*uParam2);
				if (unk_0x3BEA079A30B0761A(uParam2, uParam3))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

void func_210(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0xED5FFF2E0422067E())
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
	if (func_212(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_211(190, 131, 0, 0f, 1);
		func_211(190, 103, iLocal_151[1], 0f, 0);
		func_211(190, 99, iLocal_151[2], 0f, 0);
		func_211(190, 109, iLocal_151[3], 0f, 0);
		func_211(190, 106, iLocal_151[5], 0f, 0);
		func_211(190, 2, iLocal_151[10], 0f, 0);
		func_211(190, 107, iLocal_151[8], 0f, 0);
		func_211(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_211(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x2AFDA789DC65D05E(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_207(iParam0, 4, iVar1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x73B3A7F61ADF183E(iParam0, 4, iVar1))
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
		unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_212(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xE096BC82D913B3DB())
	{
	}
	if ((!unk_0x1E8C067EDC3AD10F() && (unk_0xF60A5AF58996CED2() || !unk_0xFEF369FFF9545F0F())) && unk_0x74EEAA6B0390949D())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x1AE803DF5F9B30C9())
			{
				Var69 = { func_23(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var69))
				{
					if (unk_0x7838EB8661A32D68(&uVar82, 35, &Var69))
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
			if (unk_0x27CA09C6DFAB1E79() && Global_2453457.f_3)
			{
				unk_0x1FF7CB24A8A7BA22(&Var0, &(Global_1767185.f_10));
			}
			else
			{
				unk_0xC7DC4053FD4EB147(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x1E8C067EDC3AD10F())
	{
	}
	if (!unk_0xF60A5AF58996CED2())
	{
	}
	if (unk_0xFEF369FFF9545F0F())
	{
	}
	if (!unk_0x74EEAA6B0390949D())
	{
	}
	return 0;
}

void func_213(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_214(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_214(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
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
				if (iParam5 > 0 && !func_221())
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
				if (iParam5 > 0 && !func_221())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_221())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_221())
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
				if (iParam5 > 0 && !func_221())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_221())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_221())
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
					unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_221())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_221())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_221())
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
				if (iParam5 > 0 && !func_221())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_221())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_221())
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
				if (iParam5 > 0 && !func_221())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_221())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_220(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1641087.f_54 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_219(Global_1641087.f_116067) || func_216(Global_1641087.f_116067))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_215(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_215(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_180(iParam8))
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
	return unk_0x50B7853132D8438E(&cVar0);
}

var func_216(int iParam0)
{
	return (func_218(iParam0) || func_217(iParam0));
}

bool func_217(int iParam0)
{
	return iParam0 == 44;
}

bool func_218(int iParam0)
{
	return iParam0 == 45;
}

bool func_219(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_220(int iParam0)
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

int func_221()
{
	if (((((((Global_1641087.f_46375 == 1 || Global_1641087.f_46375 == 3) || Global_1641087.f_46375 == 5) || Global_1641087.f_46375 == 7) || Global_1641087.f_46375 == 8) || Global_1641087.f_46375 == 9) || Global_1641087.f_46375 == 11) || Global_1641087.f_46375 == 13)
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0, int iParam1)
{
	if (!func_406(&(uParam0->f_2)))
	{
		func_420(&(uParam0->f_2));
	}
	unk_0xBD1C47D856010F09(14);
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xD887E21676314450(2, 201) || uParam0->f_8)
		{
			if (!func_406(&(uParam0->f_5)))
			{
				func_420(&(uParam0->f_5));
				func_223(uParam0, 1051260355);
			}
		}
		if (func_406(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_407(&(uParam0->f_5));
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
		if (!func_406(&(uParam0->f_5)))
		{
			func_420(&(uParam0->f_5));
			func_223(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_407(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_223(var uParam0, float fParam1)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "SHARD_ANIM_OUT");
	unk_0x32F9127910F63DFA(uParam0->f_9);
	unk_0x90495002CD46BD88(fParam1);
	unk_0x1C703A54AB4B12F6();
}

void func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x8682D8A6269E52C9((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_225(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x8682D8A6269E52C9((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_226()
{
	int iVar0;
	
	if (!bLocal_338)
	{
		iVar0 = (unk_0x3AF262D7332EEDF5(0, 65535) % 3);
	}
	else
	{
		iLocal_352++;
		iVar0 = (iLocal_352 % 2);
	}
	return iVar0;
}

void func_227(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_228(iParam4);
	if (iParam4 != 5)
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "RESET_MOVIE");
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(*uParam0, sVar0);
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	func_12(sParam2);
	unk_0x1C703A54AB4B12F6();
	func_420(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_228(int iParam0)
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

void func_229(var uParam0, int iParam1)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_SCORES");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x1C703A54AB4B12F6();
}

int func_230(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0xF2EFF31F204F4A7D(uParam0);
	}
	return 1;
}

void func_231(int iParam0)
{
	unk_0xD0E2527DD961F86C(uLocal_122, uLocal_120, 1500, 1, 1);
	unk_0x55CC07D5416539C8(uLocal_123, 1);
	unk_0xD0E2527DD961F86C(uLocal_122, uLocal_123, 8000, 1, 1);
	unk_0xED7F7C0DD93C1D8E(uLocal_125, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0x15DC0C1FBCB00FAA(uLocal_125, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0x990E6357D338A9C8(uLocal_125, 35f);
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x0B7CA263460475D0(uLocal_120))
	{
		bVar0 = false;
		func_313(uParam0);
		if (!bLocal_330)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x8C361F37C04084F4(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0x2A3398C6222EB190(Global_104400, 3))
						{
							func_404("DARTS_INSTR_W", -1);
							unk_0xCD7E92DE2BFA0B0D(&Global_104400, 3);
						}
						func_317(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0x2A3398C6222EB190(Global_104400, 4))
						{
							func_404("DARTS_INSTR_B", -1);
							unk_0xCD7E92DE2BFA0B0D(&Global_104400, 4);
						}
						func_317(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x8C361F37C04084F4(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x0B7CA263460475D0(uLocal_129) && uParam0->f_3 == 2)
			{
				func_312(uParam3);
			}
		}
		else
		{
			func_310(uParam3, iLocal_30);
		}
		func_309(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_306(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_298(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_291(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x9148803485DEDF45(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_290(iLocal_31, 0);
				if (((((!func_289("DARTS_SHT_USE") && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B")) && !func_289("DARTS_AIM_HLP")) && !func_289("DARTS_STD_HLP")) && !func_289("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_404("DARTS_LEVEL", -1);
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_18831.f_6), iLocal_350);
						func_317(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_328)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_317(&(uParam3->f_666), 6, 1);
					}
					iLocal_328 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_328)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_317(&(uParam3->f_666), 6, 1);
					}
					iLocal_328 = 1;
				}
				else if (func_279(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x27FC4121D73AF604();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_325)
				{
					if (!func_406(uParam4))
					{
						func_277(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_276(uLocal_319[(1 - iLocal_30)]);
						func_407(uParam4);
						iLocal_325 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_348 = 0;
				func_275(&(uParam0->f_422), &(uParam0->f_249));
				func_272(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x3AF262D7332EEDF5(1250, 2500))
			{
				func_275(&(uParam0->f_422), &(uParam0->f_249));
				func_272(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_259(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_258(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_256(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_241(uParam0, uParam3);
			break;
		
		case 5:
			func_234(uParam0, uParam2, uParam3);
			if (func_406(uParam4))
			{
				func_407(uParam4);
			}
			break;
		
		case 6:
			func_233(uParam0, uParam3);
			break;
	}
}

void func_233(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_348++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_332 = 1;
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
				func_256(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_241(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_331)
			{
				if (unk_0x76B3C79DE564AFC6(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xF2EFF31F204F4A7D(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x261E7847B591A8DC(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x76B3C79DE564AFC6(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x0A69FBBF51E1A08F(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_256(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_241(uParam0, uParam1);
			if (bLocal_331)
			{
				if (iLocal_333)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x766969A7CEBA91AE(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_79, 1, 1, 0);
					Var0 = { unk_0x261E7847B591A8DC(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x0A69FBBF51E1A08F(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0xDFF7E223DB3CBA25(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0xB7E3C36A3BE003B5(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_275(&(uParam0->f_422), &(uParam0->f_249));
			func_272(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_256(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_317(&(uParam1->f_666), 2, 0);
				func_317(&(uParam1->f_666), 3, 0);
				func_317(&(uParam1->f_666), 4, 0);
				func_317(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_241(uParam0, uParam1);
			if (bLocal_331)
			{
				if (iLocal_333)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = unk_0x766969A7CEBA91AE(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, Local_79, 1, 1, 0);
							Var0 = { unk_0x261E7847B591A8DC(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0x76B3C79DE564AFC6(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								unk_0x0A69FBBF51E1A08F(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0xDFF7E223DB3CBA25(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0xB7E3C36A3BE003B5(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
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
	if (iLocal_348 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_234(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_240();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_239("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_238("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_239("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_239("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_239("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_238("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_239("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_239("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xD887E21676314450(2, 190))
			{
				iLocal_346++;
				if (iLocal_346 >= uParam0->f_436)
				{
					iLocal_346 = 0;
				}
				Var0 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_49(Var0);
			}
			if (unk_0xD887E21676314450(2, 189))
			{
				iLocal_346 = (iLocal_346 - 1);
				if (iLocal_346 < 0)
				{
					iLocal_346 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_49(Var0);
			}
			if (unk_0xD887E21676314450(2, 202))
			{
				Var0 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_51(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xD887E21676314450(2, 201))
			{
				iLocal_322 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xD887E21676314450(2, 201) || (iLocal_332 && bLocal_331))
			{
				iLocal_322 = 1;
			}
			if ((unk_0xD887E21676314450(2, 189) || unk_0xD887E21676314450(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0xF177E0DA126D71C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_346 /*26*/], 1) };
				func_51(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_327)
				{
					if (func_237(iLocal_30 == 0, &(uLocal_319[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_327 = 1;
					}
				}
				else if ((unk_0x31CD6E9F83C10233() % 500) < 50)
				{
				}
			}
			else if (!iLocal_327)
			{
				if (func_236(iLocal_30 == 0, &(uLocal_319[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_327 = 1;
				}
			}
			else if ((unk_0x31CD6E9F83C10233() % 500) < 50)
			{
			}
			if (iLocal_322 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_332 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_230(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_235(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x4DF52B0CF393442F(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
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
				func_419(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_399();
				if (!bLocal_331)
				{
					unk_0xB43ECA2D614EA904();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				iLocal_328 = 0;
				iLocal_325 = 0;
				iLocal_327 = 0;
				iLocal_322 = 0;
				iLocal_346 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_235(var uParam0, int iParam1, int iParam2)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "ADD_DARTS_SCORE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x1C703A54AB4B12F6();
}

int func_236(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 3);
		}
	}
	iVar1 = unk_0x3AF262D7332EEDF5(0, 100);
	iVar2 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0x2A3398C6222EB190(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_GOOD_SELF", 1, 4);
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
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_BAD_SELF", 1, 4);
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
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_BAD_OTHER", 1, 4);
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

int func_237(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xCD7E92DE2BFA0B0D(&iVar0, 3);
		}
	}
	iVar1 = unk_0x3AF262D7332EEDF5(0, 100);
	iVar2 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0x2A3398C6222EB190(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x76B3C79DE564AFC6(func_483()))
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
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x0031992CA618A445(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_238(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

void func_239(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0x96577CAA1D1E72DB(iParam1);
	unk_0xCA3811E629240D04(iParam2, 1);
}

void func_240()
{
	unk_0x55CC07D5416539C8(uLocal_129, 1);
	unk_0x55CC07D5416539C8(uLocal_120, 0);
}

void func_241(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_253(uParam0);
		func_317(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_251(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_251(0);
					iLocal_151[1]++;
				}
			}
			func_317(&(uParam1->f_666), 2, 0);
			func_317(&(uParam1->f_666), 3, 0);
			func_317(&(uParam1->f_666), 4, 0);
			func_317(&(uParam1->f_666), 5, 1);
			func_253(uParam0);
			func_317(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_239("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_317(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_317(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_239("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_239("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_327)
			{
				if (func_250(uLocal_319[(1 - iLocal_30)]))
				{
					iLocal_327 = 1;
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
			func_317(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_249(uParam1, 1);
					func_251(0);
					iLocal_151[1]++;
				}
				if (!iLocal_327 && !iLocal_332)
				{
					if (func_248(uLocal_319[iLocal_30]))
					{
						iLocal_327 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_327 && !iLocal_332)
				{
					func_247(uLocal_319[(1 - iLocal_30)]);
					iLocal_327 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_327 && !iLocal_332)
				{
					if (func_246(uLocal_319[1], iLocal_30 == 0))
					{
						iLocal_327 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_249(uParam1, 0);
					func_251(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_327 && !iLocal_332)
				{
					if (func_244(uLocal_319[iLocal_30], iLocal_30 == 0))
					{
						iLocal_327 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_317(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_317(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_326)
						{
							func_243(uLocal_319[1]);
							iLocal_326 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_317(&(uParam1->f_666), 6, 1);
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
				func_242("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_309(&(uParam0->f_1));
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
			func_317(&(uParam1->f_666), 3, 0);
			func_317(&(uParam1->f_666), 2, 0);
			func_317(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_242(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0x96577CAA1D1E72DB(iParam1);
	unk_0x96577CAA1D1E72DB(iParam2);
	unk_0xCA3811E629240D04(iParam3, 1);
}

void func_243(int iParam0)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_244(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x76B3C79DE564AFC6(func_483()))
		{
			if (bParam1)
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_483(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_245())
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_140", 1, 4);
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

int func_245()
{
	if (unk_0x2A3398C6222EB190(unk_0x3AF262D7332EEDF5(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x76B3C79DE564AFC6(func_483()))
		{
			if (bParam1)
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_483(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_245())
			{
				func_4(unk_0x0031992CA618A445(), "DARTS_180", 1, 4);
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

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x0031992CA618A445())
		{
			iVar1 = 1;
		}
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x0031992CA618A445())
	{
		iVar0 = 1;
	}
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_104439.f_18831++;
			func_252("DARTS_STAT_NUM_BULLSEYES", Global_104439.f_18831);
			break;
		
		case 1:
			Global_104439.f_18831.f_1++;
			func_252("DARTS_STAT_NUM_180S", Global_104439.f_18831.f_1);
			break;
		
		case 2:
			Global_104439.f_18831.f_2++;
			func_252("DARTS_STAT_NUM_WINS", Global_104439.f_18831.f_2);
			break;
		
		case 3:
			Global_104439.f_18831.f_3++;
			func_252("DARTS_STAT_NUM_LOSS", Global_104439.f_18831.f_3);
			break;
		
		case 4:
			Global_104439.f_18831.f_4++;
			func_252("DARTS_STAT_DARTS_THROWN", Global_104439.f_18831.f_4);
			break;
		
		case 5:
			Global_104439.f_18831.f_5++;
			func_252("DARTS_STAT_NUM_GAMES", Global_104439.f_18831.f_5);
			break;
		
		case 7:
			Global_104439.f_18831.f_7 = (unk_0xBBDA792448DB5A89(Global_104439.f_18831.f_2) / unk_0xBBDA792448DB5A89(Global_104439.f_18831.f_5));
			break;
		
		case 8:
			Global_104439.f_18831.f_8 = (unk_0xBBDA792448DB5A89(Global_104439.f_18831.f_4) / unk_0xBBDA792448DB5A89(Global_104439.f_18831.f_5));
			break;
	}
}

void func_252(char* sParam0, var uParam1)
{
}

void func_253(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_251(5);
	unk_0xB43ECA2D614EA904();
	unk_0x8C361F37C04084F4(1);
	if (unk_0x3A7B47D96E536F61(func_400(2)))
	{
		unk_0xB3E27A9E412BBDF8(func_400(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_240();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_336 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_251(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_251(3);
		iLocal_151[9]++;
	}
	func_251(7);
	func_420(&(uParam0->f_254));
	if (func_255(uParam0))
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
				func_254(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_151[3]++;
			iLocal_354 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_354 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xFD69BDF108B32E5B(func_400(3));
	iLocal_333 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_254(bool bParam0)
{
	char* sVar0;
	
	unk_0x8EF7C3B8BFF23680(0);
	switch (func_80())
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
	unk_0xE784DA9DBB23459B(sVar0);
}

int func_255(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(uParam0->f_454, 0, 1);
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

void func_256(var uParam0, var uParam1, bool bParam2)
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
	fVar1 = unk_0x65543A6B8B143988(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_257(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x4DF52B0CF393442F(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x4DF52B0CF393442F(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
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
					unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_257(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_258(var uParam0)
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

int func_259(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_260("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = unk_0xCD70DA50CCD55658();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		unk_0x0A69FBBF51E1A08F(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	unk_0x0A69FBBF51E1A08F(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0xB7E3C36A3BE003B5(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x76B3C79DE564AFC6(*uParam0))
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

void func_260(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_271(&Var0);
			break;
		
		case 1:
			func_270(&Var0);
			break;
		
		case 5:
			func_269(&Var0);
			break;
		
		case 6:
			func_268(&Var0);
			break;
		
		case 7:
			func_267(&Var0);
			break;
		
		case 8:
			func_266(&Var0);
			break;
		
		case 9:
			func_265(&Var0);
			break;
	}
	if (func_263())
	{
		unk_0x38C75B31337B3454(iParam5);
		if (iParam3 == 1)
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_262(Var0.f_0), func_261(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_262(Var0.f_0), func_261(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x38C75B31337B3454(4);
	}
}

float func_261(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_262(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_263()
{
	if (func_264())
	{
		return 1;
	}
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
	{
		return 0;
	}
	return 1;
}

bool func_264()
{
	return Global_1312438;
}

void func_265(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_266(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_267(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_268(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_269(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_270(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_271(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_272(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
		fVar4 = unk_0xDFF7E223DB3CBA25(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xDFF7E223DB3CBA25(0f, 360f);
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
		iVar5 = unk_0x3AF262D7332EEDF5(0, 100);
		iVar6 = unk_0x3AF262D7332EEDF5(func_274(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xDFF7E223DB3CBA25(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xDFF7E223DB3CBA25(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x3AF262D7332EEDF5(0, 100);
		iVar6 = unk_0x3AF262D7332EEDF5(func_274(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xDFF7E223DB3CBA25(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xDFF7E223DB3CBA25(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xDFF7E223DB3CBA25(0.3f, 1f);
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
		func_273(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_273(uParam0);
		*uParam0 = unk_0x766969A7CEBA91AE(uParam0->f_1, Local_79, 0, 0, 0);
		fVar1 = unk_0xDFF7E223DB3CBA25(0f, 90f);
		Var7 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, Local_82) };
		Var10 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = unk_0x5E9D1531733B27F6((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0xB7E3C36A3BE003B5(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_82 };
		*uParam2 = 3;
		unk_0x71CE8B25981385FD(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_273(var uParam0)
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
	fVar4 = unk_0x5E9D1531733B27F6(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0x5711FEFEFF2B5B9D(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_82 - uParam0->f_11 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_274(var uParam0)
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

void func_275(var uParam0, var uParam1)
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
			if (func_245())
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

int func_276(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_277(var uParam0)
{
	func_278(uParam0, 0f);
}

void func_278(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x2A3398C6222EB190(*uParam0, 4)) + fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_279(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
					if (func_288(uParam0, uParam1, 0))
					{
						unk_0x71CE8B25981385FD(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xD887E21676314450(2, 223) && iLocal_101) && !bParam4)
				{
					iLocal_98 = 1;
					iLocal_99 = 1;
					if (!iLocal_100)
					{
						func_287(uParam0, *uParam2);
						iLocal_100 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_286();
						}
						func_285(uParam0, iParam6);
						func_284(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xDFF7E223DB3CBA25(0.02f, 0.1f);
						iVar1 = unk_0x3AF262D7332EEDF5(0, 100);
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
						fVar0 = unk_0xDFF7E223DB3CBA25(0.02f, 0.1f);
						iVar1 = unk_0x3AF262D7332EEDF5(0, 100);
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
							unk_0x27FC4121D73AF604();
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
				func_260("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_288(uParam0, uParam1, 1))
					{
						unk_0x71CE8B25981385FD(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!func_280(uParam0))
			{
				if (!iLocal_100)
				{
					func_287(uParam0, *uParam2);
				}
				else
				{
					func_286();
					func_285(uParam0, iParam6);
					func_284(uParam0, uParam1, bParam3, 0);
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

int func_280(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0xB3878AEB2FF752C6(2, 220);
	fVar2 = unk_0xB3878AEB2FF752C6(2, 221);
	iLocal_136 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x31CD6E9F83C10233();
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
				iLocal_137 = unk_0x31CD6E9F83C10233();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (unk_0x31CD6E9F83C10233() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = unk_0x31CD6E9F83C10233();
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
				func_283();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_282();
			}
			else
			{
				func_281();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_281()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_282()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_283()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_284(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	unk_0x0379EF298931FAD5(Var0, &Local_61, &(Local_61.f_1));
	if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_260("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_260("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!iLocal_101)
		{
			iLocal_101 = 1;
		}
	}
}

void func_285(var uParam0, int iParam1)
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
	fVar3 = unk_0x55D01DD2321A340F(2, 218);
	fVar4 = unk_0x55D01DD2321A340F(2, 219);
	fVar5 = unk_0xB3878AEB2FF752C6(2, 220);
	fVar6 = unk_0xB3878AEB2FF752C6(2, 221);
	if (unk_0xFF512A008EA368FF(2))
	{
		if (unk_0x229F35E7CDDBF757(fVar5) > unk_0x229F35E7CDDBF757(fVar3) || unk_0x229F35E7CDDBF757(fVar6) > unk_0x229F35E7CDDBF757(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x44B60563EF68B10C())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x4A96C872307DCF94())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x9148803485DEDF45(2, 227))
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
		if (unk_0xFF512A008EA368FF(2))
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
		fVar2 = unk_0xDFF7E223DB3CBA25((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xDFF7E223DB3CBA25((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xDFF7E223DB3CBA25((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xDFF7E223DB3CBA25((0f - fLocal_88), (0f + fLocal_88));
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
		fVar2 = unk_0xDFF7E223DB3CBA25((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xDFF7E223DB3CBA25((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xDFF7E223DB3CBA25((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xDFF7E223DB3CBA25((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_286()
{
	if (unk_0x9148803485DEDF45(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (unk_0x9148803485DEDF45(2, 229))
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
		else if ((((((!func_289("DARTS_FST_HLP") && !func_289("DARTS_AIM_HLP")) && !func_289("DARTS_CLOCK")) && !func_289("DARTS_STD_HLP")) && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B")) && !iLocal_95)
		{
			iLocal_95 = 1;
			if (!unk_0x2A3398C6222EB190(Global_104400, 1))
			{
				func_404("DARTS_SHT_USE", -1);
				unk_0xCD7E92DE2BFA0B0D(&Global_104400, 1);
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

void func_287(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0xDFF7E223DB3CBA25(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0xDFF7E223DB3CBA25(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_82 };
}

int func_288(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0x0A69FBBF51E1A08F(*uParam0, Local_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x766969A7CEBA91AE(uParam0->f_1, Local_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_273(uParam0);
	fVar10 = unk_0xDFF7E223DB3CBA25(0f, 90f);
	Var3 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, Local_82) };
	Var6 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = unk_0x5E9D1531733B27F6((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0xB7E3C36A3BE003B5(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_260("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	Var0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	unk_0x0379EF298931FAD5(Var0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_289(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_290(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0x2A3398C6222EB190(Global_104400, 9))
		{
			if ((!func_289("DARTS_SHT_USE") && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B"))
			{
				func_404("DARTS_AIM_HLP", -1);
				unk_0xCD7E92DE2BFA0B0D(&Global_104400, 9);
			}
		}
		else if (iParam1 && !unk_0x2A3398C6222EB190(Global_104400, 7))
		{
			if ((!func_289("DARTS_AIM_HLP") && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B"))
			{
				func_404("DARTS_CLOCK", -1);
				unk_0xCD7E92DE2BFA0B0D(&Global_104400, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x2A3398C6222EB190(Global_104400, 8))
		{
			if ((!func_289("DARTS_SHT_USE") && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B"))
			{
				func_404("DARTS_STD_HLP", -1);
				unk_0xCD7E92DE2BFA0B0D(&Global_104400, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_289("DARTS_SHT_USE")) && !func_289("DARTS_INSTR_W")) && !func_289("DARTS_INSTR_B"))
		{
			if (!unk_0x2A3398C6222EB190(Global_104400, 2))
			{
				func_404("DARTS_FST_HLP", -1);
				unk_0xCD7E92DE2BFA0B0D(&Global_104400, 2);
			}
			iLocal_96 = 1;
		}
	}
}

int func_291(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_294(iParam0) };
			*uParam3 = { unk_0xCD59EF1D7098A4B4(*uParam1, Var0) };
			func_293(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0xD887E21676314450(2, 201))
			{
				func_292();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_292()
{
	unk_0xD0E2527DD961F86C(uLocal_120, uLocal_132, 2000, 1, 1);
	unk_0x46B35AD2F641A4A3(uLocal_132, 0);
}

void func_293(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = unk_0x6BE82EFE6EE60BF4(26379945, Param0, Var0, 65f, 0, 2);
	unk_0xD0E2527DD961F86C(uLocal_132, uLocal_120, 2000, 1, 1);
}

Vector3 func_294(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_297(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_296(fVar0);
		Var1.f_2 = func_295(fVar0);
	}
	return Var1;
}

float func_295(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_296(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_297(int iParam0)
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

int func_298(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x9148803485DEDF45(2, 228))
			{
				func_305(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x9148803485DEDF45(2, 228))
			{
				if (!unk_0x0B7CA263460475D0(uLocal_129))
				{
					func_303();
					func_302(&uLocal_359, Local_390, Local_393, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x9148803485DEDF45(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_299(&uLocal_359, 1, 1, 0, 0, 1045220557, 0, 1065353216);
			}
			break;
		
		case 3:
			func_305(0);
			func_484();
			if (unk_0x2A3EA4C0BCED85F2(uLocal_359))
			{
				if (unk_0x63D9209D70E2F5D5(uLocal_359))
				{
					unk_0x55CC07D5416539C8(uLocal_359, 0);
				}
				unk_0x46B35AD2F641A4A3(uLocal_359, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_299(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
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
	
	unk_0x97064E9008B25888(2);
	func_301(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x4A96C872307DCF94())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xFF512A008EA368FF(2))
	{
		fVar5 = unk_0x55D01DD2321A340F(2, 239);
		fVar6 = unk_0x55D01DD2321A340F(2, 240);
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
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x55D01DD2321A340F(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x55D01DD2321A340F(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_300((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_300((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x31CD6E9F83C10233())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xFF512A008EA368FF(2))
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
		uParam0->f_27 = unk_0x31CD6E9F83C10233() + 4000;
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
	if ((unk_0xFF512A008EA368FF(2) && bParam2) && !uParam0->f_28)
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
	if (unk_0xFF512A008EA368FF(0) && bParam1)
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
		if (unk_0xFF512A008EA368FF(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x42F812C5F1AA300A(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x31CD6E9F83C10233() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x42F812C5F1AA300A(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x31CD6E9F83C10233() + 4000;
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
	unk_0xAD89EC3A4DD15FAA(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x2A3EA4C0BCED85F2(*uParam0))
	{
		if (unk_0x63D9209D70E2F5D5(*uParam0))
		{
			if (unk_0x00E0F13A223ED180(*uParam0))
			{
				unk_0x4D0E578030545817();
			}
		}
	}
}

int func_300(int iParam0, int iParam1, int iParam2)
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

void func_301(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x55D01DD2321A340F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x55D01DD2321A340F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x55D01DD2321A340F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x55D01DD2321A340F(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x05293D9F055665D4(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x55B774FEC27F431A(2, 218) * 127f));
		}
		if (!unk_0x05293D9F055665D4(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x55B774FEC27F431A(2, 219) * 127f));
		}
		if (!unk_0x05293D9F055665D4(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x55B774FEC27F431A(2, 220) * 127f));
		}
		if (!unk_0x05293D9F055665D4(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x55B774FEC27F431A(2, 221) * 127f));
		}
	}
	if (unk_0xFF512A008EA368FF(2))
	{
		if (bParam5)
		{
			if (unk_0x4A96C872307DCF94())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x44B60563EF68B10C())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_302(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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
	*uParam0 = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x55CC07D5416539C8(*uParam0, 1);
	unk_0xAD89EC3A4DD15FAA(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xE983D49A61E9F0FF(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xC0F8C42E137498B5(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x4B2CB0C0C1A3F8DB(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_303()
{
	if (iLocal_315)
	{
		return;
	}
	func_304();
	unk_0xAA812BAAC452981B("Darts Zoom");
	iLocal_315 = 1;
}

void func_304()
{
	if (iLocal_314 || iLocal_315)
	{
		unk_0xE59D2DD5DBF1A2CE();
		iLocal_314 = 0;
		iLocal_315 = 0;
	}
}

void func_305(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2527DD961F86C(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		unk_0xD0E2527DD961F86C(uLocal_120, uLocal_129, 1000, 1, 1);
	}
}

void func_306(var uParam0)
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
			func_227(&(uParam0->f_62), func_308(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_222(&(uParam0->f_62), 0))
			{
				func_307(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_307(var uParam0)
{
	uParam0->f_8 = 0;
	func_407(&(uParam0->f_2));
	func_407(&(uParam0->f_5));
}

char* func_308(int iParam0)
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

void func_309(var uParam0)
{
	if (!iLocal_99)
	{
		if (!unk_0x9148803485DEDF45(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x9148803485DEDF45(2, 201) || unk_0xD887E21676314450(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_310(var uParam0, int iParam1)
{
	if (!unk_0x957E53BB191CB24D())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_109(&(uParam0->f_509), 0, 0, 0, 1);
				func_108(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_108(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_311(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_108(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_108(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_108(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_105(&(uParam0->f_509), 1);
				func_317(&(uParam0->f_666), 8, 0);
				func_317(&(uParam0->f_666), 16, 0);
				func_317(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_109(&(uParam0->f_509), 0, 0, 0, 1);
				func_108(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_108(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_311(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_108(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_108(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_105(&(uParam0->f_509), 1);
				func_317(&(uParam0->f_666), 8, 0);
				func_317(&(uParam0->f_666), 16, 0);
				func_317(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_109(&(uParam0->f_509), 1, 0, 0, 1);
			func_108(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_108(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_105(&(uParam0->f_509), 1);
			func_317(&(uParam0->f_666), 16, 1);
			func_317(&(uParam0->f_666), 8, 0);
			func_317(&(uParam0->f_666), 15, 0);
			func_317(&(uParam0->f_666), 17, 0);
			func_317(&(uParam0->f_666), 23, 0);
		}
		unk_0x661705F074A804D1(76, 66);
		unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
		unk_0x26742F01C78031C2();
		func_187(func_104(func_3(&(uParam0->f_666), 16), 1, 2));
		func_111(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_317(&(uParam0->f_666), 15, 0);
		func_317(&(uParam0->f_666), 16, 0);
		func_317(&(uParam0->f_666), 23, 0);
	}
}

int func_311(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_312(var uParam0)
{
	if (!unk_0x957E53BB191CB24D())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_109(&(uParam0->f_509), 0, 0, 0, 1);
			func_311(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_108(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_105(&(uParam0->f_509), 1);
			func_317(&(uParam0->f_666), 23, 1);
			func_317(&(uParam0->f_666), 8, 0);
			func_317(&(uParam0->f_666), 16, 0);
			func_317(&(uParam0->f_666), 15, 0);
			func_317(&(uParam0->f_666), 17, 0);
		}
		func_111(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_317(&(uParam0->f_666), 15, 0);
		func_317(&(uParam0->f_666), 16, 0);
		func_317(&(uParam0->f_666), 23, 0);
		func_317(&(uParam0->f_666), 17, 0);
	}
}

void func_313(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_99)
	{
		if (!unk_0x9148803485DEDF45(2, 201) && !unk_0x9148803485DEDF45(2, 202))
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
				bLocal_330 = false;
				unk_0x8C361F37C04084F4(1);
			}
		}
		if (unk_0xBF946CEEECD8C935(2, 235) || unk_0x0B34E1F8A98046A7(2, 235))
		{
			if (!bLocal_330)
			{
				*uParam0 = 14;
				bLocal_330 = true;
				unk_0x8C361F37C04084F4(1);
			}
		}
		else if (func_289("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_330 = false;
		}
	}
}

void func_314(int iParam0)
{
	if (!unk_0x8682D8A6269E52C9(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_315(int iParam0)
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

float func_316(int iParam0)
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

void func_317(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0, iParam1);
	}
	else
	{
		unk_0xD804ACF2A7171150(uParam0, iParam1);
	}
}

int func_318(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0x2A3398C6222EB190(Global_104439.f_18831.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, var uParam1, var uParam2)
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
			func_230(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_229(uParam1, iVar0);
		func_235(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_346 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	iLocal_323 = 1;
	iLocal_324 = 0;
	iLocal_326 = 0;
	iLocal_95 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_332 = 0;
	func_317(&(uParam2->f_666), 6, 0);
	func_325();
	func_323(uParam2);
	if (iParam0->f_457)
	{
		func_320(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_320(bool bParam0)
{
	unk_0x4C4F62CD43971CED(0);
	if (unk_0x63D9209D70E2F5D5(uLocal_122))
	{
		unk_0x55CC07D5416539C8(uLocal_122, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_126))
	{
		unk_0x55CC07D5416539C8(uLocal_126, 0);
	}
	if (unk_0x5114FCEE2A997B95())
	{
		func_322();
		unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
		unk_0x18D7C8000EDEAAB4(500);
	}
	func_321(bParam0);
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		unk_0x55CC07D5416539C8(uLocal_120, 1);
	}
}

void func_322()
{
	unk_0x55CC07D5416539C8(uLocal_122, 1);
}

void func_323(var uParam0)
{
	func_324();
	uParam0->f_670 = 3;
	func_317(&(uParam0->f_666), 15, 0);
	func_317(&(uParam0->f_666), 16, 0);
	func_317(&(uParam0->f_666), 17, 0);
}

void func_324()
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

void func_325()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_99 = 0;
	unk_0xB43ECA2D614EA904();
}

void func_326(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_328(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0xC030DF4B187326D7(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x4288569892059474(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x84D19A34E1A97ABC(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x40C8D24AE8508DEC("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x40C8D24AE8508DEC("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_327(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_327(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			unk_0x7F165E259CFAC8B8(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_328(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x27CA09C6DFAB1E79() && unk_0x93BDC21B9F2C5E43())
		{
			iParam2 = unk_0xFBECB0811993DE21();
		}
	}
	StringCopy(&cVar0, unk_0x49CAADAD1ABAB70A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x50B7853132D8438E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x32F9127910F63DFA(iParam3);
	unk_0x32F9127910F63DFA(iParam4);
	unk_0x1C703A54AB4B12F6();
}

int func_330(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0xC9621A9AD282CC14(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_387(0, 0, 0, 1);
		func_386(0, -1, 1);
		if (func_385())
		{
			if (Global_2606874 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_2606874;
				func_384(uParam0->f_660, 1, 1);
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
				if (unk_0xA56C5821F50C3275(sVar0))
				{
					func_383(sVar0, 0, 0);
				}
			}
			Global_2606875 = unk_0x31CD6E9F83C10233() + 300;
		}
		else if (func_382() && unk_0x31CD6E9F83C10233() > Global_2606875)
		{
			if (Global_2606874 == uParam0->f_660)
			{
				iVar2 = func_381(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_2606875 = unk_0x31CD6E9F83C10233() + 300;
		}
		if (func_380(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_384(uParam0->f_660, 1, 1);
			unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xA56C5821F50C3275(sVar0))
			{
				func_383(sVar0, 0, 0);
			}
		}
		if (func_379(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_384(uParam0->f_660, 1, 1);
			unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xA56C5821F50C3275(sVar0))
			{
				func_383(sVar0, 0, 0);
			}
		}
		if (func_378(&(uParam0->f_633)) || func_377(&(uParam0->f_633), uParam0->f_660, iVar1))
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
			unk_0x18F1BFAF88AC511B(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_359(uParam0);
		}
		if (func_358(&(uParam0->f_636)) || func_356(&(uParam0->f_636), uParam0->f_660, iVar1))
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
			unk_0x18F1BFAF88AC511B(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_359(uParam0);
		}
		if ((unk_0xD887E21676314450(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_355(uParam0->f_662 + 1, 1);
			*uParam2 = func_355(uParam0->f_664 + 1, 0);
			unk_0x18F1BFAF88AC511B(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_333(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0xBF946CEEECD8C935(2, 202) || func_332())
		{
			func_331(0);
			func_317(&(uParam0->f_666), 8, 0);
			func_317(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0xBF946CEEECD8C935(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0xBF946CEEECD8C935(2, 202))
		{
			func_359(uParam0);
			func_317(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_331(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2455648[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 355;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2606798.f_16), "", 16);
	Global_2606798.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2606798.f_21), "", 16);
	Global_2606798.f_61 = 0;
	Global_2606798.f_62 = 0;
	Global_2606798.f_63 = 0;
	Global_2606798.f_64 = 0;
	Global_2606798.f_65 = 0;
	Global_2606798.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2606798.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2606798.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7906 = 0;
	Global_17290.f_7901 = 0;
	Global_17290.f_7911 = 0;
	Global_17290.f_7916 = 0;
	Global_17290.f_7921 = 0;
	Global_17290.f_7923 = 0;
	Global_17290.f_7929 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x5E61619C36D9095B(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

int func_332()
{
	if (unk_0xFF512A008EA368FF(2))
	{
		if (unk_0xD887E21676314450(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_333(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar49;
	float fVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!func_328(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_352(0, bParam6))
	{
		return;
	}
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17290)
	{
		if (func_18(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar57 = fVar36;
			fVar58 = fVar35;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
	{
		fVar59 = Global_17288;
	}
	else
	{
		fVar59 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xD9151D5BCEE2689C(&iVar60, &iVar61);
		fVar63 = unk_0x5E61619C36D9095B(0);
		if (func_20())
		{
			iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) * fVar63));
		}
		fVar64 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_20())
		{
			fVar62 = 1f;
		}
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar62));
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar62));
	}
	else
	{
		unk_0x68824FF629FFAE6D(&iVar60, &iVar61);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) == unk_0x50B7853132D8438E("HIDE"))
			{
				fVar50 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar65, func_24(29), 64);
					StringCopy(&cVar81, func_21(29, 1), 64);
					if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_351(Global_17287, Global_17288, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x1638116285563DAD(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7901)
				{
					iVar1 = Global_17290.f_7897;
					iVar2 = Global_17290.f_7898;
					iVar3 = Global_17290.f_7899;
					iVar4 = Global_17290.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_351(Global_17287, (Global_17288 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar50 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
				if (unk_0x50B7853132D8438E(&(Global_17290.f_1)) != 0)
				{
					func_350();
					unk_0x0B8B91F21AE25854(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x96577CAA1D1E72DB(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x5E66471E79E6D3ED(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x50B3C23D0902259F(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E43DE6F9866B44B((Global_17287 + 0.00390625f), ((Global_17288 + fVar57) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_350();
						func_348((((Global_17287 + fParam5) - 0.00390625f) - func_349("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar97 = fVar50;
			if (Global_17290.f_7911)
			{
				iVar1 = Global_17290.f_7907;
				iVar2 = Global_17290.f_7908;
				iVar3 = Global_17290.f_7909;
				iVar4 = Global_17290.f_7910;
			}
			else
			{
				unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar50 = (fVar50 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar56 = Global_17290.f_5612[iVar6];
						}
						fVar50 = (fVar50 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar56 = 0.034722f;
					fVar50 = (fVar50 + fVar56);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar54 = 1;
				}
			}
			unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar97 + ((fVar50 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar50 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7916)
				{
					iVar1 = Global_17290.f_7912;
					iVar2 = Global_17290.f_7913;
					iVar3 = Global_17290.f_7914;
					iVar4 = Global_17290.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_351(Global_17287, (fVar50 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xB9E4A5FCB2BE22B7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar62));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar62));
				if (Global_17290.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xB922891BFD232C45(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar62), ((Var37.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar50 = (fVar50 + (0f + 0.034722f));
			}
			if (unk_0x50B7853132D8438E(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_18(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_347(fVar41);
				unk_0x1099CBF49396B795(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_351(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_347(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_18(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_346(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_24(Global_17290.f_4638), func_21(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_21)) != 0 && Global_2606798.f_65 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2606798.f_67 != 0)
				{
					func_18(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_347(fVar41);
				unk_0x1099CBF49396B795(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDCC26C786B8D41DB(fVar41, (fVar50 + 0.00277776f));
				unk_0xB922891BFD232C45(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_351(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xB922891BFD232C45(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1638116285563DAD("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_347(fVar41);
				unk_0x0B8B91F21AE25854(&(Global_2606798.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2606798.f_61)
				{
					if (Global_2606798.f_25[iVar14] == 2)
					{
						unk_0x96577CAA1D1E72DB(Global_2606798.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2606798.f_25[iVar14] == 3)
					{
						unk_0x5E66471E79E6D3ED(Global_2606798.f_34[iVar16], Global_2606798.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2606798.f_25[iVar14] == 1)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 8)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 5)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 6)
					{
						unk_0x7C8A7ECFBAD2C8C4(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 7)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2606798.f_25[iVar14] == 9)
					{
						unk_0x50B3C23D0902259F(&(Global_2606798.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E43DE6F9866B44B(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_2606798.f_67 != 0)
				{
					func_18(Global_2606798.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_346(Global_2606798.f_67, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0x1638116285563DAD(func_24(Global_2606798.f_67), func_21(Global_2606798.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0x4A373026C2688C78(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2606798.f_65 > 0)
				{
					if ((unk_0x31CD6E9F83C10233() - Global_2606798.f_66) > Global_2606798.f_65)
					{
						StringCopy(&(Global_2606798.f_21), "", 16);
						Global_2606798.f_65 = -1;
					}
				}
			}
			func_340(iVar60, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x661705F074A804D1(76, 84);
			unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
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
			iVar98 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar98 = (Global_17290.f_5602 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar56 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					if (Global_17290.f_7923)
					{
						unk_0xB922891BFD232C45(Global_17290.f_7922, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					else
					{
						unk_0xB922891BFD232C45(1, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					unk_0x1638116285563DAD("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar101, iVar102, iVar103, iVar104, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar54 && iVar7 == iVar98)
				{
					func_338(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x0B8B91F21AE25854("DFLT_MNU_OPT");
					unk_0x7E43DE6F9866B44B(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x2A3398C6222EB190(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar105 = 0;
							bVar55 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar55 = true;
									iVar105 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar55 = true;
									iVar105 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar53 = true;
							}
							else
							{
								bVar53 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar51 = false;
												bVar52 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar52 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar51 = true;
													}
													iVar14++;
												}
												func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, iVar105, bVar52, bVar51);
												unk_0x54412EEBDB162F5C(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar51 = false;
											bVar52 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar52 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar51 = true;
												}
												iVar14++;
											}
											func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, bVar52, bVar51);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_337(bVar31);
											}
											unk_0x0B8B91F21AE25854(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x7C8A7ECFBAD2C8C4(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x50B3C23D0902259F(&(Global_2455648[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x96577CAA1D1E72DB(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5E66471E79E6D3ED(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_18(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_346(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_24(Global_17290.f_4433[(iVar22 + iVar28)]), func_21(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_24(Global_17290.f_4433[(iVar22 + iVar28)]), func_21(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
										if (unk_0x50B7853132D8438E(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E43DE6F9866B44B(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E43DE6F9866B44B((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_18(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_346(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x1638116285563DAD(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0x1638116285563DAD(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0x1638116285563DAD(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_337(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x96577CAA1D1E72DB(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_336((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_337(bVar31);
											}
											unk_0x54412EEBDB162F5C("NUMBER");
											unk_0x5E66471E79E6D3ED(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0x51C2CBAC9E5D95A4(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_346(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0x1638116285563DAD(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_338(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_335((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_18(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar53)
											{
												if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_346(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_346(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0x1638116285563DAD(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
											}
											if (func_18(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_346(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
												unk_0x1638116285563DAD(func_24(Global_17290.f_4433[iVar22]), func_21(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), (fVar35 * func_334(Global_17290.f_4433[iVar22])), (fVar36 * func_334(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, iVar49, 0);
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
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
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
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7552[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar50;
	Global_17290.f_5745 = unk_0x31CD6E9F83C10233();
	unk_0x4288569892059474(Global_17290.f_5743);
	if (!Global_17290.f_7896)
	{
		func_38(0);
	}
	Global_17290.f_7896 = 0;
	if (bParam2)
	{
		unk_0xBD1C47D856010F09(10);
	}
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(8);
	if (bParam0)
	{
		func_187(1);
	}
	unk_0x26742F01C78031C2();
}

float func_334(int iParam0)
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
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_335(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x5E66471E79E6D3ED(uParam3, uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

void func_336(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(iParam3);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, iParam4);
}

void func_337(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xB922891BFD232C45(Global_17290.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
}

void func_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_339(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xB922891BFD232C45(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xB922891BFD232C45(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
		else
		{
			unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x52D4D0409C49DF8C(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	else
	{
		unk_0x52D4D0409C49DF8C(155, 155, 155, 255);
	}
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x41D772AFFBD36843(1);
	if (bParam5)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(4);
	}
	else if (bParam6)
	{
		unk_0xD1F2C9FF58856AEC(0f, 0.425f);
		unk_0x4E250FE9E4D8720F(6);
	}
	else
	{
		unk_0x4E250FE9E4D8720F(0);
	}
	unk_0x7A1F4BBECE23C9E3(0f, 1f);
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_339(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_328(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_352(bParam4, bParam8))
	{
		return;
	}
	if (func_344())
	{
		return;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_341(unk_0x3D35F9864E4640B1(), 0))
		{
			return;
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xB74983234B4F06A7() == 0 || unk_0xFCFC2645B6CF6425())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xDE25F26B6B16CF7A(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 355)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE344F89A3A395F9C(2, Global_17290.f_4896[iVar1], true), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x295E4023D39A7295(2, Global_17290.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x90495002CD46BD88((1f - (Global_17290.f_4951 / 100f)));
			unk_0x1C703A54AB4B12F6();
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xE8240315678FDE8E(true);
				unk_0x1C703A54AB4B12F6();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x50B7853132D8438E("PREV"))
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(iVar1);
					func_13(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x50B7853132D8438E(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x50B7853132D8438E("PREV"))
					{
						func_13(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_12(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xC2D818A5754306C0(iParam2, 70);
						}
						else
						{
							unk_0x96577CAA1D1E72DB(iParam2);
						}
						unk_0xCC5EB3A492FB7D4B();
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (Global_17290.f_4896[iVar1] != 355 && unk_0x2A3398C6222EB190(Global_17290.f_4922, iVar1))
						{
							unk_0xE8240315678FDE8E(true);
							unk_0x32F9127910F63DFA(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0xE8240315678FDE8E(false);
							unk_0x32F9127910F63DFA(355);
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
				iVar1++;
			}
			if (unk_0x50B7853132D8438E(&(Global_2606798.f_16)) != unk_0x50B7853132D8438E(""))
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x32F9127910F63DFA(Global_17290.f_4639);
				func_13(&Global_2606798);
				if (Global_2606798.f_20 == -1)
				{
					func_12(&(Global_2606798.f_16));
				}
				else
				{
					unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
				}
				unk_0x1C703A54AB4B12F6();
			}
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x32F9127910F63DFA(1);
			}
			else
			{
				unk_0x32F9127910F63DFA(0);
			}
			unk_0x1C703A54AB4B12F6();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x32F9127910F63DFA(iVar1);
					unk_0x9BC6C9E77AAC792E(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xC2D818A5754306C0(iParam2, 70);
					}
					else
					{
						unk_0x96577CAA1D1E72DB(iParam2);
					}
					unk_0xCC5EB3A492FB7D4B();
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar1++;
		}
		if (Global_2606798.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEBD23F68B1A617FC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x32F9127910F63DFA(iVar1);
				unk_0x9BC6C9E77AAC792E(&(Global_2606798.f_16));
				if (bParam5)
				{
					unk_0xC2D818A5754306C0(iParam2, 70);
				}
				else
				{
					unk_0x96577CAA1D1E72DB(iParam2);
				}
				unk_0xCC5EB3A492FB7D4B();
				unk_0x1C703A54AB4B12F6();
			}
		}
		unk_0x661705F074A804D1(76, 66);
		unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7931)
			{
				unk_0xB8281495D778DB56(15, 0f, -0.0375f);
				Global_17290.f_7931 = 1;
			}
		}
		else if (Global_17290.f_7931)
		{
			unk_0xC030DF4B187326D7(15);
			Global_17290.f_7931 = 0;
		}
		unk_0x26742F01C78031C2();
		if (Global_17290.f_4925)
		{
			unk_0x661705F074A804D1(82, 66);
			unk_0x399D1A0AE11E61E3(0f, 0f, 0f, 0f);
			unk_0x45822700F324A838(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26742F01C78031C2();
		}
		else
		{
			unk_0x4237E72FB80FD332(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_341(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_342(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_343();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_343()
{
	return Global_1312735;
}

int func_344()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_345())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4EBACDA5E9A0E784(&Var0);
		if (Global_14388 == 0)
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

int func_345()
{
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_346(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xB922891BFD232C45(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
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
		case 50:
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
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_347(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x77F7F57845720991(2);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_348(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x96577CAA1D1E72DB(uParam4);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

float func_349(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_350();
	unk_0x54412EEBDB162F5C(sParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_350()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7906)
	{
		iVar0 = Global_17290.f_7902;
		iVar1 = Global_17290.f_7903;
		iVar2 = Global_17290.f_7904;
		iVar3 = Global_17290.f_7905;
	}
	unk_0x4E250FE9E4D8720F(0);
	unk_0xD1F2C9FF58856AEC(0f, 0.35f);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iVar3);
	unk_0x7A1F4BBECE23C9E3((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0xAC1B647E90E8412A(0);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(0, 0, 0, 0, 0);
}

void func_351(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x45A34FA87FBE9599((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_352(bool bParam0, bool bParam1)
{
	if (Global_2434915.f_1670.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xF9FC07CC13402AEF() || (func_354(8, -1) && func_353() != 64)) || (unk_0xA095EFC51C188A82() != 0 && !bParam1)) || (unk_0x003E46CBEF6CE07A() && !bParam0)) || unk_0x744CE10646868EAC()) || Global_71045) || Global_17290.f_7930) || unk_0x0CF4609684193305()) || Global_92814.f_1369)
	{
		return 0;
	}
	return 1;
}

int func_353()
{
	return Global_1312788;
}

bool func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

int func_355(int iParam0, bool bParam1)
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

int func_356(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF512A008EA368FF(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_381(0) == 1 && Global_2606874 == iParam1)
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

void func_357(var uParam0)
{
	if (!func_406(uParam0))
	{
		func_420(uParam0);
	}
}

int func_358(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xFF512A008EA368FF(2))
	{
		fVar0 = unk_0xB3878AEB2FF752C6(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x9148803485DEDF45(2, 190)) || unk_0x59ABF4F2C485FC38(2, 190))
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

void func_359(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_331(0);
	unk_0xB922891BFD232C45(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_376(uVar0, uVar1, uVar2, uVar3, 1);
	func_375(1, 2, 0, 0, 0);
	func_374(1, 2, 1, 1, 1);
	func_373(0, 1, 0, 0, 0);
	func_372("DARTS_TITLE");
	func_370(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_363(0, func_355(uParam0->f_662 + 1, 1), 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_363(1, func_355(uParam0->f_664 + 1, 0), 0);
	func_362(2, 141, 141, 1);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_361(0);
	func_384(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_383(func_103(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_360(201, "ITEM_SELECT", -1, 0);
	func_360(202, "IB_QUIT", -1, 0);
}

void func_360(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE344F89A3A395F9C(2, iParam0, true);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2606798, sVar0, 64);
		StringCopy(&(Global_2606798.f_16), sParam1, 16);
		Global_2606798.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_361(int iParam0)
{
	Global_17290.f_5605 = iParam0;
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17290.f_7927 = iParam3;
	Global_17290.f_7924[0] = iParam1;
	Global_17290.f_7924[1] = iParam2;
	Global_17290.f_7928 = iParam0;
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5092 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 2)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 2)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam1;
	Global_17290.f_5092++;
	fVar1 = func_365("NUMBER", iParam1);
	if (Global_17290.f_4945[Global_17290.f_5089])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
	{
		Global_17290.f_4938[Global_17290.f_5089] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_364("NUMBER", iParam1);
		if (fVar4 > Global_17290.f_5612[iParam0])
		{
			Global_17290.f_5612[iParam0] = fVar4;
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 2;
}

float func_364(char* sParam0, int iParam1)
{
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x4A373026C2688C78(0.35f, 0);
}

float func_365(char* sParam0, int iParam1)
{
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0f;
	}
	func_338(1, 1, 0, 0, 0, 0, 0);
	unk_0x54412EEBDB162F5C(sParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_366(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam1) && !unk_0xA56C5821F50C3275(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_369(Global_17290.f_5088, 1);
	}
	else
	{
		func_369(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_368(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_367(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_367(char* sParam0)
{
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
	}
	return unk_0x4A373026C2688C78(0.35f, 0);
}

float func_368(char* sParam0)
{
	if (!unk_0x996B09F758C57FBE(uParam0))
	{
		if (unk_0x50B7853132D8438E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_338(0, 1, 0, 0, 0, 0, 0);
	unk_0x54412EEBDB162F5C(sParam0);
	return unk_0x51C2CBAC9E5D95A4(1);
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_370(int iParam0, char* sParam1, char* sParam2)
{
	Global_17290 = iParam0;
	func_371(29, sParam1, sParam2);
}

void func_371(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17290.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17290.f_6719[iParam0 /*16*/]), sParam2, 64);
}

void func_372(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_373(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4945[0] = iParam0;
	Global_17290.f_4945[1] = iParam1;
	Global_17290.f_4945[2] = iParam2;
	Global_17290.f_4945[3] = iParam3;
	Global_17290.f_4945[4] = iParam4;
}

void func_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_376(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17290.f_7901 = iParam4;
	Global_17290.f_7897 = uParam0;
	Global_17290.f_7898 = uParam1;
	Global_17290.f_7899 = uParam2;
	Global_17290.f_7900 = uParam3;
}

int func_377(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF512A008EA368FF(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_381(0) == -1 && Global_2606874 == iParam1)
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

int func_378(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xFF512A008EA368FF(2))
	{
		fVar0 = unk_0xB3878AEB2FF752C6(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x9148803485DEDF45(2, 189))
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

int func_379(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xFF512A008EA368FF(2))
	{
		fVar0 = unk_0xB3878AEB2FF752C6(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x9148803485DEDF45(2, 187))
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

int func_380(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xFF512A008EA368FF(2))
	{
		fVar0 = unk_0xB3878AEB2FF752C6(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x9148803485DEDF45(2, 188))
	{
		if (!func_406(uParam0))
		{
			func_357(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_420(uParam0);
			return 1;
		}
	}
	else if (func_406(uParam0))
	{
		func_407(uParam0);
	}
	return 0;
}

int func_381(float fParam0)
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
	fVar2 = (fVar0 + Global_17289);
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	unk_0x1CACB3334011FEAC(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x1CACB3334011FEAC(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26742F01C78031C2();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_2606868 >= fVar0 && Global_2606868 < fVar5)
		{
			return -999;
		}
	}
	if (Global_2606868 >= fVar0 && Global_2606868 < fVar4)
	{
		return -1;
	}
	if (Global_2606868 >= fVar4 && Global_2606868 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_382()
{
	if (unk_0xFF512A008EA368FF(2))
	{
		return unk_0x59ABF4F2C485FC38(2, 237);
	}
	return 0;
}

void func_383(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x31CD6E9F83C10233();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_384(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2606798.f_21), "", 16);
	}
}

int func_385()
{
	if (unk_0xFF512A008EA368FF(2))
	{
		if (Global_2606874 > -1)
		{
			if (unk_0xD887E21676314450(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_386(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xFF512A008EA368FF(2))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xB540BA8B3C93460F();
	}
	if (Global_2606874 == -6)
	{
		unk_0x9658C2750CEDC927(4);
		if (iParam0 && unk_0x9148803485DEDF45(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2606874 = -1;
			return 0;
		}
	}
	if (((Global_2606874 > -1 || Global_2606874 == -3) || Global_2606874 == -2) || unk_0x6D21C4D608240FA2())
	{
		unk_0x9658C2750CEDC927(1);
		return 0;
	}
	if (Global_2606874 == -1 && iParam0)
	{
		if (unk_0x9148803485DEDF45(2, 237))
		{
			unk_0x9658C2750CEDC927(4);
			Global_2606874 = -6;
			return 1;
		}
		else
		{
			unk_0x9658C2750CEDC927(3);
			return 0;
		}
	}
	unk_0x9658C2750CEDC927(1);
	return 0;
}

void func_387(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0xFF512A008EA368FF(2))
	{
		Global_2606874 = -1;
		return;
	}
	unk_0x77006C00CA8600FB(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x1CACB3334011FEAC(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x1CACB3334011FEAC(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26742F01C78031C2();
	func_389();
	if (Global_2606874 == -6)
	{
		return;
	}
	Global_2606874 = -1;
	fVar7 = Global_2606868;
	fVar8 = Global_2606869;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2606868 >= fVar0 && Global_2606868 <= fVar2) && Global_2606869 >= fVar3) && Global_2606869 < (fVar3 + fVar6))
		{
			Global_2606874 = -2;
			if (bParam3)
			{
				func_388(0);
			}
			return;
		}
		if (((Global_2606868 >= fVar0 && Global_2606868 <= fVar2) && Global_2606869 >= (fVar3 + fVar6)) && Global_2606869 < (fVar3 + 0.034722f))
		{
			Global_2606874 = -3;
			if (bParam3)
			{
				func_388(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2606874 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x661705F074A804D1(76, 84);
				unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
				func_351(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26742F01C78031C2();
			}
		}
		Global_2606874 = Global_17290.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2606874 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2606874 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2606874 = -4;
		return;
	}
	Global_2606874 = -1;
}

void func_388(bool bParam0)
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
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0x661705F074A804D1(76, 84);
	unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
	if (Global_2606874 == -2)
	{
		func_351(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2606874 == -3)
	{
		func_351(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26742F01C78031C2();
}

void func_389()
{
	Global_2606870 = Global_2606868;
	Global_2606871 = Global_2606869;
	Global_2606868 = unk_0xF227625A36477D1C(2, 239);
	Global_2606869 = unk_0xF227625A36477D1C(2, 240);
	Global_2606872 = (Global_2606868 - Global_2606870);
	Global_2606873 = (Global_2606869 - Global_2606871);
}

float func_390(float fParam0)
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

void func_391(var uParam0)
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
	func_331(0);
	unk_0xB922891BFD232C45(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_376(uVar0, uVar1, uVar2, uVar3, 1);
	func_375(1, 2, 0, 0, 0);
	func_374(1, 2, 1, 1, 1);
	func_373(0, 1, 0, 0, 0);
	func_372("DARTS_TITLE");
	func_370(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_363(0, 1, 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_363(1, 1, 0);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_362(2, 141, 141, 1);
	func_361(0);
	func_384(0, 1, 1);
	func_383("DARTS_LEGD", 0, 0);
	func_392();
	func_360(201, "ITEM_SELECT", -1, 0);
	func_360(202, "IB_QUIT", -1, 0);
}

void func_392()
{
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xFA70B2A43E5DD8ED(0.325f, 0.3f);
	}
}

int func_393(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_416() && unk_0x31CD6E9F83C10233() >= iLocal_347 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x5114FCEE2A997B95() && !unk_0x229840854A80E0D9())
		{
			unk_0x8351F65655759E0C(500);
		}
	}
	if (unk_0x5114FCEE2A997B95() && *iParam0 != 8)
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
						iLocal_347 = unk_0x31CD6E9F83C10233();
						func_401(uParam1->f_1, uParam1->f_4, func_403(2), func_402(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_272(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_259(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_420(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_409(uParam5) > 1f && !func_289("DARTS_DOUBLE_T"))
					{
						func_404("DARTS_DOUBLE_T", -1);
					}
					if (func_409(uParam5) > 5f)
					{
						func_420(uParam5);
						unk_0x8C361F37C04084F4(1);
						func_395(uParam1->f_1, uParam1->f_4, func_403(3), func_402(0), 1000);
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
					if (!unk_0x0B7CA263460475D0(uLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_272(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_259(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_420(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_409(uParam5) > 1f && !func_289("DARTS_TRIPLE_T"))
					{
						func_404("DARTS_TRIPLE_T", -1);
					}
					if (func_409(uParam5) > 5f)
					{
						func_420(uParam5);
						unk_0x8C361F37C04084F4(1);
						func_401(uParam1->f_1, uParam1->f_4, func_403(4), func_402(0), 1000, 0);
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
					if (!unk_0x0B7CA263460475D0(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_272(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_259(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x4DF52B0CF393442F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_420(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_409(uParam5) > 1f && !func_289("DARTS_BULL_T"))
					{
						func_404("DARTS_BULL_T", -1);
					}
					if (func_409(uParam5) > 5f)
					{
						func_420(uParam5);
						unk_0x8C361F37C04084F4(1);
						unk_0x18F1BFAF88AC511B(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_395(uParam1->f_1, uParam1->f_4, func_403(5), func_402(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x0B7CA263460475D0(uLocal_128) && !func_289("DARTS_DBL_WIN"))
			{
				func_404("DARTS_DBL_WIN", -1);
			}
			if (func_409(uParam5) > 6f)
			{
				func_420(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x18F1BFAF88AC511B(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xD0E2527DD961F86C(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x0B7CA263460475D0(uLocal_120))
			{
				iLocal_31 = 0;
				unk_0x8C361F37C04084F4(1);
				unk_0x27FC4121D73AF604();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_394(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x5114FCEE2A997B95())
			{
				iLocal_31 = 0;
				unk_0x8C361F37C04084F4(1);
				unk_0x27FC4121D73AF604();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_394(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x55CC07D5416539C8(uLocal_120, 1);
				unk_0x18D7C8000EDEAAB4(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_394(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0x0A69FBBF51E1A08F(*uParam0, Var0, 1, 0, 0, 1);
		unk_0x4738E36A70E50A92(uParam0);
		unk_0xF2EFF31F204F4A7D(uParam0);
	}
}

void func_395(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0xAEF31518B1C24BD9(uLocal_128);
	unk_0x990E6357D338A9C8(uLocal_128, 35f);
	unk_0x9DCCF01CC7010892(uLocal_128, unk_0x261E7847B591A8DC(Param0, fParam3, Param4));
	unk_0x2E8AC89F9A70DEC3(uLocal_128, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0xD0E2527DD961F86C(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_396(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_406(&(uParam0->f_2)))
	{
		func_420(&(uParam0->f_2));
	}
	unk_0xBD1C47D856010F09(14);
	if (!bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x9148803485DEDF45(2, 201))
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
		func_407(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_397(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_398(iParam5);
	unk_0xEBD23F68B1A617FC(*uParam0, "RESET_MOVIE");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(*uParam0, sVar0);
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0xDBB8FCB00B701798(iParam4);
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x32F9127910F63DFA(100);
		unk_0xE8240315678FDE8E(true);
	}
	unk_0x1C703A54AB4B12F6();
	if (bParam6)
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "TRANSITION_UP");
		unk_0x90495002CD46BD88(iParam7);
		unk_0x1C703A54AB4B12F6();
	}
	func_420(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_398(int iParam0)
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

void func_399()
{
	unk_0x55CC07D5416539C8(uLocal_120, 1);
	unk_0x087893C6FCE21842(1, false, 3000, 1, 0, 0);
	if (unk_0x63D9209D70E2F5D5(uLocal_127))
	{
		unk_0x55CC07D5416539C8(uLocal_127, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_122))
	{
		unk_0x55CC07D5416539C8(uLocal_122, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_123))
	{
		unk_0x55CC07D5416539C8(uLocal_123, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_124))
	{
		unk_0x55CC07D5416539C8(uLocal_124, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_125))
	{
		unk_0x55CC07D5416539C8(uLocal_125, 0);
	}
	if (unk_0x63D9209D70E2F5D5(uLocal_126))
	{
		unk_0x55CC07D5416539C8(uLocal_126, 0);
	}
}

char* func_400(int iParam0)
{
	if (iLocal_358 == 1)
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
	else if (iLocal_358 == 2)
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

void func_401(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0xAEF31518B1C24BD9(uLocal_127);
	unk_0x990E6357D338A9C8(uLocal_127, 35f);
	unk_0x9DCCF01CC7010892(uLocal_127, unk_0x261E7847B591A8DC(Param0, fParam3, Param4));
	unk_0x2E8AC89F9A70DEC3(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0x55CC07D5416539C8(uLocal_127, 1);
	}
	else
	{
		unk_0xD0E2527DD961F86C(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_402(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_403(int iParam0)
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

void func_404(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_405(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(func_483(), 0))
	{
		func_4(func_483(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_406(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_407(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_408(var uParam0, char* sParam1, int iParam2)
{
	unk_0x4A5113B7E65C8C80(uParam0, sParam1, func_6(iParam2), 1);
}

float func_409(var uParam0)
{
	if (func_406(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_410(var uParam0)
{
	if (!func_406(uParam0))
	{
		func_357(uParam0);
	}
	else
	{
		func_420(uParam0);
	}
}

void func_411()
{
	Global_14611 = 0;
	func_412();
}

void func_412()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_413(int iParam0)
{
	if (Global_14604)
	{
		func_415(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_414())
	{
		Global_14443.f_1 = 3;
	}
}

int func_414()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_415(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_416()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0xD887E21676314450(0, 18) || unk_0xD887E21676314450(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_417(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x7899A2987EB03783();
	if (unk_0x76B3C79DE564AFC6(uVar0))
	{
		if (!func_418(iVar0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0x830CAE5496B8AD6B(iVar0, unk_0x0031992CA618A445(), Local_316, 0, 1, 0))
			{
				unk_0x42497AE28396017C(iVar0);
				unk_0x33808CAFB62A256D(iVar0, 0, 0);
				unk_0x477513BFF4F0CEC1(iVar0, 0, 0);
				unk_0x1F18D3C78C8C1A11(iVar0, 1);
				unk_0x1581691D748490F3(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(iParam0))
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

void func_419(var uParam0, int iParam1)
{
	iParam1++;
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x1C703A54AB4B12F6();
}

void func_420(var uParam0)
{
	func_421(uParam0, 0f);
}

void func_421(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_422(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_423(var uParam0, var uParam1, char* sParam2)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(uParam1);
	func_34(sParam2);
	unk_0x1C703A54AB4B12F6();
}

void func_424(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(func_483()) && !unk_0x8682D8A6269E52C9(func_483()))
	{
		unk_0x38396C255EC4D248(func_483());
	}
	else
	{
		if (unk_0x76B3C79DE564AFC6(uParam8->f_5) && !unk_0x8682D8A6269E52C9(uParam8->f_5))
		{
			unk_0x1581691D748490F3(uParam8->f_5, 1, 1);
			uLocal_319[1] = uParam8->f_5;
			unk_0xD706D9D85701BFBD(uLocal_319[1]);
		}
		else if (func_426(uParam7))
		{
			unk_0xD706D9D85701BFBD(uLocal_319[1]);
		}
		else
		{
			uLocal_319[1] = unk_0x5618B819E5B9C053(26, iLocal_355, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0x8B0523D9EF9595C2(uLocal_319[1], "Darts_name"))
		{
			iVar0 = unk_0x9E69E04AC6AD5C49(uLocal_319[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_415 = func_429("RAYMOND");
				iLocal_416 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_415 = func_429("JOHAN");
				iLocal_416 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_415 = func_429("STAN");
				iLocal_416 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_415 = func_429("VINCE");
				iLocal_416 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_415 = func_429("KRISTY");
				iLocal_416 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_415 = func_429("MARLENE");
				iLocal_416 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_415 = func_429("LORIE");
				iLocal_416 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_415 = func_429("SHELLEY");
				iLocal_416 = -863218904;
			}
		}
		unk_0x2EDC8603BB24D464(uLocal_319[1], "Darts_name", iLocal_416);
	}
	iVar1 = unk_0xE9559A12052415BE(uLocal_319[1]);
	func_425(iVar1);
	unk_0x3933C434ECC3BB69(uLocal_319[1], uLocal_319[0], 0);
	unk_0x3933C434ECC3BB69(uLocal_319[0], uLocal_319[1], 0);
}

void func_425(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 2);
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

int func_426(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), uParam0, -1))
	{
		if (!unk_0x8682D8A6269E52C9((*uParam0)[iVar0]))
		{
			if ((((((unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0xE9559A12052415BE((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x1581691D748490F3((*uParam0)[iVar0], 1, 1);
				uLocal_319[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 3;
		while (iVar0 <= (150 - 1))
		{
			if (func_428(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_428(int iParam0)
{
	if (!func_82(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_429(char* sParam0)
{
	if (unk_0x2DA8A432EC3C3D33() == 7)
	{
		if (unk_0xB3404E397FF56B3B(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xB3404E397FF56B3B(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_430(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		uParam0->f_4 = unk_0x69F9721375CE60CF(*uParam0);
	}
	if (!bParam3)
	{
		func_432(uParam1, uParam0);
	}
	Local_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	Local_82 = { Local_82 + Local_56 };
	Local_79 = { unk_0x261E7847B591A8DC(uParam0->f_1, uParam0->f_4, Local_82) };
	func_431(uParam2, uParam0);
}

void func_431(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_56 };
	*uParam0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_432(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { unk_0x261E7847B591A8DC(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_433(var uParam0, var uParam1)
{
	if (!unk_0x1F1D255CB6501243("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0x1F1D255CB6501243("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x772F801619C83779(iLocal_28) || !unk_0x772F801619C83779(iLocal_29)) || !unk_0x772F801619C83779(iLocal_60)) || !unk_0x772F801619C83779(iLocal_355)) || !unk_0x77FA56883245AD26(*uParam0)) || !unk_0x77FA56883245AD26(uParam1->f_645)) || !unk_0x77FA56883245AD26(uParam1->f_57)) || !unk_0x77FA56883245AD26(uParam1->f_62)) || !unk_0xF376F1492C8D737F(3)) || !unk_0xB56F0E1C89B9E069("Darts")) || !unk_0xB3379AC2E71D1E7E(sLocal_417)) || !unk_0xB3379AC2E71D1E7E(sLocal_418)) || !func_434(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_434(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_328(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x1D69C39ECF71C85C(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x880B947519D91525(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x59B2F61C9D01132B("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB56F0E1C89B9E069("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x59B2F61C9D01132B("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB56F0E1C89B9E069("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_435(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_435(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				*uParam0 = unk_0xB1E69EFAB6CB45A3(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x77FA56883245AD26(*uParam0))
					{
						uParam0->f_8 = unk_0x31CD6E9F83C10233();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_8 = unk_0x31CD6E9F83C10233();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x77FA56883245AD26(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_436(var uParam0, var uParam1)
{
	unk_0xBE91026C1FC72180(iLocal_28);
	unk_0xBE91026C1FC72180(iLocal_29);
	unk_0xBE91026C1FC72180(iLocal_60);
	unk_0xBE91026C1FC72180(iLocal_355);
	unk_0x59B2F61C9D01132B("Darts", 0);
	unk_0x59B2F61C9D01132B("ShopUI_Title_Darts", 0);
	unk_0x9F62787D280BF2EC(sLocal_417);
	unk_0x9F62787D280BF2EC(sLocal_418);
	*uParam0 = unk_0xB1E69EFAB6CB45A3("darts_scoreboard");
	uParam1->f_645 = func_182();
	uParam1->f_57 = func_438();
	uParam1->f_62 = func_437();
	unk_0x1D69C39ECF71C85C("DARTS", 3);
}

var func_437()
{
	return unk_0xB1E69EFAB6CB45A3("MIDSIZED_MESSAGE");
}

var func_438()
{
	return unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
}

void func_439(var uParam0, int iParam1, struct<3> Param2, float fParam5)
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
	if (!func_440(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0x261E7847B591A8DC(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_440(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61.f_0 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (unk_0x3CCF948E5BFC63FE())
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

void func_442(var uParam0, int iParam1)
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

void func_443()
{
	int iVar0;
	
	unk_0x5B96F424DF975F3A();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_444(struct<3> Param0, float fParam3)
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
	
	fLocal_134 = unk_0x5E61619C36D9095B(0);
	fVar21 = 30f;
	fVar21 = func_390(fLocal_134);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0x3CCF948E5BFC63FE())
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
	Var3 = { unk_0x261E7847B591A8DC(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0x261E7847B591A8DC(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0x261E7847B591A8DC(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0x261E7847B591A8DC(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = unk_0x6BE82EFE6EE60BF4(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_121 = unk_0x6BE82EFE6EE60BF4(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_122 = unk_0x6BE82EFE6EE60BF4(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_123 = unk_0x6BE82EFE6EE60BF4(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_124 = unk_0x6BE82EFE6EE60BF4(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0x6BE82EFE6EE60BF4(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0x6BE82EFE6EE60BF4(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_128 = unk_0x6BE82EFE6EE60BF4(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0x6BE82EFE6EE60BF4(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0x990E6357D338A9C8(uLocal_122, 43.35f);
	unk_0x990E6357D338A9C8(uLocal_123, 42.35f);
	unk_0xE983D49A61E9F0FF(uLocal_122, "HAND_SHAKE", 0.1f);
	unk_0xE983D49A61E9F0FF(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_445(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x76B3C79DE564AFC6(uParam1->f_4))
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

void func_446()
{
	Global_17151.f_6 = 1;
}

void func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_25466, iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_25466, iParam0);
	}
}

var func_448(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_449(iParam0, iParam1);
	unk_0x2553A7EB99AABF55(uVar1, &uVar0, -1);
	return uVar0;
}

var func_449(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_450(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_450(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_451(bool bParam0)
{
	if (bParam0)
	{
		func_452();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_39(0))
		{
			func_413(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_452()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_453(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x10B4620291F10FEF(1);
	func_251(8);
	func_304();
	if (bLocal_329)
	{
		func_471(&uLocal_345);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_394(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x9793B48C4C8275F8(iLocal_28);
	unk_0x9793B48C4C8275F8(iLocal_29);
	if (!unk_0x8682D8A6269E52C9(uLocal_319[0]) && !unk_0x8682D8A6269E52C9(uLocal_319[1]))
	{
		unk_0xCFA3B07B6CEEF62C(uLocal_319[0]);
		unk_0xCFA3B07B6CEEF62C(uLocal_319[1]);
	}
	func_470();
	unk_0x9793B48C4C8275F8(iLocal_60);
	func_469();
	func_468(uParam1->f_645);
	func_467(&(uParam1->f_57));
	if (!unk_0x7A6C051038031EFA(func_483(), 0))
	{
		unk_0xBF00F993DA29A169(func_483(), func_466());
		func_465(iLocal_353, iLocal_354);
	}
	else
	{
		func_463(&(uLocal_319[1]));
	}
	func_451(0);
	func_462(uParam2);
	func_36(0);
	unk_0xC030DF4B187326D7(15);
	if (unk_0xED5FFF2E0422067E())
	{
		if (iParam0->f_460 && !iLocal_343)
		{
			func_461(190, 0);
		}
	}
	func_93();
	func_443();
	func_85(&(uParam1->f_72));
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_336)
	{
		func_457(130, 0, 0);
		func_454();
	}
	func_447(23, 0);
	unk_0xBEE2834559A8897A();
}

void func_454()
{
	func_455();
}

int func_455()
{
	if (func_456(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_456(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_457(int iParam0, int iParam1, int iParam2)
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
		func_460((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = iParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_458();
	}
}

void func_458()
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
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_76(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_459() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_455();
				}
			}
		}
	}
}

int func_459()
{
	return Global_25222;
}

int func_460(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_343();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_461(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0xED5FFF2E0422067E())
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
	if (func_212(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		unk_0x2AFDA789DC65D05E(103, iLocal_151[1], 0f);
		unk_0x2AFDA789DC65D05E(99, iLocal_151[2], 0f);
		unk_0x2AFDA789DC65D05E(109, iLocal_151[3], 0f);
		unk_0x2AFDA789DC65D05E(106, iLocal_151[5], 0f);
		unk_0x2AFDA789DC65D05E(2, iLocal_151[10], 0f);
		unk_0x2AFDA789DC65D05E(107, iLocal_151[8], 0f);
		unk_0x2AFDA789DC65D05E(116, iLocal_151[6], 0f);
	}
}

void func_462(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x7F165E259CFAC8B8(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(false);
			unk_0x1C703A54AB4B12F6();
		}
		unk_0x7F165E259CFAC8B8(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xCF304E352457AD63(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71053)
	{
		if (!unk_0xE33BF8B30BC14A7C(unk_0xED1168B8D2D313FA()))
		{
			if (!Global_71054)
			{
				if (unk_0x5114FCEE2A997B95() && !func_456(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_36(0);
}

void func_463(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0) && !unk_0x8682D8A6269E52C9(*uParam0))
	{
		unk_0x1F5B34056C3CB80B(&uLocal_356);
		unk_0x173325AAF2CD766A(&uLocal_356);
		if (unk_0x76B3C79DE564AFC6(uLocal_319[0]))
		{
			unk_0x43EC517AF665D2B9(0, uLocal_319[0], 8000, 2049, 3);
		}
		unk_0x9B18650A8523389D(0, 1000);
		if (bLocal_334)
		{
			if (!unk_0x2A3398C6222EB190(Global_104400, 10))
			{
				unk_0x276406356F4120BB(0, func_464(iLocal_358 == 2, Local_399, Local_405), 1f, 20000, 0.25f, 0, func_112(iLocal_358 == 2, fLocal_409, fLocal_411));
			}
			else
			{
				unk_0x276406356F4120BB(0, func_464(iLocal_358 == 2, Local_396, Local_402), 1f, 20000, 0.25f, 0, func_112(iLocal_358 == 2, fLocal_408, fLocal_410));
			}
			unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x276406356F4120BB(0, func_464(iLocal_358 == 2, Local_396, Local_402), 1f, 20000, 0.25f, 0, func_112(iLocal_358 == 2, 172.6813f, 142.6717f));
			unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0xF81AD3C937316CCA(uLocal_356);
		unk_0xEDD5437C49B7B1F8(*uParam0, uLocal_356);
		unk_0x390D16BCBFB23E1A(*uParam0, 1);
	}
	unk_0x9793B48C4C8275F8(iLocal_355);
}

Vector3 func_464(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_465(int iParam0, var uParam1)
{
	if (Global_88733 == iParam0)
	{
		Global_88734 = Global_88733;
		Global_88735 = uParam1;
		Global_88733 = 23;
	}
}

var func_466()
{
	return unk_0xC95BCBF0579C6F1A(unk_0xED1168B8D2D313FA());
}

void func_467(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0x7F165E259CFAC8B8(uParam0);
		*uParam0 = 0;
	}
}

void func_468(var uParam0)
{
	unk_0x7F165E259CFAC8B8(&uParam0);
}

void func_469()
{
	unk_0x8C361F37C04084F4(1);
	unk_0xD3254A56D0C37068(0);
	unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	unk_0x4C4F62CD43971CED(1);
}

void func_470()
{
	if (unk_0x76B3C79DE564AFC6(uLocal_59))
	{
		unk_0xF2EFF31F204F4A7D(&iLocal_59);
	}
}

void func_471(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x76B3C79DE564AFC6(uVar0))
	{
		if (!func_418(iVar0))
		{
			unk_0x33808CAFB62A256D(iVar0, 1, 0);
			unk_0x477513BFF4F0CEC1(iVar0, 1, 0);
			unk_0x1F18D3C78C8C1A11(iVar0, 0);
		}
	}
}

void func_472()
{
	int iVar0;
	
	if (unk_0xBE2C96D0FF6F8282("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104439.f_8946 || func_456(0))
	{
		if (!func_480())
		{
			iVar0 = func_479();
			if (iVar0 != -1)
			{
				if (!func_474(iVar0))
				{
					return;
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_83659[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_473();
		}
	}
}

void func_473()
{
	Global_92797 = 1;
	if (unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1))
	{
		if (unk_0x0BD3CCFB6C6CFA91(&Global_71017))
		{
			switch (func_80())
			{
				case 0:
					StringCopy(&Global_71017, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71017, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71017, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71021, "", 16);
		}
		Global_92797 = 0;
	}
	else if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x0BD3CCFB6C6CFA91(&Global_71017))
		{
			switch (func_80())
			{
				case 0:
					StringCopy(&Global_71017, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71017, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71017, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71021, "", 16);
		}
		Global_92797 = 0;
		unk_0xCD7E92DE2BFA0B0D(&(Global_92762.f_20), 25);
	}
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_473();
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		unk_0xFA4590DB4BC7D896(5000);
	}
	iVar0 = Global_83659[iParam0 /*5*/];
	iVar1 = Global_71054.f_109[iVar0 /*4*/];
	func_478(iVar1, 1);
	unk_0x0A1813BDA90AC2EB(unk_0x3D35F9864E4640B1());
	unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
	func_475(&(Global_104439.f_2244.f_539), iVar1);
	if (Global_87082 == Global_92799)
	{
		Global_104439.f_8946.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x2A3398C6222EB190(Global_83695[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0x4FE3D138860DAC8B(0);
		}
	}
	Global_104439.f_8946.f_330[iVar1 /*6*/].f_2++;
	Global_87082 = Global_92799;
	if (iParam0 == -1)
	{
		if (Global_104439.f_8946)
		{
		}
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_83659[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_83659[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_475(var uParam0, int iParam1)
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
		iVar1 = Global_104439.f_18394[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_477(Global_104439.f_18394[iVar0], &Var2, &fVar5))
			{
				Global_104439.f_18394[iVar0] = 318;
				func_476(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90297[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_9 = 0f;
				Global_90297[iVar0 /*29*/].f_12 = 0f;
				Global_90297[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_10 = 0f;
				Global_90297[iVar0 /*29*/].f_13 = 0f;
				Global_90297[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_11 = 0f;
				Global_90297[iVar0 /*29*/].f_14 = 0f;
				Global_90297[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_26 = 0f;
				Global_90297[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_27 = 0f;
				Global_90297[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_476(var uParam0)
{
	*uParam0 = -15;
}

int func_477(int iParam0, var uParam1, float fParam2)
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
			return func_477(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_477(8, uParam1, fParam2);
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

void func_478(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86892[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86892[iParam0 /*2*/] = 0;
	}
}

int func_479()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x2A3398C6222EB190(Global_83659[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_480()
{
	if (((Global_92762 == 13 || Global_92762 == 10) || Global_92762 == 11) || Global_92762 == 12)
	{
		return 0;
	}
	return 1;
}

void func_481(int iParam0, bool bParam1)
{
	if (unk_0x8682D8A6269E52C9(func_483()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x03F0ADE460FD95F9(func_483(), func_466()))
		{
			return;
		}
		if (!unk_0x8682D8A6269E52C9(func_482()))
		{
			if (!unk_0x03F0ADE460FD95F9(func_482(), func_466()))
			{
				return;
			}
		}
	}
	if (Global_88733 == 23)
	{
		Global_88735 = 10;
		Global_88733 = iParam0;
	}
}

var func_482()
{
	return Global_88740;
}

int func_483()
{
	return Global_88739;
}

void func_484()
{
	if (iLocal_314 == 1)
	{
		return;
	}
	func_304();
	unk_0xAA812BAAC452981B("Darts");
	iLocal_314 = 1;
}

int func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


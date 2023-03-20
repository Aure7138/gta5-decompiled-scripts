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
	var uLocal_248 = 10;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 2;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 8;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 8;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	float fLocal_281 = 0f;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	float fLocal_288 = 0f;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	var uLocal_296[2] = { 0, 0 };
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	bool bLocal_307 = 0;
	bool bLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	bool bLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	bool bLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	bool bLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
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
	var uLocal_366 = 0;
	struct<3> Local_367 = { 0, 0, 0 } ;
	struct<3> Local_370 = { 0, 0, 0 } ;
	struct<3> Local_373 = { 0, 0, 0 } ;
	struct<3> Local_376 = { 0, 0, 0 } ;
	struct<3> Local_379 = { 0, 0, 0 } ;
	struct<3> Local_382 = { 0, 0, 0 } ;
	float fLocal_385 = 0f;
	float fLocal_386 = 0f;
	float fLocal_387 = 0f;
	float fLocal_388 = 0f;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	char* sLocal_391 = NULL;
	char* sLocal_392 = NULL;
	int iLocal_393 = 0;
	char* sLocal_394 = NULL;
	char* sLocal_395 = NULL;
	char* sLocal_396[3] = { NULL, NULL, NULL };
	char* sLocal_400[3] = { NULL, NULL, NULL };
	char* sLocal_404[3] = { NULL, NULL, NULL };
	char* sLocal_408[3] = { NULL, NULL, NULL };
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
	fLocal_281 = ((0.05f + 0.275f) - 0.01f);
	fLocal_284 = -0.05f;
	fLocal_285 = 0.92f;
	fLocal_286 = 1.94f;
	fLocal_287 = 2.99f;
	fLocal_288 = 3.7f;
	Local_293 = { 500f, 500f, 500f };
	bLocal_308 = true;
	Local_373 = { -573.1373f, 294.0269f, 78.1765f };
	Local_376 = { -574.1169f, 292.7964f, 78.1766f };
	Local_379 = { 1995.295f, 3050.084f, 46.91535f };
	Local_382 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_385 = 172.6813f;
	fLocal_386 = 274.5094f;
	fLocal_387 = 142.6717f;
	fLocal_388 = 44.8785f;
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
	sLocal_394 = "facials@gen_female@variations@happy";
	switch (func_481(unk_0xD5A676B97920D126()))
	{
		case 0:
			sLocal_395 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_395 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_395 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_396[0] = "mood_happy_1";
	sLocal_396[1] = "mood_happy_2";
	sLocal_396[2] = "mood_happy_3";
	sLocal_400[0] = "darts_outro_01_guy1";
	sLocal_400[1] = "darts_outro_02_guy2";
	sLocal_400[2] = "darts_outro_03_guy2";
	sLocal_404[0] = "darts_outro_01_guy2";
	sLocal_404[1] = "darts_outro_02_guy1";
	sLocal_404[2] = "darts_outro_03_guy1";
	sLocal_408[0] = "darts_outro_01_cam";
	sLocal_408[1] = "darts_outro_02_cam";
	sLocal_408[2] = "darts_outro_03_cam";
	uLocal_296[0] = unk_0xD5A676B97920D126();
	bLocal_311 = true;
	Var1777 = { 1992.293f, 3050.583f, 47.98973f };
	Var1780 = { -572.0406f, 294.1958f, 79.9374f };
	func_480();
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		iLocal_335 = 1;
		switch (unk_0x7BC26452241AC7C9(0, 2))
		{
			case 0:
				iLocal_332 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_332 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_330 = 10;
		unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0x7887B64A08364778(ScriptParam_0.f_4))
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (iLocal_335 == 2)
			{
				ScriptParam_0 = { Var1780 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1777 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x7974087FFB309CBC(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0x722BCBA6950595C0(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0xB7B5DA5448842E8A(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1783, 0);
				ScriptParam_0.f_3 = Var1783.f_2;
			}
		}
	}
	else
	{
		Var1783 = { unk_0xC086F8D75730FA3A(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0xB529B2A4B7C64D6D(func_479(), 0))
	{
		func_477(iLocal_330, 1);
		if (unk_0x6A0583ECFCCECC9B(func_479(), 0))
		{
			unk_0xE9148EE8AA200B60(func_479(), 0, 0);
		}
		uLocal_296[1] = func_479();
	}
	else
	{
		unk_0x52A56383568A954B(1);
	}
	if (unk_0x2170E7BC25114A22(67))
	{
		func_468();
		func_449(&Var0, &Var508, &Var1191);
	}
	unk_0x44C6B5E0B96902FC(0);
	unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
	func_447(1);
	iLocal_326 = func_444(func_481(uLocal_296[0]), 1);
	fVar1775 = (unk_0xBBDA792448DB5A89(iLocal_326) / 100f);
	fVar1776 = (fVar1775 * 1200f);
	iLocal_142 = unk_0xF2DB717A73826179(fVar1776);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_443(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x7FE30C99EA3439F7(2);
		unk_0xC7E06EC513BE0881();
		unk_0xEEA4569186F59D9E(15, 0f, -0.0375f);
		if (iLocal_318 && Var0.f_0 < 13)
		{
			unk_0x34BF712F5682520C(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0x00B5B0B68211D89B(ScriptParam_0.f_5) && !unk_0x7887B64A08364778(func_479())) || (unk_0x7887B64A08364778(func_479()) && unk_0x00B5B0B68211D89B(func_479())))
		{
			func_449(&Var0, &Var508, &Var1191);
		}
		if (!unk_0x00B5B0B68211D89B(uLocal_296[0]))
		{
			unk_0x12A60388636C9B1C(uLocal_296[0], 239, 1);
			unk_0x12A60388636C9B1C(uLocal_296[0], 124, 1);
			func_442();
			unk_0x2DB20D28D6E69A06(0);
			unk_0x2DB20D28D6E69A06(2);
			iVar1774 = 0;
			while (iVar1774 < unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar1802, -1))
			{
				if (uVar1802[iVar1774] != uLocal_296[1])
				{
					if (!unk_0x00B5B0B68211D89B(uVar1802[iVar1774]))
					{
						unk_0x12A60388636C9B1C(uVar1802[iVar1774], 240, 1);
					}
				}
				iVar1774++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x04890EB0282525A5(1);
					func_441(&(Var0.f_243), &ScriptParam_0);
					func_440(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x7887B64A08364778(Var0.f_243))
					{
						Local_367 = { unk_0x7E140C583F91AE2B(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_370 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = unk_0xAEBECA050C9EB021(26379945, Local_367, Local_370, 65f, 0, 2);
						unk_0xBA44410A0086D31F(uLocal_129, 30f);
					}
					func_439();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
					{
						unk_0x500FFA49AC5ABB1D(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
						{
							unk_0x873418BFBF9A6780(&uLocal_333);
							unk_0x456121A0AAC868D4(&uLocal_333);
							unk_0xE9148EE8AA200B60(0, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_333);
							unk_0x8B06B801B92CEC2D(unk_0xD5A676B97920D126(), uLocal_333);
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
							func_438(&(Var0.f_5[iVar1824 /*79*/][iVar1825 /*26*/]), iVar1824);
							iVar1825++;
						}
						iVar1824++;
					}
					iVar1826 = 0;
					while (iVar1826 < 3)
					{
						func_438(&(Var0.f_164[iVar1826 /*26*/]), 0);
						iVar1826++;
					}
					iVar464 = 2;
					func_437(0);
					func_435(&Var477, iLocal_335, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x7887B64A08364778(Var0.f_243))
					{
						Var1783 = { unk_0x483D90C99A690DBF(Var0.f_243, Var477.f_18) };
					}
					func_432(&Var477, &Var508);
					unk_0x1A81BB3643C9AA8E(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_429(&Var477, &Var508))
					{
						func_426(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_389 = func_481(uLocal_296[0]);
						switch (iLocal_389)
						{
							case 0:
								sLocal_391 = func_425("MICHAEL");
								if (!unk_0xF44A5E894FE76438(Global_101613, 0))
								{
									sVar1792 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_391 = func_425("FRANKLIN");
								bLocal_315 = true;
								if (!unk_0xF44A5E894FE76438(Global_101613, 0))
								{
									sVar1792 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_391 = func_425("TREVOR");
								if (!unk_0xF44A5E894FE76438(Global_101613, 0))
								{
									sVar1792 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0xB529B2A4B7C64D6D(func_479(), 0))
						{
							iLocal_390 = func_481(func_479());
							if (iLocal_390 == 145)
							{
								iLocal_390 = func_423(func_479());
							}
							switch (iLocal_390)
							{
								case 0:
									sLocal_392 = func_425("MICHAEL");
									break;
								
								case 1:
									sLocal_392 = func_425("FRANKLIN");
									break;
								
								case 2:
									sLocal_392 = func_425("TREVOR");
									break;
								
								case 19:
									sLocal_392 = func_425("LAMAR");
									unk_0x5BD2F51088536150(func_479(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_392 = func_425("JIMMY");
									break;
								
								default:
									sLocal_392 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1772 = unk_0x7BC26452241AC7C9(0, 200);
							if (iLocal_335 == 2)
							{
								if (iVar1772 < 51)
								{
									sLocal_392 = func_425("RAYMOND");
									iLocal_393 = 954610991;
								}
								else if (iVar1772 < 101)
								{
									sLocal_392 = func_425("JOHAN");
									iLocal_393 = 94453331;
								}
								else if (iVar1772 < 151)
								{
									sLocal_392 = func_425("STAN");
									iLocal_393 = 1891555423;
								}
								else
								{
									sLocal_392 = func_425("VINCE");
									iLocal_393 = -1067630349;
								}
							}
							else if (iVar1772 < 51)
							{
								sLocal_392 = func_425("KRISTY");
								iLocal_393 = 885327384;
							}
							else if (iVar1772 < 101)
							{
								sLocal_392 = func_425("MARLENE");
								iLocal_393 = -1791000994;
							}
							else if (iVar1772 < 151)
							{
								sLocal_392 = func_425("LORIE");
								iLocal_393 = 1954368234;
							}
							else
							{
								sLocal_392 = func_425("SHELLEY");
								iLocal_393 = -863218904;
							}
						}
						uLocal_59 = unk_0xF21B698F4FCCA3D3(iLocal_60, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x072DF2E7078F229C())
					{
						uVar1823 = unk_0xF21B698F4FCCA3D3(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_420(Var0.f_243.f_4, Var465, &uVar1802, &ScriptParam_0);
						func_418(&Var477, sLocal_391, sLocal_392);
						unk_0x37338B7B7C4982DC(uLocal_296[1]);
						uLocal_334 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							unk_0xD099DEFB49600743(unk_0xD5A676B97920D126(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_417(&(Var0.f_257), 0, unk_0xD5A676B97920D126(), sLocal_391, 0, 1);
						if (unk_0xB529B2A4B7C64D6D(func_479(), 0))
						{
							if (iLocal_335 == 2)
							{
								func_417(&(Var0.f_257), 3, uLocal_296[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_417(&(Var0.f_257), 3, uLocal_296[1], "DartsMelHick1", 0, 1);
							}
							iVar1773 = -1;
						}
						else
						{
							func_417(&(Var0.f_257), 3, func_479(), sLocal_392, 0, 1);
							func_415(&uVar1799);
							iVar1773 = 6;
						}
						if (!unk_0xF44A5E894FE76438(Global_101613, 0))
						{
							iVar1773 = -1;
						}
						else
						{
							iVar1773 = 3;
						}
						func_414(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x00B5B0B68211D89B(uLocal_296[1]) && unk_0x1A77C0702D82B43D(uLocal_296[0])) && !unk_0x6A0583ECFCCECC9B(uLocal_296[0], 1)) && unk_0x1A77C0702D82B43D(uLocal_296[1])) && !unk_0x6A0583ECFCCECC9B(uLocal_296[1], 1))
					{
						bLocal_306 = func_412(&uLocal_322);
						if ((func_411() && unk_0x84A97C70FFDEC0C8() >= iLocal_324 + 1000) && iVar1773 != 9)
						{
							if (!unk_0x7E3640C27B17457C() && !unk_0x83D6BCB493FCFCBA())
							{
								unk_0x0FBCFDA15A0FB2D5(500);
							}
						}
						if (unk_0x7E3640C27B17457C() && iVar1773 != 9)
						{
							func_408(0);
							func_406();
							iVar1773 = 9;
						}
						switch (iVar1773)
						{
							case -1:
								if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
								{
									uLocal_328 = unk_0x0C17C9FDFC9120BD(unk_0x7E140C583F91AE2B(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x714F015B4D2DE1DC(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_334 = unk_0x1A73881FF34FE74D("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x03AFD6D4FDAD7307(uLocal_334, uLocal_328, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x55EB2099508DD1C3(uLocal_334, 1);
									unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
									unk_0x0565F5F2EE81A23F(uLocal_296[0]);
									unk_0x0565F5F2EE81A23F(uLocal_296[1]);
									unk_0x8DA3061503F2C4C8(uLocal_296[0]);
									unk_0x8DA3061503F2C4C8(uLocal_296[1]);
									unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x290A57C93304EF16(uLocal_296[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x290A57C93304EF16(uLocal_296[0], "mini@dartsintro", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x4EA45E31CAE16982(uVar1823, uLocal_328, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_405(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 0:
								if (unk_0xC8FC1161FDD0E597(uLocal_328))
								{
									if (!bVar1769)
									{
										if (func_404(&uVar1799) > 1.5f)
										{
											func_403(uLocal_296[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_402(&uVar1799);
										}
									}
									else if (!unk_0x9A258C41330B5103(uLocal_296[0]))
									{
										if (!bVar1770)
										{
											if (!func_401(&uVar1799))
											{
												func_415(&uVar1799);
											}
											else if (func_404(&uVar1799) > 0.5f)
											{
												func_400(uLocal_296[1]);
												func_402(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_405(&uVar1799);
											func_399("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.25f)
											{
												func_405(&uVar1799);
												func_399("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.55f)
											{
												func_399("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.85f)
											{
												func_399("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.95f)
									{
										iLocal_318 = 1;
										iVar1773++;
									}
									else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.99f)
								{
									if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
									{
										func_396(Var0.f_243.f_1, Var0.f_243.f_4, func_398(2), func_397(0), 0, 1);
										iLocal_31 = 0;
										unk_0x04890EB0282525A5(1);
										unk_0xAF191D67F49B35C9(uLocal_334, 0);
										unk_0x37338B7B7C4982DC(uLocal_296[0]);
										unk_0x37338B7B7C4982DC(uLocal_296[1]);
										unk_0x7CEA05BD33244307(uVar1823, -1000f, 0);
										unk_0x77CEDAB7C44BFD4E(&uVar1823);
										unk_0xB3C38A4B84C152BF(func_395(0));
										func_402(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
								{
									uLocal_328 = unk_0x0C17C9FDFC9120BD(unk_0x7E140C583F91AE2B(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x714F015B4D2DE1DC(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_334 = unk_0x1A73881FF34FE74D("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x03AFD6D4FDAD7307(uLocal_334, uLocal_328, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x55EB2099508DD1C3(uLocal_334, 1);
									unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
									unk_0x0565F5F2EE81A23F(uLocal_296[0]);
									unk_0x0565F5F2EE81A23F(uLocal_296[1]);
									unk_0x8DA3061503F2C4C8(uLocal_296[0]);
									unk_0x8DA3061503F2C4C8(uLocal_296[1]);
									unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x290A57C93304EF16(uLocal_296[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x290A57C93304EF16(uLocal_296[0], "mini@dartsintro_alt1", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x4EA45E31CAE16982(uVar1823, uLocal_328, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_405(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 4:
								if (unk_0xC8FC1161FDD0E597(uLocal_328))
								{
									if (!bVar1769)
									{
										if (func_404(&uVar1799) > 0.5f)
										{
											func_403(uLocal_296[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_402(&uVar1799);
										}
									}
									else if (!unk_0x9A258C41330B5103(uLocal_296[0]))
									{
										if (!bVar1770)
										{
											if (!func_401(&uVar1799))
											{
												func_415(&uVar1799);
											}
											else if (func_404(&uVar1799) > 0.25f)
											{
												func_400(uLocal_296[1]);
												func_402(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.95f)
									{
										iLocal_318 = 1;
										iVar1773++;
									}
									else if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x2C3B61BDCED77B45(uLocal_328) > 0.99f)
								{
									if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
									{
										func_394();
										unk_0xAF191D67F49B35C9(uLocal_334, 0);
										unk_0x37338B7B7C4982DC(uLocal_296[0]);
										unk_0x37338B7B7C4982DC(uLocal_296[1]);
										unk_0x7CEA05BD33244307(uVar1823, -1000f, 0);
										unk_0x77CEDAB7C44BFD4E(&uVar1823);
										unk_0xB3C38A4B84C152BF(func_395(0));
										func_402(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x7E3640C27B17457C())
								{
									iLocal_318 = 1;
									iLocal_31 = 0;
									unk_0x04890EB0282525A5(1);
									if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
									{
										unk_0xBB9A2DB94A862D7A(uLocal_296[0], Var465, 1, 0, 0, 1);
										unk_0x99569FEC2425586D(uLocal_296[0], Var0.f_243.f_4);
										unk_0xBB9A2DB94A862D7A(uLocal_296[1], Var465.f_3, 1, 0, 0, 1);
										unk_0x99569FEC2425586D(uLocal_296[1], Var0.f_243.f_4);
										unk_0x37338B7B7C4982DC(uLocal_296[0]);
										unk_0x37338B7B7C4982DC(uLocal_296[1]);
									}
									unk_0xAF191D67F49B35C9(uLocal_334, 0);
									unk_0x7CEA05BD33244307(uVar1823, -1000f, 0);
									unk_0x77CEDAB7C44BFD4E(&uVar1823);
									if (!unk_0xF44A5E894FE76438(Global_101613, 0))
									{
										func_396(Var0.f_243.f_1, Var0.f_243.f_4, func_398(2), func_397(0), 0, 1);
									}
									else
									{
										func_394();
									}
									unk_0xB3C38A4B84C152BF(func_395(0));
									func_402(&uVar1799);
									unk_0xFF11D473E95357D3(500);
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
							iLocal_324 = unk_0x84A97C70FFDEC0C8();
							if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
							{
								unk_0xBB9A2DB94A862D7A(uLocal_296[0], Var465, 1, 0, 0, 1);
								unk_0x99569FEC2425586D(uLocal_296[0], Var0.f_243.f_4);
								unk_0xBB9A2DB94A862D7A(uLocal_296[1], Var465.f_3, 1, 0, 0, 1);
								unk_0x99569FEC2425586D(uLocal_296[1], Var0.f_243.f_4);
							}
							unk_0xE3E53903AE9B5BD5(func_395(1));
							iVar1773 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_324) > 1500)
							{
								func_392(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1773++;
							}
							break;
						
						case 2:
							if (!func_391(&(Var508.f_57), 1, 0))
							{
								unk_0xE3E53903AE9B5BD5(func_395(1));
								iVar1773 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xF44A5E894FE76438(Global_101613, 0))
					{
						if (func_388(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1796))
						{
							unk_0xB8A73E7DA87B2968(&Global_101613, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x55EB2099508DD1C3(uLocal_120, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x7E3640C27B17457C())
					{
						unk_0xFF11D473E95357D3(500);
					}
					switch (iVar1773)
					{
						case 0:
							if (!unk_0x7887B64A08364778(func_479()))
							{
								if (!unk_0xF44A5E894FE76438(Global_101613, 10))
								{
									unk_0xB8A73E7DA87B2968(&Global_101613, 10);
								}
								else
								{
									unk_0x4EA098C870B73AB7(&Global_101613, 10);
								}
								func_386(&Var508);
								iVar1773++;
							}
							else
							{
								func_386(&Var508);
								iVar1773++;
							}
							break;
						
						case 1:
							if (unk_0x2D337DD29A7ABD30())
							{
								if (fLocal_134 != unk_0x194EA65BE0B4C26F(0))
								{
									fLocal_134 = unk_0x194EA65BE0B4C26F(0);
									unk_0xBA44410A0086D31F(uLocal_120, func_385(fLocal_134));
									unk_0xBA44410A0086D31F(uLocal_121, func_385(fLocal_134));
								}
							}
							if (func_325(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xB3C38A4B84C152BF(func_395(1));
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
						if (Global_101652.f_17913.f_5 >= 5 && Global_101652.f_17913.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_101652.f_17913.f_5 >= 3 && Global_101652.f_17913.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_313(Global_101652.f_17913.f_5, &iLocal_327))
						{
							func_312(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_311(Global_101652.f_17913.f_5);
						fLocal_91 = func_310(Global_101652.f_17913.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
						{
							unk_0x8DA3061503F2C4C8(uLocal_296[1]);
							unk_0xBB9A2DB94A862D7A(uLocal_296[1], Var465.f_3, 1, 0, 0, 1);
							unk_0x99569FEC2425586D(uLocal_296[1], Var0.f_243.f_4);
						}
						if (func_401(&uVar1793))
						{
							func_402(&uVar1793);
						}
						unk_0xE3E53903AE9B5BD5(func_395(2));
						func_309(uLocal_296[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x2D337DD29A7ABD30())
					{
						if (fLocal_134 != unk_0x194EA65BE0B4C26F(0))
						{
							fLocal_134 = unk_0x194EA65BE0B4C26F(0);
							unk_0xBA44410A0086D31F(uLocal_120, func_385(fLocal_134));
							unk_0xBA44410A0086D31F(uLocal_121, func_385(fLocal_134));
						}
					}
					if (!bLocal_316)
					{
						unk_0x49E996A1E39EAAD7("mini@dartsoutro");
						bLocal_316 = true;
					}
					if (!iLocal_317)
					{
						if (bLocal_316)
						{
							if (!unk_0xD7669BF035CDA5F6("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_317 = 1;
							}
						}
					}
					func_227(&Var0, &Var471, &Var477, &Var508, &uVar1793);
					break;
				
				case 11:
					switch (iVar1773)
					{
						case 0:
							if (func_404(&(Var0.f_254)) > 0.5f)
							{
								unk_0x04890EB0282525A5(1);
								unk_0x59C0D363E5A5B548();
								func_226(unk_0xD5A676B97920D126());
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
								fVar1830 = unk_0x194EA65BE0B4C26F(1);
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
								uLocal_328 = unk_0x0C17C9FDFC9120BD(Var1786, Var1789, 2);
								uLocal_334 = unk_0x1A73881FF34FE74D("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x03AFD6D4FDAD7307(uLocal_334, uLocal_328, sLocal_408[iVar1829], "mini@dartsoutro");
								unk_0x55EB2099508DD1C3(uLocal_334, 1);
								unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
								if (!unk_0x00B5B0B68211D89B(uLocal_296[0]) && !unk_0x00B5B0B68211D89B(uLocal_296[1]))
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
										unk_0xA93E75A5493862BD(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_220(&uLocal_296, iVar1831);
										unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsoutro", sLocal_400[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsoutro", sLocal_404[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), sLocal_395, sLocal_396[unk_0x7BC26452241AC7C9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xA93E75A5493862BD(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_219(&uLocal_296);
										unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsoutro", sLocal_400[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsoutro", sLocal_404[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x290A57C93304EF16(uLocal_296[1], sLocal_394, sLocal_396[unk_0x7BC26452241AC7C9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
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
							func_402(&(Var0.f_254));
							iLocal_312 = 0;
							unk_0xB3C38A4B84C152BF(func_395(3));
							func_394();
							if (unk_0xE7E9CC62D1C4C0A8(uLocal_334))
							{
								unk_0xAF191D67F49B35C9(uLocal_334, 0);
							}
							iVar1773 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_404(&(Var0.f_254)) > 0.92f)
					{
						func_39(&Var0, &Var508, &Var477, &Var1191, bVar1768);
					}
					break;
				
				case 13:
					uVar1771 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0xB529B2A4B7C64D6D(func_479(), 0))
					{
						unk_0x37338B7B7C4982DC(uLocal_296[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1773)
					{
						case 0:
							unk_0x37338B7B7C4982DC(uLocal_296[0]);
							if (!bLocal_314)
							{
								unk_0xD08D9B79AF63C59F(0, bLocal_314, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x7CFA1DBFD0DCBF1D(0, 0, 3, 0);
							}
							unk_0xB6AE7C18ADC0F901(0);
							unk_0xCA3B54980FA9D86F(0, 1065353216);
							unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
							unk_0x59C0D363E5A5B548();
							unk_0x0988FFC0C75637DF(uLocal_296[0], uLocal_296[1], 5000, 2049, 3);
							func_415(&uVar1799);
							iVar1773++;
							break;
						
						case 1:
							if (func_7(&uVar1799) > 0.1f)
							{
								if (!bVar1767)
								{
								}
								func_415(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1799) > 0.3f)
							{
								if (!unk_0x00B5B0B68211D89B(uLocal_296[1]))
								{
									if (!bVar1767)
									{
										func_4(uLocal_296[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_415(&uVar1799);
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
					if (unk_0x4A7B4687474BFAAE(2, 201))
					{
						func_1(uLocal_296[1]);
						iLocal_331 = 2;
						bVar1767 = true;
						if (unk_0x0FE8D1B72C1924FE(func_395(2)))
						{
							unk_0xB3C38A4B84C152BF(func_395(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x4A7B4687474BFAAE(2, 202))
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
					func_449(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0x6AAF285DC78E0304())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_312(&(uParam0->f_666), 8, 1);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 16, 0);
			func_312(&(uParam0->f_666), 17, 0);
		}
		unk_0x66FA32D15C0E03CF();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_312(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xB529B2A4B7C64D6D(func_479(), 0) || iParam2)
	{
		func_403(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x063B714A2080E45E(uParam0, sParam1, sParam2, func_6(iParam3), 0);
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
	if (func_401(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x1995B52453EF6537())
	{
		iVar2 = unk_0x7414B386C0020BEC();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xAF48077651290FAC() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xAF48077651290FAC();
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0x1250D50E38843DBF(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x939C04EA09508995(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
		{
			unk_0x82047209FE8411F9(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
			}
		}
	}
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(19);
	unk_0x2A29D86854DC4BC0(2, 19, 1);
	unk_0x2A29D86854DC4BC0(0, 37, 1);
	unk_0x2A29D86854DC4BC0(0, 21, 1);
	unk_0x2A29D86854DC4BC0(0, 28, 1);
	unk_0x2A29D86854DC4BC0(0, 29, 1);
	unk_0x2A29D86854DC4BC0(0, 171, 1);
	func_37();
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (unk_0x88DE2C3A7004EC07() || (unk_0x7E3640C27B17457C() && !unk_0xF9B8AB338DC56ADD()))
		{
			unk_0x3FCD624098F3BEED();
		}
	}
	Global_36327 = 1;
	if (!uParam0->f_563)
	{
		switch (func_481(unk_0x4572B13EE70C8F52(unk_0xF3F8195C98263BF5())))
		{
			case 1:
				unk_0xAAD655F2351CC4B7("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xAAD655F2351CC4B7("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xAAD655F2351CC4B7("SuccessMichael", 1000, 0);
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
		uParam0->f_560 = (uParam0->f_560 + func_36(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_36(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_36((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_36(30f) - func_36(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_35(1);
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
					unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xBBAAC5B2437ACF2A();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "TRANSITION_OUT");
			unk_0xBBAAC5B2437ACF2A();
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
			if (unk_0x02F62AA408F2D854(2))
			{
				if (unk_0x52622CA85B1C304B(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x3CEEA45E4779F6BD(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x52622CA85B1C304B(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xBBAAC5B2437ACF2A();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xBBAAC5B2437ACF2A();
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
					unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xBBAAC5B2437ACF2A();
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
					if (unk_0x3CEEA45E4779F6BD(2, 215))
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
				func_35(0);
			}
			return !bVar0;
		}
	}
	func_35(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "CLEAR_ALL");
	unk_0xBBAAC5B2437ACF2A();
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x2C310F11D2096992(true);
		unk_0xBBAAC5B2437ACF2A();
	}
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(0);
	func_13(unk_0xE78ECEC3BC74DC0C(2, 215, true));
	func_12("ES_HELP");
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0x2C310F11D2096992(true);
		unk_0x1B215CC37BF52E79(215);
	}
	unk_0xBBAAC5B2437ACF2A();
	if (bParam1)
	{
		unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x1B215CC37BF52E79(1);
		func_13(unk_0xE78ECEC3BC74DC0C(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0x2D337DD29A7ABD30())
		{
			unk_0x2C310F11D2096992(true);
			unk_0x1B215CC37BF52E79(216);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xBBAAC5B2437ACF2A();
}

void func_12(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_13(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
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
	fVar1 = (func_34() * 0.25f);
	if (unk_0x52622CA85B1C304B(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				func_12(&(uParam0->f_13));
				if (unk_0x1995B52453EF6537())
				{
					unk_0x1B215CC37BF52E79(150);
				}
				else
				{
					unk_0x1B215CC37BF52E79(100);
				}
				unk_0x2C310F11D2096992(true);
				unk_0x1B215CC37BF52E79(uParam0->f_56);
				unk_0x2C310F11D2096992(bParam2);
				unk_0x1B215CC37BF52E79(69);
				unk_0xBBAAC5B2437ACF2A();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x3B6EF6403E3F1CAC(uParam0->f_1, "TRANSITION_UP");
				unk_0x573CAEB6F4A4E750(0.15f);
				unk_0x2C310F11D2096992(true);
				unk_0xBBAAC5B2437ACF2A();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x131F832AD6923854(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_36((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_34());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_32(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0x194EA65BE0B4C26F(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_32(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_34()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (uParam0->f_556 == 3)
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
	unk_0x4214C5222DAB7698(2, 215);
	unk_0x4214C5222DAB7698(2, 216);
	unk_0x4214C5222DAB7698(2, 200);
	unk_0x2A29D86854DC4BC0(2, 200, 1);
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
			if (unk_0x7E3640C27B17457C())
			{
				unk_0x517E18EC5A3C4790();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x7FE30C99EA3439F7(7);
				unk_0x7FE30C99EA3439F7(8);
				unk_0x7FE30C99EA3439F7(9);
				unk_0x7FE30C99EA3439F7(6);
				unk_0x131F832AD6923854(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x2A29D86854DC4BC0(0, 140, 1);
				unk_0x2A29D86854DC4BC0(0, 141, 1);
				unk_0x2A29D86854DC4BC0(0, 142, 1);
				unk_0x2A29D86854DC4BC0(2, 188, 1);
				if (unk_0x55EB9D945CFDA4D8(2, 188))
				{
					unk_0xA93E75A5493862BD(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xA93E75A5493862BD(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x2A29D86854DC4BC0(2, 187, 1);
				if (unk_0x55EB9D945CFDA4D8(2, 187))
				{
					unk_0xA93E75A5493862BD(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xA93E75A5493862BD(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x2A29D86854DC4BC0(2, 202, 1);
				if (unk_0x55EB9D945CFDA4D8(2, 202))
				{
					unk_0xA93E75A5493862BD(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xA93E75A5493862BD(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x7FE30C99EA3439F7(7);
				unk_0x7FE30C99EA3439F7(8);
				unk_0x7FE30C99EA3439F7(9);
				unk_0x7FE30C99EA3439F7(6);
				unk_0x2A29D86854DC4BC0(0, 140, 1);
				unk_0x2A29D86854DC4BC0(0, 141, 1);
				unk_0x2A29D86854DC4BC0(0, 142, 1);
				if (unk_0x3CEEA45E4779F6BD(2, 215) || unk_0x55EB9D945CFDA4D8(2, 200))
				{
					unk_0xA93E75A5493862BD(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xA93E75A5493862BD(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xC163336F8C5EA891(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xDABBD2E6CAD829E1(iVar13, iVar14, iVar15, iVar0);
	unk_0x286B7C12CAFE210E(fVar9, fVar10);
	unk_0x97C2DEC6BACFB889(0);
	unk_0x3B71612DD3973D97(1f, 0.4f);
	fVar1 = (fVar1 - func_36(6f));
	fVar1 = (fVar1 + (func_36(30f) - func_36((2f * 2f))));
	fVar11 = (fVar2 - func_36((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_36(25f))), 0f, 1f);
		func_33();
		unk_0xED5C6BE1E2C9B186(0.5f, (fVar1 - (func_36((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_36((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_36((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_34())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_36(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_36(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_36(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_36((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_34())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_36(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_36(25f))), 0f, 1f);
			func_33();
			unk_0xED5C6BE1E2C9B186(0.5f, (fVar1 + func_36((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_36((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_34())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_36(25f))), 0f, 1f);
			unk_0xDABBD2E6CAD829E1(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x37F0B37A9EF3F53B() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_34()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_34()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_34()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_34()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0x286B7C12CAFE210E(fVar20, fVar21);
			unk_0x97C2DEC6BACFB889(1);
			unk_0x3B71612DD3973D97(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_36((2f * 2f))), 0, 0, 0);
			unk_0x286B7C12CAFE210E(fVar20, fVar21);
			unk_0x97C2DEC6BACFB889(2);
			unk_0x3B71612DD3973D97(1f, 0.4f);
			unk_0x5A7D9AB610934030(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x286B7C12CAFE210E(fVar20, fVar22);
			unk_0xDABBD2E6CAD829E1(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x7C12F16D6CF17166("PERCENTAGE");
					unk_0xF99222307D7150A9(uParam0->f_554);
					unk_0x7E3D5998E914CAD3(fVar20, (fVar1 + func_36((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x7C12F16D6CF17166("FO_TWO_NUM");
					unk_0xF99222307D7150A9(uParam0->f_554);
					unk_0xF99222307D7150A9(uParam0->f_555);
					unk_0x7E3D5998E914CAD3(fVar20, (fVar1 + func_36((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x7C12F16D6CF17166("MTPHPER_XPNO");
					unk_0xF99222307D7150A9(uParam0->f_554);
					unk_0x7E3D5998E914CAD3(fVar20, (fVar1 + func_36((2f * 2f))), 0);
					break;
				
				case 3:
					unk_0x7C12F16D6CF17166("ESDOLLA");
					unk_0x4A1042FFF3429779(uParam0->f_554, 1);
					unk_0x7E3D5998E914CAD3(fVar20, (fVar1 + func_36((2f * 2f))), 0);
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
						unk_0xC163336F8C5EA891(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xC163336F8C5EA891(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xC163336F8C5EA891(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_36(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0xDBC7B721B137659C(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_36(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x5A7D9AB610934030(iParam3);
	unk_0x79459927BB08805E(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0x7C12F16D6CF17166("STRING");
		unk_0x4C51E4FBCD1D8830(sParam0);
	}
	else
	{
		unk_0x7C12F16D6CF17166(sParam0);
	}
	unk_0x7E3D5998E914CAD3(fParam1, fParam2, 0);
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
	if (unk_0x6D9FF4C899CD785F(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xBC8A4E0C71749580(&iVar32, &iVar33);
			fVar35 = unk_0x194EA65BE0B4C26F(0);
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
			if (unk_0xAB964FCFAC3C767A(joaat("director_mode")) > 0)
			{
				unk_0x05ABC29E253518F8(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x05ABC29E253518F8(&iVar32, &iVar33);
		}
		Var37 = { unk_0x6CE755343658C0DB(&cVar0, &cVar16) };
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
		if (iParam0 == 29 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x93456A81D92B9712() && iParam0 != 30)
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
	
	unk_0xBC8A4E0C71749580(&iVar0, &iVar1);
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
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
			if (unk_0x23F5E0B2D6F39CA8(&Var19, &uVar3))
			{
				return func_22(&uVar3);
			}
		}
		else
		{
			return func_22(&(Global_17290.f_6703[iParam0 /*16*/]));
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
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
			unk_0x23F5E0B2D6F39CA8(&Var16, &uVar0);
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
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iParam5);
	unk_0x286B7C12CAFE210E(fParam3, fParam4);
	unk_0x97C2DEC6BACFB889(1);
	unk_0x3B71612DD3973D97(1f, func_27(14f));
	unk_0x5A7D9AB610934030(0);
	unk_0x79459927BB08805E(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0x7C12F16D6CF17166("STRING");
		unk_0x4C51E4FBCD1D8830(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x7C12F16D6CF17166(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xF99222307D7150A9(uParam0->f_489[iParam1]);
		}
	}
	unk_0x7E3D5998E914CAD3(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDBC7B721B137659C("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_36(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDBC7B721B137659C("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_36(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDBC7B721B137659C("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_36(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x97C2DEC6BACFB889(1);
	}
	else
	{
		unk_0x97C2DEC6BACFB889(2);
	}
	unk_0x3B71612DD3973D97(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x286B7C12CAFE210E(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x286B7C12CAFE210E(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iParam5);
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
	unk_0x5A7D9AB610934030(0);
	unk_0x79459927BB08805E(0);
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
			unk_0x3B71612DD3973D97(1f, func_27(18f));
			unk_0x79459927BB08805E(4);
			if (iParam0 < 0)
			{
				unk_0x57D442E6F2D68C36("ESMINDOLLA");
				unk_0x4A1042FFF3429779((-1 * iParam0), 1);
				fVar1 = unk_0xC7F85398EB0970A0(0);
			}
			else
			{
				unk_0x57D442E6F2D68C36("ESDOLLA");
				unk_0x4A1042FFF3429779(iParam0, 1);
				fVar1 = unk_0xC7F85398EB0970A0(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xDBC7B721B137659C("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xDBC7B721B137659C("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xDBC7B721B137659C("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x3B71612DD3973D97(1f, func_27(14f));
			break;
	}
	unk_0xF5640E619D8FCD5B(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x7C12F16D6CF17166("PERCENTAGE");
			unk_0xF99222307D7150A9(iParam0);
			break;
		
		case 1:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("FO_NUM");
			unk_0xF99222307D7150A9(iParam0);
			break;
		
		case 2:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("FO_TWO_NUM");
			unk_0xF99222307D7150A9(iParam0);
			unk_0xF99222307D7150A9(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x3B71612DD3973D97(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x7C12F16D6CF17166("ESMINDOLLA");
				unk_0x4A1042FFF3429779((-1 * iParam0), 1);
			}
			else
			{
				unk_0x7C12F16D6CF17166("ESDOLLA");
				unk_0x4A1042FFF3429779(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x7C12F16D6CF17166(sParam4);
			break;
		
		case 7:
			unk_0x7C12F16D6CF17166("STRING");
			unk_0x4C51E4FBCD1D8830(sParam4);
			break;
		
		case 8:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("STRING");
			unk_0x3672BC158A73A76A(iParam0, 14);
			break;
		
		case 9:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("STRING");
			unk_0x3672BC158A73A76A(iParam0, 6);
			break;
		
		case 10:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("STRING");
			unk_0x3672BC158A73A76A(iParam0, 2055);
			break;
		
		case 18:
			unk_0x79459927BB08805E(5);
			unk_0x7C12F16D6CF17166("STRING");
			unk_0x3672BC158A73A76A(iParam0, 2055);
			break;
		
		case 12:
			unk_0x7C12F16D6CF17166("AHD_DIST");
			unk_0xF99222307D7150A9(iParam0);
			break;
		
		case 13:
			unk_0x7C12F16D6CF17166(sParam4);
			unk_0xF99222307D7150A9(iParam0);
			unk_0xF99222307D7150A9(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x7C12F16D6CF17166(sParam4);
			unk_0xF99222307D7150A9(iParam0);
			unk_0xF99222307D7150A9(iParam1);
			break;
		
		case 16:
			unk_0x7C12F16D6CF17166(sParam4);
			unk_0xF99222307D7150A9(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x7E3D5998E914CAD3((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x3B71612DD3973D97(1f, func_27(14f));
		}
		else
		{
			unk_0x7E3D5998E914CAD3(fParam2, fParam3, 0);
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
		Global_1354290.f_1 = 1;
		func_30(7, iVar0);
		Global_1354290.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = iParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = iParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0x57D442E6F2D68C36(sParam0);
	return (unk_0xC7F85398EB0970A0(1) / 2f);
}

void func_33()
{
	unk_0xCF1B9EC03D5AB61E(1);
	if (unk_0x83D6BCB493FCFCBA() || unk_0x7E3640C27B17457C())
	{
		unk_0xCF1B9EC03D5AB61E(7);
	}
	unk_0xC85D4B364F28DEC5(0);
}

float func_34()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x2D337DD29A7ABD30())
	{
	}
	return fVar0;
}

void func_35(int iParam0)
{
	Global_69957 = iParam0;
	Global_69958 = iParam0;
}

float func_36(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_37()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_38(0))
		{
			func_408(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		unk_0x2A29D86854DC4BC0(2, 199, 1);
	}
	if (unk_0xC3BB749150EAA702())
	{
		if (!iLocal_319)
		{
			if (func_200(uParam1, 0, &iLocal_320))
			{
				func_312(&(uParam1->f_666), 9, 0);
				iLocal_319 = 1;
			}
		}
	}
	if (iLocal_301)
	{
		if (unk_0xDC1EFAABB6EF8F7F(2))
		{
			unk_0x3FCD624098F3BEED();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0xC3BB749150EAA702())
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
				func_114(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_110(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x3CEEA45E4779F6BD(2, 202))
				{
					uParam1->f_680 = 0;
					func_312(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x3CEEA45E4779F6BD(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x3CEEA45E4779F6BD(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_109(&(uParam1->f_72)))
			{
				if (!bLocal_321)
				{
					bLocal_321 = true;
					func_108(&(uParam1->f_509), 0, 0, 1, 1);
					func_107(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_107(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_107(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_107(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_104(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_97(uParam1, 0, 0, iLocal_319);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xC8FC1161FDD0E597(uLocal_328) && unk_0x2C3B61BDCED77B45(uLocal_328) >= 0.995f) || !unk_0xC8FC1161FDD0E597(uLocal_328))
		{
			bLocal_314 = true;
			if (unk_0xE7E9CC62D1C4C0A8(uLocal_334))
			{
				unk_0xAF191D67F49B35C9(uLocal_334, 0);
				if (!unk_0x00B5B0B68211D89B(uLocal_296[0]) && !unk_0x00B5B0B68211D89B(uLocal_296[1]))
				{
					unk_0x8DA3061503F2C4C8(uLocal_296[0]);
					unk_0x8DA3061503F2C4C8(uLocal_296[1]);
					unk_0xCE607BF2D136923E(uLocal_296[0], 0, 0);
					unk_0xCE607BF2D136923E(uLocal_296[1], 0, 0);
				}
			}
			func_96();
		}
		if (func_404(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_312)
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
					func_220(&uLocal_296, iVar2);
				}
				else
				{
					func_219(&uLocal_296);
				}
				iLocal_312 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x04890EB0282525A5(1);
			unk_0xB3C38A4B84C152BF(func_395(3));
			if (!unk_0x00B5B0B68211D89B(uLocal_296[0]) && !unk_0x00B5B0B68211D89B(uLocal_296[1]))
			{
				unk_0x0565F5F2EE81A23F(uLocal_296[0]);
				unk_0x0565F5F2EE81A23F(uLocal_296[1]);
			}
			func_95(uParam3);
			if (bParam4)
			{
				func_324(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_402(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_312 = 0;
			iLocal_310 = 0;
			bLocal_314 = false;
			func_92();
			iLocal_319 = 0;
			iLocal_290 = 0;
			uParam1->f_680 = 0;
			iLocal_320 = 0;
			bLocal_321 = false;
			func_84(&(uParam1->f_72));
			func_439();
		}
		else if (iVar0 == 2)
		{
			func_83(uParam3);
			unk_0xB3C38A4B84C152BF(func_395(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_51(func_79(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x59C0D363E5A5B548();
			*uParam0 = 13;
		}
		else if (((unk_0x3CEEA45E4779F6BD(0, 234) || unk_0x3CEEA45E4779F6BD(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_300)
			{
				Var3 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_50(Var3, 0, iLocal_300);
				iLocal_300 = 0;
			}
			else if (unk_0x3CEEA45E4779F6BD(2, 190))
			{
				iLocal_323++;
				if (iLocal_323 >= uParam0->f_436)
				{
					iLocal_323 = 0;
				}
				Var3 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_48(Var3);
			}
			else if (unk_0x3CEEA45E4779F6BD(2, 189))
			{
				iLocal_323 = (iLocal_323 - 1);
				if (iLocal_323 < 0)
				{
					iLocal_323 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_48(Var3);
			}
		}
		else if (((unk_0x3CEEA45E4779F6BD(0, 211) || unk_0x55EB9D945CFDA4D8(0, 211)) && bVar1) && (iLocal_319 || !unk_0xC3BB749150EAA702()))
		{
			uParam1->f_680 = 1;
			func_108(&(uParam1->f_509), 0, 0, 1, 1);
			func_107(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_107(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_107(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_321)
			{
				func_107(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_104(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x04890EB0282525A5(1);
		unk_0x59C0D363E5A5B548();
		func_44(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0x194EA65BE0B4C26F(1);
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
		uLocal_328 = unk_0x0C17C9FDFC9120BD(Var7, Var10, 2);
		uLocal_334 = unk_0x1A73881FF34FE74D("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0x03AFD6D4FDAD7307(uLocal_334, uLocal_328, sLocal_408[iVar13], "mini@dartsoutro");
		unk_0x55EB2099508DD1C3(uLocal_334, 1);
		unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
		if (!unk_0x00B5B0B68211D89B(uLocal_296[0]) && !unk_0x00B5B0B68211D89B(uLocal_296[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsoutro", sLocal_400[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsoutro", sLocal_404[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), sLocal_395, sLocal_396[unk_0x7BC26452241AC7C9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xECA52D26609A09F3(uLocal_296[1], uLocal_328, "mini@dartsoutro", sLocal_400[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xECA52D26609A09F3(uLocal_296[0], uLocal_328, "mini@dartsoutro", sLocal_404[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x290A57C93304EF16(uLocal_296[1], sLocal_394, sLocal_396[unk_0x7BC26452241AC7C9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_314 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x84A97C70FFDEC0C8();
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
	else if ((unk_0x84A97C70FFDEC0C8() - uParam1->f_671) > 400 && func_40(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xA93E75A5493862BD(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_301 = 1;
	}
}

int func_40(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_43(uParam0);
	func_42(uParam0);
	if (unk_0xCC257DA11A122B5F(&(uParam0->f_550), "SPR_RESULT") || (unk_0xCC257DA11A122B5F(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0xCB5E0E0EB67B3ECE("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xCB5E0E0EB67B3ECE("CommonMenu", 0);
		unk_0xCB5E0E0EB67B3ECE("MPLeaderboard", 0);
		unk_0xCB5E0E0EB67B3ECE("MPHud", 0);
		uParam0->f_1 = unk_0x542F16A736FAC9A6("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xCE45BA77D66E0320("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x52622CA85B1C304B(uParam0->f_1) || !unk_0xB3BFE702989F8358("CommonMenu")) || !unk_0xB3BFE702989F8358("MPLeaderboard")) || !unk_0xB3BFE702989F8358("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x52622CA85B1C304B(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x52622CA85B1C304B(uParam0->f_1) || !unk_0xB3BFE702989F8358("CommonMenu")) || !unk_0xB3BFE702989F8358("MPLeaderboard")) || !unk_0xB3BFE702989F8358("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x52622CA85B1C304B(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_41(uParam0);
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
	Global_69958 = 1;
	return 1;
}

void func_41(var uParam0)
{
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "CLEAR_ALL");
	unk_0xBBAAC5B2437ACF2A();
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x2C310F11D2096992(true);
		unk_0xBBAAC5B2437ACF2A();
	}
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(2);
	func_13(unk_0xE78ECEC3BC74DC0C(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(1);
	func_13(unk_0xE78ECEC3BC74DC0C(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(0);
	func_13(unk_0xE78ECEC3BC74DC0C(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xBBAAC5B2437ACF2A();
}

void func_42(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x97C2DEC6BACFB889(0);
	unk_0x3B71612DD3973D97(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x57D442E6F2D68C36("STRING");
			unk_0x4C51E4FBCD1D8830(&(uParam0->f_13));
			fVar0 = unk_0xC7F85398EB0970A0(1);
		}
		else
		{
			unk_0x57D442E6F2D68C36(&(uParam0->f_13));
			fVar0 = unk_0xC7F85398EB0970A0(1);
		}
	}
	else
	{
		unk_0x57D442E6F2D68C36("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xF99222307D7150A9(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xB1953EBEF4D6BD85(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x4C51E4FBCD1D8830(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xC7F85398EB0970A0(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_43(var uParam0)
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

void func_44(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_47(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_47(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_46(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_46(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_46(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_46(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_46(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_46(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_45(uParam0, 0, "", 0, 0, 0, 0);
	func_35(1);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

void func_46(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
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

void func_47(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_48(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_49(Param0) };
	if (bLocal_133)
	{
		unk_0xDBB81B5CF32D8413(uLocal_131, Var0);
		unk_0xA264B0A017677373(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		unk_0xDBB81B5CF32D8413(uLocal_130, Var0);
		unk_0xA264B0A017677373(uLocal_130, uLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_49(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_50(struct<3> Param0, bool bParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0 = { func_49(Param0) };
	if (bParam3)
	{
		unk_0xDBB81B5CF32D8413(uLocal_130, Var0);
		unk_0xA264B0A017677373(uLocal_130, uLocal_129, 1500, 1, 1);
		unk_0x55EB2099508DD1C3(uLocal_129, 0);
		unk_0xDBB81B5CF32D8413(uLocal_131, Var0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		unk_0xDBB81B5CF32D8413(uLocal_130, Var0);
		unk_0xA264B0A017677373(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			unk_0xA264B0A017677373(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			unk_0xA264B0A017677373(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		unk_0x55EB2099508DD1C3(uLocal_130, 0);
	}
}

void func_51(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_52(Global_101652.f_26993[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x5BC7B5709E38CBE0(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB924315F0872835A(iVar1, iVar0, 1);
	}
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_78();
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
					func_77(99, 1);
					func_76(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_76(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_76(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_60(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_59(5))
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
							func_76(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_76(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_76(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_59(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_76(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_76(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_76(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_76(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_76(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_76(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_76(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_76(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_76(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x0B5EEA126C23F8E6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_76(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_76(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_76(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_76(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_76(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_76(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_59(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_76(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_76(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_76(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_76(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_76(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_76(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_58(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_77(95, iParam3);
					break;
				
				case 1:
					func_77(97, iParam3);
					break;
				
				case 2:
					func_77(96, iParam3);
					break;
			}
			func_77(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_55(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_55(iVar1);
	}
	iVar5 = (Global_52992[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52992[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52992[iVar2] = 2147483647;
				}
				else
				{
					Global_52992[iVar2] = (Global_52992[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_76(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_76(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_76(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52992[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52992[iVar2];
			Global_52992[iVar2] = (Global_52992[iVar2] - iParam3);
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
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101652.f_19507.f_233[iVar2 /*69*/]++;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_1++;
		if (Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_54(iParam0);
	if (Global_35777 == 15)
	{
		func_53(0);
	}
	return 1;
}

void func_53(bool bParam0)
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
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52992[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB924315F0872835A(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xB924315F0872835A(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xB924315F0872835A(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_55(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_57() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_57() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_56(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_56(int iParam0)
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

int func_57()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_58(int iParam0)
{
	func_77(93, iParam0);
	func_77(29, iParam0);
	func_77(30, iParam0);
}

bool func_59(int iParam0)
{
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_57() /*10730*/].f_7546.f_10, iParam0);
}

int func_60(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC588321444C4C223(27))
	{
		return 0;
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB924315F0872835A(joaat("num_cash_spent"), iVar1, 1);
		func_75(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_74(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_72(&Global_2595490))
	{
		if (func_70(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_2595489 - 0.5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_68(var uParam0, float fParam1)
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

float func_69(var uParam0)
{
	return uParam0->f_72;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)
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

bool func_72(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_73(int iParam0)
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

bool func_74(int iParam0)
{
	return Global_35777 == iParam0;
}

int func_75(int iParam0, int iParam1)
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
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_78()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52992[0] == iVar0)
		{
			Global_52992[0] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52992[1] == iVar0)
		{
			Global_52992[1] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52992[2] == iVar0)
		{
			Global_52992[2] = iVar0;
		}
	}
}

int func_79()
{
	func_80();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_82(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_481(unk_0xD5A676B97920D126());
			if (func_81(iVar0) && (!func_74(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_81(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(int iParam0)
{
	if (func_81(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_83(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_84(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_90(uParam0);
		func_89(uParam0);
		func_88(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_86();
	}
	if (unk_0x0FE8D1B72C1924FE("LEADERBOARD_SCENE"))
	{
		unk_0xB3C38A4B84C152BF("LEADERBOARD_SCENE");
	}
	if (unk_0xA4B4423421E91E97())
	{
		func_85(&(Global_1840922.f_49));
	}
	Global_2494149.f_3829 = 0;
}

void func_85(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_86()
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
	func_87(&(Global_1835390.f_2780));
	func_85(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_85(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_85(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_87(var uParam0)
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

void func_88(var uParam0)
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
	func_85(&(Global_1835390.f_2830));
}

void func_89(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_85(&(uParam0->f_246.f_3));
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

void func_90(var uParam0)
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

void func_91(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_85(&(Global_1835008.f_1));
	unk_0x3F0470C1B6240032(*uParam2, uParam2->f_1, -1);
}

void func_92()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_94(&(Global_1835013.f_73));
	func_94(&(Global_1835013.f_142));
	func_94(&(Global_1835013.f_211));
	func_94(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_93(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_93(var uParam0)
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

void func_94(var uParam0)
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

void func_95(var uParam0)
{
	func_43(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_96()
{
	unk_0x55EB2099508DD1C3(uLocal_126, 1);
}

int func_97(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_35(1);
			func_108(&(uParam0->f_509), 0, 0, 1, 1);
			func_107(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_107(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_107(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0xC3BB749150EAA702())
			{
				func_107(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_104(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_100(func_103(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_102(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_100(func_103(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_102(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_100(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_391(&(uParam0->f_57), 0, 0);
			}
			func_110(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x6AAF285DC78E0304())
		{
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_671) > 900)
			{
				if (unk_0xF334707DE9C8DE80(2, 216))
				{
					unk_0xA93E75A5493862BD(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_312(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x3CEEA45E4779F6BD(2, 215))
				{
					unk_0xA93E75A5493862BD(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_99();
					func_98();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x4A7B4687474BFAAE(2, 201))
		{
			return 2;
		}
		else if (unk_0x4A7B4687474BFAAE(2, 202))
		{
			func_312(&(uParam0->f_666), 9, 0);
			func_312(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_98()
{
	if (Global_2433082.f_2199[0 /*76*/].f_2 != 0)
	{
		Global_2433082.f_2199[0 /*76*/].f_2 = 5;
	}
}

void func_99()
{
	Global_25329 = 1;
}

void func_100(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_101(sParam6))
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
		Global_1354290.f_1 = 1;
		func_30(3, iVar0);
		Global_1354290.f_2454[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_2454.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_2454.f_183[iVar0] = iParam3;
		Global_1354290.f_2454.f_172[iVar0] = iParam2;
		Global_1354290.f_2454.f_205[iVar0] = iParam4;
		Global_1354290.f_2454.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1354290.f_2454.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1354290.f_2454.f_420[iVar0] = iParam7;
		Global_1354290.f_2454.f_453[iVar0] = iParam8;
		Global_1354290.f_2454.f_431[iVar0] = iParam9;
		Global_1354290.f_2454.f_442[iVar0] = iParam10;
		Global_1354290.f_2454.f_464[iVar0] = iParam11;
	}
}

int func_101(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_102(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106(&(uParam0->f_1), 1024);
	}
	else
	{
		func_105(&(uParam0->f_1), 1024);
	}
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_107(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xB8A73E7DA87B2968(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xCE45BA77D66E0320("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_106(&(uParam0->f_1), 32);
	}
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		func_106(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x92BE7FE3A4ABE585(*uParam0, 1);
		}
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (bParam3)
		{
			func_106(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_106(&(uParam0->f_1), 8192);
	}
}

int func_109(var uParam0)
{
	if ((unk_0xF44A5E894FE76438(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0x83D6BCB493FCFCBA() || unk_0xF9B8AB338DC56ADD()) || unk_0x7E3640C27B17457C()) || unk_0xB518A6F4BD89B244())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_113(uParam0))
	{
		return;
	}
	unk_0x517E18EC5A3C4790();
	unk_0xCF1B9EC03D5AB61E(iParam2);
	if (!func_112(uParam0->f_1, 256) || (func_112(uParam0->f_1, 8192) && unk_0x02F62AA408F2D854(2)))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_CLEAR_SPACE");
		unk_0x573CAEB6F4A4E750(fParam1);
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_MAX_WIDTH");
		unk_0x573CAEB6F4A4E750(fParam5);
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBBAAC5B2437ACF2A();
		if (unk_0x2D337DD29A7ABD30())
		{
			unk_0x3B6EF6403E3F1CAC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x2C310F11D2096992(func_112(uParam0->f_1, 4096));
			unk_0xBBAAC5B2437ACF2A();
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
					bVar4 = unk_0xDC1EFAABB6EF8F7F(2);
					break;
				
				case 2:
					bVar4 = !unk_0xDC1EFAABB6EF8F7F(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x1B215CC37BF52E79(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xF44A5E894FE76438(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xF44A5E894FE76438(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xE78ECEC3BC74DC0C(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x02B7665B289F7C66(iVar0, iVar1, bVar2);
						}
						if (!unk_0xC55B9553B3EDADE9(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xC55B9553B3EDADE9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						if (func_112(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x2C310F11D2096992(true);
								unk_0x1B215CC37BF52E79(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x2C310F11D2096992(false);
								unk_0x1B215CC37BF52E79(-1);
							}
						}
					}
					unk_0xBBAAC5B2437ACF2A();
				}
			}
			iVar6++;
		}
		fVar8 = func_111(bParam4, func_111(func_112(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x3B6EF6403E3F1CAC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x573CAEB6F4A4E750(fVar8);
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x573CAEB6F4A4E750(0f);
		unk_0x573CAEB6F4A4E750(0f);
		unk_0x573CAEB6F4A4E750(0f);
		unk_0x573CAEB6F4A4E750(80f);
		unk_0xBBAAC5B2437ACF2A();
		func_106(&(uParam0->f_1), 256);
		func_105(&(uParam0->f_1), 128);
	}
	unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 0, 0);
}

float func_111(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_112(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_113(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			func_106(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_114(var uParam0, var uParam1)
{
	func_115(uParam1, uParam0);
}

void func_115(var uParam0, var uParam1)
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
	unk_0xA295ADD103FF4641();
	func_189();
	func_37();
	unk_0xC7E06EC513BE0881();
	func_187();
	unk_0x7FE30C99EA3439F7(10);
	func_186(1);
	func_185(1);
	if (!func_182())
	{
		if (!unk_0x0FE8D1B72C1924FE("LEADERBOARD_SCENE"))
		{
			unk_0xE3E53903AE9B5BD5("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xF44A5E894FE76438(uParam1->f_42, 3))
	{
		*uParam0 = func_181();
		unk_0xB8A73E7DA87B2968(&(uParam1->f_42), 3);
	}
	Var32 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		if (((!unk_0xA65719DC666C97C3() || !unk_0xC3BB749150EAA702()) || (!unk_0x45ACD48FE706DF5A() && unk_0x08CA6E0CF57442EC())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0xC3BB749150EAA702())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x45ACD48FE706DF5A() && unk_0x08CA6E0CF57442EC())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xA65719DC666C97C3())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xF44A5E894FE76438(uParam1->f_42, 1))
			{
				unk_0x3B6EF6403E3F1CAC(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xBBAAC5B2437ACF2A();
				func_180(*uParam0, Global_1835390.f_2780);
				if (unk_0xA6AD4206830E160C(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_179(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_177(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xB8A73E7DA87B2968(&iVar31, 4);
				func_176(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xB8A73E7DA87B2968(&iVar31, 5);
				func_176(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xB8A73E7DA87B2968(&iVar31, 6);
				func_176(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xB8A73E7DA87B2968(&(uParam1->f_42), 1);
				func_175(*uParam0);
				unk_0x4EA098C870B73AB7(&(uParam1->f_42), 2);
				unk_0x04890EB0282525A5(1);
			}
			else
			{
				func_175(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_140(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x4EA098C870B73AB7(&(uParam1->f_42), 1);
				if (!unk_0xF44A5E894FE76438(uParam1->f_42, 0))
				{
					unk_0x3B6EF6403E3F1CAC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xBBAAC5B2437ACF2A();
					func_180(*uParam0, Global_1835390.f_2780);
					if (unk_0xA6AD4206830E160C(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_179(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_177(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xB8A73E7DA87B2968(&(uParam1->f_42), 0);
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 2);
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
							unk_0xB8A73E7DA87B2968(&iVar31, 4);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xB8A73E7DA87B2968(&iVar31, 5);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xB8A73E7DA87B2968(&iVar31, 6);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xB8A73E7DA87B2968(&iVar31, 7);
						func_139(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_85(&(Global_1835390.f_2823));
				}
				else if (func_137(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xB8A73E7DA87B2968(&iVar31, 4);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xB8A73E7DA87B2968(&iVar31, 5);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xB8A73E7DA87B2968(&iVar31, 6);
							func_176(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xB8A73E7DA87B2968(&iVar31, 7);
						func_139(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_85(&(Global_1835390.f_2823));
				}
				func_175(*uParam0);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&(uParam1->f_42), 0);
				if (!unk_0xF44A5E894FE76438(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x3B6EF6403E3F1CAC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xBBAAC5B2437ACF2A();
					func_180(*uParam0, Global_1835390.f_2780);
					if (unk_0xA6AD4206830E160C(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_179(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_178(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_177(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xF44A5E894FE76438(uParam1->f_42, 6))
					{
						func_88(&Global_1839721);
						func_133(uParam1, &Global_1839721);
						func_132(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_179(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xB8A73E7DA87B2968(&iVar31, 4);
									func_176(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xB8A73E7DA87B2968(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_179(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_176(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_176(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xB8A73E7DA87B2968(&iVar31, 6);
									if (!unk_0xBB033BC8D4347496())
									{
										bVar63 = true;
									}
									else if (!unk_0x8DC6EAEE45B930C8())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_179(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_176(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_176(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_131(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_179(uParam1->f_44))
								{
									unk_0x5579BB3F053323FB(unk_0xFB6B3EEFAB2DD12C(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xCC257DA11A122B5F(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_130(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xB8A73E7DA87B2968(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xB8A73E7DA87B2968(&iVar31, 3);
											}
										}
									}
									if (func_179(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xC55B9553B3EDADE9(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xCC257DA11A122B5F(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_129(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_129(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0xF44A5E894FE76438(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_124(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_124(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_121(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_121(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_120();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xB8A73E7DA87B2968(&iVar31, 2);
											unk_0xB8A73E7DA87B2968(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_119(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xB8A73E7DA87B2968(&iVar31, 4);
						func_176(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xB8A73E7DA87B2968(&iVar31, 5);
						func_176(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xB8A73E7DA87B2968(&iVar31, 6);
						func_176(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xB8A73E7DA87B2968(&(uParam1->f_42), 1);
					unk_0x4EA098C870B73AB7(&(uParam1->f_42), 2);
					func_175(*uParam0);
					unk_0x04890EB0282525A5(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xB8A73E7DA87B2968(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_119(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_175(*uParam0);
					func_116(uParam0, uParam1);
				}
			}
		}
	}
}

void func_116(var uParam0, var uParam1)
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
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		unk_0x3FCD624098F3BEED();
		unk_0x4214C5222DAB7698(2, 239);
		unk_0x4214C5222DAB7698(2, 240);
		unk_0x4214C5222DAB7698(2, 237);
		unk_0x4214C5222DAB7698(2, 238);
		unk_0x2A29D86854DC4BC0(2, 200, 1);
		if (unk_0xD464BA52FA359903(2, 241))
		{
			unk_0xCF55560C768027EB(2, 188, 1f);
		}
		if (unk_0xD464BA52FA359903(2, 242))
		{
			unk_0xCF55560C768027EB(2, 187, 1f);
		}
		if (unk_0xBE8F4BA54D616DE3(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xCF55560C768027EB(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		func_118(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xF44A5E894FE76438(uParam1->f_246, 0))
		{
			if ((unk_0xF334707DE9C8DE80(2, 188) || unk_0xD464BA52FA359903(2, 188)) || iVar6 < -100)
			{
				unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xB8A73E7DA87B2968(&(uParam1->f_246), 0);
				func_85(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_117(uParam1, 188))
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_246), 0);
		}
		if (!unk_0xF44A5E894FE76438(uParam1->f_246, 1))
		{
			if ((unk_0xF334707DE9C8DE80(2, 187) || unk_0xD464BA52FA359903(2, 187)) || iVar6 > 100)
			{
				unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xB8A73E7DA87B2968(&(uParam1->f_246), 1);
				func_85(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_117(uParam1, 187))
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_246), 1);
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
	if (!unk_0xF44A5E894FE76438(uParam1->f_246, 3))
	{
		if ((unk_0xF334707DE9C8DE80(2, 204) || unk_0x55EB9D945CFDA4D8(2, 204)) || unk_0x3CEEA45E4779F6BD(2, 237))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_246), 3);
			func_85(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_117(uParam1, 204))
	{
		unk_0x4EA098C870B73AB7(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x4EA098C870B73AB7(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_119(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xB8A73E7DA87B2968(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_119(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x4EA098C870B73AB7(&(uParam1->f_42), 2);
		}
		if (func_131(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xF44A5E894FE76438(uParam1->f_246, 2))
			{
				if (unk_0xF334707DE9C8DE80(2, 217) || unk_0x55EB9D945CFDA4D8(2, 217))
				{
					if (!unk_0x1BDA0BA180A0719B())
					{
						unk_0xA93E75A5493862BD(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xB8A73E7DA87B2968(&(uParam1->f_246), 2);
						unk_0x67560292F6AAA479(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xF334707DE9C8DE80(2, 217))
			{
				unk_0x4EA098C870B73AB7(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_117(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_118(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xF334707DE9C8DE80(2, iParam1) && !unk_0xD464BA52FA359903(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_137(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xF334707DE9C8DE80(2, iParam1) && !unk_0xD464BA52FA359903(2, iParam1)) || func_137(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_118(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 221) * 127f));
		}
	}
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT_STATE");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	unk_0xBBAAC5B2437ACF2A();
}

void func_120()
{
	unk_0xBBAAC5B2437ACF2A();
}

void func_121(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0x67B2488BFC4BE526(fParam44, 2);
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0xF99222307D7150A9(unk_0xF34EE736CF047844(fParam44));
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
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
				if (!unk_0xD065018956F1AA2B())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_123(fParam44);
					}
					else
					{
						fParam44 = func_122(fParam44);
					}
				}
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0x67B2488BFC4BE526(fParam44, 2);
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 0:
			break;
	}
}

float func_122(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_123(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_124(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0xF99222307D7150A9(iParam44);
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0xF99222307D7150A9(-iParam44);
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
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
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 14);
					unk_0xCB329F559FA7DCD0();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 6);
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 2055);
					unk_0xCB329F559FA7DCD0();
				}
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
					unk_0xCB329F559FA7DCD0();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 14);
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 2055);
					unk_0xCB329F559FA7DCD0();
				}
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 14);
					unk_0xCB329F559FA7DCD0();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 6);
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam44, 2055);
					unk_0xCB329F559FA7DCD0();
				}
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x0E182BB7C5A7ABD8(iParam44))
				{
					unk_0x0BBDB952BE56A9DF("SCLB_VEH_CUST");
					unk_0xB1953EBEF4D6BD85(unk_0x51FC142EF1105B0E(iParam44));
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
					unk_0xCB329F559FA7DCD0();
				}
			}
			else if (unk_0x0E182BB7C5A7ABD8(iParam44))
			{
				unk_0x0BBDB952BE56A9DF(unk_0x51FC142EF1105B0E(iParam44));
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 8:
			if (func_128(iParam44) != 0)
			{
				unk_0x0BBDB952BE56A9DF(func_125(func_128(iParam44), 0));
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
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
				if (!unk_0xD065018956F1AA2B())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_123(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_122(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x0BBDB952BE56A9DF("NUMBER");
				unk_0xF99222307D7150A9(iParam44);
				unk_0xCB329F559FA7DCD0();
			}
			else
			{
				unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
				unk_0xCB329F559FA7DCD0();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_125(int iParam0, bool bParam1)
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
		
		default:
			if (func_127(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_126(&(Var0.f_31));
				}
				else
				{
					return func_126(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_126(var uParam0)
{
	return uParam0;
}

int func_127(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x41DD9BE0891252D4();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x8B2BCE658D6CB0A1(iVar0, uParam1))
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

int func_128(int iParam0)
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

void func_129(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	if (iParam3 > 0)
	{
		unk_0x0BBDB952BE56A9DF("NUMBER");
		unk_0xF99222307D7150A9(iParam3);
		unk_0xCB329F559FA7DCD0();
	}
	else
	{
		unk_0x0BBDB952BE56A9DF("SC_LB_EMPTY");
		unk_0xCB329F559FA7DCD0();
	}
	unk_0xDC0269D08B29626C(cParam4);
	unk_0xDC0269D08B29626C(uParam5);
}

int func_130(var uParam0, var uParam1)
{
	if (!func_131(*uParam0))
	{
		return 0;
	}
	if (!func_131(*uParam1))
	{
		return 0;
	}
	if (unk_0x933A1AE39EF50B58(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5A7D76211B9373CD(&uParam0, 13);
}

void func_132(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xF44A5E894FE76438(uParam0->f_42, 5) && !unk_0xF44A5E894FE76438(uParam0->f_42, 6))
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

void func_133(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xF44A5E894FE76438(uParam0->f_42, 5) && !unk_0xF44A5E894FE76438(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_136(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_136(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_136(uParam1, iVar3, &uVar2, 2))
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
		func_134(uParam1);
	}
}

void func_134(var uParam0)
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
	Var3 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x27AE39B63A3CBC0F(Global_1835390.f_2826))
	{
		iVar16 = unk_0x7DAF7423980205D7(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_135(&Global_1839591);
				iVar2 = 0;
				unk_0x2B73C83713FC729A(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xF44A5E894FE76438(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xF44A5E894FE76438(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xF44A5E894FE76438(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xF44A5E894FE76438(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_130(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xF44A5E894FE76438(Global_1839591.f_63, iVar1))
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

void func_135(var uParam0)
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

int func_136(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
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

int func_137(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_138(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_138(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xB8A73E7DA87B2968(&iParam2, 7);
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	unk_0x0BBDB952BE56A9DF(sParam3);
	unk_0x27B13DEE5B681AE9();
	unk_0xBBAAC5B2437ACF2A();
}

int func_140(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_174(&(Global_1835390.f_2827)))
		{
			func_138(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_137(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xA65719DC666C97C3() || !unk_0xC3BB749150EAA702()) || (!unk_0x45ACD48FE706DF5A() && unk_0x08CA6E0CF57442EC())) || Global_1835390.f_2832 != 0)
	{
		unk_0x4EA098C870B73AB7(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xF44A5E894FE76438(uParam0->f_42, 4))
	{
		func_173(uParam0);
		unk_0xB8A73E7DA87B2968(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xF44A5E894FE76438(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_171(uParam0))
	{
		return 0;
	}
	if (!func_169(uParam0))
	{
		return 0;
	}
	if (!func_156(uParam0))
	{
		return 0;
	}
	if (!unk_0xF44A5E894FE76438(uParam0->f_42, 6))
	{
		func_88(&Global_1839721);
		func_133(uParam0, &Global_1839721);
		func_132(uParam0, &Global_1839721);
		unk_0xB8A73E7DA87B2968(&(uParam0->f_42), 6);
	}
	if (!unk_0xF44A5E894FE76438(uParam0->f_42, 7))
	{
		if (!func_174(&(Global_1835390.f_2830)))
		{
			func_138(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_137(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_42), 7);
		}
		if (func_153(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_150(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_145(&Global_1839721))
		{
			func_141(&Global_1839721);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_42), 7);
			func_141(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_144(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_143(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_135(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xCC257DA11A122B5F(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_131((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xB8A73E7DA87B2968(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&(Global_1839591.f_61), 0);
			}
			unk_0xB8A73E7DA87B2968(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xF44A5E894FE76438(Global_1839591.f_63, iVar1))
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
			unk_0x54A5F336588E88FF(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_142(unk_0xFB6B3EEFAB2DD12C()) };
}

Vector3 func_142(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x27AE39B63A3CBC0F(Global_1838575.f_81[iParam1]))
		{
			unk_0xCEFFB45C8C551AB6(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x27AE39B63A3CBC0F(iParam0))
		{
			unk_0xCEFFB45C8C551AB6(iParam0);
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

int func_144(int iParam0)
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
		else if (unk_0x27AE39B63A3CBC0F(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x57E6F18F8F55C3F1(Global_1838575.f_81[iVar0]);
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

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_149(uParam0);
			if (unk_0x603D621ED5E06CB0() && !unk_0xDE49089F060E6818(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_131((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_148(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_146(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_131((uParam0[iVar0 /*100*/])->f_32) && func_131(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x933A1AE39EF50B58(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_146(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x26735EA04C03EB28())
			{
			}
			else
			{
				unk_0x0E6FCCEF8B7D3A8F();
				unk_0xF1B2EC2C3C74A5EF(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x26735EA04C03EB28())
			{
				if (unk_0x0759F61BCA43FB27())
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
				if (unk_0x1A40FA9A4959A268(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_147(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x26735EA04C03EB28())
			{
				unk_0xB54B8A3C77306954();
			}
			else
			{
				unk_0x0E6FCCEF8B7D3A8F();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_147(var uParam0, var uParam1)
{
	unk_0x80BC8B50E2E17138(uParam0, 35, uParam1);
}

int func_148(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_131(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x933A1AE39EF50B58(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_93(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x26735EA04C03EB28())
		{
			unk_0x0E6FCCEF8B7D3A8F();
		}
	}
	if (unk_0x26735EA04C03EB28())
	{
		unk_0xB54B8A3C77306954();
	}
	Global_1841018.f_206 = 0;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	else if (unk_0xF1A016B51831B87B())
	{
		if (!func_152(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_151(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_151(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_131(*uParam1))
			{
				if (!unk_0x1DEA7381535B0B19(uParam1))
				{
					if (unk_0xF1A016B51831B87B())
					{
						if (unk_0x5C66E693191C8CA3(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x59D60465DE87FE2F())
					{
						if (unk_0x5C66E693191C8CA3(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xE0D536DFB326E0B8(uParam1), 64);
						if (unk_0xC0915CC8FE05A943())
						{
						}
						else if (unk_0x603D621ED5E06CB0())
						{
						}
						else if (unk_0x2D337DD29A7ABD30())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x7746E8ACE891BFA4(unk_0x9F20BF1AC4B18747(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x1DEA7381535B0B19(uParam1))
			{
				if (!unk_0x3E2517666B457621())
				{
					if (unk_0x08C223185AC91A59())
					{
						StringCopy(sParam2, unk_0xE0D536DFB326E0B8(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x7746E8ACE891BFA4(unk_0x9F20BF1AC4B18747(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF1A016B51831B87B())
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
				func_93(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_131((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x5A571E3DBCB576AC(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xC1CE485D87C35679((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_131((uParam0[iVar1 /*100*/])->f_32))
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

int func_153(var uParam0)
{
	int iVar0;
	
	if (unk_0xF1A016B51831B87B())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_155(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_154(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_154(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xC55B9553B3EDADE9(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xD0BBAB3F4A0B1D61(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_131(Var0))
			{
				if (!unk_0x1DEA7381535B0B19(&Var0))
				{
					if (unk_0x59D60465DE87FE2F() || unk_0xF1A016B51831B87B())
					{
						if (unk_0x5C66E693191C8CA3(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xE0D536DFB326E0B8(&Var0), 64);
						if (unk_0xC0915CC8FE05A943())
						{
						}
						else if (unk_0x603D621ED5E06CB0())
						{
						}
						else if (unk_0x2D337DD29A7ABD30())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x7746E8ACE891BFA4(unk_0x9F20BF1AC4B18747(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x1DEA7381535B0B19(&Var0))
			{
				if (!unk_0x3E2517666B457621())
				{
					if (unk_0x08C223185AC91A59())
					{
						StringCopy(sParam17, unk_0xE0D536DFB326E0B8(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x7746E8ACE891BFA4(unk_0x9F20BF1AC4B18747(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_155(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xF1A016B51831B87B())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xD0BBAB3F4A0B1D61(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_131(Var1[0 /*13*/]))
			{
				if (!unk_0x1DEA7381535B0B19(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x5A571E3DBCB576AC(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x7746E8ACE891BFA4(unk_0x9F20BF1AC4B18747(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xC1CE485D87C35679(*uParam4, uParam3, 1);
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

int func_156(var uParam0)
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
	Var116 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x527DE7DC62A1D335())
			{
				if (unk_0xF42D93ECBADC9AE3(&Var116))
				{
					if (unk_0xF6955213DB8BD7D3(&(uParam0->f_7), 35, &Var116))
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
			if (func_167(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_168(), 0, 0, 0))
			{
				func_166(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_168())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x799BE4E162C682DA(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_130(&Var0, &Var116) || func_130(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0xF44A5E894FE76438(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xBC504BEC68107978(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB21A3BBB5AEA8634(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_165(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x799BE4E162C682DA(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_168() && iVar109 == 0)
								{
									func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_168() && (func_130(&Var0, &Var116) || func_130(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_130(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_163(uParam0->f_44))
									{
										iVar108 = unk_0xBC504BEC68107978(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_179(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xBC504BEC68107978(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB21A3BBB5AEA8634(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_168())
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
						func_165(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x799BE4E162C682DA(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_168() && iVar109 == iVar111)
								{
									if (!func_130(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_168() && (func_130(&Var0, &Var116) || func_130(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_131(Var0) && !func_130(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_130(&Var0, &Var116))
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
										if (func_163(uParam0->f_44))
										{
											iVar108 = unk_0xBC504BEC68107978(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_179(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xBC504BEC68107978(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB21A3BBB5AEA8634(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_165(&Var0);
							iVar111++;
						}
						unk_0xB637A596860FB7FA();
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_168())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0xB637A596860FB7FA();
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2832), iVar113);
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
			if (func_158(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_166(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x799BE4E162C682DA(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_168() && (func_130(&Var0, &Var116) || func_130(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_163(uParam0->f_44))
									{
										iVar108 = unk_0xBC504BEC68107978(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_179(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0xBC504BEC68107978(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0xB21A3BBB5AEA8634(0, Global_1835390.f_2710[iVar107]);
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
									if (func_163(uParam0->f_44))
									{
										iVar108 = unk_0xBC504BEC68107978(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_179(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xBC504BEC68107978(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB21A3BBB5AEA8634(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_165(&Var0);
							iVar106++;
						}
					}
					unk_0xB637A596860FB7FA();
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xB637A596860FB7FA();
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_168())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_157(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_168() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_168())
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

int func_158(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_161() && !func_160())
			{
				func_159(*uParam2);
				if (unk_0xFBC834261B61EEFF(uParam2, iParam3, iParam4))
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
			if (!unk_0x7D509E748CBF566E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x8F3AA7974854EB94(*uParam2, uParam2->f_1, 0))
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

void func_159(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_190(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_160()
{
	if (unk_0x6AAF285DC78E0304() && !func_182())
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	if (unk_0xE4CF656F816E58DE() || Global_1835008)
	{
		func_162();
		return 1;
	}
	return 0;
}

void func_162()
{
	if (func_137(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x3F0470C1B6240032(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_85(&(Global_1835008.f_1));
	}
}

int func_163(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_164(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_179(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), 64);
		sParam1->f_32 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	}
	sParam1->f_59 = iParam2;
	if (func_163(uParam0->f_44))
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
		if (unk_0xF44A5E894FE76438(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_165(var uParam0)
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

void func_166(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_167(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_161() && !func_160())
			{
				func_159(*uParam2);
				if (bParam5)
				{
					if (unk_0xF44A5E894FE76438(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x09FF03169CB535A0(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x67C6F5AA1C1C71AC(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x64A4F5771F9DD06B(uParam2, iParam3, uParam4))
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
			if (!unk_0x7D509E748CBF566E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x8F3AA7974854EB94(*uParam2, uParam2->f_1, 0))
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

int func_168()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_169(var uParam0)
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
	Var114 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x05A154B8447A7667();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_168())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_170(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_166(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var98))
					{
						if (func_168())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x799BE4E162C682DA(iVar110, &Var0);
									if (func_179(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_130(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xF44A5E894FE76438(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xBC504BEC68107978(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB21A3BBB5AEA8634(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_165(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_168() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x799BE4E162C682DA(0, &Var0);
							if (func_168() && (func_130(&Var0, &Var114) || func_130(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_131(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_130(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_163(uParam0->f_44))
								{
									iVar111 = unk_0xBC504BEC68107978(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_179(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xBC504BEC68107978(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB21A3BBB5AEA8634(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_165(&Var0);
								unk_0xB637A596860FB7FA();
								func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_168())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_165(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_165(&Var0);
							unk_0xB637A596860FB7FA();
							func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_168())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_168())
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
							unk_0x799BE4E162C682DA(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_168() && iVar108 == iVar110)
								{
									if (!func_130(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_168() && (func_130(&Var0, &Var114) || func_130(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_131(Var0) && !func_130(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_130(&Var0, &Var114))
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
										if (func_163(uParam0->f_44))
										{
											iVar111 = unk_0xBC504BEC68107978(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_179(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0xBC504BEC68107978(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0xB21A3BBB5AEA8634(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_165(&Var0);
							iVar110++;
						}
						unk_0xB637A596860FB7FA();
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_168())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_164(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_157(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_170(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_161() && !func_160())
			{
				func_159(*uParam2);
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
			if (!unk_0x7D509E748CBF566E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x8F3AA7974854EB94(*uParam2, uParam2->f_1, 0))
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

int func_171(var uParam0)
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
	Var0 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_172(uParam0->f_44))
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
			if (func_167(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_168(), 0, 0, 0))
			{
				func_166(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_168())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x799BE4E162C682DA(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_130(&Var13, &Var0) || func_130(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0xF44A5E894FE76438(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xBC504BEC68107978(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB21A3BBB5AEA8634(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_165(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x799BE4E162C682DA(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_168() && iVar122 == 0)
								{
									func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_168() && (func_130(&Var13, &Var0) || func_130(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_130(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_163(uParam0->f_44))
									{
										iVar121 = unk_0xBC504BEC68107978(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_179(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xBC504BEC68107978(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB21A3BBB5AEA8634(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_168())
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
						func_165(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x799BE4E162C682DA(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_168() && iVar122 == iVar124)
								{
									if (!func_130(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_168() && (func_130(&Var13, &Var0) || func_130(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_131(Var13) && !func_130(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_130(&Var13, &Var0))
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
										if (func_163(uParam0->f_44))
										{
											iVar121 = unk_0xBC504BEC68107978(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_179(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xBC504BEC68107978(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB21A3BBB5AEA8634(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_165(&Var13);
							iVar124++;
						}
						unk_0xB637A596860FB7FA();
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_168())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0xB637A596860FB7FA();
						func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2832), iVar126);
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
			if (func_158(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_166(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x799BE4E162C682DA(iVar119, &Var13);
							if (func_168() && (func_130(&Var13, &Var0) || func_130(&Var13, &(Global_1835013.f_361))))
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
										if (func_163(uParam0->f_44))
										{
											iVar121 = unk_0xBC504BEC68107978(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_179(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0xBC504BEC68107978(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0xB21A3BBB5AEA8634(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_163(uParam0->f_44))
										{
											iVar121 = unk_0xBC504BEC68107978(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_179(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0xBC504BEC68107978(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0xB21A3BBB5AEA8634(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_165(&Var13);
							iVar119++;
						}
					}
					unk_0xB637A596860FB7FA();
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2832), iVar126);
					func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_168())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_164(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_157(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_172(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0xCC257DA11A122B5F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xCC257DA11A122B5F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_173(var uParam0)
{
	int iVar0;
	
	if (unk_0x27AE39B63A3CBC0F(Global_1835390.f_2826))
	{
		iVar0 = unk_0x57E6F18F8F55C3F1(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam0->f_42), 5);
			func_143(Global_1835390.f_2826, -1);
		}
	}
}

bool func_174(var uParam0)
{
	return uParam0->f_1;
}

void func_175(var uParam0)
{
	if (unk_0x52622CA85B1C304B(uParam0))
	{
		unk_0x131F832AD6923854(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_176(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0xF44A5E894FE76438(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xF44A5E894FE76438(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xF44A5E894FE76438(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xA4B4423421E91E97() && unk_0x527DE7DC62A1D335())
		{
			if (unk_0x603D621ED5E06CB0() && !unk_0xDE49089F060E6818(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
				if (unk_0xF42D93ECBADC9AE3(&Var53))
				{
					unk_0xF6955213DB8BD7D3(&Var1, 35, &Var53);
					if (!unk_0xC55B9553B3EDADE9(&(Var1.f_1)))
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
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT");
	unk_0x1B215CC37BF52E79(*iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	if (bVar52)
	{
		unk_0x0BBDB952BE56A9DF(sVar0);
		unk_0x1164369C7A8D1436(&Var36);
		unk_0xCB329F559FA7DCD0();
	}
	else
	{
		unk_0x0BBDB952BE56A9DF(sVar0);
		unk_0xCB329F559FA7DCD0();
	}
	unk_0xBBAAC5B2437ACF2A();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xB8A73E7DA87B2968(&iVar66, 7);
		unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT");
		unk_0x1B215CC37BF52E79(*iParam1);
		unk_0x1B215CC37BF52E79(iVar66);
		if (!unk_0xA4B4423421E91E97())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xA65719DC666C97C3())
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
		unk_0x0BBDB952BE56A9DF(sVar0);
		unk_0x27B13DEE5B681AE9();
		unk_0xBBAAC5B2437ACF2A();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xF44A5E894FE76438(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xF44A5E894FE76438(iParam2, 5))
		{
			if (unk_0x05A154B8447A7667() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xF44A5E894FE76438(iParam2, 6))
		{
			if (unk_0xBB033BC8D4347496())
			{
				if (unk_0x8DC6EAEE45B930C8())
				{
					if (unk_0xA4B4423421E91E97() && unk_0x527DE7DC62A1D335())
					{
						if (unk_0x603D621ED5E06CB0() && !unk_0xDE49089F060E6818(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
							if (unk_0xF42D93ECBADC9AE3(&Var67))
							{
								unk_0xF6955213DB8BD7D3(&Var1, 35, &Var67);
								if (!unk_0xC55B9553B3EDADE9(&(Var1.f_1)))
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
		unk_0xB8A73E7DA87B2968(&iVar80, 7);
		unk_0x3B6EF6403E3F1CAC(uParam0, "SET_SLOT");
		unk_0x1B215CC37BF52E79(*iParam1);
		unk_0x1B215CC37BF52E79(iVar80);
		if (bVar52)
		{
			unk_0x0BBDB952BE56A9DF(sVar0);
			unk_0x1164369C7A8D1436(&Var36);
			unk_0x27B13DEE5B681AE9();
		}
		else
		{
			unk_0x0BBDB952BE56A9DF(sVar0);
			unk_0x27B13DEE5B681AE9();
		}
		unk_0xBBAAC5B2437ACF2A();
		*iParam1++;
	}
}

void func_177(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_TITLE");
	unk_0x0BBDB952BE56A9DF(sParam1);
	unk_0xCB329F559FA7DCD0();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x0BBDB952BE56A9DF(uParam2[iVar0 /*6*/]);
		unk_0xCB329F559FA7DCD0();
		iVar0++;
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_178(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x0BBDB952BE56A9DF(sParam1);
	if (!unk_0xC55B9553B3EDADE9(sParam2))
	{
		unk_0xB1953EBEF4D6BD85(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xC55B9553B3EDADE9(sParam3))
			{
				unk_0x1164369C7A8D1436(sParam3);
			}
		}
		else if (!unk_0xC55B9553B3EDADE9(sParam3))
		{
			unk_0xB1953EBEF4D6BD85(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xC55B9553B3EDADE9(sParam3))
			{
				unk_0x1164369C7A8D1436(sParam3);
			}
		}
		else if (!unk_0xC55B9553B3EDADE9(sParam3))
		{
			unk_0xB1953EBEF4D6BD85(sParam3);
		}
		unk_0xF99222307D7150A9(iParam5);
	}
	unk_0xCB329F559FA7DCD0();
	unk_0xBBAAC5B2437ACF2A();
}

int func_179(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, int iParam1)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, "SET_DISPLAY_TYPE");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0xBBAAC5B2437ACF2A();
}

var func_181()
{
	return unk_0x542F16A736FAC9A6("SC_LEADERBOARD");
}

bool func_182()
{
	return func_183(unk_0xFB6B3EEFAB2DD12C());
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
	return Global_1589933[iParam0 /*601*/].f_187;
}

void func_185(int iParam0)
{
	Global_1318067 = iParam0;
}

void func_186(int iParam0)
{
	Global_1354290.f_932 = iParam0;
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
	unk_0xB8A73E7DA87B2968(&(Global_1352862.f_1014), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1352862.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_189()
{
	Global_2494149.f_4394 = 0;
}

void func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

int func_191(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0xAF48077651290FAC() && Global_1840922.f_2 > 0)
	{
		func_85(&Global_1840922);
		func_85(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_199(0);
	}
	Global_1840922.f_2 = unk_0xAF48077651290FAC();
	iVar1 = -1;
	if (unk_0x603D621ED5E06CB0())
	{
		if (unk_0x346DF09C3E8593A3() == 0)
		{
			iVar1 = unk_0x244F4DF5FAA14820();
		}
	}
	if ((unk_0x603D621ED5E06CB0() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_197() && unk_0xA4B4423421E91E97()))
	{
		if (unk_0x00CFA6C53F97EDBE())
		{
			func_194(&(Global_1840922.f_3), func_196(&(Global_1840922.f_3)));
			if (!unk_0xF44A5E894FE76438(*uParam0, 4))
			{
				unk_0xB8A73E7DA87B2968(uParam0, 4);
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
			if (!unk_0xF44A5E894FE76438(*uParam0, 0))
			{
				if (!unk_0xF334707DE9C8DE80(2, 201))
				{
					unk_0xB8A73E7DA87B2968(uParam0, 0);
				}
			}
			else if (unk_0x4A7B4687474BFAAE(2, 201))
			{
				func_85(&(Global_1840922.f_49));
				func_85(&Global_1840922);
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
		if ((func_174(&(Global_1840922.f_49)) && !func_137(&(Global_1840922.f_49), 2000, 1)) && !unk_0xA4B4423421E91E97())
		{
			unk_0xB8A73E7DA87B2968(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_192(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xF44A5E894FE76438(*uParam0, 3))
		{
			if (!unk_0xF44A5E894FE76438(*uParam0, 1))
			{
				unk_0xAAEAA4D5DCAC61FE(0);
				unk_0xB8A73E7DA87B2968(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_192(&(Global_1840922.f_3), 0);
			}
		}
		if (func_174(&Global_1840922))
		{
			if (!func_137(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xA4B4423421E91E97())
				{
					if (unk_0xAF8C532E3957216F())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x1BDA0BA180A0719B())
					{
						if (!unk_0xF44A5E894FE76438(*uParam0, 0))
						{
							if (!unk_0xF334707DE9C8DE80(2, 201))
							{
								unk_0xB8A73E7DA87B2968(uParam0, 0);
							}
						}
						else if (unk_0x4A7B4687474BFAAE(2, 201))
						{
							func_85(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_199(0);
							return 1;
						}
					}
				}
				else
				{
					func_85(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_199(0);
					return 1;
				}
			}
			else if (unk_0xF44A5E894FE76438(*uParam0, 3))
			{
				if (unk_0xAF8C532E3957216F())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0xF44A5E894FE76438(*uParam0, 0))
				{
					if (!unk_0xF334707DE9C8DE80(2, 201))
					{
						unk_0xB8A73E7DA87B2968(uParam0, 0);
					}
				}
				else if (unk_0x4A7B4687474BFAAE(2, 201))
				{
					func_85(&(Global_1840922.f_49));
					func_85(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_199(0);
					return 1;
				}
			}
			else
			{
				if (unk_0xAF8C532E3957216F())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x1BDA0BA180A0719B())
				{
					if (!unk_0xF44A5E894FE76438(*uParam0, 0))
					{
						if (!unk_0xF334707DE9C8DE80(2, 201))
						{
							unk_0xB8A73E7DA87B2968(uParam0, 0);
						}
					}
					else if (unk_0x4A7B4687474BFAAE(2, 201))
					{
						func_85(&(Global_1840922.f_49));
						func_85(&Global_1840922);
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
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0xF99222307D7150A9(uParam0->f_33);
			unk_0xF99222307D7150A9(uParam0->f_34);
			unk_0x767DBFC1325F7F22(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0xF99222307D7150A9(uParam0->f_33);
			unk_0x767DBFC1325F7F22(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0x4C51E4FBCD1D8830(&(uParam0->f_17));
			unk_0xF99222307D7150A9(uParam0->f_33);
			unk_0xF99222307D7150A9(uParam0->f_34);
			unk_0x767DBFC1325F7F22(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0x4C51E4FBCD1D8830(&(uParam0->f_17));
			unk_0x767DBFC1325F7F22(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0x3672BC158A73A76A(uParam0->f_33, 70);
			unk_0x767DBFC1325F7F22(uParam0->f_41);
		}
		else
		{
			unk_0xD5DA9F3954EDDE75(&(uParam0->f_1));
			unk_0x767DBFC1325F7F22(uParam0->f_41);
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
	if (unk_0x09F10A67721D6115() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_198()
{
	return Global_2452973;
}

void func_199(bool bParam0)
{
	unk_0x2D877C8CD3C6852B();
	if (bParam0)
	{
		unk_0x7F13924CF6170EAB();
	}
}

int func_200(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_290)
	{
		func_212(&(uParam0->f_72), bParam1);
		iLocal_290 = 1;
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
	if (func_179(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_208(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_166(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0xE3417968B9840964(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_207(uParam0->f_44, iVar188))
					{
						if (func_206(uParam0->f_44, 4, iVar188))
						{
							unk_0xB8A73E7DA87B2968(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x4EA098C870B73AB7(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x799BE4E162C682DA(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_131(Var0))
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
										Global_1835013.f_73.f_36[iVar188] = unk_0xBC504BEC68107978(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0xB21A3BBB5AEA8634(0, iVar188);
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
					unk_0xB637A596860FB7FA();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			unk_0x824486F61F073532(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x1995B52453EF6537() && func_203())
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
				unk_0x824486F61F073532(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_167(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_166(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x0E0B76149B728D63(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x799BE4E162C682DA(0, &Var0);
						if (unk_0xCC257DA11A122B5F(&(Var0.f_13), ""))
						{
							Global_979489.f_1 = -1;
						}
						else
						{
							Global_979489.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979489.f_1 = -1;
					}
					unk_0xB637A596860FB7FA();
				}
				else
				{
					Global_979489.f_1 = -1;
				}
				Global_1835013 = 999;
				func_91(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
	return unk_0xF44A5E894FE76438(Global_970912.f_8, 1);
}

var func_203()
{
	return Global_2450850.f_3;
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
	iVar0 = unk_0x1179FC305A290E86(iParam0, iParam1, iParam2);
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
	if (unk_0xD502AB4D4E88BED5(iParam0, 4, iParam1) == 156)
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
			if (!func_161() && !func_160())
			{
				func_159(*uParam2);
				if (unk_0x944C8B03C47EF527(uParam2, uParam3))
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
			if (!unk_0x7D509E748CBF566E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x8F3AA7974854EB94(*uParam2, uParam2->f_1, 0))
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
	
	if (!unk_0xC3BB749150EAA702())
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
		unk_0x61BD63CC30D9F71F(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0xE3417968B9840964(Global_1835013.f_142, 0);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x4EA098C870B73AB7(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x4EA098C870B73AB7(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xD502AB4D4E88BED5(iParam0, 4, iVar1))
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
		unk_0xB8A73E7DA87B2968(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x4EA098C870B73AB7(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_211(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xA4B4423421E91E97())
	{
	}
	if ((!unk_0xBE4105FC480D8B58() && (unk_0x45ACD48FE706DF5A() || !unk_0x08CA6E0CF57442EC())) && unk_0x5A73BBD10FCC5BEE())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x527DE7DC62A1D335())
			{
				Var69 = { func_23(unk_0xFB6B3EEFAB2DD12C()) };
				if (unk_0xF42D93ECBADC9AE3(&Var69))
				{
					if (unk_0xF6955213DB8BD7D3(&uVar82, 35, &Var69))
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
			if (unk_0x1995B52453EF6537() && Global_2450850.f_3)
			{
				unk_0x2432505398573A4C(&Var0, &(Global_1747296.f_10));
			}
			else
			{
				unk_0x0601748F71843614(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xBE4105FC480D8B58())
	{
	}
	if (!unk_0x45ACD48FE706DF5A())
	{
	}
	if (unk_0x08CA6E0CF57442EC())
	{
	}
	if (!unk_0x5A73BBD10FCC5BEE())
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
	
	if (!unk_0xC55B9553B3EDADE9(sParam2))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
					unk_0x5579BB3F053323FB(unk_0xFB6B3EEFAB2DD12C(), &Var17);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xC55B9553B3EDADE9(sParam3))
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
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xC55B9553B3EDADE9(sParam3))
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
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xC55B9553B3EDADE9(sParam3))
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
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0xC55B9553B3EDADE9(sParam3))
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
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1632166.f_49 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xC55B9553B3EDADE9(sParam3))
				{
					if (Global_1632166.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1632166.f_2 == 5)
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
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xC55B9553B3EDADE9(sParam3))
				{
					if (Global_1632166.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1632166.f_2 == 5)
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
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xC55B9553B3EDADE9(sParam3))
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
					unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x4EA098C870B73AB7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0xC55B9553B3EDADE9(sParam3))
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
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0xF44A5E894FE76438(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1835390.f_2770), iVar16);
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
	if (func_179(iParam8))
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
	return unk_0x6D9FF4C899CD785F(&cVar0);
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
	if (((((((Global_1632166.f_40140 == 1 || Global_1632166.f_40140 == 3) || Global_1632166.f_40140 == 5) || Global_1632166.f_40140 == 7) || Global_1632166.f_40140 == 8) || Global_1632166.f_40140 == 9) || Global_1632166.f_40140 == 11) || Global_1632166.f_40140 == 13)
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0, int iParam1)
{
	if (!func_401(&(uParam0->f_2)))
	{
		func_415(&(uParam0->f_2));
	}
	unk_0x7FE30C99EA3439F7(14);
	unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x3CEEA45E4779F6BD(2, 201) || uParam0->f_8)
		{
			if (!func_401(&(uParam0->f_5)))
			{
				func_415(&(uParam0->f_5));
				func_218(uParam0, 1051260355);
			}
		}
		if (func_401(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_402(&(uParam0->f_5));
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
		if (!func_401(&(uParam0->f_5)))
		{
			func_415(&(uParam0->f_5));
			func_218(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_402(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_218(var uParam0, float fParam1)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1B215CC37BF52E79(uParam0->f_9);
	unk_0x573CAEB6F4A4E750(fParam1);
	unk_0xBBAAC5B2437ACF2A();
}

void func_219(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x00B5B0B68211D89B((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_220(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x00B5B0B68211D89B((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_221()
{
	int iVar0;
	
	if (!bLocal_315)
	{
		iVar0 = (unk_0x7BC26452241AC7C9(0, 65535) % 3);
	}
	else
	{
		iLocal_329++;
		iVar0 = (iLocal_329 % 2);
	}
	return iVar0;
}

void func_222(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_223(iParam4);
	if (iParam4 != 5)
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "RESET_MOVIE");
		unk_0xBBAAC5B2437ACF2A();
	}
	unk_0x3B6EF6403E3F1CAC(*uParam0, sVar0);
	unk_0x0BBDB952BE56A9DF("STRING");
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0xCB329F559FA7DCD0();
	func_12(sParam2);
	unk_0xBBAAC5B2437ACF2A();
	func_415(&(uParam0->f_2));
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
	unk_0x3B6EF6403E3F1CAC(*uParam0, "CLEAR_SCORES");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0xBBAAC5B2437ACF2A();
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
	if (unk_0x7887B64A08364778(*uParam0))
	{
		unk_0x77CEDAB7C44BFD4E(uParam0);
	}
	return 1;
}

void func_226(int iParam0)
{
	unk_0xA264B0A017677373(uLocal_122, uLocal_120, 1500, 1, 1);
	unk_0x55EB2099508DD1C3(uLocal_123, 1);
	unk_0xA264B0A017677373(uLocal_122, uLocal_123, 8000, 1, 1);
	unk_0xAAFA288F5E96DEFB(uLocal_125, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0x992C86DF97AB4710(uLocal_125, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0xBA44410A0086D31F(uLocal_125, 35f);
}

void func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x4E1E09031AC5EF6E(uLocal_120))
	{
		bVar0 = false;
		func_308(uParam0);
		if (!bLocal_307)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x04890EB0282525A5(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0xF44A5E894FE76438(Global_101613, 3))
						{
							func_399("DARTS_INSTR_W", -1);
							unk_0xB8A73E7DA87B2968(&Global_101613, 3);
						}
						func_312(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0xF44A5E894FE76438(Global_101613, 4))
						{
							func_399("DARTS_INSTR_B", -1);
							unk_0xB8A73E7DA87B2968(&Global_101613, 4);
						}
						func_312(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x04890EB0282525A5(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x4E1E09031AC5EF6E(uLocal_129) && uParam0->f_3 == 2)
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
			if (unk_0xF334707DE9C8DE80(2, 228) && iLocal_30 == 0)
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
						func_399("DARTS_LEVEL", -1);
						unk_0xB8A73E7DA87B2968(&(Global_101652.f_17913.f_6), iLocal_327);
						func_312(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_305)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_312(&(uParam3->f_666), 6, 1);
					}
					iLocal_305 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_305)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_312(&(uParam3->f_666), 6, 1);
					}
					iLocal_305 = 1;
				}
				else if (func_274(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x59C0D363E5A5B548();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_302)
				{
					if (!func_401(uParam4))
					{
						func_272(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_271(uLocal_296[(1 - iLocal_30)]);
						func_402(uParam4);
						iLocal_302 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_325 = 0;
				func_270(&(uParam0->f_422), &(uParam0->f_249));
				func_267(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x7BC26452241AC7C9(1250, 2500))
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
			if (func_401(uParam4))
			{
				func_402(uParam4);
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
	
	iLocal_325++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_309 = 1;
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
			if (bLocal_308)
			{
				if (unk_0x7887B64A08364778(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x77CEDAB7C44BFD4E(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x0A0C20E171493CD0(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x7887B64A08364778(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xBB9A2DB94A862D7A(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_251(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_236(uParam0, uParam1);
			if (bLocal_308)
			{
				if (iLocal_310)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0xF21B698F4FCCA3D3(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_79, 1, 1, 0);
					Var0 = { unk_0x0A0C20E171493CD0(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0xBB9A2DB94A862D7A(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0xB5FEA1F26F05B9F5(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0x0033076C5BC6D1E9(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
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
			if (bLocal_308)
			{
				if (iLocal_310)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = unk_0xF21B698F4FCCA3D3(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, Local_79, 1, 1, 0);
							Var0 = { unk_0x0A0C20E171493CD0(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0x7887B64A08364778(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								unk_0xBB9A2DB94A862D7A(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0xB5FEA1F26F05B9F5(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0x0033076C5BC6D1E9(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
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
	if (iLocal_325 > 2)
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
			if (unk_0x3CEEA45E4779F6BD(2, 190))
			{
				iLocal_323++;
				if (iLocal_323 >= uParam0->f_436)
				{
					iLocal_323 = 0;
				}
				Var0 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_48(Var0);
			}
			if (unk_0x3CEEA45E4779F6BD(2, 189))
			{
				iLocal_323 = (iLocal_323 - 1);
				if (iLocal_323 < 0)
				{
					iLocal_323 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_48(Var0);
			}
			if (unk_0x3CEEA45E4779F6BD(2, 202))
			{
				Var0 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_50(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x3CEEA45E4779F6BD(2, 201))
			{
				iLocal_299 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x3CEEA45E4779F6BD(2, 201) || (iLocal_309 && bLocal_308))
			{
				iLocal_299 = 1;
			}
			if ((unk_0x3CEEA45E4779F6BD(2, 189) || unk_0x3CEEA45E4779F6BD(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0xC086F8D75730FA3A(uParam0->f_5[iLocal_30 /*79*/][iLocal_323 /*26*/], 1) };
				func_50(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_304)
				{
					if (func_232(iLocal_30 == 0, &(uLocal_296[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_304 = 1;
					}
				}
				else if ((unk_0x84A97C70FFDEC0C8() % 500) < 50)
				{
				}
			}
			else if (!iLocal_304)
			{
				if (func_231(iLocal_30 == 0, &(uLocal_296[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_304 = 1;
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() % 500) < 50)
			{
			}
			if (iLocal_299 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_309 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_225(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_230(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0xEE59E0DAFA4B08CD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
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
				func_414(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_394();
				if (!bLocal_308)
				{
					unk_0x66FA32D15C0E03CF();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				iLocal_305 = 0;
				iLocal_302 = 0;
				iLocal_304 = 0;
				iLocal_299 = 0;
				iLocal_323 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_230(var uParam0, int iParam1, int iParam2)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "ADD_DARTS_SCORE");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	unk_0xBBAAC5B2437ACF2A();
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
			unk_0xB8A73E7DA87B2968(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 3);
		}
	}
	iVar1 = unk_0x7BC26452241AC7C9(0, 100);
	iVar2 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xF44A5E894FE76438(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_GOOD_SELF", 1, 4);
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
		else if (unk_0xF44A5E894FE76438(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_BAD_SELF", 1, 4);
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
		else if (unk_0xF44A5E894FE76438(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0xF44A5E894FE76438(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_BAD_OTHER", 1, 4);
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
			unk_0xB8A73E7DA87B2968(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 3);
		}
	}
	iVar1 = unk_0x7BC26452241AC7C9(0, 100);
	iVar2 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xF44A5E894FE76438(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xF44A5E894FE76438(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x7887B64A08364778(func_479()))
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
		else if (unk_0xF44A5E894FE76438(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0xF44A5E894FE76438(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xD5A676B97920D126(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_233(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

void func_234(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0xF99222307D7150A9(iParam1);
	unk_0x9C51EFE6A55E70E2(iParam2, 1);
}

void func_235()
{
	unk_0x55EB2099508DD1C3(uLocal_129, 1);
	unk_0x55EB2099508DD1C3(uLocal_120, 0);
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
			if (!iLocal_304)
			{
				if (func_245(uLocal_296[(1 - iLocal_30)]))
				{
					iLocal_304 = 1;
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
				if (!iLocal_304 && !iLocal_309)
				{
					if (func_243(uLocal_296[iLocal_30]))
					{
						iLocal_304 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_304 && !iLocal_309)
				{
					func_242(uLocal_296[(1 - iLocal_30)]);
					iLocal_304 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_304 && !iLocal_309)
				{
					if (func_241(uLocal_296[1], iLocal_30 == 0))
					{
						iLocal_304 = 1;
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
				if (!iLocal_304 && !iLocal_309)
				{
					if (func_239(uLocal_296[iLocal_30], iLocal_30 == 0))
					{
						iLocal_304 = 1;
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
						if (!iLocal_303)
						{
							func_238(uLocal_296[1]);
							iLocal_303 = 1;
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
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0xF99222307D7150A9(iParam1);
	unk_0xF99222307D7150A9(iParam2);
	unk_0x9C51EFE6A55E70E2(iParam3, 1);
}

void func_238(int iParam0)
{
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_239(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x7887B64A08364778(func_479()))
		{
			if (bParam1)
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_479(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_240())
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_140", 1, 4);
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
	if (unk_0xF44A5E894FE76438(unk_0x7BC26452241AC7C9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x7887B64A08364778(func_479()))
		{
			if (bParam1)
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_479(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_240())
			{
				func_4(unk_0xD5A676B97920D126(), "DARTS_180", 1, 4);
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
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xD5A676B97920D126())
		{
			iVar1 = 1;
		}
		if (!unk_0x00B5B0B68211D89B(iParam0))
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
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
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
	
	if (iParam0 == unk_0xD5A676B97920D126())
	{
		iVar0 = 1;
	}
	if (!unk_0x00B5B0B68211D89B(iParam0))
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
			Global_101652.f_17913++;
			func_247("DARTS_STAT_NUM_BULLSEYES", Global_101652.f_17913);
			break;
		
		case 1:
			Global_101652.f_17913.f_1++;
			func_247("DARTS_STAT_NUM_180S", Global_101652.f_17913.f_1);
			break;
		
		case 2:
			Global_101652.f_17913.f_2++;
			func_247("DARTS_STAT_NUM_WINS", Global_101652.f_17913.f_2);
			break;
		
		case 3:
			Global_101652.f_17913.f_3++;
			func_247("DARTS_STAT_NUM_LOSS", Global_101652.f_17913.f_3);
			break;
		
		case 4:
			Global_101652.f_17913.f_4++;
			func_247("DARTS_STAT_DARTS_THROWN", Global_101652.f_17913.f_4);
			break;
		
		case 5:
			Global_101652.f_17913.f_5++;
			func_247("DARTS_STAT_NUM_GAMES", Global_101652.f_17913.f_5);
			break;
		
		case 7:
			Global_101652.f_17913.f_7 = (unk_0xBBDA792448DB5A89(Global_101652.f_17913.f_2) / unk_0xBBDA792448DB5A89(Global_101652.f_17913.f_5));
			break;
		
		case 8:
			Global_101652.f_17913.f_8 = (unk_0xBBDA792448DB5A89(Global_101652.f_17913.f_4) / unk_0xBBDA792448DB5A89(Global_101652.f_17913.f_5));
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
	unk_0x66FA32D15C0E03CF();
	unk_0x04890EB0282525A5(1);
	if (unk_0x0FE8D1B72C1924FE(func_395(2)))
	{
		unk_0xB3C38A4B84C152BF(func_395(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_235();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_313 = 1;
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
	func_415(&(uParam0->f_254));
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
			iLocal_331 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_331 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xE3E53903AE9B5BD5(func_395(3));
	iLocal_310 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_249(bool bParam0)
{
	char* sVar0;
	
	unk_0x1A81BB3643C9AA8E(0);
	switch (func_79())
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
	unk_0xF3EF9AEF6A2C9528(sVar0);
}

int func_250(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(uParam0->f_454, 0, 1);
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
	fVar1 = unk_0xA9655095F6A4F24D(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_252(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0xEE59E0DAFA4B08CD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0xEE59E0DAFA4B08CD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
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
					unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
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
	fVar6 = unk_0x758A470BA92498EA();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		unk_0xBB9A2DB94A862D7A(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	unk_0xBB9A2DB94A862D7A(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0x0033076C5BC6D1E9(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x7887B64A08364778(*uParam0))
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
		unk_0xCF1B9EC03D5AB61E(iParam5);
		if (iParam3 == 1)
		{
			unk_0xDBC7B721B137659C(sParam0, sParam1, func_257(Var0.f_0), func_256(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xDBC7B721B137659C(sParam0, sParam1, func_257(Var0.f_0), func_256(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xCF1B9EC03D5AB61E(4);
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
	if (unk_0x7E3640C27B17457C())
	{
		return 0;
	}
	if (unk_0x83D6BCB493FCFCBA() || unk_0xF9B8AB338DC56ADD())
	{
		return 0;
	}
	if (unk_0xB518A6F4BD89B244())
	{
		return 0;
	}
	return 1;
}

bool func_259()
{
	return Global_1312434;
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
		fVar4 = unk_0xB5FEA1F26F05B9F5(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xB5FEA1F26F05B9F5(0f, 360f);
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
		iVar5 = unk_0x7BC26452241AC7C9(0, 100);
		iVar6 = unk_0x7BC26452241AC7C9(func_269(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xB5FEA1F26F05B9F5(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xB5FEA1F26F05B9F5(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x7BC26452241AC7C9(0, 100);
		iVar6 = unk_0x7BC26452241AC7C9(func_269(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xB5FEA1F26F05B9F5(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xB5FEA1F26F05B9F5(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xB5FEA1F26F05B9F5(0.3f, 1f);
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
		*uParam0 = unk_0xF21B698F4FCCA3D3(uParam0->f_1, Local_79, 0, 0, 0);
		fVar1 = unk_0xB5FEA1F26F05B9F5(0f, 90f);
		Var7 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, Local_82) };
		Var10 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = unk_0x1467106C5D2966B9((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x0033076C5BC6D1E9(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_82 };
		*uParam2 = 3;
		unk_0xEC49B508B83FF2C9(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
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
	fVar4 = unk_0x1467106C5D2966B9(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0x1A9618D154EB6797(uParam0->f_17.f_2) * fVar6);
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
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 100);
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
	uParam0->f_1 = (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) + fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
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
						unk_0xEC49B508B83FF2C9(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x3CEEA45E4779F6BD(2, 223) && iLocal_101) && !bParam4)
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
						fVar0 = unk_0xB5FEA1F26F05B9F5(0.02f, 0.1f);
						iVar1 = unk_0x7BC26452241AC7C9(0, 100);
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
						fVar0 = unk_0xB5FEA1F26F05B9F5(0.02f, 0.1f);
						iVar1 = unk_0x7BC26452241AC7C9(0, 100);
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
							unk_0x59C0D363E5A5B548();
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
						unk_0xEC49B508B83FF2C9(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
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
	
	fVar1 = unk_0x49A01EDAEB73491F(2, 220);
	fVar2 = unk_0x49A01EDAEB73491F(2, 221);
	iLocal_136 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x84A97C70FFDEC0C8();
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
				iLocal_137 = unk_0x84A97C70FFDEC0C8();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (unk_0x84A97C70FFDEC0C8() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = unk_0x84A97C70FFDEC0C8();
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
	
	Var0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	unk_0xDA185F02137694B0(Var0, &Local_61, &(Local_61.f_1));
	if ((unk_0x84A97C70FFDEC0C8() % 1000) < 50)
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
	fVar3 = unk_0x51F45AE904CB274C(2, 218);
	fVar4 = unk_0x51F45AE904CB274C(2, 219);
	fVar5 = unk_0x49A01EDAEB73491F(2, 220);
	fVar6 = unk_0x49A01EDAEB73491F(2, 221);
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (unk_0xC3D3EC28F0EB3C6D(fVar5) > unk_0xC3D3EC28F0EB3C6D(fVar3) || unk_0xC3D3EC28F0EB3C6D(fVar6) > unk_0xC3D3EC28F0EB3C6D(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x78B86FB506A5C10A())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x1442C249452265AC())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xF334707DE9C8DE80(2, 227))
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
		if (unk_0xDC1EFAABB6EF8F7F(2))
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
		fVar2 = unk_0xB5FEA1F26F05B9F5((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xB5FEA1F26F05B9F5((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xB5FEA1F26F05B9F5((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xB5FEA1F26F05B9F5((0f - fLocal_88), (0f + fLocal_88));
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
		fVar2 = unk_0xB5FEA1F26F05B9F5((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xB5FEA1F26F05B9F5((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xB5FEA1F26F05B9F5((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xB5FEA1F26F05B9F5((0f - fVar8), (0f + fVar8));
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
	if (unk_0xF334707DE9C8DE80(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (unk_0xF334707DE9C8DE80(2, 229))
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
			if (!unk_0xF44A5E894FE76438(Global_101613, 1))
			{
				func_399("DARTS_SHT_USE", -1);
				unk_0xB8A73E7DA87B2968(&Global_101613, 1);
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
	Var0.f_0 = (Var0.f_0 + unk_0xB5FEA1F26F05B9F5(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0xB5FEA1F26F05B9F5(-0.1f, 0.1f));
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
	
	if (unk_0x7887B64A08364778(*uParam0))
	{
		unk_0xBB9A2DB94A862D7A(*uParam0, Local_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0xF21B698F4FCCA3D3(uParam0->f_1, Local_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_268(uParam0);
	fVar10 = unk_0xB5FEA1F26F05B9F5(0f, 90f);
	Var3 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, Local_82) };
	Var6 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = unk_0x1467106C5D2966B9((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0x0033076C5BC6D1E9(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_255("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	Var0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	unk_0xDA185F02137694B0(Var0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_284(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_285(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0xF44A5E894FE76438(Global_101613, 9))
		{
			if ((!func_284("DARTS_SHT_USE") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_399("DARTS_AIM_HLP", -1);
				unk_0xB8A73E7DA87B2968(&Global_101613, 9);
			}
		}
		else if (iParam1 && !unk_0xF44A5E894FE76438(Global_101613, 7))
		{
			if ((!func_284("DARTS_AIM_HLP") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_399("DARTS_CLOCK", -1);
				unk_0xB8A73E7DA87B2968(&Global_101613, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xF44A5E894FE76438(Global_101613, 8))
		{
			if ((!func_284("DARTS_SHT_USE") && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
			{
				func_399("DARTS_STD_HLP", -1);
				unk_0xB8A73E7DA87B2968(&Global_101613, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_284("DARTS_SHT_USE")) && !func_284("DARTS_INSTR_W")) && !func_284("DARTS_INSTR_B"))
		{
			if (!unk_0xF44A5E894FE76438(Global_101613, 2))
			{
				func_399("DARTS_FST_HLP", -1);
				unk_0xB8A73E7DA87B2968(&Global_101613, 2);
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
			*uParam3 = { unk_0x7E140C583F91AE2B(*uParam1, Var0) };
			func_288(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0x3CEEA45E4779F6BD(2, 201))
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
	unk_0xA264B0A017677373(uLocal_120, uLocal_132, 2000, 1, 1);
	unk_0xAF191D67F49B35C9(uLocal_132, 0);
}

void func_288(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = unk_0xAEBECA050C9EB021(26379945, Param0, Var0, 65f, 0, 2);
	unk_0xA264B0A017677373(uLocal_132, uLocal_120, 2000, 1, 1);
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
			if (unk_0xF334707DE9C8DE80(2, 228))
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
			if (unk_0xF334707DE9C8DE80(2, 228))
			{
				if (!unk_0x4E1E09031AC5EF6E(uLocal_129))
				{
					func_298();
					func_297(&uLocal_336, Local_367, Local_370, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0xF334707DE9C8DE80(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_294(&uLocal_336, 1, 1, 0, 0, 1045220557, 0, 1065353216);
			}
			break;
		
		case 3:
			func_300(0);
			func_480();
			if (unk_0xE7E9CC62D1C4C0A8(uLocal_336))
			{
				if (unk_0x9FB26939A9557171(uLocal_336))
				{
					unk_0x55EB2099508DD1C3(uLocal_336, 0);
				}
				unk_0xAF191D67F49B35C9(uLocal_336, 0);
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
	
	unk_0x2DB20D28D6E69A06(2);
	func_296(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x1442C249452265AC())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		fVar5 = unk_0x51F45AE904CB274C(2, 239);
		fVar6 = unk_0x51F45AE904CB274C(2, 240);
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
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x51F45AE904CB274C(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x51F45AE904CB274C(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_295((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_295((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x84A97C70FFDEC0C8())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xDC1EFAABB6EF8F7F(2))
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
		uParam0->f_27 = unk_0x84A97C70FFDEC0C8() + 4000;
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
	if ((unk_0xDC1EFAABB6EF8F7F(2) && bParam2) && !uParam0->f_28)
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
	if (unk_0xDC1EFAABB6EF8F7F(0) && bParam1)
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
		if (unk_0xDC1EFAABB6EF8F7F(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x55EB9D945CFDA4D8(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x84A97C70FFDEC0C8() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x55EB9D945CFDA4D8(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x84A97C70FFDEC0C8() + 4000;
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
	unk_0x42EEFA5696B80105(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		if (unk_0x9FB26939A9557171(*uParam0))
		{
			if (unk_0x24BB48FB7981EF73(*uParam0))
			{
				unk_0x18D8F843A9CCB4E5();
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
	*uParam0 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF08A28040D7D4C78(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 218) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 219) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 220) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 221) * 127f));
		}
	}
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (bParam5)
		{
			if (unk_0x1442C249452265AC())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x78B86FB506A5C10A())
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
	*uParam0 = unk_0x1A73881FF34FE74D("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x55EB2099508DD1C3(*uParam0, 1);
	unk_0x42EEFA5696B80105(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x41702B9F8E97C108(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xBD77EE63F9259EFF(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0xCBE3833BDD628DBD(iParam13);
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
	if (iLocal_292)
	{
		return;
	}
	func_299();
	unk_0xD5569AFBE1807925("Darts Zoom");
	iLocal_292 = 1;
}

void func_299()
{
	if (iLocal_291 || iLocal_292)
	{
		unk_0x91A1796DC8BA95E4();
		iLocal_291 = 0;
		iLocal_292 = 0;
	}
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA264B0A017677373(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		unk_0xA264B0A017677373(uLocal_120, uLocal_129, 1000, 1, 1);
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
	func_402(&(uParam0->f_2));
	func_402(&(uParam0->f_5));
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
		if (!unk_0xF334707DE9C8DE80(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0xF334707DE9C8DE80(2, 201) || unk_0x3CEEA45E4779F6BD(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_305(var uParam0, int iParam1)
{
	if (!unk_0x6AAF285DC78E0304())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_108(&(uParam0->f_509), 0, 0, 0, 1);
				func_107(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_107(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_306(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_107(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_107(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_107(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_104(&(uParam0->f_509), 1);
				func_312(&(uParam0->f_666), 8, 0);
				func_312(&(uParam0->f_666), 16, 0);
				func_312(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_108(&(uParam0->f_509), 0, 0, 0, 1);
				func_107(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_107(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_306(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_107(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_107(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_104(&(uParam0->f_509), 1);
				func_312(&(uParam0->f_666), 8, 0);
				func_312(&(uParam0->f_666), 16, 0);
				func_312(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_108(&(uParam0->f_509), 1, 0, 0, 1);
			func_107(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_107(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_104(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 16, 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 17, 0);
			func_312(&(uParam0->f_666), 23, 0);
		}
		unk_0x8C8A1913314B5A90(76, 66);
		unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
		unk_0xCEC227FFDAB08FF3();
		func_186(func_103(func_3(&(uParam0->f_666), 16), 1, 2));
		func_110(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
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
		unk_0xB8A73E7DA87B2968(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_307(var uParam0)
{
	if (!unk_0x6AAF285DC78E0304())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_108(&(uParam0->f_509), 0, 0, 0, 1);
			func_306(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_107(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_104(&(uParam0->f_509), 1);
			func_312(&(uParam0->f_666), 23, 1);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 16, 0);
			func_312(&(uParam0->f_666), 15, 0);
			func_312(&(uParam0->f_666), 17, 0);
		}
		func_110(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
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
		if (!unk_0xF334707DE9C8DE80(2, 201) && !unk_0xF334707DE9C8DE80(2, 202))
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
				bLocal_307 = false;
				unk_0x04890EB0282525A5(1);
			}
		}
		if (unk_0x4A7B4687474BFAAE(2, 235) || unk_0xBCCED7DE90D60F92(2, 235))
		{
			if (!bLocal_307)
			{
				*uParam0 = 14;
				bLocal_307 = true;
				unk_0x04890EB0282525A5(1);
			}
		}
		else if (func_284("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_307 = false;
		}
	}
}

void func_309(int iParam0)
{
	if (!unk_0x00B5B0B68211D89B(uParam0))
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
		unk_0xB8A73E7DA87B2968(uParam0, iParam1);
	}
	else
	{
		unk_0x4EA098C870B73AB7(uParam0, iParam1);
	}
}

int func_313(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0xF44A5E894FE76438(Global_101652.f_17913.f_6, 12))
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
	iLocal_323 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	iLocal_300 = 1;
	iLocal_301 = 0;
	iLocal_303 = 0;
	iLocal_95 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_309 = 0;
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
	unk_0xFE3C4806D54DF474(0);
	if (unk_0x9FB26939A9557171(uLocal_122))
	{
		unk_0x55EB2099508DD1C3(uLocal_122, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_126))
	{
		unk_0x55EB2099508DD1C3(uLocal_126, 0);
	}
	if (unk_0x7E3640C27B17457C())
	{
		func_317();
		unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
		unk_0xFF11D473E95357D3(500);
	}
	func_316(bParam0);
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		unk_0x55EB2099508DD1C3(uLocal_120, 1);
	}
}

void func_317()
{
	unk_0x55EB2099508DD1C3(uLocal_122, 1);
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
	unk_0x66FA32D15C0E03CF();
}

void func_321(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_323(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0x252BF044E85EB455(15);
		Global_17290.f_7894 = 0;
	}
	unk_0x2B153364D0958759(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x16CE7E4DDB18D2F8(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x500F58A641B1CB9F("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x500F58A641B1CB9F("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_322(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_322(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			unk_0x4292FC2ED4EC4212(uParam0);
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
		if (unk_0x1995B52453EF6537() && unk_0x5C565D8FF913FF0D())
		{
			iParam2 = unk_0xA4DD5D3334BAA91C();
		}
	}
	StringCopy(&cVar0, unk_0x0FBCE11007AF301F(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6D9FF4C899CD785F(&cVar0);
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

void func_324(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0x1B215CC37BF52E79(iParam2);
	unk_0x1B215CC37BF52E79(iParam3);
	unk_0x1B215CC37BF52E79(iParam4);
	unk_0xBBAAC5B2437ACF2A();
}

int func_325(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x2A29D86854DC4BC0(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_382(0, 0, 0, 1);
		func_381(0, -1, 1);
		if (func_380())
		{
			if (Global_2593990 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_2593990;
				func_379(uParam0->f_660, 1, 1);
				unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
				if (unk_0xA6AD4206830E160C(sVar0))
				{
					func_378(sVar0, 0, 0);
				}
			}
			Global_2593991 = unk_0x84A97C70FFDEC0C8() + 300;
		}
		else if (func_377() && unk_0x84A97C70FFDEC0C8() > Global_2593991)
		{
			if (Global_2593990 == uParam0->f_660)
			{
				iVar2 = func_376(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_2593991 = unk_0x84A97C70FFDEC0C8() + 300;
		}
		if (func_375(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_379(uParam0->f_660, 1, 1);
			unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xA6AD4206830E160C(sVar0))
			{
				func_378(sVar0, 0, 0);
			}
		}
		if (func_374(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_379(uParam0->f_660, 1, 1);
			unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xA6AD4206830E160C(sVar0))
			{
				func_378(sVar0, 0, 0);
			}
		}
		if (func_373(&(uParam0->f_633)) || func_372(&(uParam0->f_633), uParam0->f_660, iVar1))
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
			unk_0xA93E75A5493862BD(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0xA93E75A5493862BD(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_354(uParam0);
		}
		if ((unk_0x3CEEA45E4779F6BD(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_350(uParam0->f_662 + 1, 1);
			*uParam2 = func_350(uParam0->f_664 + 1, 0);
			unk_0xA93E75A5493862BD(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_328(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x4A7B4687474BFAAE(2, 202) || func_327())
		{
			func_326(0);
			func_312(&(uParam0->f_666), 8, 0);
			func_312(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x4A7B4687474BFAAE(2, 201))
		{
			func_35(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x4A7B4687474BFAAE(2, 202))
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
		StringCopy(&(Global_2453012[iVar0 /*16*/]), "", 64);
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
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2593914.f_16), "", 16);
	Global_2593914.f_20 = -1;
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
	StringCopy(&(Global_2593914.f_21), "", 16);
	Global_2593914.f_61 = 0;
	Global_2593914.f_62 = 0;
	Global_2593914.f_63 = 0;
	Global_2593914.f_64 = 0;
	Global_2593914.f_65 = 0;
	Global_2593914.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2593914.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593914.f_67 = 0;
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
	Global_17290.f_7890 = 0;
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
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x194EA65BE0B4C26F(0);
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

int func_327()
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (unk_0x3CEEA45E4779F6BD(2, 238))
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
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_18(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0xBC8A4E0C71749580(&iVar59, &iVar60);
		fVar62 = unk_0x194EA65BE0B4C26F(0);
		if (func_20())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_20())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0x05ABC29E253518F8(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_24(29), 64);
					StringCopy(&cVar80, func_21(29, 1), 64);
					if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_346(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_346(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) != 0)
				{
					func_345();
					unk_0x7C12F16D6CF17166(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0xF99222307D7150A9(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x67B2488BFC4BE526(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E3D5998E914CAD3((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_345();
						func_343((((Global_17287 + fParam5) - 0.00390625f) - func_344("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_346(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x6CE755343658C0DB("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC163336F8C5EA891(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_18(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_342(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_346(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_342(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_18(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_341(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_24(Global_17290.f_4638), func_21(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_21)) != 0 && Global_2593914.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2593914.f_67 != 0)
				{
					func_18(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_342(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_346(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_342(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2593914.f_67 != 0)
				{
					func_18(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_341(Global_2593914.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_24(Global_2593914.f_67), func_21(Global_2593914.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2593914.f_65 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_2593914.f_66) > Global_2593914.f_65)
					{
						StringCopy(&(Global_2593914.f_21), "", 16);
						Global_2593914.f_65 = -1;
					}
				}
			}
			func_335(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x8C8A1913314B5A90(76, 84);
			unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
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
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0xC163336F8C5EA891(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0xC163336F8C5EA891(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_333(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x7C12F16D6CF17166("DFLT_MNU_OPT");
					unk_0x7E3D5998E914CAD3(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0xF44A5E894FE76438(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
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
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
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
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x57D442E6F2D68C36(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xC7F85398EB0970A0(1);
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
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
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
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0x7C12F16D6CF17166(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
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
															func_341(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[(iVar22 + iVar28)]), func_21(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[(iVar22 + iVar28)]), func_21(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E3D5998E914CAD3(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E3D5998E914CAD3((fVar33 + fVar41), fVar34, 0);
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
															func_341(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[(iVar22 + iVar14)]), func_21(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0xF99222307D7150A9(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
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
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_331((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_332(bVar31);
											}
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0x67B2488BFC4BE526(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
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
													func_341(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_341(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_333(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_330((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
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
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
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
														func_341(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xDBC7B721B137659C(func_24(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_341(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xDBC7B721B137659C(func_24(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_18(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_341(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xDBC7B721B137659C(func_24(Global_17290.f_4433[iVar22]), func_21(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_329(Global_17290.f_4433[iVar22])), (fVar36 * func_329(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
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
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
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
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0x84A97C70FFDEC0C8();
	unk_0x2B153364D0958759(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_37();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7FE30C99EA3439F7(10);
	}
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(8);
	if (bParam0)
	{
		func_186(1);
	}
	unk_0xCEC227FFDAB08FF3();
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
		case 50:
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
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0x67B2488BFC4BE526(uParam3, uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

void func_331(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(iParam3);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, iParam4);
}

void func_332(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
}

void func_333(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_334(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC163336F8C5EA891(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC163336F8C5EA891(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
		else
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	else
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x97C2DEC6BACFB889(1);
	if (bParam5)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(4);
	}
	else if (bParam6)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(6);
	}
	else
	{
		unk_0x79459927BB08805E(0);
	}
	unk_0x286B7C12CAFE210E(0f, 1f);
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
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
	if (unk_0x976A3E0B7A766593())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_336(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			return;
		}
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x9CCF717E34C78F05() == 0 || unk_0x976A3E0B7A766593())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0x02F62AA408F2D854(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 353)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE78ECEC3BC74DC0C(2, Global_17290.f_4896[iVar1], true), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x02B7665B289F7C66(2, Global_17290.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x573CAEB6F4A4E750((1f - (Global_17290.f_4951 / 100f)));
			unk_0xBBAAC5B2437ACF2A();
			if (unk_0x2D337DD29A7ABD30())
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x2C310F11D2096992(true);
				unk_0xBBAAC5B2437ACF2A();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x6D9FF4C899CD785F("PREV"))
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(iVar1);
					func_13(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x6D9FF4C899CD785F("PREV"))
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
						unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x3672BC158A73A76A(iParam2, 70);
						}
						else
						{
							unk_0xF99222307D7150A9(iParam2);
						}
						unk_0xCB329F559FA7DCD0();
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						if (Global_17290.f_4896[iVar1] != 353 && unk_0xF44A5E894FE76438(Global_17290.f_4922, iVar1))
						{
							unk_0x2C310F11D2096992(true);
							unk_0x1B215CC37BF52E79(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x2C310F11D2096992(false);
							unk_0x1B215CC37BF52E79(353);
						}
					}
					unk_0xBBAAC5B2437ACF2A();
				}
				iVar1++;
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_16)) != unk_0x6D9FF4C899CD785F(""))
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(Global_17290.f_4639);
				func_13(&Global_2593914);
				if (Global_2593914.f_20 == -1)
				{
					func_12(&(Global_2593914.f_16));
				}
				else
				{
					unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
				}
				unk_0xBBAAC5B2437ACF2A();
			}
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x1B215CC37BF52E79(1);
			}
			else
			{
				unk_0x1B215CC37BF52E79(0);
			}
			unk_0xBBAAC5B2437ACF2A();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1B215CC37BF52E79(iVar1);
					unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
					unk_0xBBAAC5B2437ACF2A();
				}
			}
			iVar1++;
		}
		if (Global_2593914.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1B215CC37BF52E79(iVar1);
				unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
				if (bParam5)
				{
					unk_0x3672BC158A73A76A(iParam2, 70);
				}
				else
				{
					unk_0xF99222307D7150A9(iParam2);
				}
				unk_0xCB329F559FA7DCD0();
				unk_0xBBAAC5B2437ACF2A();
			}
		}
		unk_0x8C8A1913314B5A90(76, 66);
		unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0xEEA4569186F59D9E(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0x252BF044E85EB455(15);
			Global_17290.f_7894 = 0;
		}
		unk_0xCEC227FFDAB08FF3();
		if (Global_17290.f_4925)
		{
			unk_0x8C8A1913314B5A90(82, 66);
			unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
			unk_0x733D2C5CCB2A212B(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xCEC227FFDAB08FF3();
		}
		else
		{
			unk_0x131F832AD6923854(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_336(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_337(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_338()
{
	return Global_1312731;
}

int func_339()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_340())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x74432D08D4A512AA(&Var0);
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

int func_340()
{
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_341(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC163336F8C5EA891(1, iParam2, iParam3, iParam4, &uVar0);
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
	}
}

void func_342(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x8B5BC9543431B932(2);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_343(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(uParam3);
	unk_0xF99222307D7150A9(uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

float func_344(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_345();
	unk_0x57D442E6F2D68C36(sParam0);
	unk_0xF99222307D7150A9(uParam1);
	unk_0xF99222307D7150A9(uParam2);
	return unk_0xC7F85398EB0970A0(1);
}

void func_345()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_346(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xED5C6BE1E2C9B186((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_347(bool bParam0, bool bParam1)
{
	if (Global_2433082.f_1385.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x8AFBC859AA63D3D7() || (func_349(8, -1) && func_348() != 64)) || (unk_0xDEC2120B859399ED() != 0 && !bParam1)) || (unk_0xB0D174BA6F10DF7B() && !bParam0)) || unk_0xC4E9166C7DEB5B34()) || Global_69957) || Global_17290.f_7893) || unk_0xF35D072F1A7DC0A4()) || Global_91538.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_348()
{
	return Global_1315164;
}

bool func_349(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
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
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_376(0) == 1 && Global_2593990 == iParam1)
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
	}
	return 0;
}

void func_352(var uParam0)
{
	if (!func_401(uParam0))
	{
		func_415(uParam0);
	}
}

int func_353(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		fVar0 = unk_0x49A01EDAEB73491F(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0xF334707DE9C8DE80(2, 190)) || unk_0xD464BA52FA359903(2, 190))
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
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
	unk_0xC163336F8C5EA891(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_371(uVar0, uVar1, uVar2, uVar3, 1);
	func_370(1, 2, 0, 0, 0);
	func_369(1, 2, 1, 1, 1);
	func_368(0, 1, 0, 0, 0);
	func_367("DARTS_TITLE");
	func_365(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_361(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_358(0, func_350(uParam0->f_662 + 1, 1), 0);
	func_361(1, "DARTS_SETS", 0, 1, 0, 0);
	func_358(1, func_350(uParam0->f_664 + 1, 0), 0);
	func_357(2, 141, 141, 1);
	func_361(2, "DARTS_START", 0, 1, 0, 0);
	func_356(0);
	func_379(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_378(func_102(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_355(201, "ITEM_SELECT", -1, 0);
	func_355(202, "IB_QUIT", -1, 0);
}

void func_355(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE78ECEC3BC74DC0C(2, iParam0, true);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2593914, sVar0, 64);
		StringCopy(&(Global_2593914.f_16), sParam1, 16);
		Global_2593914.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_356(int iParam0)
{
	Global_17290.f_5605 = iParam0;
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17290.f_7890 = iParam3;
	Global_17290.f_7887[0] = iParam1;
	Global_17290.f_7887[1] = iParam2;
	Global_17290.f_7891 = iParam0;
}

void func_358(int iParam0, int iParam1, bool bParam2)
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
	fVar1 = func_360("NUMBER", iParam1);
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
		fVar4 = func_359("NUMBER", iParam1);
		if (fVar4 > Global_17290.f_5612[iParam0])
		{
			Global_17290.f_5612[iParam0] = fVar4;
		}
	}
	unk_0xB8A73E7DA87B2968(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 2;
}

float func_359(char* sParam0, int iParam1)
{
	if (!unk_0xA6AD4206830E160C(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xFBBB5045CB727AD7(0.35f, 0);
}

float func_360(char* sParam0, int iParam1)
{
	if (!unk_0xA6AD4206830E160C(sParam0))
	{
		return 0f;
	}
	func_333(1, 1, 0, 0, 0, 0, 0);
	unk_0x57D442E6F2D68C36(sParam0);
	unk_0xF99222307D7150A9(uParam1);
	return unk_0xC7F85398EB0970A0(1);
}

void func_361(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
	if (!unk_0xC55B9553B3EDADE9(sParam1) && !unk_0xA6AD4206830E160C(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_364(Global_17290.f_5088, 1);
	}
	else
	{
		func_364(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_363(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
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
			fVar4 = func_362(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xB8A73E7DA87B2968(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_362(char* sParam0)
{
	if (!unk_0xA6AD4206830E160C(sParam0))
	{
	}
	return unk_0xFBBB5045CB727AD7(0.35f, 0);
}

float func_363(char* sParam0)
{
	if (!unk_0x1C079483C9D16F36(uParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_333(0, 1, 0, 0, 0, 0, 0);
	unk_0x57D442E6F2D68C36(sParam0);
	return unk_0xC7F85398EB0970A0(1);
}

void func_364(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_365(int iParam0, char* sParam1, char* sParam2)
{
	Global_17290 = iParam0;
	func_366(29, sParam1, sParam2);
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17290.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17290.f_6703[iParam0 /*16*/]), sParam2, 64);
}

void func_367(char* sParam0)
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

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4945[0] = iParam0;
	Global_17290.f_4945[1] = iParam1;
	Global_17290.f_4945[2] = iParam2;
	Global_17290.f_4945[3] = iParam3;
	Global_17290.f_4945[4] = iParam4;
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_371(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17290.f_7864 = iParam4;
	Global_17290.f_7860 = uParam0;
	Global_17290.f_7861 = uParam1;
	Global_17290.f_7862 = uParam2;
	Global_17290.f_7863 = uParam3;
}

int func_372(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_376(0) == -1 && Global_2593990 == iParam1)
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
	}
	return 0;
}

int func_373(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		fVar0 = unk_0x49A01EDAEB73491F(2, 218);
	}
	if (fVar0 < -0.8f || unk_0xF334707DE9C8DE80(2, 189))
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
	}
	return 0;
}

int func_374(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		fVar0 = unk_0x49A01EDAEB73491F(2, 219);
	}
	if (fVar0 > 0.8f || unk_0xF334707DE9C8DE80(2, 187))
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
	}
	return 0;
}

int func_375(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		fVar0 = unk_0x49A01EDAEB73491F(2, 219);
	}
	if (fVar0 < -0.8f || unk_0xF334707DE9C8DE80(2, 188))
	{
		if (!func_401(uParam0))
		{
			func_352(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_415(uParam0);
			return 1;
		}
	}
	else if (func_401(uParam0))
	{
		func_402(uParam0);
	}
	return 0;
}

int func_376(float fParam0)
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	unk_0x15AEB7AC36092E93(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x15AEB7AC36092E93(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xCEC227FFDAB08FF3();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_2593984 >= fVar0 && Global_2593984 < fVar5)
		{
			return -999;
		}
	}
	if (Global_2593984 >= fVar0 && Global_2593984 < fVar4)
	{
		return -1;
	}
	if (Global_2593984 >= fVar4 && Global_2593984 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_377()
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		return unk_0xD464BA52FA359903(2, 237);
	}
	return 0;
}

void func_378(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x84A97C70FFDEC0C8();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_379(int iParam0, bool bParam1, int iParam2)
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
		StringCopy(&(Global_2593914.f_21), "", 16);
	}
}

int func_380()
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (Global_2593990 > -1)
		{
			if (unk_0x3CEEA45E4779F6BD(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_381(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304() || unk_0xF35D072F1A7DC0A4())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3FCD624098F3BEED();
	}
	if (Global_2593990 == -6)
	{
		unk_0x6AFF68FA662160F0(4);
		if (iParam0 && unk_0xF334707DE9C8DE80(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2593990 = -1;
			return 0;
		}
	}
	if (((Global_2593990 > -1 || Global_2593990 == -3) || Global_2593990 == -2) || unk_0x6B0CA192CBB0448D())
	{
		unk_0x6AFF68FA662160F0(1);
		return 0;
	}
	if (Global_2593990 == -1 && iParam0)
	{
		if (unk_0xF334707DE9C8DE80(2, 237))
		{
			unk_0x6AFF68FA662160F0(4);
			Global_2593990 = -6;
			return 1;
		}
		else
		{
			unk_0x6AFF68FA662160F0(3);
			return 0;
		}
	}
	unk_0x6AFF68FA662160F0(1);
	return 0;
}

void func_382(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		Global_2593990 = -1;
		return;
	}
	unk_0x88DE74AEE27B9226(1);
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x15AEB7AC36092E93(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x15AEB7AC36092E93(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xCEC227FFDAB08FF3();
	func_384();
	if (Global_2593990 == -6)
	{
		return;
	}
	Global_2593990 = -1;
	fVar7 = Global_2593984;
	fVar8 = Global_2593985;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= fVar3) && Global_2593985 < (fVar3 + fVar6))
		{
			Global_2593990 = -2;
			if (bParam3)
			{
				func_383(0);
			}
			return;
		}
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= (fVar3 + fVar6)) && Global_2593985 < (fVar3 + 0.034722f))
		{
			Global_2593990 = -3;
			if (bParam3)
			{
				func_383(0);
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
			Global_2593990 = 0;
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
				unk_0x8C8A1913314B5A90(76, 84);
				unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
				func_346(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xCEC227FFDAB08FF3();
			}
		}
		Global_2593990 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2593990 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2593990 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2593990 = -4;
		return;
	}
	Global_2593990 = -1;
}

void func_383(bool bParam0)
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	if (Global_2593990 == -2)
	{
		func_346(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2593990 == -3)
	{
		func_346(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_384()
{
	Global_2593986 = Global_2593984;
	Global_2593987 = Global_2593985;
	Global_2593984 = unk_0x18E93C7ABCA08D6C(2, 239);
	Global_2593985 = unk_0x18E93C7ABCA08D6C(2, 240);
	Global_2593988 = (Global_2593984 - Global_2593986);
	Global_2593989 = (Global_2593985 - Global_2593987);
}

float func_385(float fParam0)
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

void func_386(var uParam0)
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
	unk_0xC163336F8C5EA891(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_371(uVar0, uVar1, uVar2, uVar3, 1);
	func_370(1, 2, 0, 0, 0);
	func_369(1, 2, 1, 1, 1);
	func_368(0, 1, 0, 0, 0);
	func_367("DARTS_TITLE");
	func_365(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_361(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_358(0, 1, 0);
	func_361(1, "DARTS_SETS", 0, 1, 0, 0);
	func_358(1, 1, 0);
	func_361(2, "DARTS_START", 0, 1, 0, 0);
	func_357(2, 141, 141, 1);
	func_356(0);
	func_379(0, 1, 1);
	func_378("DARTS_LEGD", 0, 0);
	func_387();
	func_355(201, "ITEM_SELECT", -1, 0);
	func_355(202, "IB_QUIT", -1, 0);
}

void func_387()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0x9FFE0ECA5F63C809(0.325f, 0.3f);
	}
}

int func_388(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_411() && unk_0x84A97C70FFDEC0C8() >= iLocal_324 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x7E3640C27B17457C() && !unk_0x83D6BCB493FCFCBA())
		{
			unk_0x0FBCFDA15A0FB2D5(500);
		}
	}
	if (unk_0x7E3640C27B17457C() && *iParam0 != 8)
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
						iLocal_324 = unk_0x84A97C70FFDEC0C8();
						func_396(uParam1->f_1, uParam1->f_4, func_398(2), func_397(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_267(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_254(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_415(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_404(uParam5) > 1f && !func_284("DARTS_DOUBLE_T"))
					{
						func_399("DARTS_DOUBLE_T", -1);
					}
					if (func_404(uParam5) > 5f)
					{
						func_415(uParam5);
						unk_0x04890EB0282525A5(1);
						func_390(uParam1->f_1, uParam1->f_4, func_398(3), func_397(0), 1000);
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
					if (!unk_0x4E1E09031AC5EF6E(uLocal_128))
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
								unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_415(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_404(uParam5) > 1f && !func_284("DARTS_TRIPLE_T"))
					{
						func_399("DARTS_TRIPLE_T", -1);
					}
					if (func_404(uParam5) > 5f)
					{
						func_415(uParam5);
						unk_0x04890EB0282525A5(1);
						func_396(uParam1->f_1, uParam1->f_4, func_398(4), func_397(0), 1000, 0);
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
					if (!unk_0x4E1E09031AC5EF6E(uLocal_127))
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
								unk_0xEE59E0DAFA4B08CD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_415(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_404(uParam5) > 1f && !func_284("DARTS_BULL_T"))
					{
						func_399("DARTS_BULL_T", -1);
					}
					if (func_404(uParam5) > 5f)
					{
						func_415(uParam5);
						unk_0x04890EB0282525A5(1);
						unk_0xA93E75A5493862BD(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_390(uParam1->f_1, uParam1->f_4, func_398(5), func_397(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x4E1E09031AC5EF6E(uLocal_128) && !func_284("DARTS_DBL_WIN"))
			{
				func_399("DARTS_DBL_WIN", -1);
			}
			if (func_404(uParam5) > 6f)
			{
				func_415(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xA93E75A5493862BD(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xA264B0A017677373(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x4E1E09031AC5EF6E(uLocal_120))
			{
				iLocal_31 = 0;
				unk_0x04890EB0282525A5(1);
				unk_0x59C0D363E5A5B548();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_389(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x7E3640C27B17457C())
			{
				iLocal_31 = 0;
				unk_0x04890EB0282525A5(1);
				unk_0x59C0D363E5A5B548();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_389(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x55EB2099508DD1C3(uLocal_120, 1);
				unk_0xFF11D473E95357D3(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_389(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x7887B64A08364778(*uParam0))
	{
		unk_0xBB9A2DB94A862D7A(*uParam0, Var0, 1, 0, 0, 1);
		unk_0x523D268641392C22(uParam0);
		unk_0x77CEDAB7C44BFD4E(uParam0);
	}
}

void func_390(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0xD4D61606DCCBDA3F(uLocal_128);
	unk_0xBA44410A0086D31F(uLocal_128, 35f);
	unk_0xDBB81B5CF32D8413(uLocal_128, unk_0x0A0C20E171493CD0(Param0, fParam3, Param4));
	unk_0x3375089ABC5EBB4E(uLocal_128, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0xA264B0A017677373(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_391(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_401(&(uParam0->f_2)))
	{
		func_415(&(uParam0->f_2));
	}
	unk_0x7FE30C99EA3439F7(14);
	if (!bParam2)
	{
		unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x131F832AD6923854(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF334707DE9C8DE80(2, 201))
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
		func_402(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_392(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_393(iParam5);
	unk_0x3B6EF6403E3F1CAC(*uParam0, "RESET_MOVIE");
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(*uParam0, sVar0);
	unk_0x0BBDB952BE56A9DF("STRING");
	unk_0xF5640E619D8FCD5B(iParam4);
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0xCB329F559FA7DCD0();
	if (!unk_0xC55B9553B3EDADE9(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x1B215CC37BF52E79(100);
		unk_0x2C310F11D2096992(true);
	}
	unk_0xBBAAC5B2437ACF2A();
	if (bParam6)
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "TRANSITION_UP");
		unk_0x573CAEB6F4A4E750(iParam7);
		unk_0xBBAAC5B2437ACF2A();
	}
	func_415(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_393(int iParam0)
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

void func_394()
{
	unk_0x55EB2099508DD1C3(uLocal_120, 1);
	unk_0xD08D9B79AF63C59F(1, false, 3000, 1, 0, 0);
	if (unk_0x9FB26939A9557171(uLocal_127))
	{
		unk_0x55EB2099508DD1C3(uLocal_127, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_122))
	{
		unk_0x55EB2099508DD1C3(uLocal_122, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_123))
	{
		unk_0x55EB2099508DD1C3(uLocal_123, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_124))
	{
		unk_0x55EB2099508DD1C3(uLocal_124, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_125))
	{
		unk_0x55EB2099508DD1C3(uLocal_125, 0);
	}
	if (unk_0x9FB26939A9557171(uLocal_126))
	{
		unk_0x55EB2099508DD1C3(uLocal_126, 0);
	}
}

char* func_395(int iParam0)
{
	if (iLocal_335 == 1)
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
	else if (iLocal_335 == 2)
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

void func_396(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0xD4D61606DCCBDA3F(uLocal_127);
	unk_0xBA44410A0086D31F(uLocal_127, 35f);
	unk_0xDBB81B5CF32D8413(uLocal_127, unk_0x0A0C20E171493CD0(Param0, fParam3, Param4));
	unk_0x3375089ABC5EBB4E(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0x55EB2099508DD1C3(uLocal_127, 1);
	}
	else
	{
		unk_0xA264B0A017677373(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_397(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_398(int iParam0)
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

void func_399(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_400(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(func_479(), 0))
	{
		func_4(func_479(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_401(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
}

void func_402(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_403(var uParam0, char* sParam1, int iParam2)
{
	unk_0x66D323B3A964108A(uParam0, sParam1, func_6(iParam2), 1);
}

float func_404(var uParam0)
{
	if (func_401(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_405(var uParam0)
{
	if (!func_401(uParam0))
	{
		func_352(uParam0);
	}
	else
	{
		func_415(uParam0);
	}
}

void func_406()
{
	Global_14611 = 0;
	func_407();
}

void func_407()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_408(int iParam0)
{
	if (Global_14604)
	{
		func_410(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_409())
	{
		Global_14443.f_1 = 3;
	}
}

int func_409()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_410(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_411()
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x3CEEA45E4779F6BD(0, 18) || unk_0x3CEEA45E4779F6BD(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_412(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x80AA649904BB5788();
	if (unk_0x7887B64A08364778(uVar0))
	{
		if (!func_413(iVar0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x108650178993C477(iVar0, unk_0xD5A676B97920D126(), Local_293, 0, 1, 0))
			{
				unk_0x4DE0ADF29E52985C(iVar0);
				unk_0x01976E3C7B2E5437(iVar0, 0, 0);
				unk_0xB5024B946329EB6A(iVar0, 0, 0);
				unk_0xBBAF4B768DDB7572(iVar0, 1);
				unk_0xC53606C390BE2727(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
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

void func_414(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x1B215CC37BF52E79(iParam1);
	unk_0xBBAAC5B2437ACF2A();
}

void func_415(var uParam0)
{
	func_416(uParam0, 0f);
}

void func_416(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_417(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_418(var uParam0, var uParam1, char* sParam2)
{
	unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_419(uParam1);
	func_419(sParam2);
	unk_0xBBAAC5B2437ACF2A();
}

void func_419(char* sParam0)
{
	unk_0xDC0269D08B29626C(uParam0);
}

void func_420(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(func_479()) && !unk_0x00B5B0B68211D89B(func_479()))
	{
		unk_0x195690A8FA7145B8(func_479());
	}
	else
	{
		if (unk_0x7887B64A08364778(uParam8->f_5) && !unk_0x00B5B0B68211D89B(uParam8->f_5))
		{
			unk_0xC53606C390BE2727(uParam8->f_5, 1, 1);
			uLocal_296[1] = uParam8->f_5;
			unk_0x37338B7B7C4982DC(uLocal_296[1]);
		}
		else if (func_422(uParam7))
		{
			unk_0x37338B7B7C4982DC(uLocal_296[1]);
		}
		else
		{
			uLocal_296[1] = unk_0x8C855D8124E955CE(26, iLocal_332, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0xA438D75809973A56(uLocal_296[1], "Darts_name"))
		{
			iVar0 = unk_0x483BD2141ADAC3CE(uLocal_296[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_392 = func_425("RAYMOND");
				iLocal_393 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_392 = func_425("JOHAN");
				iLocal_393 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_392 = func_425("STAN");
				iLocal_393 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_392 = func_425("VINCE");
				iLocal_393 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_392 = func_425("KRISTY");
				iLocal_393 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_392 = func_425("MARLENE");
				iLocal_393 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_392 = func_425("LORIE");
				iLocal_393 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_392 = func_425("SHELLEY");
				iLocal_393 = -863218904;
			}
		}
		unk_0x570F410C5E24C75B(uLocal_296[1], "Darts_name", iLocal_393);
	}
	iVar1 = unk_0xA0A4DA31DEDFAC4F(uLocal_296[1]);
	func_421(iVar1);
	unk_0xBE29918F5B8EC2EF(uLocal_296[1], uLocal_296[0], 0);
	unk_0xBE29918F5B8EC2EF(uLocal_296[0], uLocal_296[1], 0);
}

void func_421(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 2);
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

int func_422(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), uParam0, -1))
	{
		if (!unk_0x00B5B0B68211D89B((*uParam0)[iVar0]))
		{
			if ((((((unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0xA0A4DA31DEDFAC4F((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xC53606C390BE2727((*uParam0)[iVar0], 1, 1);
				uLocal_296[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_423(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 3;
		while (iVar0 <= (150 - 1))
		{
			if (func_424(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_424(int iParam0)
{
	if (!func_81(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_425(char* sParam0)
{
	if (unk_0x37F0B37A9EF3F53B() == 7)
	{
		if (unk_0xCC257DA11A122B5F(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xCC257DA11A122B5F(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_426(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		uParam0->f_4 = unk_0x714F015B4D2DE1DC(*uParam0);
	}
	if (!bParam3)
	{
		func_428(uParam1, uParam0);
	}
	Local_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	Local_82 = { Local_82 + Local_56 };
	Local_79 = { unk_0x0A0C20E171493CD0(uParam0->f_1, uParam0->f_4, Local_82) };
	func_427(uParam2, uParam0);
}

void func_427(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_56 };
	*uParam0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_428(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { unk_0x0A0C20E171493CD0(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_429(var uParam0, var uParam1)
{
	if (!unk_0x3F51F950AB346CCA("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0x3F51F950AB346CCA("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x7AD0E9452821C95D(iLocal_28) || !unk_0x7AD0E9452821C95D(iLocal_29)) || !unk_0x7AD0E9452821C95D(iLocal_60)) || !unk_0x7AD0E9452821C95D(iLocal_332)) || !unk_0x52622CA85B1C304B(*uParam0)) || !unk_0x52622CA85B1C304B(uParam1->f_645)) || !unk_0x52622CA85B1C304B(uParam1->f_57)) || !unk_0x52622CA85B1C304B(uParam1->f_62)) || !unk_0x4A980428C9937F4E(3)) || !unk_0xB3BFE702989F8358("Darts")) || !unk_0xD7669BF035CDA5F6(sLocal_394)) || !unk_0xD7669BF035CDA5F6(sLocal_395)) || !func_430(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_430(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_323(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x68A99AC5778ED123(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0xA4B9C538A4CD7B0F(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xCB5E0E0EB67B3ECE("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB3BFE702989F8358("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xCB5E0E0EB67B3ECE("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB3BFE702989F8358("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_431(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_431(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x52622CA85B1C304B(*uParam0))
			{
				*uParam0 = unk_0x542F16A736FAC9A6(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x52622CA85B1C304B(*uParam0))
					{
						uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x52622CA85B1C304B(*uParam0))
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x52622CA85B1C304B(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_432(var uParam0, var uParam1)
{
	unk_0x4ACD1E4CBA159ED1(iLocal_28);
	unk_0x4ACD1E4CBA159ED1(iLocal_29);
	unk_0x4ACD1E4CBA159ED1(iLocal_60);
	unk_0x4ACD1E4CBA159ED1(iLocal_332);
	unk_0xCB5E0E0EB67B3ECE("Darts", 0);
	unk_0xCB5E0E0EB67B3ECE("ShopUI_Title_Darts", 0);
	unk_0x49E996A1E39EAAD7(sLocal_394);
	unk_0x49E996A1E39EAAD7(sLocal_395);
	*uParam0 = unk_0x542F16A736FAC9A6("darts_scoreboard");
	uParam1->f_645 = func_181();
	uParam1->f_57 = func_434();
	uParam1->f_62 = func_433();
	unk_0x68A99AC5778ED123("DARTS", 3);
}

var func_433()
{
	return unk_0x542F16A736FAC9A6("MIDSIZED_MESSAGE");
}

var func_434()
{
	return unk_0x542F16A736FAC9A6("MP_BIG_MESSAGE_FREEMODE");
}

void func_435(var uParam0, int iParam1, struct<3> Param2, float fParam5)
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
	if (!func_436(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0x0A0C20E171493CD0(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_436(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_437(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61.f_0 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (unk_0x93456A81D92B9712())
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

void func_438(var uParam0, int iParam1)
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

void func_439()
{
	int iVar0;
	
	unk_0x2B362F03D660B831();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_440(struct<3> Param0, float fParam3)
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
	
	fLocal_134 = unk_0x194EA65BE0B4C26F(0);
	fVar21 = 30f;
	fVar21 = func_385(fLocal_134);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0x93456A81D92B9712())
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
	Var3 = { unk_0x0A0C20E171493CD0(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0x0A0C20E171493CD0(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0x0A0C20E171493CD0(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0x0A0C20E171493CD0(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = unk_0xAEBECA050C9EB021(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_121 = unk_0xAEBECA050C9EB021(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_122 = unk_0xAEBECA050C9EB021(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_123 = unk_0xAEBECA050C9EB021(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_124 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_128 = unk_0xAEBECA050C9EB021(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0xAEBECA050C9EB021(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0xBA44410A0086D31F(uLocal_122, 43.35f);
	unk_0xBA44410A0086D31F(uLocal_123, 42.35f);
	unk_0x41702B9F8E97C108(uLocal_122, "HAND_SHAKE", 0.1f);
	unk_0x41702B9F8E97C108(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_441(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x7887B64A08364778(uParam1->f_4))
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

void func_442()
{
	Global_17151.f_6 = 1;
}

void func_443(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&Global_25429, iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_25429, iParam0);
	}
}

var func_444(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_445(iParam0, iParam1);
	unk_0x5BC7B5709E38CBE0(uVar1, &uVar0, -1);
	return uVar0;
}

var func_445(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_446(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_446(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_447(bool bParam0)
{
	if (bParam0)
	{
		func_448();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xB8A73E7DA87B2968(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_38(0))
		{
			func_408(0);
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

void func_448()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_449(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x44C6B5E0B96902FC(1);
	func_246(8);
	func_299();
	if (bLocal_306)
	{
		func_467(&uLocal_322);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_389(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x8188DB74546FF484(iLocal_28);
	unk_0x8188DB74546FF484(iLocal_29);
	if (!unk_0x00B5B0B68211D89B(uLocal_296[0]) && !unk_0x00B5B0B68211D89B(uLocal_296[1]))
	{
		unk_0x0565F5F2EE81A23F(uLocal_296[0]);
		unk_0x0565F5F2EE81A23F(uLocal_296[1]);
	}
	func_466();
	unk_0x8188DB74546FF484(iLocal_60);
	func_465();
	func_464(uParam1->f_645);
	func_463(&(uParam1->f_57));
	if (!unk_0xB529B2A4B7C64D6D(func_479(), 0))
	{
		unk_0xB3AD67B7714E1E77(func_479(), func_462());
		func_461(iLocal_330, iLocal_331);
	}
	else
	{
		func_459(&(uLocal_296[1]));
	}
	func_447(0);
	func_458(uParam2);
	func_35(0);
	unk_0x252BF044E85EB455(15);
	if (unk_0xC3BB749150EAA702())
	{
		if (iParam0->f_460 && !iLocal_320)
		{
			func_457(190, 0);
		}
	}
	func_92();
	func_439();
	func_84(&(uParam1->f_72));
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_313)
	{
		func_453(130, 0, 0);
		func_450();
	}
	func_443(23, 0);
	unk_0x01DFCA3621B68C4A();
}

void func_450()
{
	func_451();
}

int func_451()
{
	if (func_452(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_452(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_453(int iParam0, int iParam1, int iParam2)
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
		func_456((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = iParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_454();
	}
}

void func_454()
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
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_75(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_455() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_451();
				}
			}
		}
	}
}

int func_455()
{
	return Global_25185;
}

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_338();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_457(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0xC3BB749150EAA702())
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
		unk_0x61BD63CC30D9F71F(103, iLocal_151[1], 0f);
		unk_0x61BD63CC30D9F71F(99, iLocal_151[2], 0f);
		unk_0x61BD63CC30D9F71F(109, iLocal_151[3], 0f);
		unk_0x61BD63CC30D9F71F(106, iLocal_151[5], 0f);
		unk_0x61BD63CC30D9F71F(2, iLocal_151[10], 0f);
		unk_0x61BD63CC30D9F71F(107, iLocal_151[8], 0f);
		unk_0x61BD63CC30D9F71F(116, iLocal_151[6], 0f);
	}
}

void func_458(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x4292FC2ED4EC4212(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x2D337DD29A7ABD30())
		{
			unk_0x3B6EF6403E3F1CAC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x2C310F11D2096992(false);
			unk_0xBBAAC5B2437ACF2A();
		}
		unk_0x4292FC2ED4EC4212(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x82047209FE8411F9(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69965)
	{
		if (!unk_0x32DE3230A608DBE4(unk_0xF3F8195C98263BF5()))
		{
			if (!Global_69966)
			{
				if (unk_0x7E3640C27B17457C() && !func_452(0))
				{
					unk_0xFF11D473E95357D3(800);
				}
			}
		}
	}
	func_35(0);
}

void func_459(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0) && !unk_0x00B5B0B68211D89B(*uParam0))
	{
		unk_0x873418BFBF9A6780(&uLocal_333);
		unk_0x456121A0AAC868D4(&uLocal_333);
		if (unk_0x7887B64A08364778(uLocal_296[0]))
		{
			unk_0x0988FFC0C75637DF(0, uLocal_296[0], 8000, 2049, 3);
		}
		unk_0x7AFB953E6654EA8F(0, 1000);
		if (bLocal_311)
		{
			if (!unk_0xF44A5E894FE76438(Global_101613, 10))
			{
				unk_0x1D2CBA8F2F00D745(0, func_460(iLocal_335 == 2, Local_376, Local_382), 1f, 20000, 0.25f, 0, func_111(iLocal_335 == 2, fLocal_386, fLocal_388));
			}
			else
			{
				unk_0x1D2CBA8F2F00D745(0, func_460(iLocal_335 == 2, Local_373, Local_379), 1f, 20000, 0.25f, 0, func_111(iLocal_335 == 2, fLocal_385, fLocal_387));
			}
			unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x1D2CBA8F2F00D745(0, func_460(iLocal_335 == 2, Local_373, Local_379), 1f, 20000, 0.25f, 0, func_111(iLocal_335 == 2, 172.6813f, 142.6717f));
			unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0xCFE67FBB69F1C410(uLocal_333);
		unk_0x8B06B801B92CEC2D(*uParam0, uLocal_333);
		unk_0x7D99F00F48D15ADB(*uParam0, 1);
	}
	unk_0x8188DB74546FF484(iLocal_332);
}

Vector3 func_460(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_461(int iParam0, var uParam1)
{
	if (Global_87645 == iParam0)
	{
		Global_87646 = Global_87645;
		Global_87647 = uParam1;
		Global_87645 = 23;
	}
}

var func_462()
{
	return unk_0xB31CADDD9247FE2C(unk_0xF3F8195C98263BF5());
}

void func_463(var uParam0)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x4292FC2ED4EC4212(uParam0);
		*uParam0 = 0;
	}
}

void func_464(var uParam0)
{
	unk_0x4292FC2ED4EC4212(&uParam0);
}

void func_465()
{
	unk_0x04890EB0282525A5(1);
	unk_0x13CD40F73C9376E6(0);
	unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	unk_0xFE3C4806D54DF474(1);
}

void func_466()
{
	if (unk_0x7887B64A08364778(uLocal_59))
	{
		unk_0x77CEDAB7C44BFD4E(&iLocal_59);
	}
}

void func_467(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x7887B64A08364778(uVar0))
	{
		if (!func_413(iVar0))
		{
			unk_0x01976E3C7B2E5437(iVar0, 1, 0);
			unk_0xB5024B946329EB6A(iVar0, 1, 0);
			unk_0xBBAF4B768DDB7572(iVar0, 0);
		}
	}
}

void func_468()
{
	int iVar0;
	
	if (unk_0x4AAFD43C0AFB7A1A("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101652.f_8028 || func_452(0))
	{
		if (!func_476())
		{
			iVar0 = func_475();
			if (iVar0 != -1)
			{
				if (!func_470(iVar0))
				{
					return;
				}
				unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_469();
		}
	}
}

void func_469()
{
	Global_91521 = 1;
	if (unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_79())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
	}
	else if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_79())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 25);
	}
}

int func_470(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_469();
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xAF433BF9CD4B48B6(5000);
	}
	iVar0 = Global_82571[iParam0 /*5*/];
	iVar1 = Global_69966.f_109[iVar0 /*4*/];
	func_474(iVar1, 1);
	unk_0x991BBF1AA54F8B25(unk_0xFB6B3EEFAB2DD12C());
	unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
	func_471(&(Global_101652.f_2079.f_539), iVar1);
	if (Global_85994 == Global_91523)
	{
		Global_101652.f_8028.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xF44A5E894FE76438(Global_82607[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xE044321D40979D1A(0);
		}
	}
	Global_101652.f_8028.f_330[iVar1 /*6*/].f_2++;
	Global_85994 = Global_91523;
	if (iParam0 == -1)
	{
		if (Global_101652.f_8028)
		{
		}
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_471(var uParam0, int iParam1)
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
		iVar1 = Global_101652.f_17476[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_473(Global_101652.f_17476[iVar0], &Var2, &fVar5))
			{
				Global_101652.f_17476[iVar0] = 318;
				func_472(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89209[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_9 = 0f;
				Global_89209[iVar0 /*29*/].f_12 = 0f;
				Global_89209[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_10 = 0f;
				Global_89209[iVar0 /*29*/].f_13 = 0f;
				Global_89209[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_11 = 0f;
				Global_89209[iVar0 /*29*/].f_14 = 0f;
				Global_89209[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_26 = 0f;
				Global_89209[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_27 = 0f;
				Global_89209[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_472(var uParam0)
{
	*uParam0 = -15;
}

int func_473(int iParam0, var uParam1, float fParam2)
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
			return func_473(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_473(8, uParam1, fParam2);
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

void func_474(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

int func_475()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_476()
{
	if (((Global_91486 == 13 || Global_91486 == 10) || Global_91486 == 11) || Global_91486 == 12)
	{
		return 0;
	}
	return 1;
}

void func_477(int iParam0, bool bParam1)
{
	if (unk_0x00B5B0B68211D89B(func_479()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x1906CFCBD9C30E25(func_479(), func_462()))
		{
			return;
		}
		if (!unk_0x00B5B0B68211D89B(func_478()))
		{
			if (!unk_0x1906CFCBD9C30E25(func_478(), func_462()))
			{
				return;
			}
		}
	}
	if (Global_87645 == 23)
	{
		Global_87647 = 10;
		Global_87645 = iParam0;
	}
}

var func_478()
{
	return Global_87652;
}

int func_479()
{
	return Global_87651;
}

void func_480()
{
	if (iLocal_291 == 1)
	{
		return;
	}
	func_299();
	unk_0xD5569AFBE1807925("Darts");
	iLocal_291 = 1;
}

int func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


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
	iVar1774 = 0;
	sLocal_393 = "facials@gen_female@variations@happy";
	switch (func_489(unk_0x18F7BE9ACB7D08F4()))
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
	uLocal_295[0] = unk_0x18F7BE9ACB7D08F4();
	bLocal_310 = true;
	Var1778 = { 1992.293f, 3050.583f, 47.98973f };
	Var1781 = { -572.0406f, 294.1958f, 79.9374f };
	func_488();
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		iLocal_334 = 1;
		switch (unk_0x61E9B3BFA06B017B(0, 2))
		{
			case 0:
				iLocal_331 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_331 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_329 = 10;
		unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0x31F12808DC47A9E5(ScriptParam_0.f_4))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (iLocal_334 == 2)
			{
				ScriptParam_0 = { Var1781 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1778 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x0DDC3D6589A9421A(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0x7F058F004EA8664C(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0xB07D8951CFD01352(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1784, 0);
				ScriptParam_0.f_3 = Var1784.f_2;
			}
		}
	}
	else
	{
		Var1784 = { unk_0x761660F5CE986DC4(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0x74C2FE037DFC8B4A(func_487(), 0))
	{
		func_485(iLocal_329, 1);
		if (unk_0x657B649BA2AD3582(func_487(), 0))
		{
			unk_0x5941F8B2A813BBA8(func_487(), 0, 0);
		}
		uLocal_295[1] = func_487();
	}
	else
	{
		unk_0x955FF17089AF6072(1);
	}
	if (unk_0x76BF814AB8D4CAB8(67))
	{
		func_476();
		func_458(&Var0, &Var508, &Var1191);
	}
	unk_0xB9C41B3823E99CBB(0);
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
	func_456(1);
	iLocal_325 = func_453(func_489(uLocal_295[0]), 1);
	fVar1776 = (unk_0xBBDA792448DB5A89(iLocal_325) / 100f);
	fVar1777 = (fVar1776 * 1200f);
	iLocal_142 = unk_0xF2DB717A73826179(fVar1777);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_452(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xE05212008FE9A018(2);
		unk_0x3F19B70555683951();
		unk_0x83B36F3602F99423(15, 0f, -0.0375f);
		if (iLocal_317 && Var0.f_0 < 13)
		{
			unk_0x0F2B57FBB3FE2130(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0x0FAE113CE72ED842(ScriptParam_0.f_5) && !unk_0x31F12808DC47A9E5(func_487())) || (unk_0x31F12808DC47A9E5(func_487()) && unk_0x0FAE113CE72ED842(func_487())))
		{
			func_458(&Var0, &Var508, &Var1191);
		}
		if (!unk_0x0FAE113CE72ED842(uLocal_295[0]))
		{
			unk_0xB05E48165A6F6058(uLocal_295[0], 239, 1);
			unk_0xB05E48165A6F6058(uLocal_295[0], 124, 1);
			func_451();
			unk_0x20ABA6FD12003239(0);
			unk_0x20ABA6FD12003239(2);
			iVar1775 = 0;
			while (iVar1775 < unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar1803, -1))
			{
				if (uVar1803[iVar1775] != uLocal_295[1])
				{
					if (!unk_0x0FAE113CE72ED842(uVar1803[iVar1775]))
					{
						unk_0xB05E48165A6F6058(uVar1803[iVar1775], 240, 1);
					}
				}
				iVar1775++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0xEFF1F12403847394(1);
					func_450(&(Var0.f_243), &ScriptParam_0);
					func_449(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x31F12808DC47A9E5(Var0.f_243))
					{
						Local_366 = { unk_0x0AF3D0AB54EA2104(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_369 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = unk_0x2F192286DA6346A2(26379945, Local_366, Local_369, 65f, 0, 2);
						unk_0x2A2BB8210FB20081(uLocal_129, 30f);
					}
					func_448();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
					{
						unk_0x7EE425AE3317BA69(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
						{
							unk_0x56C7B20E11B37066(&uLocal_332);
							unk_0xC8BEB049F3BFC0AB(&uLocal_332);
							unk_0x5941F8B2A813BBA8(0, 0, 0);
							unk_0xAFDA7B8F83B2CA58(uLocal_332);
							unk_0x73F69DD57B7E92A9(unk_0x18F7BE9ACB7D08F4(), uLocal_332);
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
							func_447(&(Var0.f_5[iVar1825 /*79*/][iVar1826 /*26*/]), iVar1825);
							iVar1826++;
						}
						iVar1825++;
					}
					iVar1827 = 0;
					while (iVar1827 < 3)
					{
						func_447(&(Var0.f_164[iVar1827 /*26*/]), 0);
						iVar1827++;
					}
					iVar464 = 2;
					func_446(0);
					func_444(&Var477, iLocal_334, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x31F12808DC47A9E5(Var0.f_243))
					{
						Var1784 = { unk_0xCC9FF9C751023D2A(Var0.f_243, Var477.f_18) };
					}
					func_441(&Var477, &Var508);
					unk_0xD2F6D4358B6E3AD0(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_438(&Var477, &Var508))
					{
						func_435(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_388 = func_489(uLocal_295[0]);
						switch (iLocal_388)
						{
							case 0:
								sLocal_390 = func_434("MICHAEL");
								if (!unk_0xB03A1684359C50A1(Global_104512, 0))
								{
									sVar1793 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_390 = func_434("FRANKLIN");
								bLocal_314 = true;
								if (!unk_0xB03A1684359C50A1(Global_104512, 0))
								{
									sVar1793 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_390 = func_434("TREVOR");
								if (!unk_0xB03A1684359C50A1(Global_104512, 0))
								{
									sVar1793 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x74C2FE037DFC8B4A(func_487(), 0))
						{
							iLocal_389 = func_489(func_487());
							if (iLocal_389 == 145)
							{
								iLocal_389 = func_432(func_487());
							}
							switch (iLocal_389)
							{
								case 0:
									sLocal_391 = func_434("MICHAEL");
									break;
								
								case 1:
									sLocal_391 = func_434("FRANKLIN");
									break;
								
								case 2:
									sLocal_391 = func_434("TREVOR");
									break;
								
								case 19:
									sLocal_391 = func_434("LAMAR");
									unk_0xDEA702F2138E0B35(func_487(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_391 = func_434("JIMMY");
									break;
								
								default:
									sLocal_391 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1773 = unk_0x61E9B3BFA06B017B(0, 200);
							if (iLocal_334 == 2)
							{
								if (iVar1773 < 51)
								{
									sLocal_391 = func_434("RAYMOND");
									iLocal_392 = 954610991;
								}
								else if (iVar1773 < 101)
								{
									sLocal_391 = func_434("JOHAN");
									iLocal_392 = 94453331;
								}
								else if (iVar1773 < 151)
								{
									sLocal_391 = func_434("STAN");
									iLocal_392 = 1891555423;
								}
								else
								{
									sLocal_391 = func_434("VINCE");
									iLocal_392 = -1067630349;
								}
							}
							else if (iVar1773 < 51)
							{
								sLocal_391 = func_434("KRISTY");
								iLocal_392 = 885327384;
							}
							else if (iVar1773 < 101)
							{
								sLocal_391 = func_434("MARLENE");
								iLocal_392 = -1791000994;
							}
							else if (iVar1773 < 151)
							{
								sLocal_391 = func_434("LORIE");
								iLocal_392 = 1954368234;
							}
							else
							{
								sLocal_391 = func_434("SHELLEY");
								iLocal_392 = -863218904;
							}
						}
						uLocal_59 = unk_0x7082ECB3731CD86C(iLocal_60, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x11001FB6690D5E51())
					{
						uVar1824 = unk_0x7082ECB3731CD86C(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_429(Var0.f_243.f_4, Var465, &uVar1803, &ScriptParam_0);
						func_428(&Var477, sLocal_390, sLocal_391);
						unk_0x267F7A2DFDFFB077(uLocal_295[1]);
						uLocal_333 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x1DCD07B7EA2DDAFE(unk_0x18F7BE9ACB7D08F4(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_427(&(Var0.f_257), 0, unk_0x18F7BE9ACB7D08F4(), sLocal_390, 0, 1);
						if (unk_0x74C2FE037DFC8B4A(func_487(), 0))
						{
							if (iLocal_334 == 2)
							{
								func_427(&(Var0.f_257), 3, uLocal_295[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_427(&(Var0.f_257), 3, uLocal_295[1], "DartsMelHick1", 0, 1);
							}
							iVar1774 = -1;
						}
						else
						{
							func_427(&(Var0.f_257), 3, func_487(), sLocal_391, 0, 1);
							func_425(&uVar1800);
							iVar1774 = 6;
						}
						if (!unk_0xB03A1684359C50A1(Global_104512, 0))
						{
							iVar1774 = -1;
						}
						else
						{
							iVar1774 = 3;
						}
						func_424(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x0FAE113CE72ED842(uLocal_295[1]) && unk_0xB4FD6D3F49C8B3B4(uLocal_295[0])) && !unk_0x657B649BA2AD3582(uLocal_295[0], 1)) && unk_0xB4FD6D3F49C8B3B4(uLocal_295[1])) && !unk_0x657B649BA2AD3582(uLocal_295[1], 1))
					{
						bLocal_305 = func_422(&uLocal_321);
						if ((func_421() && unk_0x5AFB8ED811F05E4D() >= iLocal_323 + 1000) && iVar1774 != 9)
						{
							if (!unk_0xEC0ECEF2AF3FDA8D() && !unk_0xBC13F084F3B1B544())
							{
								unk_0xFF91FEC6E57575E4(500);
							}
						}
						if (unk_0xEC0ECEF2AF3FDA8D() && iVar1774 != 9)
						{
							func_418(0);
							func_416();
							iVar1774 = 9;
						}
						switch (iVar1774)
						{
							case -1:
								if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
								{
									uLocal_327 = unk_0x3C3438327FFEB224(unk_0x0AF3D0AB54EA2104(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x93FDA3BF59E7B77F(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xFB34CCC40E7806C4(uLocal_333, uLocal_327, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x2C535610856B3F4D(uLocal_333, 1);
									unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
									unk_0x81D9C52E2A8DA464(uLocal_295[0]);
									unk_0x81D9C52E2A8DA464(uLocal_295[1]);
									unk_0xD9FCA20C1C5553F7(uLocal_295[0]);
									unk_0xD9FCA20C1C5553F7(uLocal_295[1]);
									unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xB5746603774C4C9D(uLocal_295[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xB5746603774C4C9D(uLocal_295[0], "mini@dartsintro", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x2ADF31478643C93D(uVar1824, uLocal_327, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_415(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 0:
								if (unk_0xCF0FA6AB02EA68F7(uLocal_327))
								{
									if (!bVar1770)
									{
										if (func_414(&uVar1800) > 1.5f)
										{
											func_413(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_412(&uVar1800);
										}
									}
									else if (!unk_0x5C96F75B17C7C048(uLocal_295[0]))
									{
										if (!bVar1771)
										{
											if (!func_411(&uVar1800))
											{
												func_425(&uVar1800);
											}
											else if (func_414(&uVar1800) > 0.5f)
											{
												func_410(uLocal_295[1]);
												func_412(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_415(&uVar1800);
											func_409("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x74CE979B042A1253(uLocal_327) > 0.25f)
											{
												func_415(&uVar1800);
												func_409("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x74CE979B042A1253(uLocal_327) > 0.55f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x74CE979B042A1253(uLocal_327) > 0.85f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x74CE979B042A1253(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1774++;
									}
									else if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x74CE979B042A1253(uLocal_327) > 0.99f)
								{
									if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
									{
										func_406(Var0.f_243.f_1, Var0.f_243.f_4, func_408(2), func_407(0), 0, 1);
										iLocal_31 = 0;
										unk_0xEFF1F12403847394(1);
										unk_0x13AD763DBD687842(uLocal_333, 0);
										unk_0x267F7A2DFDFFB077(uLocal_295[0]);
										unk_0x267F7A2DFDFFB077(uLocal_295[1]);
										unk_0xF392BEDFD9CD33F7(uVar1824, -1000f, 0);
										unk_0x5BE35A26B9097351(&uVar1824);
										unk_0xA11D9B06B99FE786(func_405(0));
										func_412(&uVar1800);
										Var0.f_0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
								{
									uLocal_327 = unk_0x3C3438327FFEB224(unk_0x0AF3D0AB54EA2104(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x93FDA3BF59E7B77F(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xFB34CCC40E7806C4(uLocal_333, uLocal_327, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x2C535610856B3F4D(uLocal_333, 1);
									unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
									unk_0x81D9C52E2A8DA464(uLocal_295[0]);
									unk_0x81D9C52E2A8DA464(uLocal_295[1]);
									unk_0xD9FCA20C1C5553F7(uLocal_295[0]);
									unk_0xD9FCA20C1C5553F7(uLocal_295[1]);
									unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xB5746603774C4C9D(uLocal_295[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xB5746603774C4C9D(uLocal_295[0], "mini@dartsintro_alt1", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x2ADF31478643C93D(uVar1824, uLocal_327, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_415(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 4:
								if (unk_0xCF0FA6AB02EA68F7(uLocal_327))
								{
									if (!bVar1770)
									{
										if (func_414(&uVar1800) > 0.5f)
										{
											func_413(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_412(&uVar1800);
										}
									}
									else if (!unk_0x5C96F75B17C7C048(uLocal_295[0]))
									{
										if (!bVar1771)
										{
											if (!func_411(&uVar1800))
											{
												func_425(&uVar1800);
											}
											else if (func_414(&uVar1800) > 0.25f)
											{
												func_410(uLocal_295[1]);
												func_412(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									if (unk_0x74CE979B042A1253(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1774++;
									}
									else if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x74CE979B042A1253(uLocal_327) > 0.99f)
								{
									if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
									{
										func_404();
										unk_0x13AD763DBD687842(uLocal_333, 0);
										unk_0x267F7A2DFDFFB077(uLocal_295[0]);
										unk_0x267F7A2DFDFFB077(uLocal_295[1]);
										unk_0xF392BEDFD9CD33F7(uVar1824, -1000f, 0);
										unk_0x5BE35A26B9097351(&uVar1824);
										unk_0xA11D9B06B99FE786(func_405(0));
										func_412(&uVar1800);
										Var0.f_0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0xEC0ECEF2AF3FDA8D())
								{
									iLocal_317 = 1;
									iLocal_31 = 0;
									unk_0xEFF1F12403847394(1);
									if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
									{
										unk_0x990FFD4FB6ADD630(uLocal_295[0], Var465, 1, 0, 0, 1);
										unk_0xB88121FF8A34A66F(uLocal_295[0], Var0.f_243.f_4);
										unk_0x990FFD4FB6ADD630(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
										unk_0xB88121FF8A34A66F(uLocal_295[1], Var0.f_243.f_4);
										unk_0x267F7A2DFDFFB077(uLocal_295[0]);
										unk_0x267F7A2DFDFFB077(uLocal_295[1]);
									}
									unk_0x13AD763DBD687842(uLocal_333, 0);
									unk_0xF392BEDFD9CD33F7(uVar1824, -1000f, 0);
									unk_0x5BE35A26B9097351(&uVar1824);
									if (!unk_0xB03A1684359C50A1(Global_104512, 0))
									{
										func_406(Var0.f_243.f_1, Var0.f_243.f_4, func_408(2), func_407(0), 0, 1);
									}
									else
									{
										func_404();
									}
									unk_0xA11D9B06B99FE786(func_405(0));
									func_412(&uVar1800);
									unk_0x8359CF51370FC969(500);
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
							iLocal_323 = unk_0x5AFB8ED811F05E4D();
							if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
							{
								unk_0x990FFD4FB6ADD630(uLocal_295[0], Var465, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(uLocal_295[0], Var0.f_243.f_4);
								unk_0x990FFD4FB6ADD630(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(uLocal_295[1], Var0.f_243.f_4);
							}
							unk_0x64D773F3BE6DC50A(func_405(1));
							iVar1774 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_323) > 1500)
							{
								func_402(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1774++;
							}
							break;
						
						case 2:
							if (!func_401(&(Var508.f_57), 1, 0))
							{
								unk_0x64D773F3BE6DC50A(func_405(1));
								iVar1774 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xB03A1684359C50A1(Global_104512, 0))
					{
						if (func_398(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1797))
						{
							unk_0xD2A9C3F486236CC5(&Global_104512, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x2C535610856B3F4D(uLocal_120, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0xEC0ECEF2AF3FDA8D())
					{
						unk_0x8359CF51370FC969(500);
					}
					switch (iVar1774)
					{
						case 0:
							if (!unk_0x31F12808DC47A9E5(func_487()))
							{
								if (!unk_0xB03A1684359C50A1(Global_104512, 10))
								{
									unk_0xD2A9C3F486236CC5(&Global_104512, 10);
								}
								else
								{
									unk_0x62148293B793073B(&Global_104512, 10);
								}
								func_396(&Var508);
								iVar1774++;
							}
							else
							{
								func_396(&Var508);
								iVar1774++;
							}
							break;
						
						case 1:
							if (unk_0xC339C5C5B5E8BC5B())
							{
								if (fLocal_134 != unk_0x47DA03BCFF902E84(0))
								{
									fLocal_134 = unk_0x47DA03BCFF902E84(0);
									unk_0x2A2BB8210FB20081(uLocal_120, func_395(fLocal_134));
									unk_0x2A2BB8210FB20081(uLocal_121, func_395(fLocal_134));
								}
							}
							if (func_335(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xA11D9B06B99FE786(func_405(1));
								if (Var0.f_452 > 0)
								{
									iVar1774 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_334(&Var477, 0, 0, 0, 0);
										bVar1769 = true;
									}
									func_331(1, -1);
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
					if (func_324(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_104551.f_18940.f_5 >= 5 && Global_104551.f_18940.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_104551.f_18940.f_5 >= 3 && Global_104551.f_18940.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_323(Global_104551.f_18940.f_5, &iLocal_326))
						{
							func_322(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_321(Global_104551.f_18940.f_5);
						fLocal_91 = func_320(Global_104551.f_18940.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
						{
							unk_0xD9FCA20C1C5553F7(uLocal_295[1]);
							unk_0x990FFD4FB6ADD630(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(uLocal_295[1], Var0.f_243.f_4);
						}
						if (func_411(&uVar1794))
						{
							func_412(&uVar1794);
						}
						unk_0x64D773F3BE6DC50A(func_405(2));
						func_319(uLocal_295[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (fLocal_134 != unk_0x47DA03BCFF902E84(0))
						{
							fLocal_134 = unk_0x47DA03BCFF902E84(0);
							unk_0x2A2BB8210FB20081(uLocal_120, func_395(fLocal_134));
							unk_0x2A2BB8210FB20081(uLocal_121, func_395(fLocal_134));
						}
					}
					if (!bLocal_315)
					{
						unk_0x831CD0FBFB26EC7E("mini@dartsoutro");
						bLocal_315 = true;
					}
					if (!iLocal_316)
					{
						if (bLocal_315)
						{
							if (!unk_0x028356968FDD2DF2("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_316 = 1;
							}
						}
					}
					func_237(&Var0, &Var471, &Var477, &Var508, &uVar1794);
					break;
				
				case 11:
					switch (iVar1774)
					{
						case 0:
							if (func_414(&(Var0.f_254)) > 0.5f)
							{
								unk_0xEFF1F12403847394(1);
								unk_0x08FC50794202A47C();
								func_236(unk_0x18F7BE9ACB7D08F4());
								func_334(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1828 = 0;
								while (iVar1828 < 2)
								{
									iVar1829 = 0;
									while (iVar1829 < 3)
									{
										func_235(&(Var0.f_5[iVar1828 /*79*/][iVar1829 /*26*/]));
										iVar1829++;
									}
									func_234(&Var477, iVar1828);
									iVar1828++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_232(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_232(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_232(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_232(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1831 = unk_0x47DA03BCFF902E84(1);
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
								iVar1830 = func_231();
								uLocal_327 = unk_0x3C3438327FFEB224(Var1787, Var1790, 2);
								uLocal_333 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xFB34CCC40E7806C4(uLocal_333, uLocal_327, sLocal_407[iVar1830], "mini@dartsoutro");
								unk_0x2C535610856B3F4D(uLocal_333, 1);
								unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
								if (!unk_0x0FAE113CE72ED842(uLocal_295[0]) && !unk_0x0FAE113CE72ED842(uLocal_295[1]))
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
										unk_0x929C3CBA660376D5(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_230(&uLocal_295, iVar1832);
										unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xB5746603774C4C9D(unk_0x18F7BE9ACB7D08F4(), sLocal_394, sLocal_395[unk_0x61E9B3BFA06B017B(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x929C3CBA660376D5(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_229(&uLocal_295);
										unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xB5746603774C4C9D(uLocal_295[1], sLocal_393, sLocal_395[unk_0x61E9B3BFA06B017B(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1774++;
							}
							break;
						
						case 1:
							if (!func_227(&(Var508.f_62), 1))
							{
								iVar1774++;
							}
							break;
						
						case 2:
							func_412(&(Var0.f_254));
							iLocal_311 = 0;
							unk_0xA11D9B06B99FE786(func_405(3));
							func_404();
							if (unk_0x5400DC5FAEBF30F0(uLocal_333))
							{
								unk_0x13AD763DBD687842(uLocal_333, 0);
							}
							iVar1774 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_414(&(Var0.f_254)) > 0.92f)
					{
						func_40(&Var0, &Var508, &Var477, &Var1191, bVar1769);
					}
					break;
				
				case 13:
					uVar1772 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0x74C2FE037DFC8B4A(func_487(), 0))
					{
						unk_0x267F7A2DFDFFB077(uLocal_295[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1774)
					{
						case 0:
							unk_0x267F7A2DFDFFB077(uLocal_295[0]);
							if (!bLocal_313)
							{
								unk_0xF5F744EF9F4DB21E(0, bLocal_313, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x7602D16A5C4D379B(0, 0, 3, 0);
							}
							unk_0xA3F41A1968319181(0);
							unk_0x4CCECEB2EA5D6A82(0, 1065353216);
							unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
							unk_0x08FC50794202A47C();
							unk_0x6016A20BFEAEFE11(uLocal_295[0], uLocal_295[1], 5000, 2049, 3);
							func_425(&uVar1800);
							iVar1774++;
							break;
						
						case 1:
							if (func_7(&uVar1800) > 0.1f)
							{
								if (!bVar1768)
								{
								}
								func_425(&uVar1800);
								iVar1774++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1800) > 0.3f)
							{
								if (!unk_0x0FAE113CE72ED842(uLocal_295[1]))
								{
									if (!bVar1768)
									{
										func_4(uLocal_295[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_425(&uVar1800);
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
					if (unk_0x3469AD51EA8B9583(2, 201))
					{
						func_1(uLocal_295[1]);
						iLocal_330 = 2;
						bVar1768 = true;
						if (unk_0x36CC410474001FBC(func_405(2)))
						{
							unk_0xA11D9B06B99FE786(func_405(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x3469AD51EA8B9583(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_100 = 0;
						}
						func_322(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_458(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xC83C302702976DCB())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_322(&(uParam0->f_666), 8, 1);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 16, 0);
			func_322(&(uParam0->f_666), 17, 0);
		}
		unk_0xC28F7E19C995666F();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_322(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x74C2FE037DFC8B4A(func_487(), 0) || iParam2)
	{
		func_413(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, sParam2, func_6(iParam3), 0);
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
	if (func_411(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x756DE011CEDBBD7E() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x756DE011CEDBBD7E();
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x67E601AC02CEEAD9(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x50FC5102E6F4D863(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
		{
			unk_0x3B82047F26E2CEDB(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
			}
		}
	}
	unk_0xE05212008FE9A018(7);
	unk_0xE05212008FE9A018(8);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(19);
	unk_0x9C7EE7DE7041A3F4(2, 19, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	unk_0x9C7EE7DE7041A3F4(0, 21, 1);
	unk_0x9C7EE7DE7041A3F4(0, 28, 1);
	unk_0x9C7EE7DE7041A3F4(0, 29, 1);
	unk_0x9C7EE7DE7041A3F4(0, 171, 1);
	func_38(0);
	if (unk_0xC9FF45E740135482(2))
	{
		if (unk_0x7400747759AA049A() || (unk_0xEC0ECEF2AF3FDA8D() && !unk_0x610450B2545892B5()))
		{
			unk_0x3C97A09EF6BCD140();
		}
	}
	Global_36409 = 1;
	if (!uParam0->f_563)
	{
		switch (func_489(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8())))
		{
			case 1:
				unk_0x9575CEFF222148A6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9575CEFF222148A6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9575CEFF222148A6("SuccessMichael", 1000, 0);
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
					unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE2B30EB9B14EEAB2();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "TRANSITION_OUT");
			unk_0xE2B30EB9B14EEAB2();
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
			if (unk_0x32085AF1EB302CDD(2))
			{
				if (unk_0x5C716BBF766E1C70(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x5C716BBF766E1C70(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE2B30EB9B14EEAB2();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE2B30EB9B14EEAB2();
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
					unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE2B30EB9B14EEAB2();
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
					if (unk_0xFC0C00F9DE2AEC93(2, 215))
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
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "CLEAR_ALL");
	unk_0xE2B30EB9B14EEAB2();
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD6F1BD29497A51C8(true);
		unk_0xE2B30EB9B14EEAB2();
	}
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(0);
	func_13(unk_0x305BC30EAC3E9BF4(2, 215, true));
	func_12("ES_HELP");
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xD6F1BD29497A51C8(true);
		unk_0x22DD5585E00B80C3(215);
	}
	unk_0xE2B30EB9B14EEAB2();
	if (bParam1)
	{
		unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x22DD5585E00B80C3(1);
		func_13(unk_0x305BC30EAC3E9BF4(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0xD6F1BD29497A51C8(true);
			unk_0x22DD5585E00B80C3(216);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE2B30EB9B14EEAB2();
}

void func_12(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_13(char* sParam0)
{
	unk_0xC34A54899652DAAF(sParam0);
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
	if (unk_0x5C716BBF766E1C70(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x44243F2E2F58B8E3())
				{
					unk_0x22DD5585E00B80C3(150);
				}
				else
				{
					unk_0x22DD5585E00B80C3(100);
				}
				unk_0xD6F1BD29497A51C8(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x22DD5585E00B80C3((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x22DD5585E00B80C3(uParam0->f_56);
				}
				unk_0xD6F1BD29497A51C8(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x22DD5585E00B80C3(2);
				}
				else
				{
					unk_0x22DD5585E00B80C3(69);
				}
				unk_0xE2B30EB9B14EEAB2();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x76F4FB5EFF5BDED5(uParam0->f_1, "TRANSITION_UP");
				unk_0x954263F3D07BEFC2(0.15f);
				unk_0xD6F1BD29497A51C8(true);
				unk_0xE2B30EB9B14EEAB2();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x5E70D9959D6F2350(uParam0->f_1, 255, 255, 255, 255, 0);
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
		if (unk_0x47DA03BCFF902E84(0) < 1.4f)
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
	unk_0xFCBDBEB257C6D3FB(2, 215);
	unk_0xFCBDBEB257C6D3FB(2, 216);
	unk_0xFCBDBEB257C6D3FB(2, 200);
	unk_0x9C7EE7DE7041A3F4(2, 200, 1);
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
			if (unk_0xEC0ECEF2AF3FDA8D())
			{
				unk_0xE52EBB41DB0E0329();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xE05212008FE9A018(7);
				unk_0xE05212008FE9A018(8);
				unk_0xE05212008FE9A018(9);
				unk_0xE05212008FE9A018(6);
				unk_0x5E70D9959D6F2350(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x9C7EE7DE7041A3F4(0, 140, 1);
				unk_0x9C7EE7DE7041A3F4(0, 141, 1);
				unk_0x9C7EE7DE7041A3F4(0, 142, 1);
				unk_0x9C7EE7DE7041A3F4(2, 188, 1);
				if (unk_0x3199F4F904C324F9(2, 188))
				{
					unk_0x929C3CBA660376D5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x929C3CBA660376D5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x9C7EE7DE7041A3F4(2, 187, 1);
				if (unk_0x3199F4F904C324F9(2, 187))
				{
					unk_0x929C3CBA660376D5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x929C3CBA660376D5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x9C7EE7DE7041A3F4(2, 202, 1);
				if (unk_0x3199F4F904C324F9(2, 202))
				{
					unk_0x929C3CBA660376D5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x929C3CBA660376D5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xE05212008FE9A018(7);
				unk_0xE05212008FE9A018(8);
				unk_0xE05212008FE9A018(9);
				unk_0xE05212008FE9A018(6);
				unk_0x9C7EE7DE7041A3F4(0, 140, 1);
				unk_0x9C7EE7DE7041A3F4(0, 141, 1);
				unk_0x9C7EE7DE7041A3F4(0, 142, 1);
				if (unk_0xFC0C00F9DE2AEC93(2, 215) || unk_0x3199F4F904C324F9(2, 200))
				{
					unk_0x929C3CBA660376D5(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x929C3CBA660376D5(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x954894782056D6CB(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xE14EBFD640A207D8(iVar13, iVar14, iVar15, iVar0);
	unk_0x36D27769309D1050(fVar9, fVar10);
	unk_0xA3F605DDB63EE4B8(0);
	unk_0x61EA61920DAA51B8(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0x754933C14FFBA8EB(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
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
					unk_0x754933C14FFBA8EB(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
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
			unk_0x754933C14FFBA8EB(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0xE14EBFD640A207D8(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xE7A981467BC975BA() == 0)
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
				unk_0x36D27769309D1050(fVar20, fVar21);
				unk_0xA3F605DDB63EE4B8(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xA3F605DDB63EE4B8(0);
			}
			unk_0x61EA61920DAA51B8(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x36D27769309D1050(fVar20, fVar21);
			unk_0xA3F605DDB63EE4B8(2);
			unk_0x61EA61920DAA51B8(1f, 0.4f);
			unk_0xD2E1707404EC2AFA(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x36D27769309D1050(fVar20, fVar22);
			unk_0xE14EBFD640A207D8(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0xD74B746610C55548("PERCENTAGE");
					unk_0x3A12001DBF78DC62(uParam0->f_554);
					unk_0x5D7608D88BED248F(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xD74B746610C55548("FO_TWO_NUM");
					unk_0x3A12001DBF78DC62(uParam0->f_554);
					unk_0x3A12001DBF78DC62(uParam0->f_555);
					unk_0x5D7608D88BED248F(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xD74B746610C55548("MTPHPER_XPNO");
					unk_0x3A12001DBF78DC62(uParam0->f_554);
					unk_0x5D7608D88BED248F(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xD74B746610C55548("ESDOLLA");
					unk_0x7F0713FD21BA55C9(uParam0->f_554, 1);
					unk_0x5D7608D88BED248F(fVar20, (fVar1 + func_37((2f * 2f))), 0);
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
						unk_0x954894782056D6CB(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x954894782056D6CB(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x954894782056D6CB(108, &iVar35, &iVar36, &iVar37, &iVar38);
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
				unk_0x27CD91E03FF596E2(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
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
	unk_0xD2E1707404EC2AFA(iParam3);
	unk_0x03FBCA33C223558B(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0xD74B746610C55548("STRING");
		unk_0xB4179F7E88F4C4BF(sParam0);
	}
	else
	{
		unk_0xD74B746610C55548(sParam0);
	}
	unk_0x5D7608D88BED248F(fParam1, fParam2, 0);
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
	if (unk_0x6E987D62C8535B6E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xA320869CAE52B097(&iVar32, &iVar33);
			fVar35 = unk_0x47DA03BCFF902E84(0);
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
			if (unk_0xE7FAF8E78F7D3A73(joaat("director_mode")) > 0)
			{
				unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
		}
		Var37 = { unk_0xC1E91F9C48368605(&cVar0, &cVar16) };
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
		if (iParam0 == 29 && unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x33CE899911FC2AD8() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
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
	
	unk_0xA320869CAE52B097(&iVar0, &iVar1);
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
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
			if (unk_0xF9999DB826286D77(&Var19, &uVar3))
			{
				return func_22(&uVar3);
			}
		}
		else
		{
			return func_22(&(Global_17301.f_6719[iParam0 /*16*/]));
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
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
			unk_0xF9999DB826286D77(&Var16, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_17301.f_5886[iParam0 /*16*/]));
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
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iParam5);
	unk_0x36D27769309D1050(fParam3, fParam4);
	unk_0xA3F605DDB63EE4B8(1);
	unk_0x61EA61920DAA51B8(1f, func_27(14f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0x03FBCA33C223558B(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0xD74B746610C55548("STRING");
		unk_0xB4179F7E88F4C4BF(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xD74B746610C55548(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x3A12001DBF78DC62(uParam0->f_489[iParam1]);
		}
	}
	unk_0x5D7608D88BED248F(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x27CD91E03FF596E2("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x27CD91E03FF596E2("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x27CD91E03FF596E2("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xA3F605DDB63EE4B8(1);
	}
	else
	{
		unk_0xA3F605DDB63EE4B8(2);
	}
	unk_0x61EA61920DAA51B8(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x36D27769309D1050(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x36D27769309D1050(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iParam5);
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
	unk_0xD2E1707404EC2AFA(0);
	unk_0x03FBCA33C223558B(0);
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
			unk_0x61EA61920DAA51B8(1f, func_27(18f));
			unk_0x03FBCA33C223558B(4);
			if (iParam0 < 0)
			{
				unk_0xA5738E964D2E2159("ESMINDOLLA");
				unk_0x7F0713FD21BA55C9((-1 * iParam0), 1);
				fVar1 = unk_0x1BD3A365A7E4BA14(0);
			}
			else
			{
				unk_0xA5738E964D2E2159("ESDOLLA");
				unk_0x7F0713FD21BA55C9(iParam0, 1);
				fVar1 = unk_0x1BD3A365A7E4BA14(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x27CD91E03FF596E2("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x27CD91E03FF596E2("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x27CD91E03FF596E2("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x61EA61920DAA51B8(1f, func_27(14f));
			break;
	}
	unk_0x70A9E4720D71C2D5(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xD74B746610C55548("PERCENTAGE");
			unk_0x3A12001DBF78DC62(iParam0);
			break;
		
		case 1:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("FO_NUM");
			unk_0x3A12001DBF78DC62(iParam0);
			break;
		
		case 2:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("FO_TWO_NUM");
			unk_0x3A12001DBF78DC62(iParam0);
			unk_0x3A12001DBF78DC62(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x61EA61920DAA51B8(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xD74B746610C55548("ESMINDOLLA");
				unk_0x7F0713FD21BA55C9((-1 * iParam0), 1);
			}
			else
			{
				unk_0xD74B746610C55548("ESDOLLA");
				unk_0x7F0713FD21BA55C9(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xD74B746610C55548(sParam4);
			break;
		
		case 7:
			unk_0xD74B746610C55548("STRING");
			unk_0xB4179F7E88F4C4BF(sParam4);
			break;
		
		case 8:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("STRING");
			unk_0x1635DC214B2BB352(iParam0, 14);
			break;
		
		case 9:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("STRING");
			unk_0x1635DC214B2BB352(iParam0, 6);
			break;
		
		case 10:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("STRING");
			unk_0x1635DC214B2BB352(iParam0, 2055);
			break;
		
		case 18:
			unk_0x03FBCA33C223558B(5);
			unk_0xD74B746610C55548("STRING");
			unk_0x1635DC214B2BB352(iParam0, 2055);
			break;
		
		case 12:
			unk_0xD74B746610C55548("AHD_DIST");
			unk_0x3A12001DBF78DC62(iParam0);
			break;
		
		case 13:
			unk_0xD74B746610C55548(sParam4);
			unk_0x3A12001DBF78DC62(iParam0);
			unk_0x3A12001DBF78DC62(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xD74B746610C55548(sParam4);
			unk_0x3A12001DBF78DC62(iParam0);
			unk_0x3A12001DBF78DC62(iParam1);
			break;
		
		case 16:
			unk_0xD74B746610C55548(sParam4);
			unk_0x3A12001DBF78DC62(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x5D7608D88BED248F((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x61EA61920DAA51B8(1f, func_27(14f));
		}
		else
		{
			unk_0x5D7608D88BED248F(fParam2, fParam3, 0);
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
		Global_1358718.f_1 = 1;
		func_30(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0xA5738E964D2E2159(sParam0);
	return (unk_0x1BD3A365A7E4BA14(1) / 2f);
}

void func_33()
{
	unk_0x31B38BBC4423BEAF(1);
	if (unk_0xBC13F084F3B1B544() || unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x31B38BBC4423BEAF(7);
	}
	unk_0x5C8C4D02D2F22207(0);
}

void func_34(char* sParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xC339C5C5B5E8BC5B())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_39(0))
		{
			func_418(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

int func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
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
	
	if (unk_0xC9FF45E740135482(2))
	{
		unk_0x9C7EE7DE7041A3F4(2, 199, 1);
	}
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (!iLocal_318)
		{
			if (func_206(uParam1, 0, &iLocal_319))
			{
				func_322(&(uParam1->f_666), 9, 0);
				iLocal_318 = 1;
			}
		}
	}
	if (iLocal_300)
	{
		if (unk_0xC9FF45E740135482(2))
		{
			unk_0x3C97A09EF6BCD140();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x60D6796E6B9FD3DB())
			{
				uParam1->f_646 = func_197(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_322(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_120(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_116(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xFC0C00F9DE2AEC93(2, 202))
				{
					uParam1->f_680 = 0;
					func_322(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_115(&(uParam1->f_72)))
			{
				if (!bLocal_320)
				{
					bLocal_320 = true;
					func_114(&(uParam1->f_509), 0, 0, 1, 1);
					func_113(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_113(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_113(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_113(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_110(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_103(uParam1, 0, 0, iLocal_318);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xCF0FA6AB02EA68F7(uLocal_327) && unk_0x74CE979B042A1253(uLocal_327) >= 0.995f) || !unk_0xCF0FA6AB02EA68F7(uLocal_327))
		{
			bLocal_313 = true;
			if (unk_0x5400DC5FAEBF30F0(uLocal_333))
			{
				unk_0x13AD763DBD687842(uLocal_333, 0);
				if (!unk_0x0FAE113CE72ED842(uLocal_295[0]) && !unk_0x0FAE113CE72ED842(uLocal_295[1]))
				{
					unk_0xD9FCA20C1C5553F7(uLocal_295[0]);
					unk_0xD9FCA20C1C5553F7(uLocal_295[1]);
					unk_0x8F2E6C470A0005D4(uLocal_295[0], 0, 0);
					unk_0x8F2E6C470A0005D4(uLocal_295[1], 0, 0);
				}
			}
			func_102();
		}
		if (func_414(&(uParam0->f_254)) > 2f)
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
					func_230(&uLocal_295, iVar2);
				}
				else
				{
					func_229(&uLocal_295);
				}
				iLocal_311 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0xEFF1F12403847394(1);
			unk_0xA11D9B06B99FE786(func_405(3));
			if (!unk_0x0FAE113CE72ED842(uLocal_295[0]) && !unk_0x0FAE113CE72ED842(uLocal_295[1]))
			{
				unk_0x81D9C52E2A8DA464(uLocal_295[0]);
				unk_0x81D9C52E2A8DA464(uLocal_295[1]);
			}
			func_101(uParam3);
			if (bParam4)
			{
				func_334(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_412(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_311 = 0;
			iLocal_309 = 0;
			bLocal_313 = false;
			func_98();
			iLocal_318 = 0;
			iLocal_289 = 0;
			uParam1->f_680 = 0;
			iLocal_319 = 0;
			bLocal_320 = false;
			func_90(&(uParam1->f_72));
			func_448();
		}
		else if (iVar0 == 2)
		{
			func_89(uParam3);
			unk_0xA11D9B06B99FE786(func_405(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_52(func_85(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x08FC50794202A47C();
			*uParam0 = 13;
		}
		else if (((unk_0xFC0C00F9DE2AEC93(0, 234) || unk_0xFC0C00F9DE2AEC93(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_299)
			{
				Var3 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_51(Var3, 0, iLocal_299);
				iLocal_299 = 0;
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				Var3 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var3);
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var3);
			}
		}
		else if (((unk_0xFC0C00F9DE2AEC93(0, 211) || unk_0x3199F4F904C324F9(0, 211)) && bVar1) && (iLocal_318 || !unk_0x60D6796E6B9FD3DB()))
		{
			uParam1->f_680 = 1;
			func_114(&(uParam1->f_509), 0, 0, 1, 1);
			func_113(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_113(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_113(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_320)
			{
				func_113(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_110(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0xEFF1F12403847394(1);
		unk_0x08FC50794202A47C();
		func_45(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0x47DA03BCFF902E84(1);
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
		iVar13 = func_231();
		uLocal_327 = unk_0x3C3438327FFEB224(Var7, Var10, 2);
		uLocal_333 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xFB34CCC40E7806C4(uLocal_333, uLocal_327, sLocal_407[iVar13], "mini@dartsoutro");
		unk_0x2C535610856B3F4D(uLocal_333, 1);
		unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
		if (!unk_0x0FAE113CE72ED842(uLocal_295[0]) && !unk_0x0FAE113CE72ED842(uLocal_295[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xB5746603774C4C9D(unk_0x18F7BE9ACB7D08F4(), sLocal_394, sLocal_395[unk_0x61E9B3BFA06B017B(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x4DD2EB945B4192FD(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x4DD2EB945B4192FD(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xB5746603774C4C9D(uLocal_295[1], sLocal_393, sLocal_395[unk_0x61E9B3BFA06B017B(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_313 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x5AFB8ED811F05E4D();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_235(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_234(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((unk_0x5AFB8ED811F05E4D() - uParam1->f_671) > 400 && func_41(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x929C3CBA660376D5(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_300 = 1;
	}
}

int func_41(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_44(uParam0);
	func_43(uParam0);
	if (unk_0x9D39145AD645E383(&(uParam0->f_550), "SPR_RESULT") || (unk_0x9D39145AD645E383(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0x1E7BE791ACBDDC05("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x1E7BE791ACBDDC05("CommonMenu", 0);
		unk_0x1E7BE791ACBDDC05("MPLeaderboard", 0);
		unk_0x1E7BE791ACBDDC05("MPHud", 0);
		uParam0->f_1 = unk_0xBD7D7877C82BE42F("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xC6483FE5035615A1("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x5C716BBF766E1C70(uParam0->f_1) || !unk_0x1865CC0DAB5F6A86("CommonMenu")) || !unk_0x1865CC0DAB5F6A86("MPLeaderboard")) || !unk_0x1865CC0DAB5F6A86("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x5C716BBF766E1C70(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x5C716BBF766E1C70(uParam0->f_1) || !unk_0x1865CC0DAB5F6A86("CommonMenu")) || !unk_0x1865CC0DAB5F6A86("MPLeaderboard")) || !unk_0x1865CC0DAB5F6A86("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x5C716BBF766E1C70(uParam0->f_4))
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
	Global_71113 = 1;
	return 1;
}

void func_42(var uParam0)
{
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "CLEAR_ALL");
	unk_0xE2B30EB9B14EEAB2();
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD6F1BD29497A51C8(true);
		unk_0xE2B30EB9B14EEAB2();
	}
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(2);
	func_13(unk_0x305BC30EAC3E9BF4(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(1);
	func_13(unk_0x305BC30EAC3E9BF4(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(0);
	func_13(unk_0x305BC30EAC3E9BF4(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE2B30EB9B14EEAB2();
}

void func_43(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xA3F605DDB63EE4B8(0);
	unk_0x61EA61920DAA51B8(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xA5738E964D2E2159("STRING");
			unk_0xB4179F7E88F4C4BF(&(uParam0->f_13));
			fVar0 = unk_0x1BD3A365A7E4BA14(1);
		}
		else
		{
			unk_0xA5738E964D2E2159(&(uParam0->f_13));
			fVar0 = unk_0x1BD3A365A7E4BA14(1);
		}
	}
	else
	{
		unk_0xA5738E964D2E2159("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x3A12001DBF78DC62(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xBEFD1ED9B6BE5127(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xB4179F7E88F4C4BF(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x1BD3A365A7E4BA14(1);
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
		unk_0xF6910B463A17E809(uLocal_131, Var0);
		unk_0x544D4FC2BDA00B32(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		unk_0xF6910B463A17E809(uLocal_130, Var0);
		unk_0x544D4FC2BDA00B32(uLocal_130, uLocal_131, 500, 1, 1);
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
		unk_0xF6910B463A17E809(uLocal_130, Var0);
		unk_0x544D4FC2BDA00B32(uLocal_130, uLocal_129, 1500, 1, 1);
		unk_0x2C535610856B3F4D(uLocal_129, 0);
		unk_0xF6910B463A17E809(uLocal_131, Var0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		unk_0xF6910B463A17E809(uLocal_130, Var0);
		unk_0x544D4FC2BDA00B32(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			unk_0x544D4FC2BDA00B32(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			unk_0x544D4FC2BDA00B32(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		unk_0x2C535610856B3F4D(uLocal_130, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
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
	
	func_84();
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
					func_83(99, 1);
					func_82(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_66(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_62(5))
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
							func_82(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_62(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_82(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_62(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_61(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_83(95, iParam3);
					break;
				
				case 1:
					func_83(97, iParam3);
					break;
				
				case 2:
					func_83(96, iParam3);
					break;
			}
			func_83(98, iParam3);
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
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_82(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_55(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_59(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_58() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_58() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_57(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_60();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_60()
{
	return Global_1312736;
}

void func_61(int iParam0)
{
	func_83(93, iParam0);
	func_83(29, iParam0);
	func_83(30, iParam0);
}

bool func_62(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_63(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_58() /*12062*/].f_7637.f_10, iParam0);
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_60();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_60();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_81(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(14) && !func_79(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_78(&Global_4267379))
	{
		if (func_76(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4267378 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_81(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_84()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_85()
{
	func_86();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_86()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_88(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_489(unk_0x18F7BE9ACB7D08F4());
			if (func_87(iVar0) && (!func_80(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_87(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_87(int iParam0)
{
	return iParam0 < 3;
}

int func_88(int iParam0)
{
	if (func_87(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_89(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_90(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_96(uParam0);
		func_95(uParam0);
		func_94(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_92();
	}
	if (unk_0x36CC410474001FBC("LEADERBOARD_SCENE"))
	{
		unk_0xA11D9B06B99FE786("LEADERBOARD_SCENE");
	}
	if (unk_0xA1C84586015AE5DB())
	{
		func_91(&(Global_1840922.f_49));
	}
	Global_2512581.f_3935 = 0;
}

void func_91(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_92()
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
	func_93(&(Global_1835390.f_2780));
	func_91(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_91(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_91(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_93(var uParam0)
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

void func_94(var uParam0)
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
	func_91(&(Global_1835390.f_2830));
}

void func_95(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_91(&(uParam0->f_246.f_3));
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

void func_96(var uParam0)
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

void func_97(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_91(&(Global_1835008.f_1));
	unk_0xA81761EAC59012E4(*uParam2, uParam2->f_1, -1);
}

void func_98()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_100(&(Global_1835013.f_73));
	func_100(&(Global_1835013.f_142));
	func_100(&(Global_1835013.f_211));
	func_100(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_99(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_99(var uParam0)
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

void func_100(var uParam0)
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

void func_101(var uParam0)
{
	func_44(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_102()
{
	unk_0x2C535610856B3F4D(uLocal_126, 1);
}

int func_103(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_114(&(uParam0->f_509), 0, 0, 1, 1);
			func_113(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_113(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_113(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x60D6796E6B9FD3DB())
			{
				func_113(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_106(func_109(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_108(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_106(func_109(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_108(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_106(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_401(&(uParam0->f_57), 0, 0);
			}
			func_116(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xC83C302702976DCB())
		{
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_671) > 900)
			{
				if (unk_0x02EA7C5633421A0F(2, 216))
				{
					unk_0x929C3CBA660376D5(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_322(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 215))
				{
					unk_0x929C3CBA660376D5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_105();
					func_104();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x3469AD51EA8B9583(2, 201))
		{
			return 2;
		}
		else if (unk_0x3469AD51EA8B9583(2, 202))
		{
			func_322(&(uParam0->f_666), 9, 0);
			func_322(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_104()
{
	if (Global_2436169.f_2591[0 /*79*/].f_2 != 0)
	{
		Global_2436169.f_2591[0 /*79*/].f_2 = 5;
	}
}

void func_105()
{
	Global_25377 = 1;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_107(sParam6))
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
		Global_1358718.f_1 = 1;
		func_30(3, iVar0);
		Global_1358718.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_2623.f_183[iVar0] = iParam3;
		Global_1358718.f_2623.f_172[iVar0] = iParam2;
		Global_1358718.f_2623.f_205[iVar0] = iParam4;
		Global_1358718.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_2623.f_420[iVar0] = iParam7;
		Global_1358718.f_2623.f_453[iVar0] = iParam8;
		Global_1358718.f_2623.f_431[iVar0] = iParam9;
		Global_1358718.f_2623.f_442[iVar0] = iParam10;
		Global_1358718.f_2623.f_464[iVar0] = iParam11;
	}
}

int func_107(var uParam0)
{
	if (unk_0xE0C4A595CD61B7F2(uParam0))
	{
		return 1;
	}
	else if (unk_0x9D39145AD645E383(uParam0, "") || unk_0x9D39145AD645E383(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_108(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 1024);
	}
	else
	{
		func_111(&(uParam0->f_1), 1024);
	}
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_113(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_114(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC6483FE5035615A1("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 32);
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		func_112(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x874AA5FC7D37BA36(*uParam0, 1);
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (bParam3)
		{
			func_112(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_112(&(uParam0->f_1), 8192);
	}
}

int func_115(var uParam0)
{
	if ((unk_0xB03A1684359C50A1(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_116(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5()) || unk_0xEC0ECEF2AF3FDA8D()) || unk_0xC5B946266AEC83EB())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_119(uParam0))
	{
		return;
	}
	unk_0xE52EBB41DB0E0329();
	unk_0x31B38BBC4423BEAF(iParam2);
	if (!func_118(uParam0->f_1, 256) || (func_118(uParam0->f_1, 8192) && unk_0x32085AF1EB302CDD(2)))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_CLEAR_SPACE");
		unk_0x954263F3D07BEFC2(fParam1);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MAX_WIDTH");
		unk_0x954263F3D07BEFC2(fParam5);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE2B30EB9B14EEAB2();
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(func_118(uParam0->f_1, 4096));
			unk_0xE2B30EB9B14EEAB2();
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
					bVar4 = unk_0xC9FF45E740135482(2);
					break;
				
				case 2:
					bVar4 = !unk_0xC9FF45E740135482(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x22DD5585E00B80C3(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x305BC30EAC3E9BF4(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x33206AC5E51B4373(iVar0, iVar1, bVar2);
						}
						if (!unk_0xFAFFA408239A026B(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xFAFFA408239A026B(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (func_118(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD6F1BD29497A51C8(true);
								unk_0x22DD5585E00B80C3(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD6F1BD29497A51C8(false);
								unk_0x22DD5585E00B80C3(-1);
							}
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar6++;
		}
		fVar8 = func_117(bParam4, func_117(func_118(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x76F4FB5EFF5BDED5(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x954263F3D07BEFC2(fVar8);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(80f);
		unk_0xE2B30EB9B14EEAB2();
		func_112(&(uParam0->f_1), 256);
		func_111(&(uParam0->f_1), 128);
	}
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 0, 0);
}

float func_117(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			func_112(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_120(var uParam0, var uParam1)
{
	func_121(uParam1, uParam0);
}

void func_121(var uParam0, var uParam1)
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
	
	func_196(&(Global_1840922.f_49), 1, 0);
	unk_0xCA68B0AB8A5AF85A();
	func_195();
	func_38(0);
	unk_0x3F19B70555683951();
	func_193();
	unk_0xE05212008FE9A018(10);
	func_192(1);
	func_191(1);
	if (!func_188())
	{
		if (!unk_0x36CC410474001FBC("LEADERBOARD_SCENE"))
		{
			unk_0x64D773F3BE6DC50A("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xB03A1684359C50A1(uParam1->f_42, 3))
	{
		*uParam0 = func_187();
		unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 3);
	}
	Var32 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (((!unk_0xABC550EBCFE96BBC() || !unk_0x60D6796E6B9FD3DB()) || (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x60D6796E6B9FD3DB())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xABC550EBCFE96BBC())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xB03A1684359C50A1(uParam1->f_42, 1))
			{
				unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xE2B30EB9B14EEAB2();
				func_186(*uParam0, Global_1835390.f_2780);
				if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_185(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 4);
				func_182(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 5);
				func_182(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 6);
				func_182(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 1);
				func_181(*uParam0);
				unk_0x62148293B793073B(&(uParam1->f_42), 2);
				unk_0xEFF1F12403847394(1);
			}
			else
			{
				func_181(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x62148293B793073B(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_146(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x62148293B793073B(&(uParam1->f_42), 1);
				if (!unk_0xB03A1684359C50A1(uParam1->f_42, 0))
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE2B30EB9B14EEAB2();
					func_186(*uParam0, Global_1835390.f_2780);
					if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_185(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 0);
					unk_0x62148293B793073B(&(uParam1->f_42), 2);
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
							unk_0xD2A9C3F486236CC5(&iVar31, 4);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 5);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 6);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 7);
						func_145(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_91(&(Global_1835390.f_2823));
				}
				else if (func_143(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 4);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 5);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 6);
							func_182(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 7);
						func_145(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_91(&(Global_1835390.f_2823));
				}
				func_181(*uParam0);
			}
			else
			{
				unk_0x62148293B793073B(&(uParam1->f_42), 0);
				if (!unk_0xB03A1684359C50A1(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE2B30EB9B14EEAB2();
					func_186(*uParam0, Global_1835390.f_2780);
					if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_185(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xB03A1684359C50A1(uParam1->f_42, 6))
					{
						func_94(&Global_1839721);
						func_139(uParam1, &Global_1839721);
						func_138(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xD2A9C3F486236CC5(&iVar31, 4);
									func_182(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xD2A9C3F486236CC5(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_182(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_182(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xD2A9C3F486236CC5(&iVar31, 6);
									if (!unk_0xA8AC70C7EA782CC4())
									{
										bVar63 = true;
									}
									else if (!unk_0x8B446F9745A99E13())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_182(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_182(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_137(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_185(uParam1->f_44))
								{
									unk_0xC386FB5661F5C27E(unk_0x8CFC7D6E1DA5D304(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0x9D39145AD645E383(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_136(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xD2A9C3F486236CC5(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xD2A9C3F486236CC5(&iVar31, 3);
											}
										}
									}
									if (func_185(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xFAFFA408239A026B(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0x9D39145AD645E383(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_135(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_135(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_130(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_130(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_127(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_127(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_126();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xD2A9C3F486236CC5(&iVar31, 2);
											unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_125(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xD2A9C3F486236CC5(&iVar31, 4);
						func_182(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 5);
						func_182(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 6);
						func_182(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 1);
					unk_0x62148293B793073B(&(uParam1->f_42), 2);
					func_181(*uParam0);
					unk_0xEFF1F12403847394(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_125(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_181(*uParam0);
					func_122(uParam0, uParam1);
				}
			}
		}
	}
}

void func_122(var uParam0, var uParam1)
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
	if (unk_0xC9FF45E740135482(2))
	{
		unk_0x3C97A09EF6BCD140();
		unk_0xFCBDBEB257C6D3FB(2, 239);
		unk_0xFCBDBEB257C6D3FB(2, 240);
		unk_0xFCBDBEB257C6D3FB(2, 237);
		unk_0xFCBDBEB257C6D3FB(2, 238);
		unk_0x9C7EE7DE7041A3F4(2, 200, 1);
		if (unk_0xBAEF57A3E716CC8D(2, 241))
		{
			unk_0xB88A45766E89D996(2, 188, 1f);
		}
		if (unk_0xBAEF57A3E716CC8D(2, 242))
		{
			unk_0xB88A45766E89D996(2, 187, 1f);
		}
		if (unk_0x3D77D6EA086968DE(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xB88A45766E89D996(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xC9FF45E740135482(2))
	{
		func_124(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xB03A1684359C50A1(uParam1->f_246, 0))
		{
			if ((unk_0x02EA7C5633421A0F(2, 188) || unk_0xBAEF57A3E716CC8D(2, 188)) || iVar6 < -100)
			{
				unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 0);
				func_91(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 188))
		{
			unk_0x62148293B793073B(&(uParam1->f_246), 0);
		}
		if (!unk_0xB03A1684359C50A1(uParam1->f_246, 1))
		{
			if ((unk_0x02EA7C5633421A0F(2, 187) || unk_0xBAEF57A3E716CC8D(2, 187)) || iVar6 > 100)
			{
				unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 1);
				func_91(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 187))
		{
			unk_0x62148293B793073B(&(uParam1->f_246), 1);
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
	if (!unk_0xB03A1684359C50A1(uParam1->f_246, 3))
	{
		if ((unk_0x02EA7C5633421A0F(2, 204) || unk_0x3199F4F904C324F9(2, 204)) || unk_0xFC0C00F9DE2AEC93(2, 237))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 3);
			func_91(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_123(uParam1, 204))
	{
		unk_0x62148293B793073B(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x62148293B793073B(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_125(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_125(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x62148293B793073B(&(uParam1->f_42), 2);
		}
		if (func_137(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_246, 2))
			{
				if (unk_0x02EA7C5633421A0F(2, 217) || unk_0x3199F4F904C324F9(2, 217))
				{
					if (!unk_0xD89462DDD07112E7())
					{
						unk_0x929C3CBA660376D5(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 2);
						unk_0xBE8CB05EBCC31FDB(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x02EA7C5633421A0F(2, 217))
			{
				unk_0x62148293B793073B(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_123(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_124(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x02EA7C5633421A0F(2, iParam1) && !unk_0xBAEF57A3E716CC8D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_143(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x02EA7C5633421A0F(2, iParam1) && !unk_0xBAEF57A3E716CC8D(2, iParam1)) || func_143(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 221) * 127f));
		}
	}
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT_STATE");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0xE2B30EB9B14EEAB2();
}

void func_126()
{
	unk_0xE2B30EB9B14EEAB2();
}

void func_127(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0xEF512794542297CA(fParam44, 2);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(unk_0xF34EE736CF047844(fParam44));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
				if (!unk_0x46DAE6F28FA8E185())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_129(fParam44);
					}
					else
					{
						fParam44 = func_128(fParam44);
					}
				}
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0xEF512794542297CA(fParam44, 2);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 0:
			break;
	}
}

float func_128(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_129(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_130(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(-iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 6);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
					unk_0xC30401186AC91B01();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 6);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xC542C0B6386400EF(iParam44))
				{
					unk_0x0ECBA72FAFCEBA59("SCLB_VEH_CUST");
					unk_0xBEFD1ED9B6BE5127(unk_0x89CCD0AB60278D90(iParam44));
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
					unk_0xC30401186AC91B01();
				}
			}
			else if (unk_0xC542C0B6386400EF(iParam44))
			{
				unk_0x0ECBA72FAFCEBA59(unk_0x89CCD0AB60278D90(iParam44));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 8:
			if (func_134(iParam44) != 0)
			{
				unk_0x0ECBA72FAFCEBA59(func_131(func_134(iParam44), 0));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
				if (!unk_0x46DAE6F28FA8E185())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_129(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_128(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_131(int iParam0, bool bParam1)
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
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		default:
			if (func_133(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_132(&(Var0.f_31));
				}
				else
				{
					return func_132(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_132(var uParam0)
{
	return uParam0;
}

int func_133(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA3657E0D395F8A0F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x5C134543285617E0(iVar0, uParam1))
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

int func_134(int iParam0)
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

void func_135(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	if (iParam3 > 0)
	{
		unk_0x0ECBA72FAFCEBA59("NUMBER");
		unk_0x3A12001DBF78DC62(iParam3);
		unk_0xC30401186AC91B01();
	}
	else
	{
		unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
		unk_0xC30401186AC91B01();
	}
	unk_0xC34A54899652DAAF(cParam4);
	unk_0xC34A54899652DAAF(uParam5);
}

int func_136(var uParam0, var uParam1)
{
	if (!func_137(*uParam0))
	{
		return 0;
	}
	if (!func_137(*uParam1))
	{
		return 0;
	}
	if (unk_0x9BFCAB639B5DFD02(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

void func_138(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 5) && !unk_0xB03A1684359C50A1(uParam0->f_42, 6))
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

void func_139(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 5) && !unk_0xB03A1684359C50A1(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_142(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar2, 2))
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
		func_140(uParam1);
	}
}

void func_140(var uParam0)
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
	Var3 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0x9FAAEDE0F02BD27F(Global_1835390.f_2826))
	{
		iVar16 = unk_0x4C05869FE8EE41E6(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_141(&Global_1839591);
				iVar2 = 0;
				unk_0x35F8BB728ED5BEB5(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_136(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xB03A1684359C50A1(Global_1839591.f_63, iVar1))
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

void func_141(var uParam0)
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

int func_142(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
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

int func_143(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_144(uParam0, bParam2, 0);
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
		}
		uParam0->f_1 = 1;
	}
}

void func_145(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xD2A9C3F486236CC5(&iParam2, 7);
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0x0ECBA72FAFCEBA59(sParam3);
	unk_0x27FC18DF46755EFC();
	unk_0xE2B30EB9B14EEAB2();
}

int func_146(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_180(&(Global_1835390.f_2827)))
		{
			func_144(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_143(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xABC550EBCFE96BBC() || !unk_0x60D6796E6B9FD3DB()) || (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())) || Global_1835390.f_2832 != 0)
	{
		unk_0x62148293B793073B(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 4))
	{
		func_179(uParam0);
		unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xB03A1684359C50A1(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_177(uParam0))
	{
		return 0;
	}
	if (!func_175(uParam0))
	{
		return 0;
	}
	if (!func_162(uParam0))
	{
		return 0;
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 6))
	{
		func_94(&Global_1839721);
		func_139(uParam0, &Global_1839721);
		func_138(uParam0, &Global_1839721);
		unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 6);
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 7))
	{
		if (!func_180(&(Global_1835390.f_2830)))
		{
			func_144(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_143(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 7);
		}
		if (func_159(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_156(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_151(&Global_1839721))
		{
			func_147(&Global_1839721);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 7);
			func_147(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_147(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_150(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_149(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_141(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x9D39145AD645E383(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_137((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xD2A9C3F486236CC5(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x62148293B793073B(&(Global_1839591.f_61), 0);
			}
			unk_0xD2A9C3F486236CC5(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xB03A1684359C50A1(Global_1839591.f_63, iVar1))
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
			unk_0x3EC7F1B6EC17E298(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_148(unk_0x8CFC7D6E1DA5D304()) };
}

Vector3 func_148(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

void func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x9FAAEDE0F02BD27F(Global_1838575.f_81[iParam1]))
		{
			unk_0xF92334065A9E69CA(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x9FAAEDE0F02BD27F(iParam0))
		{
			unk_0xF92334065A9E69CA(iParam0);
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

int func_150(int iParam0)
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
		else if (unk_0x9FAAEDE0F02BD27F(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0xE9A7A913C79C982B(Global_1838575.f_81[iVar0]);
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

int func_151(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_155(uParam0);
			if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_137((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_154(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_152(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_137((uParam0[iVar0 /*100*/])->f_32) && func_137(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x9BFCAB639B5DFD02(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_152(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x67D53270E2FB68B6())
			{
			}
			else
			{
				unk_0xD6A8CEFE346F0C89();
				unk_0xC778ABC46341814D(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x67D53270E2FB68B6())
			{
				if (unk_0x2942BD516B84C7AE())
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
				if (unk_0xBA128286B07F1082(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_153(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x67D53270E2FB68B6())
			{
				unk_0x4307673313754440();
			}
			else
			{
				unk_0xD6A8CEFE346F0C89();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_153(var uParam0, var uParam1)
{
	unk_0x14FE7512F6617D5D(uParam0, 35, uParam1);
}

int func_154(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_137(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x9BFCAB639B5DFD02(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_155(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_99(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x67D53270E2FB68B6())
		{
			unk_0xD6A8CEFE346F0C89();
		}
	}
	if (unk_0x67D53270E2FB68B6())
	{
		unk_0x4307673313754440();
	}
	Global_1841018.f_206 = 0;
}

int func_156(var uParam0)
{
	int iVar0;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return 1;
	}
	else if (unk_0x929A0C5D6A986B4F())
	{
		if (!func_158(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_157(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_157(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_137(*uParam1))
			{
				if (!unk_0x72F5C6AABDE4CB75(uParam1))
				{
					if (unk_0x929A0C5D6A986B4F())
					{
						if (unk_0x3958E8BDD430EA82(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x35D499EE14C3D367())
					{
						if (unk_0x3958E8BDD430EA82(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xBC706206837F4A11(uParam1), 64);
						if (unk_0xC57A05B38A912073())
						{
						}
						else if (unk_0x0A8A596EB9C068FA())
						{
						}
						else if (unk_0xC339C5C5B5E8BC5B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x72F5C6AABDE4CB75(uParam1))
			{
				if (!unk_0x18BFCE3B69004616())
				{
					if (unk_0x948C0172AFA8332E())
					{
						StringCopy(sParam2, unk_0xBC706206837F4A11(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_158(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x929A0C5D6A986B4F())
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
				func_99(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_137((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x00BC2C8602FC8E92(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6E013013A50C48A6((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_137((uParam0[iVar1 /*100*/])->f_32))
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

int func_159(var uParam0)
{
	int iVar0;
	
	if (unk_0x929A0C5D6A986B4F())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_161(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_160(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xFAFFA408239A026B(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xCCC0AAF1E92BD78D(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_137(Var0))
			{
				if (!unk_0x72F5C6AABDE4CB75(&Var0))
				{
					if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
					{
						if (unk_0x3958E8BDD430EA82(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xBC706206837F4A11(&Var0), 64);
						if (unk_0xC57A05B38A912073())
						{
						}
						else if (unk_0x0A8A596EB9C068FA())
						{
						}
						else if (unk_0xC339C5C5B5E8BC5B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x72F5C6AABDE4CB75(&Var0))
			{
				if (!unk_0x18BFCE3B69004616())
				{
					if (unk_0x948C0172AFA8332E())
					{
						StringCopy(sParam17, unk_0xBC706206837F4A11(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_161(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x929A0C5D6A986B4F())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xFAFFA408239A026B(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xCCC0AAF1E92BD78D(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_137(Var1[0 /*13*/]))
			{
				if (!unk_0x72F5C6AABDE4CB75(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x00BC2C8602FC8E92(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6E013013A50C48A6(*uParam4, uParam3, 1);
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

int func_162(var uParam0)
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
	Var116 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0xE906D9FB40E35957())
			{
				if (unk_0x9FDA5C5DFB3FE364(&Var116))
				{
					if (unk_0x4AEF279CFD4A57C6(&(uParam0->f_7), 35, &Var116))
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
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_174(), 0, 0, 0))
			{
				func_172(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_174())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x27784D25EDAE6D24(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_136(&Var0, &Var116) || func_136(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_171(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_174() && iVar109 == 0)
								{
									func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_174() && (func_136(&Var0, &Var116) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_136(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_174())
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
						func_171(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x27784D25EDAE6D24(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_174() && iVar109 == iVar111)
								{
									if (!func_136(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var116) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_136(&Var0, &Var116))
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
										if (func_169(uParam0->f_44))
										{
											iVar108 = unk_0x41ECC212062282FF(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_171(&Var0);
							iVar111++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0x4FE4CE1E2DF52382();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar113);
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
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_172(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x27784D25EDAE6D24(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_174() && (func_136(&Var0, &Var116) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar107]);
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
									if (func_169(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_171(&Var0);
							iVar106++;
						}
					}
					unk_0x4FE4CE1E2DF52382();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0x4FE4CE1E2DF52382();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_174())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_163(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_174() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_174())
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

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0x510A1AC549A7A003(uParam2, iParam3, iParam4))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

void func_165(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_196(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_166()
{
	if (unk_0xC83C302702976DCB() && !func_188())
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	if (unk_0x8CF7F40A4CC84117() || Global_1835008)
	{
		func_168();
		return 1;
	}
	return 0;
}

void func_168()
{
	if (func_143(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xA81761EAC59012E4(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_91(&(Global_1835008.f_1));
	}
}

int func_169(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_185(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), 64);
		sParam1->f_32 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	}
	sParam1->f_59 = iParam2;
	if (func_169(uParam0->f_44))
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
		if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_171(var uParam0)
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

void func_172(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_173(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (bParam5)
				{
					if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x9333B1BD362578C9(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x9E97AF4AC6ACE39E(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x06297F5C47778213(uParam2, iParam3, uParam4))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

int func_174()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0)
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
	Var114 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x924E5AC4702D8B8C();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_174())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_176(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_172(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
					{
						if (func_174())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x27784D25EDAE6D24(iVar110, &Var0);
									if (func_185(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_136(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_171(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_174() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x27784D25EDAE6D24(0, &Var0);
							if (func_174() && (func_136(&Var0, &Var114) || func_136(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_137(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_136(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_169(uParam0->f_44))
								{
									iVar111 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_185(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_171(&Var0);
								unk_0x4FE4CE1E2DF52382();
								func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_174())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_171(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_171(&Var0);
							unk_0x4FE4CE1E2DF52382();
							func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_174())
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
							unk_0x27784D25EDAE6D24(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_174() && iVar108 == iVar110)
								{
									if (!func_136(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var114) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_136(&Var0, &Var114))
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
										if (func_169(uParam0->f_44))
										{
											iVar111 = unk_0x41ECC212062282FF(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_171(&Var0);
							iVar110++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_174())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_170(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_163(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_176(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

int func_177(var uParam0)
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
	Var0 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_178(uParam0->f_44))
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
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_174(), 0, 0, 0))
			{
				func_172(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_174())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x27784D25EDAE6D24(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_136(&Var13, &Var0) || func_136(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_171(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x27784D25EDAE6D24(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_174() && iVar122 == 0)
								{
									func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_174() && (func_136(&Var13, &Var0) || func_136(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_136(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar121 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_174())
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
						func_171(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x27784D25EDAE6D24(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_174() && iVar122 == iVar124)
								{
									if (!func_136(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_174() && (func_136(&Var13, &Var0) || func_136(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_137(Var13) && !func_136(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_136(&Var13, &Var0))
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
										if (func_169(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x41ECC212062282FF(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x99A322ED74E76285(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_171(&Var13);
							iVar124++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0x4FE4CE1E2DF52382();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar126);
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
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_172(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x27784D25EDAE6D24(iVar119, &Var13);
							if (func_174() && (func_136(&Var13, &Var0) || func_136(&Var13, &(Global_1835013.f_361))))
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
										if (func_169(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x99A322ED74E76285(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_169(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x99A322ED74E76285(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_171(&Var13);
							iVar119++;
						}
					}
					unk_0x4FE4CE1E2DF52382();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar126);
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_174())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_170(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_163(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_178(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0x9D39145AD645E383(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x9D39145AD645E383(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_179(var uParam0)
{
	int iVar0;
	
	if (unk_0x9FAAEDE0F02BD27F(Global_1835390.f_2826))
	{
		iVar0 = unk_0xE9A7A913C79C982B(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam0->f_42), 5);
			func_149(Global_1835390.f_2826, -1);
		}
	}
}

bool func_180(var uParam0)
{
	return uParam0->f_1;
}

void func_181(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(uParam0))
	{
		unk_0x5E70D9959D6F2350(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_182(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0xB03A1684359C50A1(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xB03A1684359C50A1(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xB03A1684359C50A1(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xA1C84586015AE5DB() && unk_0xE906D9FB40E35957())
		{
			if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
				if (unk_0x9FDA5C5DFB3FE364(&Var53))
				{
					unk_0x4AEF279CFD4A57C6(&Var1, 35, &Var53);
					if (!unk_0xFAFFA408239A026B(&(Var1.f_1)))
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
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(*iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	if (bVar52)
	{
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0x6F8D47F40E94DBED(&Var36);
		unk_0xC30401186AC91B01();
	}
	else
	{
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0xC30401186AC91B01();
	}
	unk_0xE2B30EB9B14EEAB2();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xD2A9C3F486236CC5(&iVar66, 7);
		unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
		unk_0x22DD5585E00B80C3(*iParam1);
		unk_0x22DD5585E00B80C3(iVar66);
		if (!unk_0xA1C84586015AE5DB())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xABC550EBCFE96BBC())
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
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0x27FC18DF46755EFC();
		unk_0xE2B30EB9B14EEAB2();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xB03A1684359C50A1(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xB03A1684359C50A1(iParam2, 5))
		{
			if (unk_0x924E5AC4702D8B8C() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xB03A1684359C50A1(iParam2, 6))
		{
			if (unk_0xA8AC70C7EA782CC4())
			{
				if (unk_0x8B446F9745A99E13())
				{
					if (unk_0xA1C84586015AE5DB() && unk_0xE906D9FB40E35957())
					{
						if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
							if (unk_0x9FDA5C5DFB3FE364(&Var67))
							{
								unk_0x4AEF279CFD4A57C6(&Var1, 35, &Var67);
								if (!unk_0xFAFFA408239A026B(&(Var1.f_1)))
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
		unk_0xD2A9C3F486236CC5(&iVar80, 7);
		unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
		unk_0x22DD5585E00B80C3(*iParam1);
		unk_0x22DD5585E00B80C3(iVar80);
		if (bVar52)
		{
			unk_0x0ECBA72FAFCEBA59(sVar0);
			unk_0x6F8D47F40E94DBED(&Var36);
			unk_0x27FC18DF46755EFC();
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59(sVar0);
			unk_0x27FC18DF46755EFC();
		}
		unk_0xE2B30EB9B14EEAB2();
		*iParam1++;
	}
}

void func_183(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_TITLE");
	unk_0x0ECBA72FAFCEBA59(sParam1);
	unk_0xC30401186AC91B01();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x0ECBA72FAFCEBA59(uParam2[iVar0 /*6*/]);
		unk_0xC30401186AC91B01();
		iVar0++;
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_184(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x0ECBA72FAFCEBA59(sParam1);
	if (!unk_0xFAFFA408239A026B(sParam2))
	{
		unk_0xBEFD1ED9B6BE5127(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xFAFFA408239A026B(sParam3))
			{
				unk_0x6F8D47F40E94DBED(sParam3);
			}
		}
		else if (!unk_0xFAFFA408239A026B(sParam3))
		{
			unk_0xBEFD1ED9B6BE5127(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xFAFFA408239A026B(sParam3))
			{
				unk_0x6F8D47F40E94DBED(sParam3);
			}
		}
		else if (!unk_0xFAFFA408239A026B(sParam3))
		{
			unk_0xBEFD1ED9B6BE5127(sParam3);
		}
		unk_0x3A12001DBF78DC62(iParam5);
	}
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
}

int func_185(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_186(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_DISPLAY_TYPE");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

var func_187()
{
	return unk_0xBD7D7877C82BE42F("SC_LEADERBOARD");
}

bool func_188()
{
	return func_189(unk_0x8CFC7D6E1DA5D304());
}

int func_189(int iParam0)
{
	switch (func_190(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_190(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196;
}

void func_191(int iParam0)
{
	Global_1315692 = iParam0;
}

void func_192(int iParam0)
{
	Global_1358718.f_1079 = iParam0;
}

void func_193()
{
	func_195();
	func_194(4, -1);
	func_194(6, -1);
	func_194(7, -1);
	func_194(3, -1);
	func_194(1, -1);
	func_194(2, -1);
	func_194(11, -1);
	func_194(13, -1);
	func_194(14, -1);
	func_194(16, -1);
}

void func_194(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1357213.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357213.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_195()
{
	Global_2512581.f_4500 = 0;
}

void func_196(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

int func_197(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x756DE011CEDBBD7E() && Global_1840922.f_2 > 0)
	{
		func_91(&Global_1840922);
		func_91(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_205(0);
	}
	Global_1840922.f_2 = unk_0x756DE011CEDBBD7E();
	iVar1 = -1;
	if (unk_0x0A8A596EB9C068FA())
	{
		if (unk_0x3AAF2B12B8A85B11() == 0)
		{
			iVar1 = unk_0x5AF8F50724C6068D();
		}
	}
	if ((unk_0x0A8A596EB9C068FA() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_203() && unk_0xA1C84586015AE5DB()))
	{
		if (unk_0x2573387FC1093A00())
		{
			func_200(&(Global_1840922.f_3), func_202(&(Global_1840922.f_3)));
			if (!unk_0xB03A1684359C50A1(*uParam0, 4))
			{
				unk_0xD2A9C3F486236CC5(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_198(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_203())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!unk_0xB03A1684359C50A1(*uParam0, 0))
			{
				if (!unk_0x02EA7C5633421A0F(2, 201))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 0);
				}
			}
			else if (unk_0x3469AD51EA8B9583(2, 201))
			{
				func_91(&(Global_1840922.f_49));
				func_91(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_205(0);
				return 1;
			}
		}
	}
	else
	{
		func_200(&(Global_1840922.f_3), func_202(&(Global_1840922.f_3)));
		if ((func_180(&(Global_1840922.f_49)) && !func_143(&(Global_1840922.f_49), 2000, 1)) && !unk_0xA1C84586015AE5DB())
		{
			unk_0xD2A9C3F486236CC5(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_198(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xB03A1684359C50A1(*uParam0, 3))
		{
			if (!unk_0xB03A1684359C50A1(*uParam0, 1))
			{
				unk_0xEA4C0FEA5D3F7821(0);
				unk_0xD2A9C3F486236CC5(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_198(&(Global_1840922.f_3), 0);
			}
		}
		if (func_180(&Global_1840922))
		{
			if (!func_143(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xA1C84586015AE5DB())
				{
					if (unk_0x8F1CB5DBD209E2ED())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xD89462DDD07112E7())
					{
						if (!unk_0xB03A1684359C50A1(*uParam0, 0))
						{
							if (!unk_0x02EA7C5633421A0F(2, 201))
							{
								unk_0xD2A9C3F486236CC5(uParam0, 0);
							}
						}
						else if (unk_0x3469AD51EA8B9583(2, 201))
						{
							func_91(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_205(0);
							return 1;
						}
					}
				}
				else
				{
					func_91(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else if (unk_0xB03A1684359C50A1(*uParam0, 3))
			{
				if (unk_0x8F1CB5DBD209E2ED())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xB03A1684359C50A1(*uParam0, 0))
				{
					if (!unk_0x02EA7C5633421A0F(2, 201))
					{
						unk_0xD2A9C3F486236CC5(uParam0, 0);
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 201))
				{
					func_91(&(Global_1840922.f_49));
					func_91(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x8F1CB5DBD209E2ED())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xD89462DDD07112E7())
				{
					if (!unk_0xB03A1684359C50A1(*uParam0, 0))
					{
						if (!unk_0x02EA7C5633421A0F(2, 201))
						{
							unk_0xD2A9C3F486236CC5(uParam0, 0);
						}
					}
					else if (unk_0x3469AD51EA8B9583(2, 201))
					{
						func_91(&(Global_1840922.f_49));
						func_91(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_205(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_198(var uParam0, bool bParam1)
{
	func_199(uParam0);
	if (bParam1)
	{
		func_205(0);
	}
	uParam0->f_35 = 1;
}

void func_199(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_201(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x3A12001DBF78DC62(uParam0->f_34);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0xB4179F7E88F4C4BF(&(uParam0->f_17));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x3A12001DBF78DC62(uParam0->f_34);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0xB4179F7E88F4C4BF(&(uParam0->f_17));
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x1635DC214B2BB352(uParam0->f_33, 70);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_201(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_202(var uParam0)
{
	return uParam0->f_35;
}

int func_203()
{
	if (func_204())
	{
		return 0;
	}
	if (unk_0x9D67C2091DFDB507() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_204()
{
	return Global_2457277;
}

void func_205(bool bParam0)
{
	unk_0x3D889DC768CF362B();
	if (bParam0)
	{
		unk_0x245A0B1CE203AC4B();
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_289)
	{
		func_218(&(uParam0->f_72), bParam1);
		iLocal_289 = 1;
		func_322(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_215(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_207(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_207(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_185(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_214(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_172(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x4B6E6D23F8AD680F(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_213(uParam0->f_44, iVar188))
					{
						if (func_212(uParam0->f_44, 4, iVar188))
						{
							unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_137(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_213(uParam0->f_44, iVar188))
								{
									if (func_212(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x41ECC212062282FF(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0x99A322ED74E76285(0, iVar188);
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
					unk_0x4FE4CE1E2DF52382();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_211();
				if (Global_1835013.f_4)
				{
					if (func_210(uParam0->f_44))
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
			unk_0x488DB57DAE22C447(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x44243F2E2F58B8E3() && func_209())
			{
				if (func_208())
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
			if (func_210(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x488DB57DAE22C447(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_172(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (unk_0x9D39145AD645E383(&(Var0.f_13), ""))
						{
							Global_979642.f_1 = -1;
						}
						else
						{
							Global_979642.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979642.f_1 = -1;
					}
					unk_0x4FE4CE1E2DF52382();
				}
				else
				{
					Global_979642.f_1 = -1;
				}
				Global_1835013 = 999;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_208()
{
	return unk_0xB03A1684359C50A1(Global_971063.f_8, 1);
}

var func_209()
{
	return Global_2455103.f_3;
}

int func_210(int iParam0)
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

void func_211()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_212(int iParam0, int iParam1, int iParam2)
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
	iVar0 = unk_0x31DDF93D7647279B(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	if (unk_0xA6F947EF97C7E3CD(iParam0, 4, iParam1) == 156)
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

int func_214(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0xFFE163C3723C0C74(uParam2, uParam3))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

void func_215(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x60D6796E6B9FD3DB())
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
	if (func_217(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_216(190, 131, 0, 0f, 1);
		func_216(190, 103, iLocal_151[1], 0f, 0);
		func_216(190, 99, iLocal_151[2], 0f, 0);
		func_216(190, 109, iLocal_151[3], 0f, 0);
		func_216(190, 106, iLocal_151[5], 0f, 0);
		func_216(190, 2, iLocal_151[10], 0f, 0);
		func_216(190, 107, iLocal_151[8], 0f, 0);
		func_216(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_216(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x83AB023FACFAD852(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x4B6E6D23F8AD680F(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_212(iParam0, 4, iVar1))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xA6F947EF97C7E3CD(iParam0, 4, iVar1))
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
		unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_217(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xA1C84586015AE5DB())
	{
	}
	if ((!unk_0x12E47521EE5A4E11() && (unk_0x1D206D9B095EA01E() || !unk_0xE9A69EF13B00AA9D())) && unk_0xE1317949F8AC19DF())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE906D9FB40E35957())
			{
				Var69 = { func_23(unk_0x8CFC7D6E1DA5D304()) };
				if (unk_0x9FDA5C5DFB3FE364(&Var69))
				{
					if (unk_0x4AEF279CFD4A57C6(&uVar82, 35, &Var69))
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
			if (unk_0x44243F2E2F58B8E3() && Global_2455103.f_3)
			{
				unk_0x087FE1D41F346D59(&Var0, &(Global_1794960.f_10));
			}
			else
			{
				unk_0x61E186D8E4DA6351(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x12E47521EE5A4E11())
	{
	}
	if (!unk_0x1D206D9B095EA01E())
	{
	}
	if (unk_0xE9A69EF13B00AA9D())
	{
	}
	if (!unk_0xE1317949F8AC19DF())
	{
	}
	return 0;
}

void func_218(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_219(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_219(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0xFAFFA408239A026B(sParam2))
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
				if (iParam5 > 0 && !func_226())
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
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_226())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_226())
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
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_226())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_226())
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
					unk_0xC386FB5661F5C27E(unk_0x8CFC7D6E1DA5D304(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_226())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_226())
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
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_226())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_226())
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
				if (iParam5 > 0 && !func_226())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_226())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_225(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1646129.f_55 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xFAFFA408239A026B(sParam3))
				{
					if (Global_1646129.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1646129.f_2 == 5)
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
				{
					if (Global_1646129.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1646129.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_224(Global_1646129.f_138609) || func_221(Global_1646129.f_138609))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_220(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_220(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_185(iParam8))
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
	return unk_0x6E987D62C8535B6E(&cVar0);
}

var func_221(int iParam0)
{
	return (func_223(iParam0) || func_222(iParam0));
}

bool func_222(int iParam0)
{
	return iParam0 == 44;
}

bool func_223(int iParam0)
{
	return iParam0 == 45;
}

bool func_224(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_225(int iParam0)
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

int func_226()
{
	if (((((((Global_1646129.f_49002 == 1 || Global_1646129.f_49002 == 3) || Global_1646129.f_49002 == 5) || Global_1646129.f_49002 == 7) || Global_1646129.f_49002 == 8) || Global_1646129.f_49002 == 9) || Global_1646129.f_49002 == 11) || Global_1646129.f_49002 == 13)
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0, int iParam1)
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 201) || uParam0->f_8)
		{
			if (!func_411(&(uParam0->f_5)))
			{
				func_425(&(uParam0->f_5));
				func_228(uParam0, 1051260355);
			}
		}
		if (func_411(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_412(&(uParam0->f_5));
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
		if (!func_411(&(uParam0->f_5)))
		{
			func_425(&(uParam0->f_5));
			func_228(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_412(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_228(var uParam0, float fParam1)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SHARD_ANIM_OUT");
	unk_0x22DD5585E00B80C3(uParam0->f_9);
	unk_0x954263F3D07BEFC2(fParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x0FAE113CE72ED842((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_230(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x0FAE113CE72ED842((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_231()
{
	int iVar0;
	
	if (!bLocal_314)
	{
		iVar0 = (unk_0x61E9B3BFA06B017B(0, 65535) % 3);
	}
	else
	{
		iLocal_328++;
		iVar0 = (iLocal_328 % 2);
	}
	return iVar0;
}

void func_232(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_233(iParam4);
	if (iParam4 != 5)
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "RESET_MOVIE");
		unk_0xE2B30EB9B14EEAB2();
	}
	unk_0x76F4FB5EFF5BDED5(*uParam0, sVar0);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xC30401186AC91B01();
	func_12(sParam2);
	unk_0xE2B30EB9B14EEAB2();
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_233(int iParam0)
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
			if (unk_0x44243F2E2F58B8E3())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_234(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_SCORES");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

int func_235(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x5BE35A26B9097351(uParam0);
	}
	return 1;
}

void func_236(int iParam0)
{
	unk_0x544D4FC2BDA00B32(uLocal_122, uLocal_120, 1500, 1, 1);
	unk_0x2C535610856B3F4D(uLocal_123, 1);
	unk_0x544D4FC2BDA00B32(uLocal_122, uLocal_123, 8000, 1, 1);
	unk_0x505B5B32CED3A500(uLocal_125, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0xEEBA7A992DA7B65A(uLocal_125, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0x2A2BB8210FB20081(uLocal_125, 35f);
}

void func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x644D3EC290513DA9(uLocal_120))
	{
		bVar0 = false;
		func_318(uParam0);
		if (!bLocal_306)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0xEFF1F12403847394(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0xB03A1684359C50A1(Global_104512, 3))
						{
							func_409("DARTS_INSTR_W", -1);
							unk_0xD2A9C3F486236CC5(&Global_104512, 3);
						}
						func_322(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0xB03A1684359C50A1(Global_104512, 4))
						{
							func_409("DARTS_INSTR_B", -1);
							unk_0xD2A9C3F486236CC5(&Global_104512, 4);
						}
						func_322(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0xEFF1F12403847394(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x644D3EC290513DA9(uLocal_129) && uParam0->f_3 == 2)
			{
				func_317(uParam3);
			}
		}
		else
		{
			func_315(uParam3, iLocal_30);
		}
		func_314(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_311(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_303(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_296(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x02EA7C5633421A0F(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_295(iLocal_31, 0);
				if (((((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_409("DARTS_LEVEL", -1);
						unk_0xD2A9C3F486236CC5(&(Global_104551.f_18940.f_6), iLocal_326);
						func_322(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_322(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_322(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x08FC50794202A47C();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_301)
				{
					if (!func_411(uParam4))
					{
						func_282(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_281(uLocal_295[(1 - iLocal_30)]);
						func_412(uParam4);
						iLocal_301 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_324 = 0;
				func_280(&(uParam0->f_422), &(uParam0->f_249));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x61E9B3BFA06B017B(1250, 2500))
			{
				func_280(&(uParam0->f_422), &(uParam0->f_249));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_264(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_263(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_246(uParam0, uParam3);
			break;
		
		case 5:
			func_239(uParam0, uParam2, uParam3);
			if (func_411(uParam4))
			{
				func_412(uParam4);
			}
			break;
		
		case 6:
			func_238(uParam0, uParam3);
			break;
	}
}

void func_238(var uParam0, var uParam1)
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
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_246(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_307)
			{
				if (unk_0x31F12808DC47A9E5(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x5BE35A26B9097351(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0xA89DC5E1C1F12DBF(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x31F12808DC47A9E5(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x990FFD4FB6ADD630(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_246(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x7082ECB3731CD86C(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_79, 1, 1, 0);
					Var0 = { unk_0xA89DC5E1C1F12DBF(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x990FFD4FB6ADD630(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0x3D81861E1A1652A9(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0x58F6B49606932378(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_280(&(uParam0->f_422), &(uParam0->f_249));
			func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_322(&(uParam1->f_666), 2, 0);
				func_322(&(uParam1->f_666), 3, 0);
				func_322(&(uParam1->f_666), 4, 0);
				func_322(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_246(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = unk_0x7082ECB3731CD86C(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, Local_79, 1, 1, 0);
							Var0 = { unk_0xA89DC5E1C1F12DBF(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0x31F12808DC47A9E5(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								unk_0x990FFD4FB6ADD630(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0x3D81861E1A1652A9(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0x58F6B49606932378(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
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

void func_239(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_245();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_243("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_244("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_244("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_243("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_244("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xFC0C00F9DE2AEC93(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				Var0 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var0);
			}
			if (unk_0xFC0C00F9DE2AEC93(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_49(Var0);
			}
			if (unk_0xFC0C00F9DE2AEC93(2, 202))
			{
				Var0 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_51(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xFC0C00F9DE2AEC93(2, 201))
			{
				iLocal_298 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xFC0C00F9DE2AEC93(2, 201) || (iLocal_308 && bLocal_307))
			{
				iLocal_298 = 1;
			}
			if ((unk_0xFC0C00F9DE2AEC93(2, 189) || unk_0xFC0C00F9DE2AEC93(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0x761660F5CE986DC4(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_51(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_303)
				{
					if (func_242(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_303 = 1;
					}
				}
				else if ((unk_0x5AFB8ED811F05E4D() % 500) < 50)
				{
				}
			}
			else if (!iLocal_303)
			{
				if (func_241(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_303 = 1;
				}
			}
			else if ((unk_0x5AFB8ED811F05E4D() % 500) < 50)
			{
			}
			if (iLocal_298 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_308 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_235(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_240(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0xFF4225D4B94E1277(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
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
				func_424(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_404();
				if (!bLocal_307)
				{
					unk_0xC28F7E19C995666F();
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

void func_240(var uParam0, int iParam1, int iParam2)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "ADD_DARTS_SCORE");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0xE2B30EB9B14EEAB2();
}

int func_241(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 3);
		}
	}
	iVar1 = unk_0x61E9B3BFA06B017B(0, 100);
	iVar2 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xB03A1684359C50A1(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_GOOD_SELF", 1, 4);
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
		else if (unk_0xB03A1684359C50A1(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_BAD_SELF", 1, 4);
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
		else if (unk_0xB03A1684359C50A1(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0xB03A1684359C50A1(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_BAD_OTHER", 1, 4);
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

int func_242(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xD2A9C3F486236CC5(&iVar0, 3);
		}
	}
	iVar1 = unk_0x61E9B3BFA06B017B(0, 100);
	iVar2 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xB03A1684359C50A1(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xB03A1684359C50A1(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x31F12808DC47A9E5(func_487()))
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
		else if (unk_0xB03A1684359C50A1(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0xB03A1684359C50A1(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_243(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

void func_244(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	unk_0x0ADA506C37566A2D(iParam2, 1);
}

void func_245()
{
	unk_0x2C535610856B3F4D(uLocal_129, 1);
	unk_0x2C535610856B3F4D(uLocal_120, 0);
}

void func_246(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_258(uParam0);
		func_322(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_256(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_256(0);
					iLocal_151[1]++;
				}
			}
			func_322(&(uParam1->f_666), 2, 0);
			func_322(&(uParam1->f_666), 3, 0);
			func_322(&(uParam1->f_666), 4, 0);
			func_322(&(uParam1->f_666), 5, 1);
			func_258(uParam0);
			func_322(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_322(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_322(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_303)
			{
				if (func_255(uLocal_295[(1 - iLocal_30)]))
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
			func_322(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 1);
					func_256(0);
					iLocal_151[1]++;
				}
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_253(uLocal_295[iLocal_30]))
					{
						iLocal_303 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					func_252(uLocal_295[(1 - iLocal_30)]);
					iLocal_303 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_251(uLocal_295[1], iLocal_30 == 0))
					{
						iLocal_303 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 0);
					func_256(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_249(uLocal_295[iLocal_30], iLocal_30 == 0))
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
						func_322(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_322(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_302)
						{
							func_248(uLocal_295[1]);
							iLocal_302 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_322(&(uParam1->f_666), 6, 1);
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
				func_247("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_314(&(uParam0->f_1));
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
			func_322(&(uParam1->f_666), 3, 0);
			func_322(&(uParam1->f_666), 2, 0);
			func_322(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_247(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	unk_0x3A12001DBF78DC62(iParam2);
	unk_0x0ADA506C37566A2D(iParam3, 1);
}

void func_248(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_249(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x31F12808DC47A9E5(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_140", 1, 4);
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

int func_250()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x31F12808DC47A9E5(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0x18F7BE9ACB7D08F4(), "DARTS_180", 1, 4);
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

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x18F7BE9ACB7D08F4())
		{
			iVar1 = 1;
		}
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_254(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x18F7BE9ACB7D08F4())
	{
		iVar0 = 1;
	}
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_104551.f_18940++;
			func_257("DARTS_STAT_NUM_BULLSEYES", Global_104551.f_18940);
			break;
		
		case 1:
			Global_104551.f_18940.f_1++;
			func_257("DARTS_STAT_NUM_180S", Global_104551.f_18940.f_1);
			break;
		
		case 2:
			Global_104551.f_18940.f_2++;
			func_257("DARTS_STAT_NUM_WINS", Global_104551.f_18940.f_2);
			break;
		
		case 3:
			Global_104551.f_18940.f_3++;
			func_257("DARTS_STAT_NUM_LOSS", Global_104551.f_18940.f_3);
			break;
		
		case 4:
			Global_104551.f_18940.f_4++;
			func_257("DARTS_STAT_DARTS_THROWN", Global_104551.f_18940.f_4);
			break;
		
		case 5:
			Global_104551.f_18940.f_5++;
			func_257("DARTS_STAT_NUM_GAMES", Global_104551.f_18940.f_5);
			break;
		
		case 7:
			Global_104551.f_18940.f_7 = (unk_0xBBDA792448DB5A89(Global_104551.f_18940.f_2) / unk_0xBBDA792448DB5A89(Global_104551.f_18940.f_5));
			break;
		
		case 8:
			Global_104551.f_18940.f_8 = (unk_0xBBDA792448DB5A89(Global_104551.f_18940.f_4) / unk_0xBBDA792448DB5A89(Global_104551.f_18940.f_5));
			break;
	}
}

void func_257(char* sParam0, var uParam1)
{
}

void func_258(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_256(5);
	unk_0xC28F7E19C995666F();
	unk_0xEFF1F12403847394(1);
	if (unk_0x36CC410474001FBC(func_405(2)))
	{
		unk_0xA11D9B06B99FE786(func_405(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_245();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_312 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_256(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_256(3);
		iLocal_151[9]++;
	}
	func_256(7);
	func_425(&(uParam0->f_254));
	if (func_260(uParam0))
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
				func_259(1);
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
	unk_0x64D773F3BE6DC50A(func_405(3));
	iLocal_309 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_259(bool bParam0)
{
	char* sVar0;
	
	unk_0xD2F6D4358B6E3AD0(0);
	switch (func_85())
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
	unk_0x493A8C2D2771C668(sVar0);
}

int func_260(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(uParam0->f_454, 0, 1);
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

void func_261(var uParam0, var uParam1, bool bParam2)
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
	fVar1 = unk_0x828D7620A6039793(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_262(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0xFF4225D4B94E1277(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0xFF4225D4B94E1277(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
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
					unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_262(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_263(var uParam0)
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

int func_264(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_265("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = unk_0x64031EF2AE5F9603();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		unk_0x990FFD4FB6ADD630(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	unk_0x990FFD4FB6ADD630(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0x58F6B49606932378(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x31F12808DC47A9E5(*uParam0))
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

void func_265(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_276(&Var0);
			break;
		
		case 1:
			func_275(&Var0);
			break;
		
		case 5:
			func_274(&Var0);
			break;
		
		case 6:
			func_273(&Var0);
			break;
		
		case 7:
			func_272(&Var0);
			break;
		
		case 8:
			func_271(&Var0);
			break;
		
		case 9:
			func_270(&Var0);
			break;
	}
	if (func_268())
	{
		unk_0x31B38BBC4423BEAF(iParam5);
		if (iParam3 == 1)
		{
			unk_0x27CD91E03FF596E2(sParam0, sParam1, func_267(Var0.f_0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x27CD91E03FF596E2(sParam0, sParam1, func_267(Var0.f_0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x31B38BBC4423BEAF(4);
	}
}

float func_266(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_267(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_268()
{
	if (func_269())
	{
		return 1;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 0;
	}
	if (unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5())
	{
		return 0;
	}
	if (unk_0xC5B946266AEC83EB())
	{
		return 0;
	}
	return 1;
}

bool func_269()
{
	return Global_1312438;
}

void func_270(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_271(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_272(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_273(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_274(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_275(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_276(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
		fVar4 = unk_0x3D81861E1A1652A9(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0x3D81861E1A1652A9(0f, 360f);
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
		iVar5 = unk_0x61E9B3BFA06B017B(0, 100);
		iVar6 = unk_0x61E9B3BFA06B017B(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x3D81861E1A1652A9(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x3D81861E1A1652A9(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x3D81861E1A1652A9(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x61E9B3BFA06B017B(0, 100);
		iVar6 = unk_0x61E9B3BFA06B017B(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x3D81861E1A1652A9(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0x3D81861E1A1652A9(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x3D81861E1A1652A9(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0x3D81861E1A1652A9(0.3f, 1f);
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
		func_278(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_278(uParam0);
		*uParam0 = unk_0x7082ECB3731CD86C(uParam0->f_1, Local_79, 0, 0, 0);
		fVar1 = unk_0x3D81861E1A1652A9(0f, 90f);
		Var7 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, Local_82) };
		Var10 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = unk_0x7F21F40674579303((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x58F6B49606932378(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_82 };
		*uParam2 = 3;
		unk_0x598D55F9D453C505(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_278(var uParam0)
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
	fVar4 = unk_0x7F21F40674579303(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0xF1C30B2400E8ACF6(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_82 - uParam0->f_11 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_279(var uParam0)
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

void func_280(var uParam0, var uParam1)
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
			if (func_250())
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

int func_281(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_282(var uParam0)
{
	func_283(uParam0, 0f);
}

void func_283(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xB03A1684359C50A1(*uParam0, 4)) + fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_284(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
					if (func_293(uParam0, uParam1, 0))
					{
						unk_0x598D55F9D453C505(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xFC0C00F9DE2AEC93(2, 223) && iLocal_101) && !bParam4)
				{
					iLocal_98 = 1;
					iLocal_99 = 1;
					if (!iLocal_100)
					{
						func_292(uParam0, *uParam2);
						iLocal_100 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_291();
						}
						func_290(uParam0, iParam6);
						func_289(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x3D81861E1A1652A9(0.02f, 0.1f);
						iVar1 = unk_0x61E9B3BFA06B017B(0, 100);
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
						fVar0 = unk_0x3D81861E1A1652A9(0.02f, 0.1f);
						iVar1 = unk_0x61E9B3BFA06B017B(0, 100);
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
							unk_0x08FC50794202A47C();
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
				func_265("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_293(uParam0, uParam1, 1))
					{
						unk_0x598D55F9D453C505(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!func_285(uParam0))
			{
				if (!iLocal_100)
				{
					func_292(uParam0, *uParam2);
				}
				else
				{
					func_291();
					func_290(uParam0, iParam6);
					func_289(uParam0, uParam1, bParam3, 0);
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

int func_285(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x53E8174ABB57602F(2, 220);
	fVar2 = unk_0x53E8174ABB57602F(2, 221);
	iLocal_136 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x5AFB8ED811F05E4D();
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
				iLocal_137 = unk_0x5AFB8ED811F05E4D();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (unk_0x5AFB8ED811F05E4D() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = unk_0x5AFB8ED811F05E4D();
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
				func_288();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_287();
			}
			else
			{
				func_286();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_286()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_287()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_288()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_289(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	unk_0x3CEB66A98DF52EC5(Var0, &Local_61, &(Local_61.f_1));
	if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_265("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_265("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!iLocal_101)
		{
			iLocal_101 = 1;
		}
	}
}

void func_290(var uParam0, int iParam1)
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
	fVar3 = unk_0xAA8D3FC9881A3CF4(2, 218);
	fVar4 = unk_0xAA8D3FC9881A3CF4(2, 219);
	fVar5 = unk_0x53E8174ABB57602F(2, 220);
	fVar6 = unk_0x53E8174ABB57602F(2, 221);
	if (unk_0xC9FF45E740135482(2))
	{
		if (unk_0x36E1A96E1D63ED91(fVar5) > unk_0x36E1A96E1D63ED91(fVar3) || unk_0x36E1A96E1D63ED91(fVar6) > unk_0x36E1A96E1D63ED91(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xB6C47CF001207E12())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x234BD5D0BBB76F14())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x02EA7C5633421A0F(2, 227))
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
		if (unk_0xC9FF45E740135482(2))
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
		fVar2 = unk_0x3D81861E1A1652A9((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0x3D81861E1A1652A9((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x3D81861E1A1652A9((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0x3D81861E1A1652A9((0f - fLocal_88), (0f + fLocal_88));
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
		fVar2 = unk_0x3D81861E1A1652A9((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x3D81861E1A1652A9((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x3D81861E1A1652A9((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x3D81861E1A1652A9((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_291()
{
	if (unk_0x02EA7C5633421A0F(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (unk_0x02EA7C5633421A0F(2, 229))
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
		else if ((((((!func_294("DARTS_FST_HLP") && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_CLOCK")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !iLocal_95)
		{
			iLocal_95 = 1;
			if (!unk_0xB03A1684359C50A1(Global_104512, 1))
			{
				func_409("DARTS_SHT_USE", -1);
				unk_0xD2A9C3F486236CC5(&Global_104512, 1);
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

void func_292(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0x3D81861E1A1652A9(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0x3D81861E1A1652A9(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_82 };
}

int func_293(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x990FFD4FB6ADD630(*uParam0, Local_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x7082ECB3731CD86C(uParam0->f_1, Local_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_278(uParam0);
	fVar10 = unk_0x3D81861E1A1652A9(0f, 90f);
	Var3 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, Local_82) };
	Var6 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = unk_0x7F21F40674579303((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0x58F6B49606932378(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_265("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	unk_0x3CEB66A98DF52EC5(Var0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_294(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_295(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0xB03A1684359C50A1(Global_104512, 9))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_AIM_HLP", -1);
				unk_0xD2A9C3F486236CC5(&Global_104512, 9);
			}
		}
		else if (iParam1 && !unk_0xB03A1684359C50A1(Global_104512, 7))
		{
			if ((!func_294("DARTS_AIM_HLP") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_CLOCK", -1);
				unk_0xD2A9C3F486236CC5(&Global_104512, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xB03A1684359C50A1(Global_104512, 8))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_STD_HLP", -1);
				unk_0xD2A9C3F486236CC5(&Global_104512, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_294("DARTS_SHT_USE")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
		{
			if (!unk_0xB03A1684359C50A1(Global_104512, 2))
			{
				func_409("DARTS_FST_HLP", -1);
				unk_0xD2A9C3F486236CC5(&Global_104512, 2);
			}
			iLocal_96 = 1;
		}
	}
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_299(iParam0) };
			*uParam3 = { unk_0x0AF3D0AB54EA2104(*uParam1, Var0) };
			func_298(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0xFC0C00F9DE2AEC93(2, 201))
			{
				func_297();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_297()
{
	unk_0x544D4FC2BDA00B32(uLocal_120, uLocal_132, 2000, 1, 1);
	unk_0x13AD763DBD687842(uLocal_132, 0);
}

void func_298(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = unk_0x2F192286DA6346A2(26379945, Param0, Var0, 65f, 0, 2);
	unk_0x544D4FC2BDA00B32(uLocal_132, uLocal_120, 2000, 1, 1);
}

Vector3 func_299(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_302(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_301(fVar0);
		Var1.f_2 = func_300(fVar0);
	}
	return Var1;
}

float func_300(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_301(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_302(int iParam0)
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

int func_303(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x02EA7C5633421A0F(2, 228))
			{
				func_310(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x02EA7C5633421A0F(2, 228))
			{
				if (!unk_0x644D3EC290513DA9(uLocal_129))
				{
					func_308();
					func_307(&uLocal_335, Local_366, Local_369, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x02EA7C5633421A0F(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_304(&uLocal_335, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_310(0);
			func_488();
			if (unk_0x5400DC5FAEBF30F0(uLocal_335))
			{
				if (unk_0xEFEFF8C622C1C559(uLocal_335))
				{
					unk_0x2C535610856B3F4D(uLocal_335, 0);
				}
				unk_0x13AD763DBD687842(uLocal_335, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_304(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
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
	
	unk_0x20ABA6FD12003239(2);
	func_306(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x234BD5D0BBB76F14())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xC9FF45E740135482(2))
	{
		fVar5 = unk_0xAA8D3FC9881A3CF4(2, 239);
		fVar6 = unk_0xAA8D3FC9881A3CF4(2, 240);
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
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0xAA8D3FC9881A3CF4(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0xAA8D3FC9881A3CF4(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_305((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_305((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x5AFB8ED811F05E4D())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xC9FF45E740135482(2))
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
		uParam0->f_27 = unk_0x5AFB8ED811F05E4D() + 4000;
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
	if ((unk_0xC9FF45E740135482(2) && bParam2) && !uParam0->f_28)
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
	if (unk_0xC9FF45E740135482(0) && bParam1)
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
		if (unk_0xC9FF45E740135482(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x3199F4F904C324F9(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x5AFB8ED811F05E4D() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x3199F4F904C324F9(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x5AFB8ED811F05E4D() + 4000;
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
		else if (bParam8)
		{
			iVar0[1] = unk_0xFBA7BDC53CCB8FC2(2, 207);
			iVar0[3] = unk_0xFBA7BDC53CCB8FC2(2, 208);
			if (bParam3)
			{
				if (unk_0xBBDA792448DB5A89(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * uParam0->f_19))));
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
	unk_0x444064C4BEF055A9(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		if (unk_0xEFEFF8C622C1C559(*uParam0))
		{
			if (unk_0xA3E9633FD3E0D8EB(*uParam0))
			{
				unk_0xB00FC2F2EFCF5239();
			}
		}
	}
}

int func_305(int iParam0, int iParam1, int iParam2)
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

void func_306(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x96D32548EEC3FFE6(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 218) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 219) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 220) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 221) * 127f));
		}
	}
	if (unk_0xC9FF45E740135482(2))
	{
		if (bParam5)
		{
			if (unk_0x234BD5D0BBB76F14())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xB6C47CF001207E12())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_307(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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
	*uParam0 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x2C535610856B3F4D(*uParam0, 1);
	unk_0x444064C4BEF055A9(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x24144CB94D75CE91(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0x417F9BCF7BCE9999(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x23986B093EC06661(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_308()
{
	if (iLocal_291)
	{
		return;
	}
	func_309();
	unk_0x011B3C098515A590("Darts Zoom");
	iLocal_291 = 1;
}

void func_309()
{
	if (iLocal_290 || iLocal_291)
	{
		unk_0x2216A42B2ED12596();
		iLocal_290 = 0;
		iLocal_291 = 0;
	}
}

void func_310(bool bParam0)
{
	if (bParam0)
	{
		unk_0x544D4FC2BDA00B32(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		unk_0x544D4FC2BDA00B32(uLocal_120, uLocal_129, 1000, 1, 1);
	}
}

void func_311(var uParam0)
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
			func_232(&(uParam0->f_62), func_313(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_227(&(uParam0->f_62), 0))
			{
				func_312(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_312(var uParam0)
{
	uParam0->f_8 = 0;
	func_412(&(uParam0->f_2));
	func_412(&(uParam0->f_5));
}

char* func_313(int iParam0)
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

void func_314(var uParam0)
{
	if (!iLocal_99)
	{
		if (!unk_0x02EA7C5633421A0F(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x02EA7C5633421A0F(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_315(var uParam0, int iParam1)
{
	if (!unk_0xC83C302702976DCB())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_114(&(uParam0->f_509), 0, 0, 0, 1);
				func_113(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_509), 1);
				func_322(&(uParam0->f_666), 8, 0);
				func_322(&(uParam0->f_666), 16, 0);
				func_322(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_114(&(uParam0->f_509), 0, 0, 0, 1);
				func_113(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_509), 1);
				func_322(&(uParam0->f_666), 8, 0);
				func_322(&(uParam0->f_666), 16, 0);
				func_322(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_114(&(uParam0->f_509), 1, 0, 0, 1);
			func_113(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 16, 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 17, 0);
			func_322(&(uParam0->f_666), 23, 0);
		}
		unk_0x09EF2EB55114981C(76, 66);
		unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
		unk_0x3E233EDF605C23C0();
		func_192(func_109(func_3(&(uParam0->f_666), 16), 1, 2));
		func_116(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_322(&(uParam0->f_666), 15, 0);
		func_322(&(uParam0->f_666), 16, 0);
		func_322(&(uParam0->f_666), 23, 0);
	}
}

int func_316(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		unk_0xD2A9C3F486236CC5(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_317(var uParam0)
{
	if (!unk_0xC83C302702976DCB())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_114(&(uParam0->f_509), 0, 0, 0, 1);
			func_316(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_113(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 23, 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 16, 0);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 17, 0);
		}
		func_116(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_322(&(uParam0->f_666), 15, 0);
		func_322(&(uParam0->f_666), 16, 0);
		func_322(&(uParam0->f_666), 23, 0);
		func_322(&(uParam0->f_666), 17, 0);
	}
}

void func_318(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_99)
	{
		if (!unk_0x02EA7C5633421A0F(2, 201) && !unk_0x02EA7C5633421A0F(2, 202))
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
				unk_0xEFF1F12403847394(1);
			}
		}
		if (unk_0x3469AD51EA8B9583(2, 235) || unk_0x1A3F4FBE2944681B(2, 235))
		{
			if (!bLocal_306)
			{
				*uParam0 = 14;
				bLocal_306 = true;
				unk_0xEFF1F12403847394(1);
			}
		}
		else if (func_294("DARTS_QUIT"))
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

void func_319(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_320(int iParam0)
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

float func_321(int iParam0)
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

void func_322(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(uParam0, iParam1);
	}
	else
	{
		unk_0x62148293B793073B(uParam0, iParam1);
	}
}

int func_323(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0xB03A1684359C50A1(Global_104551.f_18940.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, var uParam1, var uParam2)
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
			func_235(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_234(uParam1, iVar0);
		func_240(uParam1, iVar0, 301);
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
	func_322(&(uParam2->f_666), 6, 0);
	func_330();
	func_328(uParam2);
	if (iParam0->f_457)
	{
		func_325(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_325(bool bParam0)
{
	unk_0x77B57B2BB7F3EA0A(0);
	if (unk_0xEFEFF8C622C1C559(uLocal_122))
	{
		unk_0x2C535610856B3F4D(uLocal_122, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_126))
	{
		unk_0x2C535610856B3F4D(uLocal_126, 0);
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		func_327();
		unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
		unk_0x8359CF51370FC969(500);
	}
	func_326(bParam0);
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2C535610856B3F4D(uLocal_120, 1);
	}
}

void func_327()
{
	unk_0x2C535610856B3F4D(uLocal_122, 1);
}

void func_328(var uParam0)
{
	func_329();
	uParam0->f_670 = 3;
	func_322(&(uParam0->f_666), 15, 0);
	func_322(&(uParam0->f_666), 16, 0);
	func_322(&(uParam0->f_666), 17, 0);
}

void func_329()
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

void func_330()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_99 = 0;
	unk_0xC28F7E19C995666F();
}

void func_331(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_17301.f_7931 = 0;
	}
	unk_0x882C4E3F687152C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0x000ED7BEBF44F5EA(9, 0);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x1D492DC0B64A955F("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x1D492DC0B64A955F("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_332(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_332(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			unk_0xEBE532BFFE618875(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_333(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x44243F2E2F58B8E3() && unk_0xD8E9E28C65F6D7A9())
		{
			iParam2 = unk_0x3910797658D84EE9();
		}
	}
	StringCopy(&cVar0, unk_0xFCA64981FEF7C913(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6E987D62C8535B6E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0x22DD5585E00B80C3(iParam3);
	unk_0x22DD5585E00B80C3(iParam4);
	unk_0xE2B30EB9B14EEAB2();
}

int func_335(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x9C7EE7DE7041A3F4(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_392(0, 0, 0, 1);
		func_391(0, -1, 1);
		if (func_390())
		{
			if (Global_4265875 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4265875;
				func_389(uParam0->f_660, 1, 1);
				unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
				if (unk_0xD76CFACBF6A6F21E(sVar0))
				{
					func_388(sVar0, 0, 0);
				}
			}
			Global_4265876 = unk_0x5AFB8ED811F05E4D() + 300;
		}
		else if (func_387() && unk_0x5AFB8ED811F05E4D() > Global_4265876)
		{
			if (Global_4265875 == uParam0->f_660)
			{
				iVar2 = func_386(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4265876 = unk_0x5AFB8ED811F05E4D() + 300;
		}
		if (func_385(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_389(uParam0->f_660, 1, 1);
			unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xD76CFACBF6A6F21E(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_384(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_389(uParam0->f_660, 1, 1);
			unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0xD76CFACBF6A6F21E(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_383(&(uParam0->f_633)) || func_382(&(uParam0->f_633), uParam0->f_660, iVar1))
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
			unk_0x929C3CBA660376D5(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if (func_363(&(uParam0->f_636)) || func_361(&(uParam0->f_636), uParam0->f_660, iVar1))
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
			unk_0x929C3CBA660376D5(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if ((unk_0xFC0C00F9DE2AEC93(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_360(uParam0->f_662 + 1, 1);
			*uParam2 = func_360(uParam0->f_664 + 1, 0);
			unk_0x929C3CBA660376D5(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_338(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x3469AD51EA8B9583(2, 202) || func_337())
		{
			func_336(0);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x3469AD51EA8B9583(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x3469AD51EA8B9583(2, 202))
		{
			func_364(uParam0);
			func_322(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_336(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457316[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0.05f;
	Global_17299 = 0.05f;
	Global_17300 = 0.225f;
	fVar2 = unk_0x47DA03BCFF902E84(0);
	if (bParam0)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0.225f;
	}
}

int func_337()
{
	if (unk_0xC9FF45E740135482(2))
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_338(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_357(0, bParam6))
	{
		return;
	}
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17301)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
	{
		fVar60 = Global_17299;
	}
	else
	{
		fVar60 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0xA320869CAE52B097(&iVar61, &iVar62);
		fVar64 = unk_0x47DA03BCFF902E84(0);
		if (func_20())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_20())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x22D0D3B91B10E6E4(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
			{
				fVar51 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar66, func_24(29), 64);
					StringCopy(&cVar82, func_21(29, 1), 64);
					if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_356(Global_17298, Global_17299, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_356(Global_17298, (Global_17299 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) != 0)
				{
					func_355();
					unk_0xD74B746610C55548(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x3A12001DBF78DC62(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0xEF512794542297CA(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x5D7608D88BED248F((Global_17298 + 0.00390625f), ((Global_17299 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_355();
						func_353((((Global_17298 + fParam5) - 0.00390625f) - func_354("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17301.f_5612[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_356(Global_17298, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0xC1E91F9C48368605("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x954894782056D6CB(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_18(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_352(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_356(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_352(fVar42);
				unk_0xD74B746610C55548(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_18(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_17301.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4638), func_21(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_18(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_352(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_356(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_352(fVar42);
				unk_0xD74B746610C55548(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_18(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_4265799.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_24(Global_4265799.f_67), func_21(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_346(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x09EF2EB55114981C(76, 84);
			unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
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
			iVar99 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar99 = (Global_17301.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x954894782056D6CB(Global_17301.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0x954894782056D6CB(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_344(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0xD74B746610C55548("DFLT_MNU_OPT");
					unk_0x5D7608D88BED248F(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xB03A1684359C50A1(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0.0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17298 + Global_17300) - 0.0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0xA5738E964D2E2159(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0x1BD3A365A7E4BA14(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0xD74B746610C55548(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_18(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[(iVar22 + iVar28)]), func_21(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[(iVar22 + iVar28)]), func_21(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															fVar42 = (fVar42 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0x5D7608D88BED248F(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x5D7608D88BED248F((fVar34 + fVar42), fVar35, 0);
												if (func_342() && unk_0xE7FAF8E78F7D3A73(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_344(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0x61EA61920DAA51B8(0f, (0.35f * 0.7f));
														unk_0xE14EBFD640A207D8(255, 255, 255, 150);
														unk_0x754933C14FFBA8EB((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0xD74B746610C55548(&cVar107);
														unk_0x3A12001DBF78DC62((Global_17301.f_5605 + iVar30));
														unk_0x5D7608D88BED248F((fVar34 - fVar115), (fVar35 + fVar114), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar42 = (fVar42 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar41 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0x3A12001DBF78DC62(Global_17301.f_3918[iVar20]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_341((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0xEF512794542297CA(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_340((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_18(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_18(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_351(Global_17301.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x27CD91E03FF596E2(func_24(Global_17301.f_4433[iVar22]), func_21(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_339(Global_17301.f_4433[iVar22])), (fVar37 * func_339(Global_17301.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
									bVar41 = true;
									iVar22++;
									break;
								
								case 5:
									bVar41 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar51;
	Global_17301.f_5745 = unk_0x5AFB8ED811F05E4D();
	unk_0x882C4E3F687152C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_38(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0xE05212008FE9A018(10);
	}
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(7);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(8);
	if (bParam0)
	{
		func_192(1);
	}
	unk_0x3E233EDF605C23C0();
}

float func_339(int iParam0)
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

void func_340(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0xEF512794542297CA(uParam3, uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

void func_341(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(iParam3);
	unk_0x5D7608D88BED248F(fParam0, fParam1, iParam4);
}

var func_342()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

void func_343(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
}

void func_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_345(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x954894782056D6CB(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x954894782056D6CB(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
		else
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xE14EBFD640A207D8(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	else
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xA3F605DDB63EE4B8(1);
	if (bParam5)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(4);
	}
	else if (bParam6)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(6);
	}
	else
	{
		unk_0x03FBCA33C223558B(0);
	}
	unk_0x36D27769309D1050(0f, 1f);
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_345(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_357(bParam4, bParam8))
	{
		return;
	}
	if (func_349())
	{
		return;
	}
	if (unk_0x91A08229665C71F1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_347(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return;
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x73A445C7E1EAA5D2() == 0 || unk_0x91A08229665C71F1())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x32085AF1EB302CDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x305BC30EAC3E9BF4(2, Global_17301.f_4896[iVar1], true), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x33206AC5E51B4373(2, Global_17301.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x954263F3D07BEFC2((1f - (Global_17301.f_4951 / 100f)));
			unk_0xE2B30EB9B14EEAB2();
			if (unk_0xC339C5C5B5E8BC5B())
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD6F1BD29497A51C8(true);
				unk_0xE2B30EB9B14EEAB2();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x6E987D62C8535B6E("PREV"))
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(iVar1);
					func_13(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x6E987D62C8535B6E("PREV"))
					{
						func_13(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_12(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1635DC214B2BB352(iParam2, 70);
						}
						else
						{
							unk_0x3A12001DBF78DC62(iParam2);
						}
						unk_0xC30401186AC91B01();
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xB03A1684359C50A1(Global_17301.f_4922, iVar1))
						{
							unk_0xD6F1BD29497A51C8(true);
							unk_0x22DD5585E00B80C3(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0xD6F1BD29497A51C8(false);
							unk_0x22DD5585E00B80C3(358);
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
				iVar1++;
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_16)) != unk_0x6E987D62C8535B6E(""))
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(Global_17301.f_4639);
				func_13(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_12(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
				}
				unk_0xE2B30EB9B14EEAB2();
			}
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0x22DD5585E00B80C3(1);
			}
			else
			{
				unk_0x22DD5585E00B80C3(0);
			}
			unk_0xE2B30EB9B14EEAB2();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x22DD5585E00B80C3(iVar1);
					unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x22DD5585E00B80C3(iVar1);
				unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0x1635DC214B2BB352(iParam2, 70);
				}
				else
				{
					unk_0x3A12001DBF78DC62(iParam2);
				}
				unk_0xC30401186AC91B01();
				unk_0xE2B30EB9B14EEAB2();
			}
		}
		unk_0x09EF2EB55114981C(76, 66);
		unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x83B36F3602F99423(15, 0f, -0.0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0xB9C0BA93B50CE575(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x3E233EDF605C23C0();
		if (Global_17301.f_4925)
		{
			unk_0x09EF2EB55114981C(82, 66);
			unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
			unk_0xC1C40A3B8772D9BA(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x3E233EDF605C23C0();
		}
		else
		{
			unk_0x5E70D9959D6F2350(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_347(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_348(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_348(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_60();
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

int func_349()
{
	struct<3> Var0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_350())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xE0F240E99D061E79(&Var0);
		if (Global_14398 == 0)
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

int func_350()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_351(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x954894782056D6CB(1, iParam2, iParam3, iParam4, iParam5);
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

void func_352(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0x758E707C181FC6C1(2);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050(fParam0, ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_353(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0x3A12001DBF78DC62(uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

float func_354(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_355();
	unk_0xA5738E964D2E2159(sParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	unk_0x3A12001DBF78DC62(uParam2);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_355()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050((Global_17298 + 0.0046875f), ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_356(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x754933C14FFBA8EB((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_357(bool bParam0, bool bParam1)
{
	if (Global_2436169.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xC8AB6A5E6C1E6613() || (func_359(8, -1) && func_358() != 64)) || (unk_0xAF5EF4AF56129D79() != 0 && !bParam1)) || (unk_0x51CFE20A158947F4() && !bParam0)) || unk_0x09BCD61076F4FCCE()) || Global_71112) || Global_17301.f_7930) || unk_0xF45F7A07410EF1F5()) || Global_92881.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_358()
{
	return Global_1312789;
}

bool func_359(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

int func_360(int iParam0, bool bParam1)
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

int func_361(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xC9FF45E740135482(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == 1 && Global_4265875 == iParam1)
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

void func_362(var uParam0)
{
	if (!func_411(uParam0))
	{
		func_425(uParam0);
	}
}

int func_363(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC9FF45E740135482(2))
	{
		fVar0 = unk_0x53E8174ABB57602F(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x02EA7C5633421A0F(2, 190)) || unk_0xBAEF57A3E716CC8D(2, 190))
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

void func_364(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_336(0);
	unk_0x954894782056D6CB(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, func_360(uParam0->f_662 + 1, 1), 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, func_360(uParam0->f_664 + 1, 0), 0);
	func_367(2, 141, 141, 1);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_366(0);
	func_389(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_388(func_108(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_365(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x305BC30EAC3E9BF4(2, iParam0, true);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xD2A9C3F486236CC5(&(Global_17301.f_4922), Global_17301.f_4639);
	}
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_366(int iParam0)
{
	Global_17301.f_5605 = iParam0;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17301.f_7927 = iParam3;
	Global_17301.f_7924[0] = iParam1;
	Global_17301.f_7924[1] = iParam2;
	Global_17301.f_7928 = iParam0;
}

void func_368(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 2)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 2)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17301.f_3918[Global_17301.f_5092] = iParam1;
	Global_17301.f_5092++;
	fVar1 = func_370("NUMBER", iParam1);
	if (Global_17301.f_4945[Global_17301.f_5089])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
	{
		Global_17301.f_4938[Global_17301.f_5089] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_369("NUMBER", iParam1);
		if (fVar4 > Global_17301.f_5612[iParam0])
		{
			Global_17301.f_5612[iParam0] = fVar4;
		}
	}
	unk_0xD2A9C3F486236CC5(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 2;
}

float func_369(char* sParam0, int iParam1)
{
	if (!unk_0xD76CFACBF6A6F21E(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x97BF326E4F5CD20E(0.35f, 0);
}

float func_370(char* sParam0, int iParam1)
{
	if (!unk_0xD76CFACBF6A6F21E(sParam0))
	{
		return 0f;
	}
	func_344(1, 1, 0, 0, 0, 0, 0);
	unk_0xA5738E964D2E2159(sParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_371(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xFAFFA408239A026B(sParam1) && !unk_0xD76CFACBF6A6F21E(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_374(Global_17301.f_5088, 1);
	}
	else
	{
		func_374(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_373(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_372(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xD2A9C3F486236CC5(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_372(char* sParam0)
{
	if (!unk_0xD76CFACBF6A6F21E(sParam0))
	{
	}
	return unk_0x97BF326E4F5CD20E(0.35f, 0);
}

float func_373(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(uParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_344(0, 1, 0, 0, 0, 0, 0);
	unk_0xA5738E964D2E2159(sParam0);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_374(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x62148293B793073B(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_375(int iParam0, char* sParam1, char* sParam2)
{
	Global_17301 = iParam0;
	func_376(29, sParam1, sParam2);
}

void func_376(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17301.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17301.f_6719[iParam0 /*16*/]), sParam2, 64);
}

void func_377(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4945[0] = iParam0;
	Global_17301.f_4945[1] = iParam1;
	Global_17301.f_4945[2] = iParam2;
	Global_17301.f_4945[3] = iParam3;
	Global_17301.f_4945[4] = iParam4;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_381(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17301.f_7901 = iParam4;
	Global_17301.f_7897 = uParam0;
	Global_17301.f_7898 = uParam1;
	Global_17301.f_7899 = uParam2;
	Global_17301.f_7900 = uParam3;
}

int func_382(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xC9FF45E740135482(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == -1 && Global_4265875 == iParam1)
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

int func_383(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC9FF45E740135482(2))
	{
		fVar0 = unk_0x53E8174ABB57602F(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x02EA7C5633421A0F(2, 189))
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

int func_384(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC9FF45E740135482(2))
	{
		fVar0 = unk_0x53E8174ABB57602F(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x02EA7C5633421A0F(2, 187))
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

int func_385(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC9FF45E740135482(2))
	{
		fVar0 = unk_0x53E8174ABB57602F(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x02EA7C5633421A0F(2, 188))
	{
		if (!func_411(uParam0))
		{
			func_362(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_425(uParam0);
			return 1;
		}
	}
	else if (func_411(uParam0))
	{
		func_412(uParam0);
	}
	return 0;
}

int func_386(float fParam0)
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
	fVar2 = (fVar0 + Global_17300);
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	unk_0x4825D153175149E8(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x4825D153175149E8(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x3E233EDF605C23C0();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4265869 >= fVar0 && Global_4265869 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4265869 >= fVar0 && Global_4265869 < fVar4)
	{
		return -1;
	}
	if (Global_4265869 >= fVar4 && Global_4265869 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_387()
{
	if (unk_0xC9FF45E740135482(2))
	{
		return unk_0xBAEF57A3E716CC8D(2, 237);
	}
	return 0;
}

void func_388(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x5AFB8ED811F05E4D();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_389(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

int func_390()
{
	if (unk_0xC9FF45E740135482(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xFC0C00F9DE2AEC93(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC9FF45E740135482(2))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3C97A09EF6BCD140();
	}
	if (Global_4265875 == -6)
	{
		unk_0x851FC14BAA61DC87(4);
		if (iParam0 && unk_0x02EA7C5633421A0F(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x06BEA8ED8C1CD1FB())
	{
		unk_0x851FC14BAA61DC87(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0x02EA7C5633421A0F(2, 237))
		{
			unk_0x851FC14BAA61DC87(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x851FC14BAA61DC87(3);
			return 0;
		}
	}
	unk_0x851FC14BAA61DC87(1);
	return 0;
}

void func_392(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0xC9FF45E740135482(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x26AB951501A5D164(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0.034722f);
	}
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x4825D153175149E8(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x4825D153175149E8(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x3E233EDF605C23C0();
	func_394();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0.034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x09EF2EB55114981C(76, 84);
				unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
				func_356(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17300, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x3E233EDF605C23C0();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_393(bool bParam0)
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
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_356(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_356(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x3E233EDF605C23C0();
}

void func_394()
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x9163677583862019(2, 239);
	Global_4265870 = unk_0x9163677583862019(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

float func_395(float fParam0)
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

void func_396(var uParam0)
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
	func_336(0);
	unk_0x954894782056D6CB(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, 1, 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, 1, 0);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_367(2, 141, 141, 1);
	func_366(0);
	func_389(0, 1, 1);
	func_388("DARTS_LEGD", 0, 0);
	func_397();
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_397()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xB5767C907BB1B949(0.325f, 0.3f);
	}
}

int func_398(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_421() && unk_0x5AFB8ED811F05E4D() >= iLocal_323 + 1000) && *iParam0 != 8)
	{
		if (!unk_0xEC0ECEF2AF3FDA8D() && !unk_0xBC13F084F3B1B544())
		{
			unk_0xFF91FEC6E57575E4(500);
		}
	}
	if (unk_0xEC0ECEF2AF3FDA8D() && *iParam0 != 8)
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
						iLocal_323 = unk_0x5AFB8ED811F05E4D();
						func_406(uParam1->f_1, uParam1->f_4, func_408(2), func_407(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_277(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_264(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_425(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_414(uParam5) > 1f && !func_294("DARTS_DOUBLE_T"))
					{
						func_409("DARTS_DOUBLE_T", -1);
					}
					if (func_414(uParam5) > 5f)
					{
						func_425(uParam5);
						unk_0xEFF1F12403847394(1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(3), func_407(0), 1000);
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
					if (!unk_0x644D3EC290513DA9(uLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_277(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(uParam5) > 1f && !func_294("DARTS_TRIPLE_T"))
					{
						func_409("DARTS_TRIPLE_T", -1);
					}
					if (func_414(uParam5) > 5f)
					{
						func_425(uParam5);
						unk_0xEFF1F12403847394(1);
						func_406(uParam1->f_1, uParam1->f_4, func_408(4), func_407(0), 1000, 0);
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
					if (!unk_0x644D3EC290513DA9(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_277(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0xFF4225D4B94E1277(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(uParam5) > 1f && !func_294("DARTS_BULL_T"))
					{
						func_409("DARTS_BULL_T", -1);
					}
					if (func_414(uParam5) > 5f)
					{
						func_425(uParam5);
						unk_0xEFF1F12403847394(1);
						unk_0x929C3CBA660376D5(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(5), func_407(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x644D3EC290513DA9(uLocal_128) && !func_294("DARTS_DBL_WIN"))
			{
				func_409("DARTS_DBL_WIN", -1);
			}
			if (func_414(uParam5) > 6f)
			{
				func_425(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x929C3CBA660376D5(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0x544D4FC2BDA00B32(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x644D3EC290513DA9(uLocal_120))
			{
				iLocal_31 = 0;
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_399(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0xEC0ECEF2AF3FDA8D())
			{
				iLocal_31 = 0;
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_399(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x2C535610856B3F4D(uLocal_120, 1);
				unk_0x8359CF51370FC969(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_399(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x990FFD4FB6ADD630(*uParam0, Var0, 1, 0, 0, 1);
		unk_0xF0862FA354B164C4(uParam0);
		unk_0x5BE35A26B9097351(uParam0);
	}
}

void func_400(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0x2FCBAABE7B847216(uLocal_128);
	unk_0x2A2BB8210FB20081(uLocal_128, 35f);
	unk_0xF6910B463A17E809(uLocal_128, unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Param4));
	unk_0xA5D79F87520FD826(uLocal_128, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0x544D4FC2BDA00B32(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_401(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	if (!bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x02EA7C5633421A0F(2, 201))
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
		func_412(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_402(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_403(iParam5);
	unk_0x76F4FB5EFF5BDED5(*uParam0, "RESET_MOVIE");
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(*uParam0, sVar0);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0x70A9E4720D71C2D5(iParam4);
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xC30401186AC91B01();
	if (!unk_0xFAFFA408239A026B(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x22DD5585E00B80C3(100);
		unk_0xD6F1BD29497A51C8(true);
	}
	unk_0xE2B30EB9B14EEAB2();
	if (bParam6)
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "TRANSITION_UP");
		unk_0x954263F3D07BEFC2(iParam7);
		unk_0xE2B30EB9B14EEAB2();
	}
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_403(int iParam0)
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

void func_404()
{
	unk_0x2C535610856B3F4D(uLocal_120, 1);
	unk_0xF5F744EF9F4DB21E(1, false, 3000, 1, 0, 0);
	if (unk_0xEFEFF8C622C1C559(uLocal_127))
	{
		unk_0x2C535610856B3F4D(uLocal_127, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_122))
	{
		unk_0x2C535610856B3F4D(uLocal_122, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_123))
	{
		unk_0x2C535610856B3F4D(uLocal_123, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_124))
	{
		unk_0x2C535610856B3F4D(uLocal_124, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_125))
	{
		unk_0x2C535610856B3F4D(uLocal_125, 0);
	}
	if (unk_0xEFEFF8C622C1C559(uLocal_126))
	{
		unk_0x2C535610856B3F4D(uLocal_126, 0);
	}
}

char* func_405(int iParam0)
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

void func_406(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0x2FCBAABE7B847216(uLocal_127);
	unk_0x2A2BB8210FB20081(uLocal_127, 35f);
	unk_0xF6910B463A17E809(uLocal_127, unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Param4));
	unk_0xA5D79F87520FD826(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0x2C535610856B3F4D(uLocal_127, 1);
	}
	else
	{
		unk_0x544D4FC2BDA00B32(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_407(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_408(int iParam0)
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

void func_409(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_410(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(func_487(), 0))
	{
		func_4(func_487(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_411(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_412(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_413(var uParam0, char* sParam1, int iParam2)
{
	unk_0x729C5B8455454944(uParam0, sParam1, func_6(iParam2), 1);
}

float func_414(var uParam0)
{
	if (func_411(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_415(var uParam0)
{
	if (!func_411(uParam0))
	{
		func_362(uParam0);
	}
	else
	{
		func_425(uParam0);
	}
}

void func_416()
{
	Global_14622 = 0;
	func_417();
}

void func_417()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_418(int iParam0)
{
	if (Global_14615)
	{
		func_420(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_419())
	{
		Global_14453.f_1 = 3;
	}
}

int func_419()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_420(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_421()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_422(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x952F33F151D40D1A();
	if (unk_0x31F12808DC47A9E5(uVar0))
	{
		if (!func_423(iVar0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0xEA07F07380ABC460(iVar0, unk_0x18F7BE9ACB7D08F4(), Local_292, 0, 1, 0))
			{
				unk_0x3C107A20753CF14E(iVar0);
				unk_0xF342BF6A7A4C7A8F(iVar0, 0, 0);
				unk_0xA12407EB7D7CF146(iVar0, 0, 0);
				unk_0x73D7E57BF0ED7FEB(iVar0, 1);
				unk_0x337F2213526139E0(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(iParam0))
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

void func_424(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_425(var uParam0)
{
	func_426(uParam0, 0f);
}

void func_426(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_428(var uParam0, var uParam1, char* sParam2)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(uParam1);
	func_34(sParam2);
	unk_0xE2B30EB9B14EEAB2();
}

void func_429(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(func_487()) && !unk_0x0FAE113CE72ED842(func_487()))
	{
		unk_0x95B1A64E8455A478(func_487());
	}
	else
	{
		if (unk_0x31F12808DC47A9E5(uParam8->f_5) && !unk_0x0FAE113CE72ED842(uParam8->f_5))
		{
			unk_0x337F2213526139E0(uParam8->f_5, 1, 1);
			uLocal_295[1] = uParam8->f_5;
			unk_0x267F7A2DFDFFB077(uLocal_295[1]);
		}
		else if (func_431(uParam7))
		{
			unk_0x267F7A2DFDFFB077(uLocal_295[1]);
		}
		else
		{
			uLocal_295[1] = unk_0x364B87C5C64BD100(26, iLocal_331, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0x788C6B35BB3FCF53(uLocal_295[1], "Darts_name"))
		{
			iVar0 = unk_0xFE0F5B815FB9D3D1(uLocal_295[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_391 = func_434("RAYMOND");
				iLocal_392 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_391 = func_434("JOHAN");
				iLocal_392 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_391 = func_434("STAN");
				iLocal_392 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_391 = func_434("VINCE");
				iLocal_392 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_391 = func_434("KRISTY");
				iLocal_392 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_391 = func_434("MARLENE");
				iLocal_392 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_391 = func_434("LORIE");
				iLocal_392 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_391 = func_434("SHELLEY");
				iLocal_392 = -863218904;
			}
		}
		unk_0x3259E4661D22EB25(uLocal_295[1], "Darts_name", iLocal_392);
	}
	iVar1 = unk_0x4F69FBD64CDF125B(uLocal_295[1]);
	func_430(iVar1);
	unk_0x8F467CFC5FBBCE77(uLocal_295[1], uLocal_295[0], 0);
	unk_0x8F467CFC5FBBCE77(uLocal_295[0], uLocal_295[1], 0);
}

void func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 2);
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

int func_431(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), uParam0, -1))
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar0]))
		{
			if ((((((unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x4F69FBD64CDF125B((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x337F2213526139E0((*uParam0)[iVar0], 1, 1);
				uLocal_295[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 3;
		while (iVar0 <= (151 - 1))
		{
			if (func_433(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_433(int iParam0)
{
	if (!func_87(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_434(char* sParam0)
{
	if (unk_0xE7A981467BC975BA() == 7)
	{
		if (unk_0x9D39145AD645E383(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x9D39145AD645E383(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_435(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		uParam0->f_4 = unk_0x93FDA3BF59E7B77F(*uParam0);
	}
	if (!bParam3)
	{
		func_437(uParam1, uParam0);
	}
	Local_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	Local_82 = { Local_82 + Local_56 };
	Local_79 = { unk_0xA89DC5E1C1F12DBF(uParam0->f_1, uParam0->f_4, Local_82) };
	func_436(uParam2, uParam0);
}

void func_436(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_56 };
	*uParam0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_437(var uParam0, var uParam1)
{
	*uParam0 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { unk_0xA89DC5E1C1F12DBF(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_438(var uParam0, var uParam1)
{
	if (!unk_0xFF22FE9205F44FB6("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0xFF22FE9205F44FB6("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0xEDFE27D1AEA0EA7F(iLocal_28) || !unk_0xEDFE27D1AEA0EA7F(iLocal_29)) || !unk_0xEDFE27D1AEA0EA7F(iLocal_60)) || !unk_0xEDFE27D1AEA0EA7F(iLocal_331)) || !unk_0x5C716BBF766E1C70(*uParam0)) || !unk_0x5C716BBF766E1C70(uParam1->f_645)) || !unk_0x5C716BBF766E1C70(uParam1->f_57)) || !unk_0x5C716BBF766E1C70(uParam1->f_62)) || !unk_0x9F22E45F3CF7EACA(3)) || !unk_0x1865CC0DAB5F6A86("Darts")) || !unk_0x028356968FDD2DF2(sLocal_393)) || !unk_0x028356968FDD2DF2(sLocal_394)) || !func_439(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_439(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_333(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0x8E058779F430F4D7(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x04BF76BDE53874AF(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x1E7BE791ACBDDC05("CommonMenu", 0);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0x1865CC0DAB5F6A86("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x1E7BE791ACBDDC05("MPShopSale", 0);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0x1865CC0DAB5F6A86("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_440(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_440(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				*uParam0 = unk_0xBD7D7877C82BE42F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5C716BBF766E1C70(*uParam0))
					{
						uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_441(var uParam0, var uParam1)
{
	unk_0x9016574B77A748EE(iLocal_28);
	unk_0x9016574B77A748EE(iLocal_29);
	unk_0x9016574B77A748EE(iLocal_60);
	unk_0x9016574B77A748EE(iLocal_331);
	unk_0x1E7BE791ACBDDC05("Darts", 0);
	unk_0x1E7BE791ACBDDC05("ShopUI_Title_Darts", 0);
	unk_0x831CD0FBFB26EC7E(sLocal_393);
	unk_0x831CD0FBFB26EC7E(sLocal_394);
	*uParam0 = unk_0xBD7D7877C82BE42F("darts_scoreboard");
	uParam1->f_645 = func_187();
	uParam1->f_57 = func_443();
	uParam1->f_62 = func_442();
	unk_0x8E058779F430F4D7("DARTS", 3);
}

var func_442()
{
	return unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
}

var func_443()
{
	return unk_0xBD7D7877C82BE42F("MP_BIG_MESSAGE_FREEMODE");
}

void func_444(var uParam0, int iParam1, struct<3> Param2, float fParam5)
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
	if (!func_445(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0xA89DC5E1C1F12DBF(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_445(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61.f_0 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (unk_0x33CE899911FC2AD8())
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

void func_447(var uParam0, int iParam1)
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

void func_448()
{
	int iVar0;
	
	unk_0xE477A67BBD4B4A92();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_449(struct<3> Param0, float fParam3)
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
	
	fLocal_134 = unk_0x47DA03BCFF902E84(0);
	fVar21 = 30f;
	fVar21 = func_395(fLocal_134);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0x33CE899911FC2AD8())
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
	Var3 = { unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0xA89DC5E1C1F12DBF(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = unk_0x2F192286DA6346A2(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_121 = unk_0x2F192286DA6346A2(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_122 = unk_0x2F192286DA6346A2(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_123 = unk_0x2F192286DA6346A2(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_124 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_128 = unk_0x2F192286DA6346A2(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0x2F192286DA6346A2(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0x2A2BB8210FB20081(uLocal_122, 43.35f);
	unk_0x2A2BB8210FB20081(uLocal_123, 42.35f);
	unk_0x24144CB94D75CE91(uLocal_122, "HAND_SHAKE", 0.1f);
	unk_0x24144CB94D75CE91(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_450(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x31F12808DC47A9E5(uParam1->f_4))
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

void func_451()
{
	Global_17162.f_6 = 1;
}

void func_452(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

var func_453(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_454(iParam0, iParam1);
	unk_0xD194C635833AC189(uVar1, &uVar0, -1);
	return uVar0;
}

var func_454(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_455(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_455(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_456(bool bParam0)
{
	if (bParam0)
	{
		func_457();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_39(0))
		{
			func_418(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_457()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_458(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0xB9C41B3823E99CBB(1);
	func_256(8);
	func_309();
	if (bLocal_305)
	{
		func_475(&uLocal_321);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_399(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x419C9117019F2E5A(iLocal_28);
	unk_0x419C9117019F2E5A(iLocal_29);
	if (!unk_0x0FAE113CE72ED842(uLocal_295[0]) && !unk_0x0FAE113CE72ED842(uLocal_295[1]))
	{
		unk_0x81D9C52E2A8DA464(uLocal_295[0]);
		unk_0x81D9C52E2A8DA464(uLocal_295[1]);
	}
	func_474();
	unk_0x419C9117019F2E5A(iLocal_60);
	func_473();
	func_472(uParam1->f_645);
	func_471(&(uParam1->f_57));
	if (!unk_0x74C2FE037DFC8B4A(func_487(), 0))
	{
		unk_0xE186B0FBC086038E(func_487(), func_470());
		func_469(iLocal_329, iLocal_330);
	}
	else
	{
		func_467(&(uLocal_295[1]));
	}
	func_456(0);
	func_466(uParam2);
	func_36(0);
	unk_0xB9C0BA93B50CE575(15);
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (iParam0->f_460 && !iLocal_319)
		{
			func_465(190, 0);
		}
	}
	func_98();
	func_448();
	func_90(&(uParam1->f_72));
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_312)
	{
		func_462(130, 0, 0);
		func_459();
	}
	func_452(23, 0);
	unk_0x810C5D6462DD69E6();
}

void func_459()
{
	func_460();
}

int func_460()
{
	if (func_461(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_461(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_462(int iParam0, int iParam1, int iParam2)
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
		func_59((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_463();
	}
}

void func_463()
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_81(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_464() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_460();
				}
			}
		}
	}
}

int func_464()
{
	return Global_25233;
}

void func_465(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x60D6796E6B9FD3DB())
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
	if (func_217(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		unk_0x83AB023FACFAD852(103, iLocal_151[1], 0f);
		unk_0x83AB023FACFAD852(99, iLocal_151[2], 0f);
		unk_0x83AB023FACFAD852(109, iLocal_151[3], 0f);
		unk_0x83AB023FACFAD852(106, iLocal_151[5], 0f);
		unk_0x83AB023FACFAD852(2, iLocal_151[10], 0f);
		unk_0x83AB023FACFAD852(107, iLocal_151[8], 0f);
		unk_0x83AB023FACFAD852(116, iLocal_151[6], 0f);
	}
}

void func_466(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xEBE532BFFE618875(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(false);
			unk_0xE2B30EB9B14EEAB2();
		}
		unk_0xEBE532BFFE618875(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x3B82047F26E2CEDB(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71120)
	{
		if (!unk_0xA43E30AC0AF7BE76(unk_0x0A91D180DDC7A1B8()))
		{
			if (!Global_71121)
			{
				if (unk_0xEC0ECEF2AF3FDA8D() && !func_461(0))
				{
					unk_0x8359CF51370FC969(800);
				}
			}
		}
	}
	func_36(0);
}

void func_467(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0) && !unk_0x0FAE113CE72ED842(*uParam0))
	{
		unk_0x56C7B20E11B37066(&uLocal_332);
		unk_0xC8BEB049F3BFC0AB(&uLocal_332);
		if (unk_0x31F12808DC47A9E5(uLocal_295[0]))
		{
			unk_0x6016A20BFEAEFE11(0, uLocal_295[0], 8000, 2049, 3);
		}
		unk_0x73E31FC09D8359DB(0, 1000);
		if (bLocal_310)
		{
			if (!unk_0xB03A1684359C50A1(Global_104512, 10))
			{
				unk_0xA303A4837FBB8DDE(0, func_468(iLocal_334 == 2, Local_375, Local_381), 1f, 20000, 0.25f, 0, func_117(iLocal_334 == 2, fLocal_385, fLocal_387));
			}
			else
			{
				unk_0xA303A4837FBB8DDE(0, func_468(iLocal_334 == 2, Local_372, Local_378), 1f, 20000, 0.25f, 0, func_117(iLocal_334 == 2, fLocal_384, fLocal_386));
			}
			unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0xA303A4837FBB8DDE(0, func_468(iLocal_334 == 2, Local_372, Local_378), 1f, 20000, 0.25f, 0, func_117(iLocal_334 == 2, 172.6813f, 142.6717f));
			unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0xAFDA7B8F83B2CA58(uLocal_332);
		unk_0x73F69DD57B7E92A9(*uParam0, uLocal_332);
		unk_0x10F31830C95ED2E5(*uParam0, 1);
	}
	unk_0x419C9117019F2E5A(iLocal_331);
}

Vector3 func_468(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_469(int iParam0, var uParam1)
{
	if (Global_88800 == iParam0)
	{
		Global_88801 = Global_88800;
		Global_88802 = uParam1;
		Global_88800 = 23;
	}
}

var func_470()
{
	return unk_0x7C9C05CA6A57A7E1(unk_0x0A91D180DDC7A1B8());
}

void func_471(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
		*uParam0 = 0;
	}
}

void func_472(var uParam0)
{
	unk_0xEBE532BFFE618875(&uParam0);
}

void func_473()
{
	unk_0xEFF1F12403847394(1);
	unk_0x5E5731A0146FCAAC(0);
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	unk_0x77B57B2BB7F3EA0A(1);
}

void func_474()
{
	if (unk_0x31F12808DC47A9E5(uLocal_59))
	{
		unk_0x5BE35A26B9097351(&iLocal_59);
	}
}

void func_475(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x31F12808DC47A9E5(uVar0))
	{
		if (!func_423(iVar0))
		{
			unk_0xF342BF6A7A4C7A8F(iVar0, 1, 0);
			unk_0xA12407EB7D7CF146(iVar0, 1, 0);
			unk_0x73D7E57BF0ED7FEB(iVar0, 0);
		}
	}
}

void func_476()
{
	int iVar0;
	
	if (unk_0xC040FCA5F6E73B3E("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104551.f_9055 || func_461(0))
	{
		if (!func_484())
		{
			iVar0 = func_483();
			if (iVar0 != -1)
			{
				if (!func_478(iVar0))
				{
					return;
				}
				unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_477();
		}
	}
}

void func_477()
{
	Global_92864 = 1;
	if (unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_85())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
	}
	else if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_85())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
		unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 25);
	}
}

int func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_477();
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x9B5795DB2523F9E4(5000);
	}
	iVar0 = Global_83726[iParam0 /*5*/];
	iVar1 = Global_71121.f_109[iVar0 /*4*/];
	func_482(iVar1, 1);
	unk_0x4C07032A7F363326(unk_0x8CFC7D6E1DA5D304());
	unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	func_479(&(Global_104551.f_2353.f_539), iVar1);
	if (Global_87149 == Global_92866)
	{
		Global_104551.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB03A1684359C50A1(Global_83762[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x3388DD13675FEE27(0);
		}
	}
	Global_104551.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87149 = Global_92866;
	if (iParam0 == -1)
	{
		if (Global_104551.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_479(var uParam0, int iParam1)
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
		iVar1 = Global_104551.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_481(Global_104551.f_18503[iVar0], &Var2, &fVar5))
			{
				Global_104551.f_18503[iVar0] = 318;
				func_480(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90364[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_9 = 0f;
				Global_90364[iVar0 /*29*/].f_12 = 0f;
				Global_90364[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_10 = 0f;
				Global_90364[iVar0 /*29*/].f_13 = 0f;
				Global_90364[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_11 = 0f;
				Global_90364[iVar0 /*29*/].f_14 = 0f;
				Global_90364[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_26 = 0f;
				Global_90364[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_27 = 0f;
				Global_90364[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_480(var uParam0)
{
	*uParam0 = -15;
}

int func_481(int iParam0, var uParam1, float fParam2)
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
			return func_481(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_481(8, uParam1, fParam2);
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

void func_482(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

int func_483()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_484()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, bool bParam1)
{
	if (unk_0x0FAE113CE72ED842(func_487()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x3F34AC735B9567E3(func_487(), func_470()))
		{
			return;
		}
		if (!unk_0x0FAE113CE72ED842(func_486()))
		{
			if (!unk_0x3F34AC735B9567E3(func_486(), func_470()))
			{
				return;
			}
		}
	}
	if (Global_88800 == 23)
	{
		Global_88802 = 10;
		Global_88800 = iParam0;
	}
}

var func_486()
{
	return Global_88807;
}

int func_487()
{
	return Global_88806;
}

void func_488()
{
	if (iLocal_290 == 1)
	{
		return;
	}
	func_309();
	unk_0x011B3C098515A590("Darts");
	iLocal_290 = 1;
}

int func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<9> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
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
	bool bLocal_132 = 0;
	float fLocal_133 = 0f;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	int iLocal_150[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_162 = 0;
	struct<68> Local_163 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_231 = 0;
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
	var uLocal_247 = 8;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 2;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 8;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 8;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	float fLocal_277 = 0f;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	var uLocal_286[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	bool bLocal_297 = 0;
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	bool bLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
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
	struct<3> Local_357 = { 0, 0, 0 } ;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	float fLocal_375 = 0f;
	float fLocal_376 = 0f;
	float fLocal_377 = 0f;
	float fLocal_378 = 0f;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	char* sLocal_381 = NULL;
	char* sLocal_382 = NULL;
	int iLocal_383 = 0;
	char* sLocal_384 = NULL;
	char* sLocal_385 = NULL;
	char* sLocal_386[3] = { NULL, NULL, NULL };
	char* sLocal_390[3] = { NULL, NULL, NULL };
	char* sLocal_394[3] = { NULL, NULL, NULL };
	char* sLocal_398[3] = { NULL, NULL, NULL };
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = joaat("prop_dart_1");
	iLocal_28 = joaat("prop_dart_2");
	iLocal_31 = joaat("prop_dart_bd_cab_01");
	fLocal_54 = 0.063f;
	Local_55 = { -0.0035f, 0f, -0.001f };
	iLocal_59 = joaat("prop_target_bull");
	Local_84 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_91 = 0.1f;
	iLocal_102 = 3;
	fLocal_105 = 80f;
	fLocal_106 = 140f;
	fLocal_107 = 180f;
	iLocal_113 = 1;
	iLocal_114 = 65;
	iLocal_115 = 49;
	iLocal_116 = 64;
	iLocal_139 = 65;
	iLocal_141 = 660;
	fLocal_146 = 0.27f;
	fLocal_147 = 0.1f;
	fLocal_148 = -120f;
	fLocal_149 = 127f;
	fLocal_277 = ((0.05f + 0.275f) - 0.01f);
	Local_283 = { 500f, 500f, 500f };
	bLocal_298 = true;
	Local_363 = { -573.1373f, 294.0269f, 78.1765f };
	Local_366 = { -574.1169f, 292.7964f, 78.1766f };
	Local_369 = { 1995.295f, 3050.084f, 46.91535f };
	Local_372 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_375 = 172.6813f;
	fLocal_376 = 274.5094f;
	fLocal_377 = 142.6717f;
	fLocal_378 = 44.8785f;
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
	sLocal_384 = "facials@gen_female@variations@happy";
	switch (func_477(unk_0x096275889B8E0EE0()))
	{
		case 0:
			sLocal_385 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_385 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_385 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_386[0] = "mood_happy_1";
	sLocal_386[1] = "mood_happy_2";
	sLocal_386[2] = "mood_happy_3";
	sLocal_390[0] = "darts_outro_01_guy1";
	sLocal_390[1] = "darts_outro_02_guy2";
	sLocal_390[2] = "darts_outro_03_guy2";
	sLocal_394[0] = "darts_outro_01_guy2";
	sLocal_394[1] = "darts_outro_02_guy1";
	sLocal_394[2] = "darts_outro_03_guy1";
	sLocal_398[0] = "darts_outro_01_cam";
	sLocal_398[1] = "darts_outro_02_cam";
	sLocal_398[2] = "darts_outro_03_cam";
	uLocal_286[0] = unk_0x096275889B8E0EE0();
	bLocal_301 = true;
	Var1777 = { 1992.293f, 3050.583f, 47.98973f };
	Var1780 = { -572.0406f, 294.1958f, 79.9374f };
	func_476();
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		iLocal_325 = 1;
		switch (unk_0x9C1C462D7B1DD1F9(0, 2))
		{
			case 0:
				iLocal_322 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_322 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_320 = 10;
		unk_0xA1594471C8773FDD(unk_0x096275889B8E0EE0(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0xD42BD6EB2E0F1677(ScriptParam_0.f_4))
	{
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (iLocal_325 == 2)
			{
				ScriptParam_0 = { Var1780 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1777 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x1C168182BEBE2DDA(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0x066A16145417A72D(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0xCA71EC1EC237227C(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1783, 0);
				ScriptParam_0.f_3 = Var1783.f_2;
			}
		}
	}
	else
	{
		Var1783 = { unk_0xA86D5F069399F44D(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0x7D5B1F88E7504BBA(func_475()))
	{
		func_473(iLocal_320, 1);
		if (unk_0x52BE10F427339B39(func_475(), 0))
		{
			unk_0x36DBE8E570B9FBCE(func_475(), 0, 0);
		}
		uLocal_286[1] = func_475();
	}
	else
	{
		unk_0x36694B456BE80D0A(1);
	}
	if (unk_0xC11469DCA6FC3BB5(67))
	{
		func_464();
		func_445(&Var0, &Var508, &Var1191);
	}
	unk_0x8D61ACC859220793(0);
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
	func_443(1);
	iLocal_316 = func_440(func_477(uLocal_286[0]), 1);
	fVar1775 = (unk_0xBBDA792448DB5A89(iLocal_316) / 100f);
	fVar1776 = (fVar1775 * 1200f);
	iLocal_141 = unk_0xF2DB717A73826179(fVar1776);
	if (iLocal_141 < 660)
	{
		iLocal_141 = 660;
	}
	func_439(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xB5F6539FA93ECBF6(2);
		unk_0x36CDD81627A6FCD2();
		unk_0xBCECE9335F976364(15, 0f, -0.0375f);
		if (iLocal_308 && Var0.f_0 < 13)
		{
			unk_0xBBC236BA1D011896(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0x6CFF81397164A1D3(ScriptParam_0.f_5) && !unk_0xD42BD6EB2E0F1677(func_475())) || (unk_0xD42BD6EB2E0F1677(func_475()) && unk_0x6CFF81397164A1D3(func_475())))
		{
			func_445(&Var0, &Var508, &Var1191);
		}
		if (!unk_0x6CFF81397164A1D3(uLocal_286[0]))
		{
			unk_0x28AC5FC91EA70789(uLocal_286[0], 239, 1);
			unk_0x28AC5FC91EA70789(uLocal_286[0], 124, 1);
			func_438();
			unk_0x66C4FECDA728574E(0);
			unk_0x66C4FECDA728574E(2);
			iVar1774 = 0;
			while (iVar1774 < unk_0xD998C3CE9F8EB5C2(unk_0x096275889B8E0EE0(), &uVar1802, -1))
			{
				if (uVar1802[iVar1774] != uLocal_286[1])
				{
					if (!unk_0x6CFF81397164A1D3(uVar1802[iVar1774]))
					{
						unk_0x28AC5FC91EA70789(uVar1802[iVar1774], 240, 1);
					}
				}
				iVar1774++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x0BFC2C61FB5B6CA1(1);
					func_437(&(Var0.f_243), &ScriptParam_0);
					func_436(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xD42BD6EB2E0F1677(Var0.f_243))
					{
						Local_357 = { unk_0xC899C78DB72CCBCC(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_360 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_128 = unk_0x98B99B9F27E2D60B(26379945, Local_357, Local_360, 65f, 0, 2);
						unk_0x27666E5988D9D429(uLocal_128, 30f);
					}
					func_435();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
					{
						unk_0x3B882A96EA77D5B1(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
						{
							unk_0x5EC7E18324A7D03D(&uLocal_323);
							unk_0xF4BF3E3D7FE56705(&uLocal_323);
							unk_0x36DBE8E570B9FBCE(0, 0, 0);
							unk_0xFF7E39890B2840DD(uLocal_323);
							unk_0xD59C10966EB589EA(unk_0x096275889B8E0EE0(), uLocal_323);
						}
						Local_84 = { Local_84 };
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
							func_434(&(Var0.f_5[iVar1824 /*79*/][iVar1825 /*26*/]), iVar1824);
							iVar1825++;
						}
						iVar1824++;
					}
					iVar1826 = 0;
					while (iVar1826 < 3)
					{
						func_434(&(Var0.f_164[iVar1826 /*26*/]), 0);
						iVar1826++;
					}
					iVar464 = 2;
					func_433(0);
					func_431(&Var477, iLocal_325, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xD42BD6EB2E0F1677(Var0.f_243))
					{
						Var1783 = { unk_0x497C6B1A2C9AE69C(Var0.f_243, Var477.f_18) };
					}
					func_428(&Var477, &Var508);
					unk_0xCEA4E87102552C46(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_425(&Var477, &Var508))
					{
						func_422(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_379 = func_477(uLocal_286[0]);
						switch (iLocal_379)
						{
							case 0:
								sLocal_381 = func_421("MICHAEL");
								if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_381 = func_421("FRANKLIN");
								bLocal_305 = true;
								if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_381 = func_421("TREVOR");
								if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x7D5B1F88E7504BBA(func_475()))
						{
							iLocal_380 = func_477(func_475());
							if (iLocal_380 == 145)
							{
								iLocal_380 = func_419(func_475());
							}
							switch (iLocal_380)
							{
								case 0:
									sLocal_382 = func_421("MICHAEL");
									break;
								
								case 1:
									sLocal_382 = func_421("FRANKLIN");
									break;
								
								case 2:
									sLocal_382 = func_421("TREVOR");
									break;
								
								case 19:
									sLocal_382 = func_421("LAMAR");
									unk_0x584EEBEECD248926(func_475(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_382 = func_421("JIMMY");
									break;
								
								default:
									sLocal_382 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1772 = unk_0x9C1C462D7B1DD1F9(0, 200);
							if (iLocal_325 == 2)
							{
								if (iVar1772 < 51)
								{
									sLocal_382 = func_421("RAYMOND");
									iLocal_383 = 954610991;
								}
								else if (iVar1772 < 101)
								{
									sLocal_382 = func_421("JOHAN");
									iLocal_383 = 94453331;
								}
								else if (iVar1772 < 151)
								{
									sLocal_382 = func_421("STAN");
									iLocal_383 = 1891555423;
								}
								else
								{
									sLocal_382 = func_421("VINCE");
									iLocal_383 = -1067630349;
								}
							}
							else if (iVar1772 < 51)
							{
								sLocal_382 = func_421("KRISTY");
								iLocal_383 = 885327384;
							}
							else if (iVar1772 < 101)
							{
								sLocal_382 = func_421("MARLENE");
								iLocal_383 = -1791000994;
							}
							else if (iVar1772 < 151)
							{
								sLocal_382 = func_421("LORIE");
								iLocal_383 = 1954368234;
							}
							else
							{
								sLocal_382 = func_421("SHELLEY");
								iLocal_383 = -863218904;
							}
						}
						uLocal_58 = unk_0x1A2D7464B1CAA1C8(iLocal_59, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x43AB9D5A7D415478())
					{
						uVar1823 = unk_0x1A2D7464B1CAA1C8(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_416(Var0.f_243.f_4, Var465, &uVar1802, &ScriptParam_0);
						func_414(&Var477, sLocal_381, sLocal_382);
						unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
						uLocal_324 = unk_0x98B99B9F27E2D60B(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
						{
							unk_0x701D6D68FC656B34(unk_0x096275889B8E0EE0(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_413(&(Var0.f_257), 0, unk_0x096275889B8E0EE0(), sLocal_381, 0, 1);
						if (unk_0x7D5B1F88E7504BBA(func_475()))
						{
							if (iLocal_325 == 2)
							{
								func_413(&(Var0.f_257), 3, uLocal_286[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_413(&(Var0.f_257), 3, uLocal_286[1], "DartsMelHick1", 0, 1);
							}
							iVar1773 = -1;
						}
						else
						{
							func_413(&(Var0.f_257), 3, func_475(), sLocal_382, 0, 1);
							func_412(&uVar1799);
							iVar1773 = 6;
						}
						if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
						{
							iVar1773 = -1;
						}
						else
						{
							iVar1773 = 3;
						}
						func_411(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x6CFF81397164A1D3(uLocal_286[1]) && unk_0x20EB7B80D61EEA56(uLocal_286[0])) && !unk_0x52BE10F427339B39(uLocal_286[0], 1)) && unk_0x20EB7B80D61EEA56(uLocal_286[1])) && !unk_0x52BE10F427339B39(uLocal_286[1], 1))
					{
						bLocal_296 = func_409(&uLocal_312);
						if ((func_408() && unk_0x4F67E8ECA7D3F667() >= iLocal_314 + 1000) && iVar1773 != 9)
						{
							if (!unk_0xF5472C80DF2FF847() && !unk_0x02F39BEFE7B88D00())
							{
								unk_0x40C719A5E410B9E4(500);
							}
						}
						if (unk_0xF5472C80DF2FF847() && iVar1773 != 9)
						{
							func_405(0);
							func_403();
							iVar1773 = 9;
						}
						switch (iVar1773)
						{
							case -1:
								if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
								{
									uLocal_318 = unk_0x4D3B117F889EADDA(unk_0xC899C78DB72CCBCC(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xC230DD956E2F5507(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_324 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x6E3975B3F6954199(uLocal_324, uLocal_318, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x87295BCA613800C8(uLocal_324, 1);
									unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
									unk_0x939C1E5F1840360D(uLocal_286[0]);
									unk_0x939C1E5F1840360D(uLocal_286[1]);
									unk_0xFA8B88A1EF049B33(uLocal_286[0]);
									unk_0xFA8B88A1EF049B33(uLocal_286[1]);
									unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x8DBC05C86F873CC9(uLocal_286[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x8DBC05C86F873CC9(uLocal_286[0], "mini@dartsintro", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xCF307902D4A3A68C(uVar1823, uLocal_318, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_402(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 0:
								if (unk_0x0ACACDD53B4C4879(uLocal_318))
								{
									if (!bVar1769)
									{
										if (func_401(&uVar1799) > 1.5f)
										{
											func_400(uLocal_286[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_399(&uVar1799);
										}
									}
									else if (!unk_0xE83F3075C21CC0A2(uLocal_286[0]))
									{
										if (!bVar1770)
										{
											if (!func_398(&uVar1799))
											{
												func_412(&uVar1799);
											}
											else if (func_401(&uVar1799) > 0.5f)
											{
												func_397(uLocal_286[1]);
												func_399(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									switch (iLocal_30)
									{
										case 0:
											func_402(&uVar1799);
											func_396("DARTS_HOW_TO_2", -1);
											iLocal_30++;
											break;
										
										case 1:
											if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.25f)
											{
												func_402(&uVar1799);
												func_396("DARTS_HOW_TO_3", -1);
												iLocal_30++;
											}
											break;
										
										case 2:
											if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.55f)
											{
												func_396("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
										
										case 3:
											if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.85f)
											{
												func_396("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
									}
									if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.95f)
									{
										iLocal_308 = 1;
										iVar1773++;
									}
									else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.99f)
								{
									if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
									{
										func_393(Var0.f_243.f_1, Var0.f_243.f_4, func_395(2), func_394(0), 0, 1);
										iLocal_30 = 0;
										unk_0x0BFC2C61FB5B6CA1(1);
										unk_0x4E67E0B6D7FD5145(uLocal_324, 0);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[0]);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
										unk_0x9BBC32B584987163(uVar1823, -1000f, 0);
										unk_0x931914268722C263(&uVar1823);
										unk_0xC27FB879C2B9A2EB(func_392(0));
										func_399(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
								{
									uLocal_318 = unk_0x4D3B117F889EADDA(unk_0xC899C78DB72CCBCC(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xC230DD956E2F5507(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_324 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x6E3975B3F6954199(uLocal_324, uLocal_318, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x87295BCA613800C8(uLocal_324, 1);
									unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
									unk_0x939C1E5F1840360D(uLocal_286[0]);
									unk_0x939C1E5F1840360D(uLocal_286[1]);
									unk_0xFA8B88A1EF049B33(uLocal_286[0]);
									unk_0xFA8B88A1EF049B33(uLocal_286[1]);
									unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x8DBC05C86F873CC9(uLocal_286[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x8DBC05C86F873CC9(uLocal_286[0], "mini@dartsintro_alt1", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xCF307902D4A3A68C(uVar1823, uLocal_318, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_402(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 4:
								if (unk_0x0ACACDD53B4C4879(uLocal_318))
								{
									if (!bVar1769)
									{
										if (func_401(&uVar1799) > 0.5f)
										{
											func_400(uLocal_286[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											func_399(&uVar1799);
										}
									}
									else if (!unk_0xE83F3075C21CC0A2(uLocal_286[0]))
									{
										if (!bVar1770)
										{
											if (!func_398(&uVar1799))
											{
												func_412(&uVar1799);
											}
											else if (func_401(&uVar1799) > 0.25f)
											{
												func_397(uLocal_286[1]);
												func_399(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.95f)
									{
										iLocal_308 = 1;
										iVar1773++;
									}
									else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x5D6C0F302EC49A67(uLocal_318) > 0.99f)
								{
									if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
									{
										func_391();
										unk_0x4E67E0B6D7FD5145(uLocal_324, 0);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[0]);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
										unk_0x9BBC32B584987163(uVar1823, -1000f, 0);
										unk_0x931914268722C263(&uVar1823);
										unk_0xC27FB879C2B9A2EB(func_392(0));
										func_399(&uVar1799);
										Var0.f_0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0xF5472C80DF2FF847())
								{
									iLocal_308 = 1;
									iLocal_30 = 0;
									unk_0x0BFC2C61FB5B6CA1(1);
									if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
									{
										unk_0xF6A103413A202C37(uLocal_286[0], Var465, 1, 0, 0, 1);
										unk_0xCF2B9C0645C4651B(uLocal_286[0], Var0.f_243.f_4);
										unk_0xF6A103413A202C37(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
										unk_0xCF2B9C0645C4651B(uLocal_286[1], Var0.f_243.f_4);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[0]);
										unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
									}
									unk_0x4E67E0B6D7FD5145(uLocal_324, 0);
									unk_0x9BBC32B584987163(uVar1823, -1000f, 0);
									unk_0x931914268722C263(&uVar1823);
									if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
									{
										func_393(Var0.f_243.f_1, Var0.f_243.f_4, func_395(2), func_394(0), 0, 1);
									}
									else
									{
										func_391();
									}
									unk_0xC27FB879C2B9A2EB(func_392(0));
									func_399(&uVar1799);
									unk_0x6A053CF596F67DF7(500);
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
							iLocal_314 = unk_0x4F67E8ECA7D3F667();
							if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
							{
								unk_0xF6A103413A202C37(uLocal_286[0], Var465, 1, 0, 0, 1);
								unk_0xCF2B9C0645C4651B(uLocal_286[0], Var0.f_243.f_4);
								unk_0xF6A103413A202C37(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
								unk_0xCF2B9C0645C4651B(uLocal_286[1], Var0.f_243.f_4);
							}
							unk_0x5F70787AC4BF7928(func_392(1));
							iVar1773 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x4F67E8ECA7D3F667() - iLocal_314) > 1500)
							{
								func_389(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1773++;
							}
							break;
						
						case 2:
							if (!func_388(&(Var508.f_57), 1, 0))
							{
								unk_0x5F70787AC4BF7928(func_392(1));
								iVar1773 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 0))
					{
						if (func_385(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1796))
						{
							unk_0xF73FBE4845C43B5B(&Global_97314, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0x87295BCA613800C8(uLocal_119, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0xF5472C80DF2FF847())
					{
						unk_0x6A053CF596F67DF7(500);
					}
					switch (iVar1773)
					{
						case 0:
							if (!unk_0xD42BD6EB2E0F1677(func_475()))
							{
								if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 10))
								{
									unk_0xF73FBE4845C43B5B(&Global_97314, 10);
								}
								else
								{
									unk_0x7D1D4A3602B6AD4E(&Global_97314, 10);
								}
								func_383(&Var508);
								iVar1773++;
							}
							else
							{
								func_383(&Var508);
								iVar1773++;
							}
							break;
						
						case 1:
							if (unk_0xB0FB6CFAA5A1C833())
							{
								if (fLocal_133 != unk_0x1C672C3C3855417F(0))
								{
									fLocal_133 = unk_0x1C672C3C3855417F(0);
									unk_0x27666E5988D9D429(uLocal_119, func_382(fLocal_133));
									unk_0x27666E5988D9D429(uLocal_120, func_382(fLocal_133));
								}
							}
							if (func_323(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xC27FB879C2B9A2EB(func_392(1));
								if (Var0.f_452 > 0)
								{
									iVar1773 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_322(&Var477, 0, 0, 0, 0);
										bVar1768 = true;
									}
									func_319(1, -1);
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
					if (func_312(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_97353.f_17224.f_5 >= 5 && Global_97353.f_17224.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_97353.f_17224.f_5 >= 3 && Global_97353.f_17224.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_311(Global_97353.f_17224.f_5, &iLocal_317))
						{
							func_310(&(Var508.f_666), 24, 1);
						}
						fLocal_89 = func_309(Global_97353.f_17224.f_5);
						fLocal_90 = func_308(Global_97353.f_17224.f_5);
						fLocal_87 = fLocal_89;
						fLocal_88 = fLocal_90;
						iLocal_150[4]++;
						if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
						{
							unk_0xFA8B88A1EF049B33(uLocal_286[1]);
							unk_0xF6A103413A202C37(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
							unk_0xCF2B9C0645C4651B(uLocal_286[1], Var0.f_243.f_4);
						}
						if (func_398(&uVar1793))
						{
							func_399(&uVar1793);
						}
						unk_0x5F70787AC4BF7928(func_392(2));
						func_307(uLocal_286[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (fLocal_133 != unk_0x1C672C3C3855417F(0))
						{
							fLocal_133 = unk_0x1C672C3C3855417F(0);
							unk_0x27666E5988D9D429(uLocal_119, func_382(fLocal_133));
							unk_0x27666E5988D9D429(uLocal_120, func_382(fLocal_133));
						}
					}
					if (!bLocal_306)
					{
						unk_0xA862A2AD321F94B4("mini@dartsoutro");
						bLocal_306 = true;
					}
					if (!iLocal_307)
					{
						if (bLocal_306)
						{
							if (!unk_0x27FF6FE8009B40CA("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_307 = 1;
							}
						}
					}
					func_225(&Var0, &Var471, &Var477, &Var508, &uVar1793);
					break;
				
				case 11:
					switch (iVar1773)
					{
						case 0:
							if (func_401(&(Var0.f_254)) > 0.5f)
							{
								unk_0x0BFC2C61FB5B6CA1(1);
								unk_0x00686F7B3723B82F();
								func_224(unk_0x096275889B8E0EE0());
								func_322(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1827 = 0;
								while (iVar1827 < 2)
								{
									iVar1828 = 0;
									while (iVar1828 < 3)
									{
										func_223(&(Var0.f_5[iVar1827 /*79*/][iVar1828 /*26*/]));
										iVar1828++;
									}
									func_222(&Var477, iVar1827);
									iVar1827++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_220(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_220(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_220(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_220(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1830 = unk_0x1C672C3C3855417F(1);
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
								iVar1829 = func_219();
								uLocal_318 = unk_0x4D3B117F889EADDA(Var1786, Var1789, 2);
								uLocal_324 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x6E3975B3F6954199(uLocal_324, uLocal_318, sLocal_398[iVar1829], "mini@dartsoutro");
								unk_0x87295BCA613800C8(uLocal_324, 1);
								unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
								if (!unk_0x6CFF81397164A1D3(uLocal_286[0]) && !unk_0x6CFF81397164A1D3(uLocal_286[1]))
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
										unk_0xB906B139171B1845(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_218(&uLocal_286, iVar1831);
										unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_390[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_394[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x8DBC05C86F873CC9(unk_0x096275889B8E0EE0(), sLocal_385, sLocal_386[unk_0x9C1C462D7B1DD1F9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xB906B139171B1845(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_217(&uLocal_286);
										unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_390[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_394[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x8DBC05C86F873CC9(uLocal_286[1], sLocal_384, sLocal_386[unk_0x9C1C462D7B1DD1F9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1773++;
							}
							break;
						
						case 1:
							if (!func_215(&(Var508.f_62), 1))
							{
								iVar1773++;
							}
							break;
						
						case 2:
							func_399(&(Var0.f_254));
							iLocal_302 = 0;
							unk_0xC27FB879C2B9A2EB(func_392(3));
							func_391();
							if (unk_0x153AD457764FD704(uLocal_324))
							{
								unk_0x4E67E0B6D7FD5145(uLocal_324, 0);
							}
							iVar1773 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_401(&(Var0.f_254)) > 0.92f)
					{
						func_38(&Var0, &Var508, &Var477, &Var1191, bVar1768);
					}
					break;
				
				case 13:
					uVar1771 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0x7D5B1F88E7504BBA(func_475()))
					{
						unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1773)
					{
						case 0:
							unk_0x0F1ABE64C3C18E5A(uLocal_286[0]);
							if (!bLocal_304)
							{
								unk_0x33281167E4942E4F(0, bLocal_304, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x8C7C7FF7CF0E5153(0, 0, 3, 0);
							}
							unk_0x5D1EB123EAC5D071(0);
							unk_0xFB760AF4F537B8BF(0, 1065353216);
							unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
							unk_0x00686F7B3723B82F();
							unk_0xD4648EA39998A07B(uLocal_286[0], uLocal_286[1], 5000, 2049, 3);
							func_412(&uVar1799);
							iVar1773++;
							break;
						
						case 1:
							if (func_7(&uVar1799) > 0.1f)
							{
								if (!bVar1767)
								{
								}
								func_412(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1799) > 0.3f)
							{
								if (!unk_0x6CFF81397164A1D3(uLocal_286[1]))
								{
									if (!bVar1767)
									{
										func_4(uLocal_286[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_412(&uVar1799);
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
					if (unk_0x3249D2128D293FA5(2, 201))
					{
						func_1(uLocal_286[1]);
						iLocal_321 = 2;
						bVar1767 = true;
						if (unk_0x2E882EA08284F674(func_392(2)))
						{
							unk_0xC27FB879C2B9A2EB(func_392(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x3249D2128D293FA5(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_99 = 0;
						}
						func_310(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_445(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0x535384D6067BA42E())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_310(&(uParam0->f_666), 8, 1);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 16, 0);
			func_310(&(uParam0->f_666), 17, 0);
		}
		unk_0xDB36BD90A8131006();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_310(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x7D5B1F88E7504BBA(func_475()) || iParam2)
	{
		func_400(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_101, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(uParam0, sParam1, sParam2, func_6(iParam3), 0);
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
	if (func_398(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x77DFA958FCF100C1() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x77DFA958FCF100C1();
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x60B55BC4863CE98E(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x3029D40B71AB2E64(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xF5472C80DF2FF847() || unk_0x02F39BEFE7B88D00())
		{
			unk_0x5CB83156AA038F95(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (!unk_0x03A753E2C8458335())
		{
			if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
			{
				unk_0xA50674CBC79771CC(unk_0x217E9DC48139933D());
			}
		}
	}
	unk_0xB5F6539FA93ECBF6(7);
	unk_0xB5F6539FA93ECBF6(8);
	unk_0xB5F6539FA93ECBF6(9);
	unk_0xB5F6539FA93ECBF6(6);
	unk_0xB5F6539FA93ECBF6(19);
	unk_0x562F5D788AF3FA80(2, 19, 1);
	unk_0x562F5D788AF3FA80(0, 37, 1);
	unk_0x562F5D788AF3FA80(0, 21, 1);
	unk_0x562F5D788AF3FA80(0, 28, 1);
	unk_0x562F5D788AF3FA80(0, 29, 1);
	unk_0x562F5D788AF3FA80(0, 171, 1);
	func_36();
	if (unk_0x3653C46DD33107D5(2))
	{
		if (unk_0x0B636D9A2187CBE5() || (unk_0xF5472C80DF2FF847() && !unk_0x0CECCC63FFA2EF24()))
		{
			unk_0xF12E4CCAF249DC10();
		}
	}
	Global_35463 = 1;
	if (!uParam0->f_563)
	{
		switch (func_477(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4())))
		{
			case 1:
				unk_0x4102732DF6B4005F("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x4102732DF6B4005F("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x4102732DF6B4005F("SuccessMichael", 1000, 0);
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
					unk_0xF6EA2AC68E7C7293(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xD4D85E4148B638AD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xF6EA2AC68E7C7293(uParam0->f_1, "TRANSITION_OUT");
			unk_0xD4D85E4148B638AD();
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
			if (unk_0x29D1C165BCB09391(2))
			{
				if (unk_0x64BAE9BE701E6C19(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xCCBB0BB9790E1F47(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x64BAE9BE701E6C19(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xF6EA2AC68E7C7293(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xD4D85E4148B638AD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xF6EA2AC68E7C7293(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xD4D85E4148B638AD();
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
					unk_0xF6EA2AC68E7C7293(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xD4D85E4148B638AD();
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
					if (unk_0xCCBB0BB9790E1F47(2, 215))
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
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "CLEAR_ALL");
	unk_0xD4D85E4148B638AD();
	if (unk_0xB0FB6CFAA5A1C833())
	{
		unk_0xF6EA2AC68E7C7293(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x58279158C52AF361(true);
		unk_0xD4D85E4148B638AD();
	}
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xA734310215BCF528(0);
	func_13(unk_0xF800E35ED8511D66(2, 215, true));
	func_12("ES_HELP");
	if (unk_0xB0FB6CFAA5A1C833())
	{
		unk_0x58279158C52AF361(true);
		unk_0xA734310215BCF528(215);
	}
	unk_0xD4D85E4148B638AD();
	if (bParam1)
	{
		unk_0xF6EA2AC68E7C7293(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xA734310215BCF528(1);
		func_13(unk_0xF800E35ED8511D66(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0xB0FB6CFAA5A1C833())
		{
			unk_0x58279158C52AF361(true);
			unk_0xA734310215BCF528(216);
		}
		unk_0xD4D85E4148B638AD();
	}
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xD4D85E4148B638AD();
}

void func_12(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_13(char* sParam0)
{
	unk_0x3FB5104DF4233F1D(sParam0);
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
	if (unk_0x64BAE9BE701E6C19(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xF6EA2AC68E7C7293(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				func_12(&(uParam0->f_13));
				unk_0xA734310215BCF528(100);
				unk_0x58279158C52AF361(true);
				unk_0xA734310215BCF528(uParam0->f_56);
				unk_0x58279158C52AF361(bParam2);
				unk_0xA734310215BCF528(69);
				unk_0xD4D85E4148B638AD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xF6EA2AC68E7C7293(uParam0->f_1, "TRANSITION_UP");
				unk_0xBC38230AD29DBDD4(0.15f);
				unk_0x58279158C52AF361(true);
				unk_0xD4D85E4148B638AD();
				uParam0->f_3 = 1;
			}
		}
		func_32();
		unk_0x2D8953D6CEBE69D2(uParam0->f_1, 255, 255, 255, 255, 0);
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
	if (unk_0x1C672C3C3855417F(0) < 1.4f)
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
	unk_0xDA067FC477B3E571(2, 215);
	unk_0xDA067FC477B3E571(2, 216);
	unk_0xDA067FC477B3E571(2, 200);
	unk_0x562F5D788AF3FA80(2, 200, 1);
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
						func_28((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
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
			if (unk_0xF5472C80DF2FF847())
			{
				unk_0xEA600AABAF4B9084();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xB5F6539FA93ECBF6(7);
				unk_0xB5F6539FA93ECBF6(8);
				unk_0xB5F6539FA93ECBF6(9);
				unk_0xB5F6539FA93ECBF6(6);
				unk_0x2D8953D6CEBE69D2(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x562F5D788AF3FA80(0, 140, 1);
				unk_0x562F5D788AF3FA80(0, 141, 1);
				unk_0x562F5D788AF3FA80(0, 142, 1);
				unk_0x562F5D788AF3FA80(2, 188, 1);
				if (unk_0xA799AFD74BAFEA0F(2, 188))
				{
					unk_0xB906B139171B1845(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xB906B139171B1845(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x562F5D788AF3FA80(2, 187, 1);
				if (unk_0xA799AFD74BAFEA0F(2, 187))
				{
					unk_0xB906B139171B1845(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xB906B139171B1845(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x562F5D788AF3FA80(2, 202, 1);
				if (unk_0xA799AFD74BAFEA0F(2, 202))
				{
					unk_0xB906B139171B1845(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xB906B139171B1845(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xB5F6539FA93ECBF6(7);
				unk_0xB5F6539FA93ECBF6(8);
				unk_0xB5F6539FA93ECBF6(9);
				unk_0xB5F6539FA93ECBF6(6);
				unk_0x562F5D788AF3FA80(0, 140, 1);
				unk_0x562F5D788AF3FA80(0, 141, 1);
				unk_0x562F5D788AF3FA80(0, 142, 1);
				if (unk_0xCCBB0BB9790E1F47(2, 215) || unk_0xA799AFD74BAFEA0F(2, 200))
				{
					unk_0xB906B139171B1845(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xB906B139171B1845(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x39F91E7F4F162E9C(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x1844BFD606087D68(iVar13, iVar14, iVar15, iVar0);
	unk_0x4C5BE63E1D2CAFE8(fVar9, fVar10);
	unk_0x4CB6ED62C0EA5841(0);
	unk_0x4170B650590B3B00(1f, 0.4f);
	fVar1 = (fVar1 - func_35(6f));
	fVar1 = (fVar1 + (func_35(30f) - func_35((2f * 2f))));
	fVar11 = (fVar2 - func_35((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_35(25f))), 0f, 1f);
		func_32();
		unk_0x405224591DF02025(0.5f, (fVar1 - (func_35((2f - 0.5f)) - 0.001388889f)), fVar6, func_27(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
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
			unk_0x405224591DF02025(0.5f, (fVar1 + func_35((2f * 0.5f))), fVar6, func_27(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_35(25f))), 0f, 1f);
			unk_0x1844BFD606087D68(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xDB917DA5C6835FCC() == 0)
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
			unk_0x4C5BE63E1D2CAFE8(fVar20, fVar21);
			unk_0x4CB6ED62C0EA5841(1);
			unk_0x4170B650590B3B00(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_35((2f * 2f))), 0, 0, 0);
			unk_0x4C5BE63E1D2CAFE8(fVar20, fVar21);
			unk_0x4CB6ED62C0EA5841(2);
			unk_0x4170B650590B3B00(1f, 0.4f);
			unk_0xBE5261939FBECB8C(0);
			func_32();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x4C5BE63E1D2CAFE8(fVar20, fVar22);
			unk_0x1844BFD606087D68(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x44507FCF2678B557("PERCENTAGE");
					unk_0xF00CED653959DE03(uParam0->f_554);
					unk_0xC915BBFBCA1E5AB8(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x44507FCF2678B557("FO_TWO_NUM");
					unk_0xF00CED653959DE03(uParam0->f_554);
					unk_0xF00CED653959DE03(uParam0->f_555);
					unk_0xC915BBFBCA1E5AB8(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x44507FCF2678B557("MTPHPER_XPNO");
					unk_0xF00CED653959DE03(uParam0->f_554);
					unk_0xC915BBFBCA1E5AB8(fVar20, (fVar1 + func_35((2f * 2f))), 0);
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
						unk_0x39F91E7F4F162E9C(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x39F91E7F4F162E9C(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x39F91E7F4F162E9C(108, &iVar35, &iVar36, &iVar37, &iVar38);
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
				unk_0xC9884ECADE94CB34(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
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
	unk_0xBE5261939FBECB8C(iParam3);
	unk_0x031ABF27ACAA1595(iParam5);
	func_32();
	if (bParam4)
	{
		unk_0x44507FCF2678B557("STRING");
		unk_0x54534D588C114163(sParam0);
	}
	else
	{
		unk_0x44507FCF2678B557(sParam0);
	}
	unk_0xC915BBFBCA1E5AB8(fParam1, fParam2, 0);
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
	if (unk_0xFD340785ADF8CFB7(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xEB7445AF48518614(&iVar2, &iVar3);
			fVar5 = unk_0x1C672C3C3855417F(0);
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
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x66773C92835D0909(&iVar2, &iVar3);
		}
		Var7 = { unk_0x5E92638EA77DEC4B(uVar0, sVar1) };
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
			if (!unk_0x7A821A102AEDC6EC() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
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
	
	unk_0xEB7445AF48518614(&iVar0, &iVar1);
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
	
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_22(&(Global_17236.f_6048[iParam0 /*16*/]));
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
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
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
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_22(&(Global_17236.f_5263[iParam0 /*16*/]));
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
	
	unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iParam5);
	unk_0x4C5BE63E1D2CAFE8(fParam3, fParam4);
	unk_0x4CB6ED62C0EA5841(1);
	unk_0x4170B650590B3B00(1f, func_26(14f));
	unk_0xBE5261939FBECB8C(0);
	unk_0x031ABF27ACAA1595(0);
	func_32();
	if (uParam0->f_531[iParam1])
	{
		unk_0x44507FCF2678B557("STRING");
		unk_0x54534D588C114163(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x44507FCF2678B557(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xF00CED653959DE03(uParam0->f_489[iParam1]);
		}
	}
	unk_0xC915BBFBCA1E5AB8(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xC9884ECADE94CB34("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xC9884ECADE94CB34("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xC9884ECADE94CB34("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x4CB6ED62C0EA5841(1);
	}
	else
	{
		unk_0x4CB6ED62C0EA5841(2);
	}
	unk_0x4170B650590B3B00(1f, func_26(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x4C5BE63E1D2CAFE8(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x4C5BE63E1D2CAFE8(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iParam5);
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
	unk_0xBE5261939FBECB8C(0);
	unk_0x031ABF27ACAA1595(0);
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
			unk_0x4170B650590B3B00(1f, func_26(18f));
			unk_0x031ABF27ACAA1595(4);
			if (iParam0 < 0)
			{
				unk_0xAA01A6DC6F359160("ESMINDOLLA");
				unk_0x0C9962254FD482AC((-1 * iParam0), 1);
				fVar1 = unk_0x6ECFBEBF963B31D0(0);
			}
			else
			{
				unk_0xAA01A6DC6F359160("ESDOLLA");
				unk_0x0C9962254FD482AC(iParam0, 1);
				fVar1 = unk_0x6ECFBEBF963B31D0(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xC9884ECADE94CB34("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xC9884ECADE94CB34("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xC9884ECADE94CB34("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x4170B650590B3B00(1f, func_26(14f));
			break;
	}
	unk_0xB07108C8201910EA(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x44507FCF2678B557("PERCENTAGE");
			unk_0xF00CED653959DE03(iParam0);
			break;
		
		case 1:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("FO_NUM");
			unk_0xF00CED653959DE03(iParam0);
			break;
		
		case 2:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("FO_TWO_NUM");
			unk_0xF00CED653959DE03(iParam0);
			unk_0xF00CED653959DE03(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x4170B650590B3B00(1f, func_26(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x44507FCF2678B557("ESMINDOLLA");
				unk_0x0C9962254FD482AC((-1 * iParam0), 1);
			}
			else
			{
				unk_0x44507FCF2678B557("ESDOLLA");
				unk_0x0C9962254FD482AC(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x44507FCF2678B557(sParam4);
			break;
		
		case 7:
			unk_0x44507FCF2678B557("STRING");
			unk_0x54534D588C114163(sParam4);
			break;
		
		case 8:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("STRING");
			unk_0x3451E7FFDF0EF375(iParam0, 14);
			break;
		
		case 9:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("STRING");
			unk_0x3451E7FFDF0EF375(iParam0, 6);
			break;
		
		case 10:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("STRING");
			unk_0x3451E7FFDF0EF375(iParam0, 2055);
			break;
		
		case 18:
			unk_0x031ABF27ACAA1595(5);
			unk_0x44507FCF2678B557("STRING");
			unk_0x3451E7FFDF0EF375(iParam0, 2055);
			break;
		
		case 12:
			unk_0x44507FCF2678B557("AHD_DIST");
			unk_0xF00CED653959DE03(iParam0);
			break;
		
		case 13:
			unk_0x44507FCF2678B557(sParam4);
			unk_0xF00CED653959DE03(iParam0);
			unk_0xF00CED653959DE03(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x44507FCF2678B557(sParam4);
			unk_0xF00CED653959DE03(iParam0);
			unk_0xF00CED653959DE03(iParam1);
			break;
		
		case 16:
			unk_0x44507FCF2678B557(sParam4);
			unk_0xF00CED653959DE03(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xC915BBFBCA1E5AB8((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x4170B650590B3B00(1f, func_26(14f));
		}
		else
		{
			unk_0xC915BBFBCA1E5AB8(fParam2, fParam3, 0);
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

void func_28(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
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
		Global_1328872.f_1 = 1;
		func_29(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_29(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_30(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1328872.f_3613[iParam0], iParam1);
}

float func_31(char* sParam0)
{
	unk_0xAA01A6DC6F359160(sParam0);
	return (unk_0x6ECFBEBF963B31D0(1) / 2f);
}

void func_32()
{
	unk_0xCFCC78391C8B3814(1);
	if (unk_0x02F39BEFE7B88D00() || unk_0xF5472C80DF2FF847())
	{
		unk_0xCFCC78391C8B3814(7);
	}
	unk_0x906B86E6D7896B9E(0);
}

float func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xB0FB6CFAA5A1C833())
	{
	}
	return fVar0;
}

void func_34(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

float func_35(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_36()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_37(0))
		{
			func_405(0);
		}
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
	}
}

int func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
	
	if (unk_0x3653C46DD33107D5(2))
	{
		unk_0x562F5D788AF3FA80(2, 199, 1);
	}
	if (unk_0x3758E345C82DAFF2())
	{
		if (!iLocal_309)
		{
			if (func_198(uParam1, 0, &iLocal_310))
			{
				func_310(&(uParam1->f_666), 9, 0);
				iLocal_309 = 1;
			}
		}
	}
	if (iLocal_291)
	{
		if (unk_0x3653C46DD33107D5(2))
		{
			unk_0xF12E4CCAF249DC10();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x3758E345C82DAFF2())
			{
				uParam1->f_646 = func_189(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_310(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_111(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_107(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xCCBB0BB9790E1F47(2, 202))
				{
					uParam1->f_680 = 0;
					func_310(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xCCBB0BB9790E1F47(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xCCBB0BB9790E1F47(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_106(&(uParam1->f_72)))
			{
				if (!bLocal_311)
				{
					bLocal_311 = true;
					func_105(&(uParam1->f_509), 0, 0, 1, 1);
					func_104(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_104(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_104(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_104(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_101(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_94(uParam1, 0, 0, iLocal_309);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0x0ACACDD53B4C4879(uLocal_318) && unk_0x5D6C0F302EC49A67(uLocal_318) >= 0.995f) || !unk_0x0ACACDD53B4C4879(uLocal_318))
		{
			bLocal_304 = true;
			if (unk_0x153AD457764FD704(uLocal_324))
			{
				unk_0x4E67E0B6D7FD5145(uLocal_324, 0);
				if (!unk_0x6CFF81397164A1D3(uLocal_286[0]) && !unk_0x6CFF81397164A1D3(uLocal_286[1]))
				{
					unk_0xFA8B88A1EF049B33(uLocal_286[0]);
					unk_0xFA8B88A1EF049B33(uLocal_286[1]);
					unk_0x76BA60E29B3C3B96(uLocal_286[0], 0, 0);
					unk_0x76BA60E29B3C3B96(uLocal_286[1], 0, 0);
				}
			}
			func_93();
		}
		if (func_401(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_302)
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
					func_218(&uLocal_286, iVar2);
				}
				else
				{
					func_217(&uLocal_286);
				}
				iLocal_302 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x0BFC2C61FB5B6CA1(1);
			unk_0xC27FB879C2B9A2EB(func_392(3));
			if (!unk_0x6CFF81397164A1D3(uLocal_286[0]) && !unk_0x6CFF81397164A1D3(uLocal_286[1]))
			{
				unk_0x939C1E5F1840360D(uLocal_286[0]);
				unk_0x939C1E5F1840360D(uLocal_286[1]);
			}
			func_92(uParam3);
			if (bParam4)
			{
				func_322(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_29 = 1;
			func_399(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_302 = 0;
			iLocal_300 = 0;
			bLocal_304 = false;
			func_89();
			iLocal_309 = 0;
			iLocal_280 = 0;
			uParam1->f_680 = 0;
			iLocal_310 = 0;
			bLocal_311 = false;
			func_81(&(uParam1->f_72));
			func_435();
		}
		else if (iVar0 == 2)
		{
			func_80(uParam3);
			unk_0xC27FB879C2B9A2EB(func_392(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_50(func_75(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x00686F7B3723B82F();
			*uParam0 = 13;
		}
		else if (((unk_0xCCBB0BB9790E1F47(0, 234) || unk_0xCCBB0BB9790E1F47(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_290)
			{
				Var3 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var3, 0, iLocal_290);
				iLocal_290 = 0;
			}
			else if (unk_0xCCBB0BB9790E1F47(2, 190))
			{
				iLocal_313++;
				if (iLocal_313 >= uParam0->f_436)
				{
					iLocal_313 = 0;
				}
				Var3 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var3);
			}
			else if (unk_0xCCBB0BB9790E1F47(2, 189))
			{
				iLocal_313 = (iLocal_313 - 1);
				if (iLocal_313 < 0)
				{
					iLocal_313 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var3);
			}
		}
		else if (((unk_0xCCBB0BB9790E1F47(0, 211) || unk_0xA799AFD74BAFEA0F(0, 211)) && bVar1) && (iLocal_309 || !unk_0x3758E345C82DAFF2()))
		{
			uParam1->f_680 = 1;
			func_105(&(uParam1->f_509), 0, 0, 1, 1);
			func_104(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_104(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_104(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_311)
			{
				func_104(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_101(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x0BFC2C61FB5B6CA1(1);
		unk_0x00686F7B3723B82F();
		func_43(uParam3, uParam0->f_454, uParam0->f_429[iLocal_29], uParam0->f_432[iLocal_29], iLocal_150[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0x1C672C3C3855417F(1);
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
		iVar13 = func_219();
		uLocal_318 = unk_0x4D3B117F889EADDA(Var7, Var10, 2);
		uLocal_324 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0x6E3975B3F6954199(uLocal_324, uLocal_318, sLocal_398[iVar13], "mini@dartsoutro");
		unk_0x87295BCA613800C8(uLocal_324, 1);
		unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
		if (!unk_0x6CFF81397164A1D3(uLocal_286[0]) && !unk_0x6CFF81397164A1D3(uLocal_286[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_390[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_394[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x8DBC05C86F873CC9(unk_0x096275889B8E0EE0(), sLocal_385, sLocal_386[unk_0x9C1C462D7B1DD1F9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3605588B4955CFAF(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_390[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x3605588B4955CFAF(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_394[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x8DBC05C86F873CC9(uLocal_286[1], sLocal_384, sLocal_386[unk_0x9C1C462D7B1DD1F9(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_304 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x4F67E8ECA7D3F667();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_223(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_222(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((unk_0x4F67E8ECA7D3F667() - uParam1->f_671) > 400 && func_39(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xB906B139171B1845(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_291 = 1;
	}
}

int func_39(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_42(uParam0);
	func_41(uParam0);
	if (unk_0xD3852F22AB713A1F(&(uParam0->f_550), "SPR_RESULT") || (unk_0xD3852F22AB713A1F(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xC1BA29DF5631B0F8("CommonMenu", 0);
		unk_0xC1BA29DF5631B0F8("MPLeaderboard", 0);
		unk_0xC1BA29DF5631B0F8("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x3B632900049DBB88("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x64BAE9BE701E6C19(uParam0->f_1) || !unk_0x54D6900929CCF162("CommonMenu")) || !unk_0x54D6900929CCF162("MPLeaderboard")) || !unk_0x54D6900929CCF162("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x64BAE9BE701E6C19(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x64BAE9BE701E6C19(uParam0->f_1) || !unk_0x54D6900929CCF162("CommonMenu")) || !unk_0x54D6900929CCF162("MPLeaderboard")) || !unk_0x54D6900929CCF162("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x64BAE9BE701E6C19(uParam0->f_4))
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
	Global_68506 = 1;
	return 1;
}

void func_40(var uParam0)
{
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "CLEAR_ALL");
	unk_0xD4D85E4148B638AD();
	if (unk_0xB0FB6CFAA5A1C833())
	{
		unk_0xF6EA2AC68E7C7293(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x58279158C52AF361(true);
		unk_0xD4D85E4148B638AD();
	}
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xA734310215BCF528(2);
	func_13(unk_0xF800E35ED8511D66(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xD4D85E4148B638AD();
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xA734310215BCF528(1);
	func_13(unk_0xF800E35ED8511D66(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xD4D85E4148B638AD();
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xA734310215BCF528(0);
	func_13(unk_0xF800E35ED8511D66(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xD4D85E4148B638AD();
	unk_0xF6EA2AC68E7C7293(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xD4D85E4148B638AD();
}

void func_41(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x4CB6ED62C0EA5841(0);
	unk_0x4170B650590B3B00(1f, func_26(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xAA01A6DC6F359160("STRING");
			unk_0x54534D588C114163(&(uParam0->f_13));
			fVar0 = unk_0x6ECFBEBF963B31D0(1);
		}
		else
		{
			unk_0xAA01A6DC6F359160(&(uParam0->f_13));
			fVar0 = unk_0x6ECFBEBF963B31D0(1);
		}
	}
	else
	{
		unk_0xAA01A6DC6F359160("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xF00CED653959DE03(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x734AB59A7DBD1DAA(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x54534D588C114163(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x6ECFBEBF963B31D0(1);
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
	if (bLocal_132)
	{
		unk_0xF9EE7D419EE49DE6(uLocal_130, Var0);
		unk_0x8B15AE2987C1AC8F(uLocal_130, uLocal_129, 500, 1, 1);
		bLocal_132 = false;
	}
	else
	{
		unk_0xF9EE7D419EE49DE6(uLocal_129, Var0);
		unk_0x8B15AE2987C1AC8F(uLocal_129, uLocal_130, 500, 1, 1);
		bLocal_132 = true;
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
		unk_0xF9EE7D419EE49DE6(uLocal_129, Var0);
		unk_0x8B15AE2987C1AC8F(uLocal_129, uLocal_128, 1500, 1, 1);
		unk_0x87295BCA613800C8(uLocal_128, 0);
		unk_0xF9EE7D419EE49DE6(uLocal_130, Var0);
		bLocal_132 = true;
	}
	else if (bParam4)
	{
		unk_0xF9EE7D419EE49DE6(uLocal_129, Var0);
		unk_0x8B15AE2987C1AC8F(uLocal_129, uLocal_121, 2000, 1, 1);
		bLocal_132 = true;
	}
	else
	{
		if (bLocal_132)
		{
			unk_0x8B15AE2987C1AC8F(uLocal_128, uLocal_129, 1500, 1, 1);
		}
		else
		{
			unk_0x8B15AE2987C1AC8F(uLocal_128, uLocal_130, 1500, 1, 1);
		}
		unk_0x87295BCA613800C8(uLocal_129, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_51(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x380F22FED8D528A4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xA4DDF5DF95E65EED(iVar1, iVar0, 1);
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
	
	func_74();
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
					func_73(99, 1);
					func_72(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_59(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
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
							func_72(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_72(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_72(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBC2C927F5C264960())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_72(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_73(95, iParam3);
					break;
				
				case 1:
					func_73(97, iParam3);
					break;
				
				case 2:
					func_73(96, iParam3);
					break;
			}
			func_73(98, iParam3);
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
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_72(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_53(iParam0);
	if (Global_34913 == 15)
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
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_54(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_56() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_56() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_55(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_73(93, iParam0);
	func_73(29, iParam0);
	func_73(30, iParam0);
}

bool func_58(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_56() /*8053*/].f_5756.f_10, iParam0);
}

int func_59(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
		func_71(27, iVar1);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_70(&Global_2544859))
	{
		if (func_68(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
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
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_65(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_66(&(uParam0->f_62), (8f - 0.5f));
}

void func_66(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_68(var uParam0, int iParam1)
{
	return func_69(uParam0, iParam1) != -1;
}

int func_69(var uParam0, int iParam1)
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

bool func_70(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_71(int iParam0, int iParam1)
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_74()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_75()
{
	func_76();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_76()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_79(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_477(unk_0x096275889B8E0EE0());
			if (func_78(iVar0) && (!func_77(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_78(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_77(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_78(int iParam0)
{
	return iParam0 < 3;
}

int func_79(int iParam0)
{
	if (func_78(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_81(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_87(uParam0);
		func_86(uParam0);
		func_85(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_83();
	}
	if (unk_0x2E882EA08284F674("LEADERBOARD_SCENE"))
	{
		unk_0xC27FB879C2B9A2EB("LEADERBOARD_SCENE");
	}
	if (unk_0x4C82BD446C34CACD())
	{
		func_82(&(Global_1840922.f_49));
	}
	Global_2446554.f_3801 = 0;
}

void func_82(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_83()
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
	func_84(&(Global_1835390.f_2780));
	func_82(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_82(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_82(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_84(var uParam0)
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

void func_85(var uParam0)
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
	func_82(&(Global_1835390.f_2830));
}

void func_86(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_82(&(uParam0->f_246.f_3));
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

void func_87(var uParam0)
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

void func_88(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_82(&(Global_1835008.f_1));
	unk_0x0001D353D9327B10(*uParam2, uParam2->f_1, -1);
}

void func_89()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_91(&(Global_1835013.f_73));
	func_91(&(Global_1835013.f_142));
	func_91(&(Global_1835013.f_211));
	func_91(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_90(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_90(var uParam0)
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

void func_91(var uParam0)
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

void func_92(var uParam0)
{
	func_42(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_93()
{
	unk_0x87295BCA613800C8(uLocal_125, 1);
}

int func_94(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_34(1);
			func_105(&(uParam0->f_509), 0, 0, 1, 1);
			func_104(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_104(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_104(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x3758E345C82DAFF2())
			{
				func_104(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_101(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_97(func_100(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_99(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
					func_97(func_100(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_99(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				else
				{
					func_97(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				func_388(&(uParam0->f_57), 0, 0);
			}
			func_107(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x535384D6067BA42E())
		{
			if ((unk_0x4F67E8ECA7D3F667() - uParam0->f_671) > 900)
			{
				if (unk_0x2503EB2EA811EC9A(2, 216))
				{
					unk_0xB906B139171B1845(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_310(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xCCBB0BB9790E1F47(2, 215))
				{
					unk_0xB906B139171B1845(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_96();
					func_95();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x3249D2128D293FA5(2, 201))
		{
			return 2;
		}
		else if (unk_0x3249D2128D293FA5(2, 202))
		{
			func_310(&(uParam0->f_666), 9, 0);
			func_310(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_95()
{
	if (Global_2422140.f_2123[0 /*50*/].f_2 != 0)
	{
		Global_2422140.f_2123[0 /*50*/].f_2 = 5;
	}
}

void func_96()
{
	Global_24588 = 1;
}

void func_97(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	if (func_98(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
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
		Global_1328872.f_1 = 1;
		func_29(3, iVar0);
		Global_1328872.f_1840[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_1840.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_1840.f_147[iVar0] = iParam3;
		Global_1328872.f_1840.f_138[iVar0] = iParam2;
		Global_1328872.f_1840.f_165[iVar0] = iParam4;
		Global_1328872.f_1840.f_174[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_1840.f_209[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_1840.f_338[iVar0] = iParam7;
		Global_1328872.f_1840.f_365[iVar0] = iParam8;
		Global_1328872.f_1840.f_347[iVar0] = iParam9;
		Global_1328872.f_1840.f_356[iVar0] = iParam10;
	}
}

int func_98(var uParam0)
{
	if (unk_0x602102324604D96B(uParam0))
	{
		return 1;
	}
	else if (unk_0xD3852F22AB713A1F(uParam0, "") || unk_0xD3852F22AB713A1F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_99(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_100(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(&(uParam0->f_1), 1024);
	}
	else
	{
		func_102(&(uParam0->f_1), 1024);
	}
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_104(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xF73FBE4845C43B5B(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x3B632900049DBB88("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_103(&(uParam0->f_1), 32);
	}
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		func_103(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x9F96EAB06403CD66(*uParam0, 1);
		}
	}
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (bParam3)
		{
			func_103(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_103(&(uParam0->f_1), 8192);
	}
}

int func_106(var uParam0)
{
	if ((unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_107(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0x02F39BEFE7B88D00() || unk_0x0CECCC63FFA2EF24()) || unk_0xF5472C80DF2FF847()) || unk_0x1C9921B2ED74B50E())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_110(uParam0))
	{
		return;
	}
	unk_0xEA600AABAF4B9084();
	unk_0xCFCC78391C8B3814(iParam2);
	if (!func_109(uParam0->f_1, 256) || (func_109(uParam0->f_1, 8192) && unk_0x29D1C165BCB09391(2)))
	{
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_CLEAR_SPACE");
		unk_0xBC38230AD29DBDD4(fParam1);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_MAX_WIDTH");
		unk_0xBC38230AD29DBDD4(fParam5);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD4D85E4148B638AD();
		if (unk_0xB0FB6CFAA5A1C833())
		{
			unk_0xF6EA2AC68E7C7293(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x58279158C52AF361(func_109(uParam0->f_1, 4096));
			unk_0xD4D85E4148B638AD();
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
					bVar4 = unk_0x3653C46DD33107D5(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3653C46DD33107D5(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xA734310215BCF528(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xF800E35ED8511D66(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xDE6887C7BB8A503D(iVar0, iVar1, bVar2);
						}
						if (!unk_0x2CF12F9ACF18F048(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x2CF12F9ACF18F048(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (func_109(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x58279158C52AF361(true);
								unk_0xA734310215BCF528(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x58279158C52AF361(false);
								unk_0xA734310215BCF528(-1);
							}
						}
					}
					unk_0xD4D85E4148B638AD();
				}
			}
			iVar6++;
		}
		fVar8 = func_108(bParam4, func_108(func_109(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF6EA2AC68E7C7293(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xBC38230AD29DBDD4(fVar8);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(80f);
		unk_0xD4D85E4148B638AD();
		func_103(&(uParam0->f_1), 256);
		func_102(&(uParam0->f_1), 128);
	}
	unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 0, 0);
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_110(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			func_103(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_111(var uParam0, var uParam1)
{
	func_112(uParam1, uParam0);
}

void func_112(var uParam0, var uParam1)
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
	
	func_188(&(Global_1840922.f_49), 1, 0);
	unk_0x648AF6B96FE944A5();
	func_187();
	func_36();
	unk_0x36CDD81627A6FCD2();
	func_185();
	unk_0xB5F6539FA93ECBF6(10);
	func_184(1);
	func_183(1);
	if (!func_180())
	{
		if (!unk_0x2E882EA08284F674("LEADERBOARD_SCENE"))
		{
			unk_0x5F70787AC4BF7928("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 3))
	{
		*uParam0 = func_179();
		unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 3);
	}
	Var32 = { func_178(unk_0x217E9DC48139933D()) };
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		if (((!unk_0xBEA038AAF3BCAE99() || !unk_0x3758E345C82DAFF2()) || (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x3758E345C82DAFF2())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xBEA038AAF3BCAE99())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 1))
			{
				unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xD4D85E4148B638AD();
				func_177(*uParam0, Global_1835390.f_2780);
				if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_176(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_174(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 4);
				func_173(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 5);
				func_173(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 6);
				func_173(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 1);
				func_172(*uParam0);
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
				unk_0x0BFC2C61FB5B6CA1(1);
			}
			else
			{
				func_172(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_137(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
				if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 0))
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD4D85E4148B638AD();
					func_177(*uParam0, Global_1835390.f_2780);
					if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_176(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_174(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 0);
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
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
							unk_0xF73FBE4845C43B5B(&iVar31, 4);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 5);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 6);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 7);
						func_136(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_82(&(Global_1835390.f_2823));
				}
				else if (func_134(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 4);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 5);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 6);
							func_173(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 7);
						func_136(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_82(&(Global_1835390.f_2823));
				}
				func_172(*uParam0);
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 0);
				if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD4D85E4148B638AD();
					func_177(*uParam0, Global_1835390.f_2780);
					if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_176(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_175(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_174(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 6))
					{
						func_85(&Global_1839721);
						func_130(uParam1, &Global_1839721);
						func_129(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_176(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xF73FBE4845C43B5B(&iVar31, 4);
									func_173(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xF73FBE4845C43B5B(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_176(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_173(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_173(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xF73FBE4845C43B5B(&iVar31, 6);
									if (!unk_0x5DF40D01D57B2F76())
									{
										bVar63 = true;
									}
									else if (!unk_0x017A61170DF48BD0())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_176(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_173(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_173(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_128(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_176(uParam1->f_44))
								{
									unk_0x4256B393F5391D41(unk_0x217E9DC48139933D(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xD3852F22AB713A1F(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_127(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xF73FBE4845C43B5B(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xF73FBE4845C43B5B(&iVar31, 3);
											}
										}
									}
									if (func_176(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0x2CF12F9ACF18F048(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xD3852F22AB713A1F(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_126(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_126(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_121(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_121(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_118(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_118(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_117();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xF73FBE4845C43B5B(&iVar31, 2);
											unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_116(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6 = (iVar6 + 1);
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
						unk_0xF73FBE4845C43B5B(&iVar31, 4);
						func_173(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 5);
						func_173(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 6);
						func_173(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 1);
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
					func_172(*uParam0);
					unk_0x0BFC2C61FB5B6CA1(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_116(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_172(*uParam0);
					func_113(uParam0, uParam1);
				}
			}
		}
	}
}

void func_113(var uParam0, var uParam1)
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
	if (unk_0x3653C46DD33107D5(2))
	{
		unk_0xF12E4CCAF249DC10();
		unk_0xDA067FC477B3E571(2, 239);
		unk_0xDA067FC477B3E571(2, 240);
		unk_0xDA067FC477B3E571(2, 237);
		unk_0xDA067FC477B3E571(2, 238);
		unk_0x562F5D788AF3FA80(2, 200, 1);
		if (unk_0x3BFD60A58E503C0D(2, 241))
		{
			unk_0x44761B19F15938AE(2, 188, 1f);
		}
		if (unk_0x3BFD60A58E503C0D(2, 242))
		{
			unk_0x44761B19F15938AE(2, 187, 1f);
		}
		if (unk_0x346169486AF7B934(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x44761B19F15938AE(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x3653C46DD33107D5(2))
	{
		func_115(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 0))
		{
			if ((unk_0x2503EB2EA811EC9A(2, 188) || unk_0x3BFD60A58E503C0D(2, 188)) || iVar6 < -100)
			{
				unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 0);
				func_82(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_114(uParam1, 188))
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 0);
		}
		if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 1))
		{
			if ((unk_0x2503EB2EA811EC9A(2, 187) || unk_0x3BFD60A58E503C0D(2, 187)) || iVar6 > 100)
			{
				unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 1);
				func_82(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_114(uParam1, 187))
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 1);
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
	if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 3))
	{
		if ((unk_0x2503EB2EA811EC9A(2, 204) || unk_0xA799AFD74BAFEA0F(2, 204)) || unk_0xCCBB0BB9790E1F47(2, 237))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 3);
			func_82(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_114(uParam1, 204))
	{
		unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_116(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_116(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
		}
		if (func_128(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 2))
			{
				if (unk_0x2503EB2EA811EC9A(2, 217) || unk_0xA799AFD74BAFEA0F(2, 217))
				{
					if (!unk_0x908258B6209E71F7())
					{
						unk_0xB906B139171B1845(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 2);
						unk_0xCA483D01D0982840(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x2503EB2EA811EC9A(2, 217))
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_114(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_115(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x2503EB2EA811EC9A(2, iParam1) && !unk_0x3BFD60A58E503C0D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_134(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x2503EB2EA811EC9A(2, iParam1) && !unk_0x3BFD60A58E503C0D(2, iParam1)) || func_134(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_115(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 221) * 127f));
		}
	}
}

void func_116(var uParam0, int iParam1, int iParam2)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT_STATE");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0xD4D85E4148B638AD();
}

void func_117()
{
	unk_0xD4D85E4148B638AD();
}

void func_118(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xAC5C76ECFC58A8FE(fParam44, 2);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(unk_0xF34EE736CF047844(fParam44));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
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
				if (!unk_0x4FB556ACEFA93098())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_120(fParam44);
					}
					else
					{
						fParam44 = func_119(fParam44);
					}
				}
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xAC5C76ECFC58A8FE(fParam44, 2);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_119(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_120(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_121(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(-iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
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
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 6);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x164FB269C22AF51C("SC_LB_EMPTY");
					unk_0x5BB4D22B8B03A30B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 6);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xD6F3B6D7716CFF8E(iParam44))
				{
					unk_0x164FB269C22AF51C("SCLB_VEH_CUST");
					unk_0x734AB59A7DBD1DAA(unk_0x09885EF61FB22153(iParam44));
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("SC_LB_EMPTY");
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else if (unk_0xD6F3B6D7716CFF8E(iParam44))
			{
				unk_0x164FB269C22AF51C(unk_0x09885EF61FB22153(iParam44));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 8:
			if (func_125(iParam44) != 0)
			{
				unk_0x164FB269C22AF51C(func_122(func_125(iParam44), 0));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
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
				if (!unk_0x4FB556ACEFA93098())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_120(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_119(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_122(int iParam0, bool bParam1)
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
		
		default:
			if (func_124(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_123(&(Var0.f_31));
				}
				else
				{
					return func_123(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_123(var uParam0)
{
	return uParam0;
}

int func_124(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x528FD069988D41D8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x095531E1E3D0077D(iVar0, uParam1))
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

int func_125(int iParam0)
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

void func_126(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	if (iParam3 > 0)
	{
		unk_0x164FB269C22AF51C("NUMBER");
		unk_0xF00CED653959DE03(iParam3);
		unk_0x5BB4D22B8B03A30B();
	}
	else
	{
		unk_0x164FB269C22AF51C("SC_LB_EMPTY");
		unk_0x5BB4D22B8B03A30B();
	}
	unk_0x3FB5104DF4233F1D(cParam4);
	unk_0x3FB5104DF4233F1D(uParam5);
}

int func_127(var uParam0, var uParam1)
{
	if (!func_128(*uParam0))
	{
		return 0;
	}
	if (!func_128(*uParam1))
	{
		return 0;
	}
	if (unk_0xCC1AA29BCB551C9B(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3D9CFA868F638A8E(&uParam0, 13);
}

void func_129(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5) && !unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
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

void func_130(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5) && !unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_133(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_133(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_133(uParam1, iVar3, &uVar2, 2))
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
		func_131(uParam1);
	}
}

void func_131(var uParam0)
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
	Var3 = { func_178(unk_0x217E9DC48139933D()) };
	if (unk_0x18D832AFF28DF8C9(Global_1835390.f_2826))
	{
		iVar16 = unk_0x83821513A0AE1008(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_132(&Global_1839591);
				iVar2 = 0;
				unk_0x7F9E22C523BDD275(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_127(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_63, iVar1))
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

void func_132(var uParam0)
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

int func_133(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x7124FD9AC0E01BA0(unk_0x217E9DC48139933D()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_178(unk_0x217E9DC48139933D()) };
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

int func_134(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_135(uParam0, bParam2, 0);
	if (unk_0x03A753E2C8458335() && !bParam2)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
		}
		uParam0->f_1 = 1;
	}
}

void func_136(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xF73FBE4845C43B5B(&iParam2, 7);
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0x164FB269C22AF51C(sParam3);
	unk_0x905C5F5659CECDB5();
	unk_0xD4D85E4148B638AD();
}

int func_137(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_171(&(Global_1835390.f_2827)))
		{
			func_135(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_134(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xBEA038AAF3BCAE99() || !unk_0x3758E345C82DAFF2()) || (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())) || Global_1835390.f_2832 != 0)
	{
		unk_0x7D1D4A3602B6AD4E(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 4))
	{
		func_170(uParam0);
		unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_168(uParam0))
	{
		return 0;
	}
	if (!func_166(uParam0))
	{
		return 0;
	}
	if (!func_153(uParam0))
	{
		return 0;
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
	{
		func_85(&Global_1839721);
		func_130(uParam0, &Global_1839721);
		func_129(uParam0, &Global_1839721);
		unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 6);
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 7))
	{
		if (!func_171(&(Global_1835390.f_2830)))
		{
			func_135(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_134(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 7);
		}
		if (func_150(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_147(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_142(&Global_1839721))
		{
			func_138(&Global_1839721);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 7);
			func_138(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_141(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_140(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_132(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xD3852F22AB713A1F(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_128((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xF73FBE4845C43B5B(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(Global_1839591.f_61), 0);
			}
			unk_0xF73FBE4845C43B5B(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_63, iVar1))
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
			unk_0xD9289E134A65E11D(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_139(unk_0x217E9DC48139933D()) };
}

Vector3 func_139(int iParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x18D832AFF28DF8C9(Global_1838575.f_81[iParam1]))
		{
			unk_0xA01F3D5F44FF77A8(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x18D832AFF28DF8C9(iParam0))
		{
			unk_0xA01F3D5F44FF77A8(iParam0);
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

int func_141(int iParam0)
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
		else if (unk_0x18D832AFF28DF8C9(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x6C2B92A2AE2AA20D(Global_1838575.f_81[iVar0]);
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

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_146(uParam0);
			if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_128((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_145(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_143(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_128((uParam0[iVar0 /*100*/])->f_32) && func_128(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0xCC1AA29BCB551C9B(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_143(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0xBA5EE09B4A4C59D4())
			{
			}
			else
			{
				unk_0x557916D3536FC16D();
				unk_0xC0FDA35F83EDE155(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xBA5EE09B4A4C59D4())
			{
				if (unk_0x9FFD2D28703D02B0())
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
				if (unk_0x9382268CA5D2104C(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_144(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0xBA5EE09B4A4C59D4())
			{
				unk_0x440B68AA719F90C4();
			}
			else
			{
				unk_0x557916D3536FC16D();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_144(var uParam0, var uParam1)
{
	unk_0xC8CC4EDA94A8B596(uParam0, 35, uParam1);
}

int func_145(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_128(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xCC1AA29BCB551C9B(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_146(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_90(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0xBA5EE09B4A4C59D4())
		{
			unk_0x557916D3536FC16D();
		}
	}
	if (unk_0xBA5EE09B4A4C59D4())
	{
		unk_0x440B68AA719F90C4();
	}
	Global_1841018.f_206 = 0;
}

int func_147(var uParam0)
{
	int iVar0;
	
	if (unk_0xB0FB6CFAA5A1C833())
	{
		return 1;
	}
	else if (unk_0xD1CCC2A2639D325F())
	{
		if (!func_149(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_148(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_148(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_128(*uParam1))
			{
				if (!unk_0xB7F42FDF8C8B7A13(uParam1))
				{
					if (unk_0xD1CCC2A2639D325F())
					{
						if (unk_0x1E68065D012F08EC(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x50732C31F5D806DF())
					{
						if (unk_0x1E68065D012F08EC(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xB1F54F0911A8C783(uParam1), 64);
						if (unk_0x588D1C657C1F9299())
						{
						}
						else if (unk_0x88CFAE250D3E0C71())
						{
						}
						else if (unk_0xB0FB6CFAA5A1C833())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xB7F42FDF8C8B7A13(uParam1))
			{
				if (!unk_0xA70C221F6CFC3914())
				{
					if (unk_0x95B877F529F26A33())
					{
						StringCopy(sParam2, unk_0xB1F54F0911A8C783(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xD1CCC2A2639D325F())
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
				func_90(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_128((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xCC5ACA5901878878(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x64863AC6A762CE1B((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_128((uParam0[iVar1 /*100*/])->f_32))
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

int func_150(var uParam0)
{
	int iVar0;
	
	if (unk_0xD1CCC2A2639D325F())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_152(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_151(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x2CF12F9ACF18F048(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x0979D34409A38FEB(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_128(Var0))
			{
				if (!unk_0xB7F42FDF8C8B7A13(&Var0))
				{
					if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
					{
						if (unk_0x1E68065D012F08EC(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xB1F54F0911A8C783(&Var0), 64);
						if (unk_0x588D1C657C1F9299())
						{
						}
						else if (unk_0x88CFAE250D3E0C71())
						{
						}
						else if (unk_0xB0FB6CFAA5A1C833())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xB7F42FDF8C8B7A13(&Var0))
			{
				if (!unk_0xA70C221F6CFC3914())
				{
					if (unk_0x95B877F529F26A33())
					{
						StringCopy(sParam17, unk_0xB1F54F0911A8C783(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xD1CCC2A2639D325F())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x2CF12F9ACF18F048(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x0979D34409A38FEB(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_128(Var1[0 /*13*/]))
			{
				if (!unk_0xB7F42FDF8C8B7A13(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xCC5ACA5901878878(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x64863AC6A762CE1B(*uParam4, uParam3, 1);
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

int func_153(var uParam0)
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
	Var116 = { func_178(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x2C079282730811D0())
			{
				if (unk_0x6BB4EDAA3A4778E8(&Var116))
				{
					if (unk_0x534D7C93C5A1A2C4(&(uParam0->f_7), 35, &Var116))
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
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_165(), 0, 0, 0))
			{
				func_163(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_165())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x0778FE700D500355(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_127(&Var0, &Var116) || func_127(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_162(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x0778FE700D500355(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_165() && iVar109 == 0)
								{
									func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_165() && (func_127(&Var0, &Var116) || func_127(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_127(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_160(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_176(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_165())
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
						func_162(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x0778FE700D500355(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_165() && iVar109 == iVar111)
								{
									if (!func_127(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_165() && (func_127(&Var0, &Var116) || func_127(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_128(Var0) && !func_127(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_127(&Var0, &Var116))
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
										if (func_160(uParam0->f_44))
										{
											iVar108 = unk_0x7499B86B7F4CA729(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_176(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_162(&Var0);
							iVar111++;
						}
						unk_0x53C229BFA69F10FB();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_165())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0x53C229BFA69F10FB();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar113);
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
			if (func_155(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_163(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x0778FE700D500355(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_165() && (func_127(&Var0, &Var116) || func_127(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_160(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_176(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar107]);
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
									if (func_160(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_176(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_162(&Var0);
							iVar106++;
						}
					}
					unk_0x53C229BFA69F10FB();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0x53C229BFA69F10FB();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_165())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_154(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_165() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_165())
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

int func_155(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (unk_0x76DA6559D9DF366E(uParam2, iParam3, iParam4))
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
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
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

void func_156(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_188(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_157()
{
	if (unk_0x535384D6067BA42E() && !func_180())
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (unk_0x4B5C6625E6EDAF0C() || Global_1835008)
	{
		func_159();
		return 1;
	}
	return 0;
}

void func_159()
{
	if (func_134(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x0001D353D9327B10(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_82(&(Global_1835008.f_1));
	}
}

int func_160(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_176(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x7124FD9AC0E01BA0(unk_0x217E9DC48139933D()), 64);
		sParam1->f_32 = { func_178(unk_0x217E9DC48139933D()) };
	}
	sParam1->f_59 = iParam2;
	if (func_160(uParam0->f_44))
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
		if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_162(var uParam0)
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

void func_163(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (bParam5)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xA37C444228E03F62(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x8DE46E62AF877CA4(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x8A0F70B3F7D129E4(uParam2, iParam3, uParam4))
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
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
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

int func_165()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0)
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
	Var114 = { func_178(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x26DB5C5F2F4180A0();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_165())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_167(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_163(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
					{
						if (func_165())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x0778FE700D500355(iVar110, &Var0);
									if (func_176(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_127(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_162(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_165() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x0778FE700D500355(0, &Var0);
							if (func_165() && (func_127(&Var0, &Var114) || func_127(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_128(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_127(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_160(uParam0->f_44))
								{
									iVar111 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_176(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_162(&Var0);
								unk_0x53C229BFA69F10FB();
								func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_165())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_162(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_162(&Var0);
							unk_0x53C229BFA69F10FB();
							func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_165())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_165())
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
							unk_0x0778FE700D500355(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_165() && iVar108 == iVar110)
								{
									if (!func_127(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_165() && (func_127(&Var0, &Var114) || func_127(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_128(Var0) && !func_127(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_127(&Var0, &Var114))
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
										if (func_160(uParam0->f_44))
										{
											iVar111 = unk_0x7499B86B7F4CA729(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_176(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_162(&Var0);
							iVar110++;
						}
						unk_0x53C229BFA69F10FB();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_165())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_161(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_154(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_167(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
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
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
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

int func_168(var uParam0)
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
	Var0 = { func_178(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_169(uParam0->f_44))
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
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_165(), 0, 0, 0))
			{
				func_163(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_165())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x0778FE700D500355(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_127(&Var13, &Var0) || func_127(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_162(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x0778FE700D500355(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_165() && iVar122 == 0)
								{
									func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_165() && (func_127(&Var13, &Var0) || func_127(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_127(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_160(uParam0->f_44))
									{
										iVar121 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_176(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_165())
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
						func_162(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x0778FE700D500355(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_165() && iVar122 == iVar124)
								{
									if (!func_127(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_165() && (func_127(&Var13, &Var0) || func_127(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_128(Var13) && !func_127(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_127(&Var13, &Var0))
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
										if (func_160(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_176(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x7499B86B7F4CA729(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x51C63F8BCD21FBC3(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_162(&Var13);
							iVar124++;
						}
						unk_0x53C229BFA69F10FB();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_165())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0x53C229BFA69F10FB();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar126);
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
			if (func_155(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_163(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x0778FE700D500355(iVar119, &Var13);
							if (func_165() && (func_127(&Var13, &Var0) || func_127(&Var13, &(Global_1835013.f_361))))
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
										if (func_160(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_176(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x51C63F8BCD21FBC3(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_160(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_176(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x51C63F8BCD21FBC3(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_162(&Var13);
							iVar119++;
						}
					}
					unk_0x53C229BFA69F10FB();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar126);
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_165())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_161(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_154(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_169(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0xD3852F22AB713A1F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xD3852F22AB713A1F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_170(var uParam0)
{
	int iVar0;
	
	if (unk_0x18D832AFF28DF8C9(Global_1835390.f_2826))
	{
		iVar0 = unk_0x6C2B92A2AE2AA20D(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam0->f_42), 5);
			func_140(Global_1835390.f_2826, -1);
		}
	}
}

bool func_171(var uParam0)
{
	return uParam0->f_1;
}

void func_172(var uParam0)
{
	if (unk_0x64BAE9BE701E6C19(uParam0))
	{
		unk_0x2D8953D6CEBE69D2(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_173(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0x4ED6CFDFE8D4131A(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x4ED6CFDFE8D4131A(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x4ED6CFDFE8D4131A(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x4C82BD446C34CACD() && unk_0x2C079282730811D0())
		{
			if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_178(unk_0x217E9DC48139933D()) };
				if (unk_0x6BB4EDAA3A4778E8(&Var53))
				{
					unk_0x534D7C93C5A1A2C4(&Var1, 35, &Var53);
					if (!unk_0x2CF12F9ACF18F048(&(Var1.f_1)))
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
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(*iParam1);
	unk_0xA734310215BCF528(iParam2);
	if (bVar52)
	{
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x89F89D7ACB05ADC7(&Var36);
		unk_0x5BB4D22B8B03A30B();
	}
	else
	{
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x5BB4D22B8B03A30B();
	}
	unk_0xD4D85E4148B638AD();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xF73FBE4845C43B5B(&iVar66, 7);
		unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
		unk_0xA734310215BCF528(*iParam1);
		unk_0xA734310215BCF528(iVar66);
		if (!unk_0x4C82BD446C34CACD())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xBEA038AAF3BCAE99())
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
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x905C5F5659CECDB5();
		unk_0xD4D85E4148B638AD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x4ED6CFDFE8D4131A(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x4ED6CFDFE8D4131A(iParam2, 5))
		{
			if (unk_0x26DB5C5F2F4180A0() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(iParam2, 6))
		{
			if (unk_0x5DF40D01D57B2F76())
			{
				if (unk_0x017A61170DF48BD0())
				{
					if (unk_0x4C82BD446C34CACD() && unk_0x2C079282730811D0())
					{
						if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_178(unk_0x217E9DC48139933D()) };
							if (unk_0x6BB4EDAA3A4778E8(&Var67))
							{
								unk_0x534D7C93C5A1A2C4(&Var1, 35, &Var67);
								if (!unk_0x2CF12F9ACF18F048(&(Var1.f_1)))
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
		unk_0xF73FBE4845C43B5B(&iVar80, 7);
		unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
		unk_0xA734310215BCF528(*iParam1);
		unk_0xA734310215BCF528(iVar80);
		if (bVar52)
		{
			unk_0x164FB269C22AF51C(sVar0);
			unk_0x89F89D7ACB05ADC7(&Var36);
			unk_0x905C5F5659CECDB5();
		}
		else
		{
			unk_0x164FB269C22AF51C(sVar0);
			unk_0x905C5F5659CECDB5();
		}
		unk_0xD4D85E4148B638AD();
		*iParam1++;
	}
}

void func_174(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_TITLE");
	unk_0x164FB269C22AF51C(sParam1);
	unk_0x5BB4D22B8B03A30B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x164FB269C22AF51C(uParam2[iVar0 /*6*/]);
		unk_0x5BB4D22B8B03A30B();
		iVar0++;
	}
	unk_0xD4D85E4148B638AD();
}

void func_175(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x164FB269C22AF51C(sParam1);
	if (!unk_0x2CF12F9ACF18F048(sParam2))
	{
		unk_0x734AB59A7DBD1DAA(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				unk_0x89F89D7ACB05ADC7(sParam3);
			}
		}
		else if (!unk_0x2CF12F9ACF18F048(sParam3))
		{
			unk_0x734AB59A7DBD1DAA(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				unk_0x89F89D7ACB05ADC7(sParam3);
			}
		}
		else if (!unk_0x2CF12F9ACF18F048(sParam3))
		{
			unk_0x734AB59A7DBD1DAA(sParam3);
		}
		unk_0xF00CED653959DE03(iParam5);
	}
	unk_0x5BB4D22B8B03A30B();
	unk_0xD4D85E4148B638AD();
}

int func_176(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_177(var uParam0, int iParam1)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_DISPLAY_TYPE");
	unk_0xA734310215BCF528(iParam1);
	unk_0xD4D85E4148B638AD();
}

struct<13> func_178(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA7E9F04BBC5AF355(iParam0, &Var0, 13);
	return Var0;
}

var func_179()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

bool func_180()
{
	return func_181(unk_0x217E9DC48139933D());
}

int func_181(int iParam0)
{
	switch (func_182(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 37:
		case 32:
		case 35:
		case 38:
			return 0;
		
		default:
	}
	return 1;
}

int func_182(int iParam0)
{
	return Global_1582596[iParam0 /*324*/].f_165;
}

void func_183(int iParam0)
{
	Global_1318744 = iParam0;
}

void func_184(int iParam0)
{
	Global_1328872.f_756 = iParam0;
}

void func_185()
{
	func_187();
	func_186(4, -1);
	func_186(6, -1);
	func_186(7, -1);
	func_186(3, -1);
	func_186(1, -1);
	func_186(2, -1);
	func_186(11, -1);
	func_186(13, -1);
	func_186(14, -1);
	func_186(16, -1);
}

void func_186(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1327593.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1327593.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_187()
{
	Global_2446554.f_4366 = 0;
}

void func_188(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x03A753E2C8458335() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6AEB0DF30A9DB9F1();
		}
		else
		{
			*uParam0 = unk_0xCCF575E20D375E1B();
		}
	}
	else
	{
		*uParam0 = unk_0x4F67E8ECA7D3F667();
	}
	uParam0->f_1 = 1;
}

int func_189(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x77DFA958FCF100C1() && Global_1840922.f_2 > 0)
	{
		func_82(&Global_1840922);
		func_82(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_197(0);
	}
	Global_1840922.f_2 = unk_0x77DFA958FCF100C1();
	iVar1 = -1;
	if (unk_0x88CFAE250D3E0C71())
	{
		if (unk_0xF867C85C2B19AA41() == 0)
		{
			iVar1 = unk_0xEE976D2B6FE4D4AE();
		}
	}
	if ((unk_0x88CFAE250D3E0C71() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_195() && unk_0x4C82BD446C34CACD()))
	{
		if (unk_0x6C02024F49E9F003())
		{
			func_192(&(Global_1840922.f_3), func_194(&(Global_1840922.f_3)));
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 4))
			{
				unk_0xF73FBE4845C43B5B(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_190(&(Global_1840922.f_3), 0);
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
			else if (!func_195())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
			{
				if (!unk_0x2503EB2EA811EC9A(2, 201))
				{
					unk_0xF73FBE4845C43B5B(uParam0, 0);
				}
			}
			else if (unk_0x3249D2128D293FA5(2, 201))
			{
				func_82(&(Global_1840922.f_49));
				func_82(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_197(0);
				return 1;
			}
		}
	}
	else
	{
		func_192(&(Global_1840922.f_3), func_194(&(Global_1840922.f_3)));
		if ((func_171(&(Global_1840922.f_49)) && !func_134(&(Global_1840922.f_49), 2000, 1)) && !unk_0x4C82BD446C34CACD())
		{
			unk_0xF73FBE4845C43B5B(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_190(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 3))
		{
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 1))
			{
				unk_0x3EE0B62B2FBD1DE6(0);
				unk_0xF73FBE4845C43B5B(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_190(&(Global_1840922.f_3), 0);
			}
		}
		if (func_171(&Global_1840922))
		{
			if (!func_134(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x4C82BD446C34CACD())
				{
					if (unk_0x22B7320F9BE83733())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x908258B6209E71F7())
					{
						if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
						{
							if (!unk_0x2503EB2EA811EC9A(2, 201))
							{
								unk_0xF73FBE4845C43B5B(uParam0, 0);
							}
						}
						else if (unk_0x3249D2128D293FA5(2, 201))
						{
							func_82(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_197(0);
							return 1;
						}
					}
				}
				else
				{
					func_82(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_197(0);
					return 1;
				}
			}
			else if (unk_0x4ED6CFDFE8D4131A(*uParam0, 3))
			{
				if (unk_0x22B7320F9BE83733())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
				{
					if (!unk_0x2503EB2EA811EC9A(2, 201))
					{
						unk_0xF73FBE4845C43B5B(uParam0, 0);
					}
				}
				else if (unk_0x3249D2128D293FA5(2, 201))
				{
					func_82(&(Global_1840922.f_49));
					func_82(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_197(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x22B7320F9BE83733())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x908258B6209E71F7())
				{
					if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
					{
						if (!unk_0x2503EB2EA811EC9A(2, 201))
						{
							unk_0xF73FBE4845C43B5B(uParam0, 0);
						}
					}
					else if (unk_0x3249D2128D293FA5(2, 201))
					{
						func_82(&(Global_1840922.f_49));
						func_82(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_197(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_190(var uParam0, bool bParam1)
{
	func_191(uParam0);
	if (bParam1)
	{
		func_197(0);
	}
	uParam0->f_35 = 1;
}

void func_191(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_193(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0xF00CED653959DE03(uParam0->f_34);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x54534D588C114163(&(uParam0->f_17));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0xF00CED653959DE03(uParam0->f_34);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x54534D588C114163(&(uParam0->f_17));
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x3451E7FFDF0EF375(uParam0->f_33, 70);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_193(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_194(var uParam0)
{
	return uParam0->f_35;
}

int func_195()
{
	if (func_196())
	{
		return 0;
	}
	if (unk_0x61E3D90420572762() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_196()
{
	return Global_2435308;
}

void func_197(bool bParam0)
{
	unk_0x58F441B90EA84D06();
	if (bParam0)
	{
		unk_0xAF9F47A49C6B43C5();
	}
}

int func_198(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_280)
	{
		func_210(&(uParam0->f_72), bParam1);
		iLocal_280 = 1;
		func_310(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_207(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_199(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_199(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_176(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_178(unk_0x217E9DC48139933D()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_206(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_163(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x6DCB4BB58C4D81D8(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_205(uParam0->f_44, iVar188))
					{
						if (func_204(uParam0->f_44, 4, iVar188))
						{
							unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x0778FE700D500355(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_128(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_205(uParam0->f_44, iVar188))
								{
									if (func_204(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x7499B86B7F4CA729(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0x51C63F8BCD21FBC3(0, iVar188);
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
					unk_0x53C229BFA69F10FB();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_203();
				if (Global_1835013.f_4)
				{
					if (func_202(uParam0->f_44))
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
			unk_0x510DE55B9E623A64(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x03A753E2C8458335() && func_201())
			{
				if (func_200())
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
			if (func_202(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x510DE55B9E623A64(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_163(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x0778FE700D500355(0, &Var0);
						if (unk_0xD3852F22AB713A1F(&(Var0.f_13), ""))
						{
							Global_971494.f_1 = -1;
						}
						else
						{
							Global_971494.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_971494.f_1 = -1;
					}
					unk_0x53C229BFA69F10FB();
				}
				else
				{
					Global_971494.f_1 = -1;
				}
				Global_1835013 = 999;
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_200()
{
	return unk_0x4ED6CFDFE8D4131A(Global_964222.f_8, 1);
}

var func_201()
{
	return Global_2434575.f_3;
}

int func_202(int iParam0)
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

void func_203()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_204(int iParam0, int iParam1, int iParam2)
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
	if (iParam0 == 780 || iParam0 == 778)
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
	iVar0 = unk_0x38AF5C0FC1256A5E(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_205(int iParam0, int iParam1)
{
	if (unk_0xFEDAEA149A766AFE(iParam0, 4, iParam1) == 156)
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

int func_206(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (unk_0xAD3A95035D4C67C5(uParam2, uParam3))
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
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
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

void func_207(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x3758E345C82DAFF2())
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
	if (func_209(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_208(190, 131, 0, 0f, 1);
		func_208(190, 103, iLocal_150[1], 0f, 0);
		func_208(190, 99, iLocal_150[2], 0f, 0);
		func_208(190, 109, iLocal_150[3], 0f, 0);
		func_208(190, 106, iLocal_150[5], 0f, 0);
		func_208(190, 2, iLocal_150[10], 0f, 0);
		func_208(190, 107, iLocal_150[8], 0f, 0);
		func_208(190, 116, iLocal_150[6], 0f, 0);
		iLocal_150[1] = 0;
		iLocal_150[2] = 0;
		iLocal_150[3] = 0;
		iLocal_150[5] = 0;
		iLocal_150[10] = 0;
		iLocal_150[8] = 0;
		iLocal_150[6] = 0;
	}
}

void func_208(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x4DFFD3436F0150C3(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x6DCB4BB58C4D81D8(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_204(iParam0, 4, iVar1))
				{
					unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xFEDAEA149A766AFE(iParam0, 4, iVar1))
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
		unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_209(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x4C82BD446C34CACD())
	{
	}
	if ((!unk_0xE777A356CA082C32() && (unk_0x14B7FA24A6729F52() || !unk_0xE45678312B6DF7F8())) && unk_0x8E955B3C7BE5C044())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x2C079282730811D0())
			{
				Var69 = { func_178(unk_0x217E9DC48139933D()) };
				if (unk_0x6BB4EDAA3A4778E8(&Var69))
				{
					if (unk_0x534D7C93C5A1A2C4(&uVar82, 35, &Var69))
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
			if (unk_0x03A753E2C8458335() && Global_2434575.f_3)
			{
				unk_0xB1A2ED5194751DDC(&Var0, &(Global_1683768.f_10));
			}
			else
			{
				unk_0x17297D2285FB53A3(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xE777A356CA082C32())
	{
	}
	if (!unk_0x14B7FA24A6729F52())
	{
	}
	if (unk_0xE45678312B6DF7F8())
	{
	}
	if (!unk_0x8E955B3C7BE5C044())
	{
	}
	return 0;
}

void func_210(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_211(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_211(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0x2CF12F9ACF18F048(sParam2))
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
				if (iParam5 > 0 && !func_214())
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
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				if (iParam5 <= 0 || func_214())
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_214())
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
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				if (iParam5 <= 0 || func_214())
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_214())
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
					unk_0x4256B393F5391D41(unk_0x217E9DC48139933D(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_214())
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_214())
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
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				if (iParam5 <= 0 || func_214())
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_214())
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
				if (iParam5 > 0 && !func_214())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				if (iParam5 <= 0 || func_214())
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_213(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0x2CF12F9ACF18F048(sParam3))
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
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1602437.f_38 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					if (Global_1602437.f_1 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1602437.f_1 == 5)
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
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					if (Global_1602437.f_1 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1602437.f_1 == 5)
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
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x2CF12F9ACF18F048(sParam3))
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
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0x2CF12F9ACF18F048(sParam3))
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
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_212(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_212(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_176(iParam8))
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
	return unk_0xFD340785ADF8CFB7(&cVar0);
}

struct<6> func_213(int iParam0)
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

int func_214()
{
	if (((((((Global_1602437.f_25920 == 1 || Global_1602437.f_25920 == 3) || Global_1602437.f_25920 == 5) || Global_1602437.f_25920 == 7) || Global_1602437.f_25920 == 8) || Global_1602437.f_25920 == 9) || Global_1602437.f_25920 == 11) || Global_1602437.f_25920 == 13)
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0, int iParam1)
{
	if (!func_398(&(uParam0->f_2)))
	{
		func_412(&(uParam0->f_2));
	}
	unk_0xB5F6539FA93ECBF6(14);
	unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xCCBB0BB9790E1F47(2, 201) || uParam0->f_8)
		{
			if (!func_398(&(uParam0->f_5)))
			{
				func_412(&(uParam0->f_5));
				func_216(uParam0, 1051260355);
			}
		}
		if (func_398(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_399(&(uParam0->f_5));
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
		if (!func_398(&(uParam0->f_5)))
		{
			func_412(&(uParam0->f_5));
			func_216(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_399(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_216(var uParam0, float fParam1)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "SHARD_ANIM_OUT");
	unk_0xA734310215BCF528(uParam0->f_9);
	unk_0xBC38230AD29DBDD4(fParam1);
	unk_0xD4D85E4148B638AD();
}

void func_217(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x6CFF81397164A1D3((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_218(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x6CFF81397164A1D3((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_219()
{
	int iVar0;
	
	if (!bLocal_305)
	{
		iVar0 = (unk_0x9C1C462D7B1DD1F9(0, 65535) % 3);
	}
	else
	{
		iLocal_319++;
		iVar0 = (iLocal_319 % 2);
	}
	return iVar0;
}

void func_220(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_221(iParam4);
	if (iParam4 != 5)
	{
		unk_0xF6EA2AC68E7C7293(*uParam0, "RESET_MOVIE");
		unk_0xD4D85E4148B638AD();
	}
	unk_0xF6EA2AC68E7C7293(*uParam0, sVar0);
	unk_0x164FB269C22AF51C("STRING");
	unk_0x734AB59A7DBD1DAA(sParam1);
	unk_0x5BB4D22B8B03A30B();
	func_12(sParam2);
	unk_0xD4D85E4148B638AD();
	func_412(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_221(int iParam0)
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

void func_222(var uParam0, int iParam1)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_SCORES");
	unk_0xA734310215BCF528(iParam1);
	unk_0xD4D85E4148B638AD();
}

int func_223(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		unk_0x931914268722C263(uParam0);
	}
	return 1;
}

void func_224(int iParam0)
{
	unk_0x8B15AE2987C1AC8F(uLocal_121, uLocal_119, 1500, 1, 1);
	unk_0x87295BCA613800C8(uLocal_122, 1);
	unk_0x8B15AE2987C1AC8F(uLocal_121, uLocal_122, 8000, 1, 1);
	unk_0xFDC0DF7F6FB0A592(uLocal_124, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0xFC2867E6074D3A61(uLocal_124, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0x27666E5988D9D429(uLocal_124, 35f);
}

void func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x578F8F1CAA17BD2B(uLocal_119))
	{
		bVar0 = false;
		func_306(uParam0);
		if (!bLocal_297)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x0BFC2C61FB5B6CA1(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_162)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 3))
						{
							func_396("DARTS_INSTR_W", -1);
							unk_0xF73FBE4845C43B5B(&Global_97314, 3);
						}
						func_310(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 4))
						{
							func_396("DARTS_INSTR_B", -1);
							unk_0xF73FBE4845C43B5B(&Global_97314, 4);
						}
						func_310(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x0BFC2C61FB5B6CA1(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x578F8F1CAA17BD2B(uLocal_128) && uParam0->f_3 == 2)
			{
				func_305(uParam3);
			}
		}
		else
		{
			func_303(uParam3, iLocal_29);
		}
		func_302(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_299(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_291(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_284(uParam0->f_422[iLocal_29], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x2503EB2EA811EC9A(2, 228) && iLocal_29 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_29 == 0)
			{
				func_283(iLocal_30, 0);
				if (((((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B")) && !func_282("DARTS_AIM_HLP")) && !func_282("DARTS_STD_HLP")) && !func_282("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_396("DARTS_LEVEL", -1);
						unk_0xF73FBE4845C43B5B(&(Global_97353.f_17224.f_6), iLocal_317);
						func_310(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_29] % 2) == 0 && uParam0->f_422[iLocal_29] < 41) && iLocal_30 == 0) && !iLocal_295)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_310(&(uParam3->f_666), 6, 1);
					}
					iLocal_295 = 1;
				}
				else if (uParam0->f_422[iLocal_29] == 50 && !iLocal_295)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_310(&(uParam3->f_666), 6, 1);
					}
					iLocal_295 = 1;
				}
				else if (func_272(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x00686F7B3723B82F();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_292)
				{
					if (!func_398(uParam4))
					{
						func_270(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_269(uLocal_286[(1 - iLocal_29)]);
						func_399(uParam4);
						iLocal_292 = 1;
					}
				}
			}
			else if (iLocal_30 == 0)
			{
				iLocal_315 = 0;
				func_268(&(uParam0->f_422), &(uParam0->f_249));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x9C1C462D7B1DD1F9(1250, 2500))
			{
				func_268(&(uParam0->f_422), &(uParam0->f_249));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_252(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_251(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_234(uParam0, uParam3);
			break;
		
		case 5:
			func_227(uParam0, uParam2, uParam3);
			if (func_398(uParam4))
			{
				func_399(uParam4);
			}
			break;
		
		case 6:
			func_226(uParam0, uParam3);
			break;
	}
}

void func_226(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_315++;
	iLocal_29 = 1;
	iLocal_30 = 0;
	iLocal_299 = 1;
	while (iLocal_30 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_25)
			{
				iLocal_30++;
			}
			else
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
				func_234(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24)
		{
			if (bLocal_298)
			{
				if (unk_0xD42BD6EB2E0F1677(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					unk_0x931914268722C263(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24 = 0;
				Var0 = { unk_0x9145DDB13546ED45(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_2) };
				if (unk_0xD42BD6EB2E0F1677(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					unk_0xF6A103413A202C37(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
			func_234(uParam0, uParam1);
			if (bLocal_298)
			{
				if (iLocal_300)
				{
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/] = unk_0x1A2D7464B1CAA1C8(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_1, Local_78, 1, 1, 0);
					Var0 = { unk_0x9145DDB13546ED45(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_2) };
					unk_0xF6A103413A202C37(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0xE29F927A961F8AAA(0f, 90f);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0x9CC8314DFEDE441E(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_268(&(uParam0->f_422), &(uParam0->f_249));
			func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_29] == 0)
			{
				if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_29]++;
				}
				func_310(&(uParam1->f_666), 2, 0);
				func_310(&(uParam1->f_666), 3, 0);
				func_310(&(uParam1->f_666), 4, 0);
				func_310(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_234(uParam0, uParam1);
			if (bLocal_298)
			{
				if (iLocal_300)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_30 + 1)
					{
						if (!uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/] = unk_0x1A2D7464B1CAA1C8(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_1, Local_78, 1, 1, 0);
							Var0 = { unk_0x9145DDB13546ED45(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0xD42BD6EB2E0F1677(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/]))
							{
								unk_0xF6A103413A202C37(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0xE29F927A961F8AAA(0f, 90f);
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0x9CC8314DFEDE441E(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_315 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_227(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_233();
			}
			if (iLocal_29 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_231("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_232("DARTS_SWITCH_C", uParam0->f_422[iLocal_29], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_232("DARTS_OPP_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_231("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_232("DARTS_SWITCH_B", uParam0->f_422[iLocal_29], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xCCBB0BB9790E1F47(2, 190))
			{
				iLocal_313++;
				if (iLocal_313 >= uParam0->f_436)
				{
					iLocal_313 = 0;
				}
				Var0 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var0);
			}
			if (unk_0xCCBB0BB9790E1F47(2, 189))
			{
				iLocal_313 = (iLocal_313 - 1);
				if (iLocal_313 < 0)
				{
					iLocal_313 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var0);
			}
			if (unk_0xCCBB0BB9790E1F47(2, 202))
			{
				Var0 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xCCBB0BB9790E1F47(2, 201))
			{
				iLocal_289 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xCCBB0BB9790E1F47(2, 201) || (iLocal_299 && bLocal_298))
			{
				iLocal_289 = 1;
			}
			if ((unk_0xCCBB0BB9790E1F47(2, 189) || unk_0xCCBB0BB9790E1F47(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0xA86D5F069399F44D(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_294)
				{
					if (func_230(iLocal_29 == 0, &(uLocal_286[1]), (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_294 = 1;
					}
				}
				else if ((unk_0x4F67E8ECA7D3F667() % 500) < 50)
				{
				}
			}
			else if (!iLocal_294)
			{
				if (func_229(iLocal_29 == 0, &(uLocal_286[1]), (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_294 = 1;
				}
			}
			else if ((unk_0x4F67E8ECA7D3F667() % 500) < 50)
			{
			}
			if (iLocal_289 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_299 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_223(&(uParam0->f_5[iLocal_29 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_29] != uParam0->f_422[iLocal_29])
				{
					func_228(uParam1, iLocal_29, uParam0->f_422[iLocal_29]);
					unk_0x8DA75EC60D972359(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_29] = uParam0->f_422[iLocal_29];
				iLocal_30 = 0;
				uParam0->f_428 = 0;
				if (iLocal_29 == 0)
				{
					iLocal_29 = 1;
				}
				else
				{
					iLocal_29 = 0;
				}
				func_411(uParam1, iLocal_29);
				iLocal_98 = 0;
				func_391();
				if (!bLocal_298)
				{
					unk_0xDB36BD90A8131006();
				}
				iLocal_92 = 0;
				uParam2->f_670 = 3;
				iLocal_295 = 0;
				iLocal_292 = 0;
				iLocal_294 = 0;
				iLocal_289 = 0;
				iLocal_313 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_228(var uParam0, int iParam1, int iParam2)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "ADD_DARTS_SCORE");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0xD4D85E4148B638AD();
}

int func_229(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 3);
		}
	}
	iVar1 = unk_0x9C1C462D7B1DD1F9(0, 100);
	iVar2 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0x4ED6CFDFE8D4131A(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_GOOD_SELF", 1, 4);
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
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_BAD_SELF", 1, 4);
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
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_BAD_OTHER", 1, 4);
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

int func_230(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xF73FBE4845C43B5B(&iVar0, 3);
		}
	}
	iVar1 = unk_0x9C1C462D7B1DD1F9(0, 100);
	iVar2 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0x4ED6CFDFE8D4131A(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0xD42BD6EB2E0F1677(func_475()))
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
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_GOOD_OTHER", 1, 4);
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
		else if (unk_0x4ED6CFDFE8D4131A(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x096275889B8E0EE0(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_231(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 1);
}

void func_232(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0xF00CED653959DE03(iParam1);
	unk_0x3103E77581D5165C(iParam2, 1);
}

void func_233()
{
	unk_0x87295BCA613800C8(uLocal_128, 1);
	unk_0x87295BCA613800C8(uLocal_119, 0);
}

void func_234(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_29] = (uParam0->f_422[iLocal_29] - uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_246(uParam0);
		func_310(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_29]++;
		if (iLocal_29 == 0)
		{
			func_244(4);
			iLocal_150[10]++;
		}
		if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_29] == 0)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_244(0);
					iLocal_150[1]++;
				}
			}
			func_310(&(uParam1->f_666), 2, 0);
			func_310(&(uParam1->f_666), 3, 0);
			func_310(&(uParam1->f_666), 4, 0);
			func_310(&(uParam1->f_666), 5, 1);
			func_246(uParam0);
			func_310(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_29] == 1 || uParam0->f_422[iLocal_29] < 0) || (uParam0->f_422[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 != 2)
			{
				func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				func_310(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_29] == 1)
			{
				func_310(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_29 == 1)
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_294)
			{
				if (func_243(uLocal_286[(1 - iLocal_29)]))
				{
					iLocal_294 = 1;
				}
			}
			uParam0->f_422[iLocal_29] = uParam0->f_425[iLocal_29];
			if (uParam0->f_1 == 6)
			{
			}
			unk_0xC1B1E9A034A63A62(0);
			uParam0->f_1 = 5;
			if (iLocal_29 == 0)
			{
				uParam0->f_435++;
			}
			func_310(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 1);
					func_244(0);
					iLocal_150[1]++;
				}
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_241(uLocal_286[iLocal_29]))
					{
						iLocal_294 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 0)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					func_240(uLocal_286[(1 - iLocal_29)]);
					iLocal_294 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_239(uLocal_286[1], iLocal_29 == 0))
					{
						iLocal_294 = 1;
					}
				}
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 0);
					func_244(1);
					iLocal_150[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_237(uLocal_286[iLocal_29], iLocal_29 == 0))
					{
						iLocal_294 = 1;
					}
				}
			}
			if (iLocal_29 == 0)
			{
				if (iLocal_30 < 2)
				{
					if (uParam0->f_422[iLocal_29] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_310(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_310(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_29] < 41 && uParam0->f_422[iLocal_29] > 0) && (uParam0->f_422[iLocal_29] % 2) == 0) || uParam0->f_422[iLocal_29] == 50)
					{
						if (uParam0->f_422[iLocal_29] == 50)
						{
						}
						if (!iLocal_293)
						{
							func_236(uLocal_286[1]);
							iLocal_293 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_310(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_29 == 0 && iLocal_30 < 2)
			{
				func_235("DARTS_REMAIN", (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[iLocal_29], 7500, 0);
			}
			else if (iLocal_29 == 1 && iLocal_30 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_302(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_25 = 1;
			iLocal_30++;
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
			if (iLocal_30 == 3)
			{
				iLocal_30 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_29 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_310(&(uParam1->f_666), 3, 0);
			func_310(&(uParam1->f_666), 2, 0);
			func_310(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_235(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0xF00CED653959DE03(iParam1);
	unk_0xF00CED653959DE03(iParam2);
	unk_0x3103E77581D5165C(iParam3, 1);
}

void func_236(int iParam0)
{
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xD42BD6EB2E0F1677(func_475()))
		{
			if (bParam1)
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_475(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_238())
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_140", 1, 4);
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

int func_238()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xD42BD6EB2E0F1677(func_475()))
		{
			if (bParam1)
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_475(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_238())
			{
				func_4(unk_0x096275889B8E0EE0(), "DARTS_180", 1, 4);
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

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x096275889B8E0EE0())
		{
			iVar1 = 1;
		}
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x096275889B8E0EE0())
	{
		iVar0 = 1;
	}
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_97353.f_17224++;
			func_245("DARTS_STAT_NUM_BULLSEYES", Global_97353.f_17224);
			break;
		
		case 1:
			Global_97353.f_17224.f_1++;
			func_245("DARTS_STAT_NUM_180S", Global_97353.f_17224.f_1);
			break;
		
		case 2:
			Global_97353.f_17224.f_2++;
			func_245("DARTS_STAT_NUM_WINS", Global_97353.f_17224.f_2);
			break;
		
		case 3:
			Global_97353.f_17224.f_3++;
			func_245("DARTS_STAT_NUM_LOSS", Global_97353.f_17224.f_3);
			break;
		
		case 4:
			Global_97353.f_17224.f_4++;
			func_245("DARTS_STAT_DARTS_THROWN", Global_97353.f_17224.f_4);
			break;
		
		case 5:
			Global_97353.f_17224.f_5++;
			func_245("DARTS_STAT_NUM_GAMES", Global_97353.f_17224.f_5);
			break;
		
		case 7:
			Global_97353.f_17224.f_7 = (unk_0xBBDA792448DB5A89(Global_97353.f_17224.f_2) / unk_0xBBDA792448DB5A89(Global_97353.f_17224.f_5));
			break;
		
		case 8:
			Global_97353.f_17224.f_8 = (unk_0xBBDA792448DB5A89(Global_97353.f_17224.f_4) / unk_0xBBDA792448DB5A89(Global_97353.f_17224.f_5));
			break;
	}
}

void func_245(char* sParam0, var uParam1)
{
}

void func_246(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_244(5);
	unk_0xDB36BD90A8131006();
	unk_0x0BFC2C61FB5B6CA1(1);
	if (unk_0x2E882EA08284F674(func_392(2)))
	{
		unk_0xC27FB879C2B9A2EB(func_392(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_233();
	}
	if (iLocal_29 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_303 = 1;
		uParam0->f_446[iLocal_29]++;
		uParam0->f_437[iLocal_29]++;
		func_244(2);
		iLocal_150[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_29]++;
		uParam0->f_437[iLocal_29]++;
		func_244(3);
		iLocal_150[9]++;
	}
	func_244(7);
	func_412(&(uParam0->f_254));
	if (func_248(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_29]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_247(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_150[3]++;
			iLocal_321 = 0;
		}
		else
		{
			iLocal_150[5]++;
			iLocal_321 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x5F70787AC4BF7928(func_392(3));
	iLocal_300 = 1;
	uParam0->f_428 = 0;
	iLocal_98 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_247(bool bParam0)
{
	char* sVar0;
	
	unk_0xCEA4E87102552C46(0);
	switch (func_75())
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
	unk_0x3899B603D71AEFE5(sVar0);
}

int func_248(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0->f_454, 0, 1);
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
			iLocal_150[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0, var uParam1, bool bParam2)
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
	fVar1 = unk_0xD0DFE1C486097BBB(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_250(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x8DA75EC60D972359(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x8DA75EC60D972359(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x8DA75EC60D972359(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x8DA75EC60D972359(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
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
					unk_0x8DA75EC60D972359(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_32[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_250(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_30)
	{
		if (((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_29 == 0 && iParam2 == 1)
	{
		func_253("Darts", "Dart_Reticules", &Local_69, 1, 0, 4, 1);
	}
	fVar6 = unk_0x5E72022914CE3C38();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_54), uParam0->f_11.f_2) };
		unk_0xF6A103413A202C37(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_54), uParam0->f_2.f_2) };
	unk_0xF6A103413A202C37(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0x9CC8314DFEDE441E(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
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

void func_253(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_264(&Var0);
			break;
		
		case 1:
			func_263(&Var0);
			break;
		
		case 5:
			func_262(&Var0);
			break;
		
		case 6:
			func_261(&Var0);
			break;
		
		case 7:
			func_260(&Var0);
			break;
		
		case 8:
			func_259(&Var0);
			break;
		
		case 9:
			func_258(&Var0);
			break;
	}
	if (func_256())
	{
		unk_0xCFCC78391C8B3814(iParam5);
		if (iParam3 == 1)
		{
			unk_0xC9884ECADE94CB34(sParam0, sParam1, func_255(Var0.f_0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xC9884ECADE94CB34(sParam0, sParam1, func_255(Var0.f_0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xCFCC78391C8B3814(4);
	}
}

float func_254(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_255(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_256()
{
	if (func_257())
	{
		return 1;
	}
	if (unk_0xF5472C80DF2FF847())
	{
		return 0;
	}
	if (unk_0x02F39BEFE7B88D00() || unk_0x0CECCC63FFA2EF24())
	{
		return 0;
	}
	if (unk_0x1C9921B2ED74B50E())
	{
		return 0;
	}
	return 1;
}

bool func_257()
{
	return Global_1312440;
}

void func_258(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_259(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_260(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_261(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_262(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_263(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_264(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
		fVar4 = unk_0xE29F927A961F8AAA(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xE29F927A961F8AAA(0f, 360f);
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
			if (*uParam3 == iLocal_32[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x9C1C462D7B1DD1F9(0, 100);
		iVar6 = unk_0x9C1C462D7B1DD1F9(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xE29F927A961F8AAA(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xE29F927A961F8AAA(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xE29F927A961F8AAA(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x9C1C462D7B1DD1F9(0, 100);
		iVar6 = unk_0x9C1C462D7B1DD1F9(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xE29F927A961F8AAA(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xE29F927A961F8AAA(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xE29F927A961F8AAA(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xE29F927A961F8AAA(0.3f, 1f);
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
		func_266(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_266(uParam0);
		*uParam0 = unk_0x1A2D7464B1CAA1C8(uParam0->f_1, Local_78, 0, 0, 0);
		fVar1 = unk_0xE29F927A961F8AAA(0f, 90f);
		Var7 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, Local_81) };
		Var10 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_54), uParam0->f_8.f_2) };
		fVar2 = unk_0x38D5202FF9271C62((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x9CC8314DFEDE441E(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_81 };
		*uParam2 = 3;
		unk_0x6856F5517E486379(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_266(var uParam0)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_81 - uParam0->f_8 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = unk_0x38D5202FF9271C62(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0x8C13DB96497B7ABF(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_81 - uParam0->f_11 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_267(var uParam0)
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

void func_268(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_29] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_29] > 60)
	{
		if (((*uParam0)[iLocal_29] % 2) == 1)
		{
			if (func_238())
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
	else if ((*uParam0)[iLocal_29] < 61)
	{
		if ((*uParam0)[iLocal_29] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_29] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_29] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_29] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_29] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_270(var uParam0)
{
	func_271(uParam0, 0f);
}

void func_271(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) + fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_272(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_96)
			{
				if (unk_0xC9D9444186B5A374() > 50)
				{
					iLocal_97 = 0;
					iLocal_98 = 0;
					iLocal_100 = 0;
					if (func_281(uParam0, uParam1, 0))
					{
						unk_0x6856F5517E486379(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_96 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xCCBB0BB9790E1F47(2, 223) && iLocal_100) && !bParam4)
				{
					iLocal_97 = 1;
					iLocal_98 = 1;
					if (!iLocal_99)
					{
						func_280(uParam0, *uParam2);
						iLocal_99 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_279();
						}
						func_278(uParam0, iParam6);
						func_277(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xE29F927A961F8AAA(0.02f, 0.1f);
						iVar1 = unk_0x9C1C462D7B1DD1F9(0, 100);
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
						fVar0 = unk_0xE29F927A961F8AAA(0.02f, 0.1f);
						iVar1 = unk_0x9C1C462D7B1DD1F9(0, 100);
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
						uParam0->f_2 = { Local_81 };
						iLocal_97 = 1;
						iLocal_98 = 1;
					}
					if (iLocal_97 && iLocal_98)
					{
						if (!iLocal_96)
						{
							unk_0x00686F7B3723B82F();
							iLocal_96 = 1;
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_96)
			{
				func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_281(uParam0, uParam1, 1))
					{
						unk_0x6856F5517E486379(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_96 = 0;
						return 1;
					}
				}
			}
			else if (!func_273(uParam0))
			{
				if (!iLocal_99)
				{
					func_280(uParam0, *uParam2);
				}
				else
				{
					func_279();
					func_278(uParam0, iParam6);
					func_277(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_96)
			{
				iLocal_96 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
	}
	return 0;
}

int func_273(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x51790FCCF27A8664(2, 220);
	fVar2 = unk_0x51790FCCF27A8664(2, 221);
	iLocal_135 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_134)
	{
		case 0:
			if (iLocal_135 > 120)
			{
				iLocal_136 = unk_0x4F67E8ECA7D3F667();
				iLocal_134 = 1;
			}
			if (iLocal_135 < -100)
			{
				iLocal_140 = unk_0xF2DB717A73826179(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_135 > 120)
			{
				iLocal_136 = unk_0x4F67E8ECA7D3F667();
			}
			else if ((iLocal_135 < 120 && iLocal_135 > -120) && (unk_0x4F67E8ECA7D3F667() - iLocal_136) > 500)
			{
				iLocal_134 = 0;
			}
			else if (iLocal_135 < -100)
			{
				iLocal_137 = unk_0x4F67E8ECA7D3F667();
				if ((iLocal_137 - iLocal_136) < 500)
				{
					iLocal_140 = unk_0xF2DB717A73826179(fVar1);
					iLocal_138 = (iLocal_137 - iLocal_136);
					iLocal_134 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_138 > iLocal_139)
			{
				if (iLocal_138 > 100 && iLocal_138 < 150)
				{
					fLocal_143 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_143);
				}
				else
				{
					fLocal_142 = (unk_0xBBDA792448DB5A89(iLocal_139) / unk_0xBBDA792448DB5A89(iLocal_138));
					fLocal_143 = ((1f - fLocal_142) * fLocal_146);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_143);
				}
			}
			else
			{
				fLocal_143 = 0f;
			}
			if (iLocal_140 > 7)
			{
				fLocal_144 = (unk_0xBBDA792448DB5A89(iLocal_140) / fLocal_149);
				fLocal_145 = (fLocal_147 * fLocal_144);
				uParam0->f_8 = (uParam0->f_8 + fLocal_145);
			}
			else if (iLocal_140 < -7)
			{
				fLocal_144 = (unk_0xBBDA792448DB5A89(iLocal_140) / fLocal_148);
				fLocal_145 = (fLocal_147 * fLocal_144);
				uParam0->f_8 = (uParam0->f_8 - fLocal_145);
			}
			else
			{
				fLocal_145 = 0f;
			}
			if (fLocal_143 < 0.066477f && fLocal_145 == 0f)
			{
				func_276();
			}
			else if (fLocal_143 <= 0.066477f && fLocal_145 < 0.06f)
			{
				func_275();
			}
			else
			{
				func_274();
			}
			iVar0 = 1;
			iLocal_134 = 0;
			break;
	}
	return iVar0;
}

void func_274()
{
	Local_69.f_4 = 210;
	Local_69.f_5 = 23;
	Local_69.f_6 = 19;
}

void func_275()
{
	Local_69.f_4 = 183;
	Local_69.f_5 = 137;
	Local_69.f_6 = 0;
}

void func_276()
{
	Local_69.f_4 = 16;
	Local_69.f_5 = 184;
	Local_69.f_6 = 10;
}

void func_277(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	}
	unk_0xCB50D7AFCC8B0EC6(Var0, &Local_60, &(Local_60.f_1));
	if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_93)
		{
			func_253("Darts", "Dart_Reticules_Zoomed", &Local_60, 1, 0, 4, 1);
		}
		else
		{
			func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
		}
		if (!iLocal_100)
		{
			iLocal_100 = 1;
		}
	}
}

void func_278(var uParam0, int iParam1)
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
	fVar3 = unk_0xA9F12B50505FB154(2, 218);
	fVar4 = unk_0xA9F12B50505FB154(2, 219);
	fVar5 = unk_0x51790FCCF27A8664(2, 220);
	fVar6 = unk_0x51790FCCF27A8664(2, 221);
	if (unk_0x3653C46DD33107D5(2))
	{
		if (unk_0x134549B388167CBF(fVar5) > unk_0x134549B388167CBF(fVar3) || unk_0x134549B388167CBF(fVar6) > unk_0x134549B388167CBF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x7E47E3291155DF3B())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x1A89600CDAF62A93())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x2503EB2EA811EC9A(2, 227))
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
		if (unk_0x3653C46DD33107D5(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_91 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_91 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_91 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_91 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_91 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_91 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_91 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_91 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0xE29F927A961F8AAA((0f - fLocal_88), (0f + fLocal_88));
		fVar1 = unk_0xE29F927A961F8AAA((0f - fLocal_87), (0f + fLocal_87));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xE29F927A961F8AAA((0f - fLocal_88), (0f + fLocal_88));
		fVar1 = unk_0xE29F927A961F8AAA((0f - fLocal_87), (0f + fLocal_87));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_91 = 0.5f;
		if (iLocal_134 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0xE29F927A961F8AAA((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xE29F927A961F8AAA((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xE29F927A961F8AAA((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xE29F927A961F8AAA((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_279()
{
	if (unk_0x2503EB2EA811EC9A(2, 227))
	{
		fLocal_91 = 0.3f;
	}
	else
	{
		fLocal_91 = 0.1f;
	}
	if (unk_0x2503EB2EA811EC9A(2, 229))
	{
		if (bLocal_93)
		{
			if (unk_0x83666F9FB8FEBD4B() > iLocal_141)
			{
				fLocal_87 = fLocal_89;
				fLocal_88 = fLocal_90;
				fLocal_91 = 0.1f;
				bLocal_93 = false;
			}
		}
		else if (iLocal_92 < 1)
		{
			fLocal_87 = 0.03f;
			fLocal_88 = 0.05f;
			fLocal_91 = 0.1f;
			unk_0xC1B1E9A034A63A62(0);
			bLocal_93 = true;
			iLocal_92++;
		}
		else if ((((((!func_282("DARTS_FST_HLP") && !func_282("DARTS_AIM_HLP")) && !func_282("DARTS_CLOCK")) && !func_282("DARTS_STD_HLP")) && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B")) && !iLocal_94)
		{
			iLocal_94 = 1;
			if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 1))
			{
				func_396("DARTS_SHT_USE", -1);
				unk_0xF73FBE4845C43B5B(&Global_97314, 1);
			}
		}
	}
	else if (bLocal_93)
	{
		fLocal_87 = fLocal_89;
		fLocal_88 = fLocal_90;
		fLocal_91 = 0.1f;
		bLocal_93 = false;
	}
}

void func_280(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0xE29F927A961F8AAA(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0xE29F927A961F8AAA(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_81 };
}

int func_281(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		unk_0xF6A103413A202C37(*uParam0, Local_78, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x1A2D7464B1CAA1C8(uParam0->f_1, Local_78, 0, 0, 0);
	}
	bLocal_93 = false;
	fLocal_91 = 0.1f;
	fLocal_87 = fLocal_89;
	fLocal_88 = fLocal_90;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_266(uParam0);
	fVar10 = unk_0xE29F927A961F8AAA(0f, 90f);
	Var3 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, Local_81) };
	Var6 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	fVar11 = unk_0x38D5202FF9271C62((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0x9CC8314DFEDE441E(*uParam0, uParam0->f_17, 0, 1);
	iLocal_97 = 0;
	iLocal_99 = 0;
	if (bParam2)
	{
		func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
	}
	Var0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_54), uParam0->f_8.f_2) };
	unk_0xCB50D7AFCC8B0EC6(Var0, &Local_69, &(Local_69.f_1));
	return 1;
}

bool func_282(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

void func_283(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 9))
		{
			if ((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_AIM_HLP", -1);
				unk_0xF73FBE4845C43B5B(&Global_97314, 9);
			}
		}
		else if (iParam1 && !unk_0x4ED6CFDFE8D4131A(Global_97314, 7))
		{
			if ((!func_282("DARTS_AIM_HLP") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_CLOCK", -1);
				unk_0xF73FBE4845C43B5B(&Global_97314, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 8))
		{
			if ((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_STD_HLP", -1);
				unk_0xF73FBE4845C43B5B(&Global_97314, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_95 && !func_282("DARTS_SHT_USE")) && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 2))
			{
				func_396("DARTS_FST_HLP", -1);
				unk_0xF73FBE4845C43B5B(&Global_97314, 2);
			}
			iLocal_95 = 1;
		}
	}
}

int func_284(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_287(iParam0) };
			*uParam3 = { unk_0xC899C78DB72CCBCC(*uParam1, Var0) };
			func_286(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0xCCBB0BB9790E1F47(2, 201))
			{
				func_285();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_285()
{
	unk_0x8B15AE2987C1AC8F(uLocal_119, uLocal_131, 2000, 1, 1);
	unk_0x4E67E0B6D7FD5145(uLocal_131, 0);
}

void func_286(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_131 = unk_0x98B99B9F27E2D60B(26379945, Param0, Var0, 65f, 0, 2);
	unk_0x8B15AE2987C1AC8F(uLocal_131, uLocal_119, 2000, 1, 1);
}

Vector3 func_287(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_290(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_289(fVar0);
		Var1.f_2 = func_288(fVar0);
	}
	return Var1;
}

float func_288(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_289(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_32[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_291(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x2503EB2EA811EC9A(2, 228))
			{
				func_298(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x2503EB2EA811EC9A(2, 228))
			{
				if (!unk_0x578F8F1CAA17BD2B(uLocal_128))
				{
					func_296();
					func_295(&uLocal_326, Local_357, Local_360, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x2503EB2EA811EC9A(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_292(&uLocal_326, 1, 1, 0, 0, 1045220557, 0);
			}
			break;
		
		case 3:
			func_298(0);
			func_476();
			if (unk_0x153AD457764FD704(uLocal_326))
			{
				if (unk_0x63EFCC7E1810B8E6(uLocal_326))
				{
					unk_0x87295BCA613800C8(uLocal_326, 0);
				}
				unk_0x4E67E0B6D7FD5145(uLocal_326, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_292(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
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
	
	unk_0x66C4FECDA728574E(2);
	func_294(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x1A89600CDAF62A93())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		fVar5 = unk_0xA9F12B50505FB154(2, 239);
		fVar6 = unk_0xA9F12B50505FB154(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF34EE736CF047844(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF34EE736CF047844(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF34EE736CF047844(((unk_0xA9F12B50505FB154(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF34EE736CF047844(((unk_0xA9F12B50505FB154(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_293((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_293((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x4F67E8ECA7D3F667())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x3653C46DD33107D5(2))
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
		uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
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
	if ((unk_0x3653C46DD33107D5(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0x3653C46DD33107D5(0) && bParam1)
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
		if (unk_0x3653C46DD33107D5(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0xA799AFD74BAFEA0F(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xA799AFD74BAFEA0F(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
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
	unk_0xA47BBFFFB83D4D0A(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x153AD457764FD704(*uParam0))
	{
		if (unk_0x63EFCC7E1810B8E6(*uParam0))
		{
			if (unk_0x4415F8A6C536D39F(*uParam0))
			{
				unk_0x72ED2136CB143D65();
			}
		}
	}
}

int func_293(int iParam0, int iParam1, int iParam2)
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

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF2BE793AE446E342(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 218) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 219) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 220) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 221) * 127f));
		}
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		if (bParam5)
		{
			if (unk_0x1A89600CDAF62A93())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x7E47E3291155DF3B())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_295(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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
	*uParam0 = unk_0xE72CDBA7F0A02DD6("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x87295BCA613800C8(*uParam0, 1);
	unk_0xA47BBFFFB83D4D0A(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xF9A7BCF5D050D4E7(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xA924028272A61364(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x0BFD145EF819FB3A(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_296()
{
	if (iLocal_282)
	{
		return;
	}
	func_297();
	unk_0x7F7FCF431E93AE1E("Darts Zoom");
	iLocal_282 = 1;
}

void func_297()
{
	if (iLocal_281 || iLocal_282)
	{
		unk_0x46F5C6FCEA473F73();
		iLocal_281 = 0;
		iLocal_282 = 0;
	}
}

void func_298(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8B15AE2987C1AC8F(uLocal_128, uLocal_119, 1000, 1, 1);
	}
	else
	{
		unk_0x8B15AE2987C1AC8F(uLocal_119, uLocal_128, 1000, 1, 1);
	}
}

void func_299(var uParam0)
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
			func_220(&(uParam0->f_62), func_301(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_215(&(uParam0->f_62), 0))
			{
				func_300(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_300(var uParam0)
{
	uParam0->f_8 = 0;
	func_399(&(uParam0->f_2));
	func_399(&(uParam0->f_5));
}

char* func_301(int iParam0)
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

void func_302(var uParam0)
{
	if (!iLocal_98)
	{
		if (!unk_0x2503EB2EA811EC9A(2, 201))
		{
			iLocal_98 = 1;
		}
	}
	if ((iLocal_29 == 1 && iLocal_30 < 3) && *uParam0 != 5)
	{
		if ((unk_0x2503EB2EA811EC9A(2, 201) || unk_0xCCBB0BB9790E1F47(2, 223)) && iLocal_98)
		{
			*uParam0 = 6;
		}
	}
}

void func_303(var uParam0, int iParam1)
{
	if (!unk_0x535384D6067BA42E())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_92 > 0)
			{
				func_105(&(uParam0->f_509), 0, 0, 0, 1);
				func_104(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_104(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_304(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_104(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_104(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_104(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_101(&(uParam0->f_509), 1);
				func_310(&(uParam0->f_666), 8, 0);
				func_310(&(uParam0->f_666), 16, 0);
				func_310(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_92 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_105(&(uParam0->f_509), 0, 0, 0, 1);
				func_104(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_104(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_304(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_104(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_104(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_101(&(uParam0->f_509), 1);
				func_310(&(uParam0->f_666), 8, 0);
				func_310(&(uParam0->f_666), 16, 0);
				func_310(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_105(&(uParam0->f_509), 1, 0, 0, 1);
			func_104(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_104(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_101(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 16, 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 17, 0);
			func_310(&(uParam0->f_666), 23, 0);
		}
		unk_0x3DBF4ED80996A17A(76, 66);
		unk_0xEACE371867DDB554(0f, 0f, 0f, 0f);
		unk_0xA2050119A0AD6EF1();
		func_184(func_100(func_3(&(uParam0->f_666), 16), 1, 2));
		func_107(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_310(&(uParam0->f_666), 15, 0);
		func_310(&(uParam0->f_666), 16, 0);
		func_310(&(uParam0->f_666), 23, 0);
	}
}

int func_304(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		unk_0xF73FBE4845C43B5B(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_305(var uParam0)
{
	if (!unk_0x535384D6067BA42E())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_105(&(uParam0->f_509), 0, 0, 0, 1);
			func_304(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_104(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_101(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 23, 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 16, 0);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 17, 0);
		}
		func_107(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_310(&(uParam0->f_666), 15, 0);
		func_310(&(uParam0->f_666), 16, 0);
		func_310(&(uParam0->f_666), 23, 0);
		func_310(&(uParam0->f_666), 17, 0);
	}
}

void func_306(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_98)
	{
		if (!unk_0x2503EB2EA811EC9A(2, 201) && !unk_0x2503EB2EA811EC9A(2, 202))
		{
			iLocal_98 = 1;
		}
		else
		{
			iLocal_98 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_98 && iLocal_97 == 0)
			{
				iLocal_98 = 0;
				bVar0 = false;
				bLocal_297 = false;
				unk_0x0BFC2C61FB5B6CA1(1);
			}
		}
		if (unk_0x3249D2128D293FA5(2, 235) || unk_0xDAB4BF48B46C66EA(2, 235))
		{
			if (!bLocal_297)
			{
				*uParam0 = 14;
				bLocal_297 = true;
				unk_0x0BFC2C61FB5B6CA1(1);
			}
		}
		else if (func_282("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_297 = false;
		}
	}
}

void func_307(int iParam0)
{
	if (!unk_0x6CFF81397164A1D3(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_308(int iParam0)
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

float func_309(int iParam0)
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

void func_310(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(uParam0, iParam1);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(uParam0, iParam1);
	}
}

int func_311(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_17224.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_312(int iParam0, var uParam1, var uParam2)
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
			func_223(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_222(uParam1, iVar0);
		func_228(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_29 = 0;
	iLocal_30 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_313 = 0;
	iParam0->f_436 = 0;
	iLocal_92 = 0;
	iLocal_290 = 1;
	iLocal_291 = 0;
	iLocal_293 = 0;
	iLocal_94 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_299 = 0;
	func_310(&(uParam2->f_666), 6, 0);
	func_318();
	func_316(uParam2);
	if (iParam0->f_457)
	{
		func_313(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_313(bool bParam0)
{
	unk_0x1B3DA717B9AFF828(0);
	if (unk_0x63EFCC7E1810B8E6(uLocal_121))
	{
		unk_0x87295BCA613800C8(uLocal_121, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_125))
	{
		unk_0x87295BCA613800C8(uLocal_125, 0);
	}
	if (unk_0xF5472C80DF2FF847())
	{
		func_315();
		unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
		unk_0x6A053CF596F67DF7(500);
	}
	func_314(bParam0);
}

void func_314(bool bParam0)
{
	if (bParam0)
	{
		unk_0x87295BCA613800C8(uLocal_119, 1);
	}
}

void func_315()
{
	unk_0x87295BCA613800C8(uLocal_121, 1);
}

void func_316(var uParam0)
{
	func_317();
	uParam0->f_670 = 3;
	func_310(&(uParam0->f_666), 15, 0);
	func_310(&(uParam0->f_666), 16, 0);
	func_310(&(uParam0->f_666), 17, 0);
}

void func_317()
{
	int iVar0;
	
	Local_163.f_66 = -1;
	Local_163.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_163.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_163.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_163.f_9[iVar0 /*7*/].f_5 = 0;
		Local_163.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_163.f_5 = 0;
	Local_163.f_5.f_1 = -1f;
	Local_163.f_5.f_2 = 0;
	Local_163.f_0 = 0;
	Local_163.f_1 = 0;
}

void func_318()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_98 = 0;
	unk_0xDB36BD90A8131006();
}

void func_319(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0x6E6485C88690115F(15);
		Global_17236.f_7207 = 0;
	}
	unk_0xA648C1FE543029AC(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0xF3D4779E285B441F(9, 0);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0x4ACA10A91F66F1E2("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_320(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_320(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			unk_0x6215C0F9FFF76BAD(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_321(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x03A753E2C8458335() && unk_0xB779D92A280DB7F7())
		{
			iParam2 = unk_0x0C784192960052E5();
		}
	}
	StringCopy(&cVar0, unk_0x8F77B33B6A34D8BA(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xFD340785ADF8CFB7(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_322(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0xA734310215BCF528(iParam3);
	unk_0xA734310215BCF528(iParam4);
	unk_0xD4D85E4148B638AD();
}

int func_323(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x562F5D788AF3FA80(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_379(0, 0, 0, 1);
		func_378(0, -1);
		if (func_377())
		{
			if (Global_2543381 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_2543381;
				func_376(uParam0->f_660, 1, 1);
				unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
				if (unk_0x73C258C68D6F55B6(sVar0))
				{
					func_375(sVar0, 0, 0);
				}
			}
			Global_2543382 = unk_0x4F67E8ECA7D3F667() + 300;
		}
		else if (func_374() && unk_0x4F67E8ECA7D3F667() > Global_2543382)
		{
			if (Global_2543381 == uParam0->f_660)
			{
				iVar2 = func_373(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_2543382 = unk_0x4F67E8ECA7D3F667() + 300;
		}
		if (func_372(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_376(uParam0->f_660, 1, 1);
			unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0x73C258C68D6F55B6(sVar0))
			{
				func_375(sVar0, 0, 0);
			}
		}
		if (func_371(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_376(uParam0->f_660, 1, 1);
			unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			if (unk_0x73C258C68D6F55B6(sVar0))
			{
				func_375(sVar0, 0, 0);
			}
		}
		if (func_370(&(uParam0->f_633)) || func_369(&(uParam0->f_633), uParam0->f_660, iVar1))
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
			unk_0xB906B139171B1845(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if (func_351(&(uParam0->f_636)) || func_349(&(uParam0->f_636), uParam0->f_660, iVar1))
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
			unk_0xB906B139171B1845(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if ((unk_0xCCBB0BB9790E1F47(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_348(uParam0->f_662 + 1, 1);
			*uParam2 = func_348(uParam0->f_664 + 1, 0);
			unk_0xB906B139171B1845(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_326(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x3249D2128D293FA5(2, 202) || func_325())
		{
			func_324(0);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x3249D2128D293FA5(2, 201))
		{
			func_34(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x3249D2128D293FA5(2, 202))
		{
			func_352(uParam0);
			func_310(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_324(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435345[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2543305.f_16), "", 16);
	Global_2543305.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2543305.f_21), "", 16);
	Global_2543305.f_61 = 0;
	Global_2543305.f_62 = 0;
	Global_2543305.f_63 = 0;
	Global_2543305.f_64 = 0;
	Global_2543305.f_65 = 0;
	Global_2543305.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2543305.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2543305.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = unk_0x1C672C3C3855417F(0);
	if (bParam0)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

int func_325()
{
	if (unk_0x3653C46DD33107D5(2))
	{
		if (unk_0xCCBB0BB9790E1F47(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_326(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_345(0, bParam6))
	{
		return;
	}
	unk_0x3DBF4ED80996A17A(76, 84);
	unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_18(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) == unk_0xFD340785ADF8CFB7("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0xEB7445AF48518614(&iVar57, &iVar58);
		fVar60 = unk_0x1C672C3C3855417F(0);
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
		unk_0x66773C92835D0909(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) == unk_0xFD340785ADF8CFB7("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0xC9884ECADE94CB34(func_23(29), func_21(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_344(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) != 0)
				{
					func_343();
					unk_0x44507FCF2678B557(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0xF00CED653959DE03(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xAC5C76ECFC58A8FE(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x54534D588C114163(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x54534D588C114163(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xC915BBFBCA1E5AB8((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_343();
						func_341((((Global_17233 + fParam5) - 0.00390625f) - func_342("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
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
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_344(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x5E92638EA77DEC4B("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_18(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_340(fVar41);
				unk_0xF322BD22FFF9BDBB(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD1CD7D4DF474BD45(fVar41, (fVar49 + 0.00277776f));
				unk_0x39F91E7F4F162E9C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_344(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_340(fVar41);
				unk_0x44507FCF2678B557(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC915BBFBCA1E5AB8(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_18(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_339(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC9884ECADE94CB34(func_23(Global_17236.f_4045), func_21(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x4F67E8ECA7D3F667() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					func_18(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_340(fVar41);
				unk_0xF322BD22FFF9BDBB(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD1CD7D4DF474BD45(fVar41, (fVar49 + 0.00277776f));
				unk_0x39F91E7F4F162E9C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_344(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_340(fVar41);
				unk_0x44507FCF2678B557(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC915BBFBCA1E5AB8(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					func_18(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_339(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC9884ECADE94CB34(func_23(Global_2543305.f_67), func_21(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((unk_0x4F67E8ECA7D3F667() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			func_333(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x3DBF4ED80996A17A(76, 84);
			unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
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
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						unk_0x39F91E7F4F162E9C(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x39F91E7F4F162E9C(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_331(bVar31, 1, 0, 0, 0, 0);
					unk_0x44507FCF2678B557("DFLT_MNU_OPT");
					unk_0xC915BBFBCA1E5AB8(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0x4ED6CFDFE8D4131A(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												unk_0xAA01A6DC6F359160(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xF00CED653959DE03(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x6ECFBEBF963B31D0(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_330(bVar31);
											}
											unk_0x44507FCF2678B557(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xF00CED653959DE03(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_18(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_339(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[(iVar22 + iVar28)]), func_21(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[(iVar22 + iVar28)]), func_21(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xC915BBFBCA1E5AB8(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xC915BBFBCA1E5AB8((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_18(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_18(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_339(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[(iVar22 + iVar14)]), func_21(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[(iVar22 + iVar14)]), func_21(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[(iVar22 + iVar14)]), func_21(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_330(bVar31);
											}
											unk_0xAA01A6DC6F359160("NUMBER");
											unk_0xF00CED653959DE03(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x6ECFBEBF963B31D0(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_329((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_330(bVar31);
											}
											unk_0xAA01A6DC6F359160("NUMBER");
											unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x6ECFBEBF963B31D0(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_331(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_328((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_18(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_339(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC9884ECADE94CB34(func_23(26), func_21(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_339(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC9884ECADE94CB34(func_23(27), func_21(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_18(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_339(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xC9884ECADE94CB34(func_23(Global_17236.f_3843[iVar22]), func_21(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_327(Global_17236.f_3843[iVar22])), (fVar36 * func_327(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
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
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = unk_0x4F67E8ECA7D3F667();
	unk_0xA648C1FE543029AC(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_36();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0xB5F6539FA93ECBF6(10);
	}
	unk_0xB5F6539FA93ECBF6(6);
	unk_0xB5F6539FA93ECBF6(7);
	unk_0xB5F6539FA93ECBF6(9);
	unk_0xB5F6539FA93ECBF6(8);
	if (bParam0)
	{
		func_184(1);
	}
	unk_0xA2050119A0AD6EF1();
}

float func_327(int iParam0)
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

void func_328(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xAC5C76ECFC58A8FE(uParam3, uParam4);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, 0);
}

void func_329(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xF00CED653959DE03(iParam3);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, iParam4);
}

void func_330(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x39F91E7F4F162E9C(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x39F91E7F4F162E9C(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
}

void func_331(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_332(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x39F91E7F4F162E9C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x39F91E7F4F162E9C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x1844BFD606087D68(155, 155, 155, 255);
		}
		else
		{
			unk_0x1844BFD606087D68(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x1844BFD606087D68(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x1844BFD606087D68(155, 155, 155, 255);
	}
	else
	{
		unk_0x1844BFD606087D68(155, 155, 155, 255);
	}
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x4CB6ED62C0EA5841(1);
	if (bParam5)
	{
		unk_0x4170B650590B3B00(0f, 0.425f);
		unk_0x031ABF27ACAA1595(4);
	}
	else
	{
		unk_0x031ABF27ACAA1595(0);
	}
	unk_0x4C5BE63E1D2CAFE8(0f, 1f);
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_332(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_345(bParam4, bParam8))
	{
		return;
	}
	if (func_337())
	{
		return;
	}
	if (unk_0x4E4F57E11BB51285())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_334(unk_0x217E9DC48139933D(), 0))
		{
			return;
		}
	}
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x37DF360F235A3893() == 0 || unk_0x4E4F57E11BB51285())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x29D1C165BCB09391(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0xF800E35ED8511D66(2, Global_17236.f_4303[iVar1], true), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0xDE6887C7BB8A503D(2, Global_17236.f_4316[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD4D85E4148B638AD();
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xBC38230AD29DBDD4((1f - (Global_17236.f_4358 / 100f)));
			unk_0xD4D85E4148B638AD();
			if (unk_0xB0FB6CFAA5A1C833())
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x58279158C52AF361(true);
				unk_0xD4D85E4148B638AD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0xFD340785ADF8CFB7("PREV"))
				{
					unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xA734310215BCF528(iVar1);
					func_13(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFD340785ADF8CFB7(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0xFD340785ADF8CFB7("PREV"))
					{
						func_13(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_12(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0x164FB269C22AF51C(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x3451E7FFDF0EF375(iParam2, 70);
						}
						else
						{
							unk_0xF00CED653959DE03(iParam2);
						}
						unk_0x5BB4D22B8B03A30B();
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0x4ED6CFDFE8D4131A(Global_17236.f_4329, iVar1))
						{
							unk_0x58279158C52AF361(true);
							unk_0xA734310215BCF528(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0x58279158C52AF361(false);
							unk_0xA734310215BCF528(332);
						}
					}
					unk_0xD4D85E4148B638AD();
				}
				iVar1++;
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_2543305.f_16)) != unk_0xFD340785ADF8CFB7(""))
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xA734310215BCF528(Global_17236.f_4046);
				func_13(&Global_2543305);
				if (Global_2543305.f_20 == -1)
				{
					func_12(&(Global_2543305.f_16));
				}
				else
				{
					unk_0x164FB269C22AF51C(&(Global_2543305.f_16));
					if (bParam5)
					{
						unk_0x3451E7FFDF0EF375(iParam2, 70);
					}
					else
					{
						unk_0xF00CED653959DE03(iParam2);
					}
					unk_0x5BB4D22B8B03A30B();
				}
				unk_0xD4D85E4148B638AD();
			}
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(80);
			unk_0xD4D85E4148B638AD();
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0xA734310215BCF528(1);
			}
			else
			{
				unk_0xA734310215BCF528(0);
			}
			unk_0xD4D85E4148B638AD();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xA734310215BCF528(iVar1);
					unk_0x164FB269C22AF51C(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x3451E7FFDF0EF375(iParam2, 70);
					}
					else
					{
						unk_0xF00CED653959DE03(iParam2);
					}
					unk_0x5BB4D22B8B03A30B();
					unk_0xD4D85E4148B638AD();
				}
			}
			iVar1++;
		}
		if (Global_2543305.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xA734310215BCF528(iVar1);
				unk_0x164FB269C22AF51C(&(Global_2543305.f_16));
				if (bParam5)
				{
					unk_0x3451E7FFDF0EF375(iParam2, 70);
				}
				else
				{
					unk_0xF00CED653959DE03(iParam2);
				}
				unk_0x5BB4D22B8B03A30B();
				unk_0xD4D85E4148B638AD();
			}
		}
		unk_0x3DBF4ED80996A17A(76, 66);
		unk_0xEACE371867DDB554(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0xBCECE9335F976364(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0x6E6485C88690115F(15);
			Global_17236.f_7207 = 0;
		}
		unk_0xA2050119A0AD6EF1();
		if (Global_17236.f_4332)
		{
			unk_0x3DBF4ED80996A17A(82, 66);
			unk_0xEACE371867DDB554(0f, 0f, 0f, 0f);
			unk_0x029823681D10A10E(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xA2050119A0AD6EF1();
		}
		else
		{
			unk_0x2D8953D6CEBE69D2(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_334(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_335(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_335(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_336();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_336()
{
	return Global_1312737;
}

int func_337()
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_338())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xA5D9670641C54F6B(&Var0);
		if (Global_14338 == 0)
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

int func_338()
{
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_339(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x39F91E7F4F162E9C(1, iParam2, iParam3, iParam4, &uVar0);
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
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_340(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x031ABF27ACAA1595(0);
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x17D48E7FE375FDFA(2);
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
	unk_0x4C5BE63E1D2CAFE8(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_341(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xF00CED653959DE03(uParam3);
	unk_0xF00CED653959DE03(uParam4);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, 0);
}

float func_342(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x602102324604D96B(sParam0))
	{
		if (unk_0xFD340785ADF8CFB7(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_343();
	unk_0xAA01A6DC6F359160(sParam0);
	unk_0xF00CED653959DE03(uParam1);
	unk_0xF00CED653959DE03(uParam2);
	return unk_0x6ECFBEBF963B31D0(1);
}

void func_343()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x031ABF27ACAA1595(0);
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
	unk_0x4C5BE63E1D2CAFE8((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_344(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x405224591DF02025((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_345(bool bParam0, bool bParam1)
{
	if (Global_2422140.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x37F9A426FBCF4AF2() || (func_347(8, -1) && func_346() != 65)) || (unk_0x5DC6DEEB4DB569FB() != 0 && !bParam1)) || (unk_0xED20CB1F5297791D() && !bParam0)) || unk_0x4A914DA7CB878095()) || Global_68505) || Global_17236.f_7206) || unk_0xF0451C6FF481E814()) || Global_90014.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	return Global_1315832;
}

bool func_347(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

int func_348(int iParam0, bool bParam1)
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

int func_349(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x3653C46DD33107D5(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_373(0) == 1 && Global_2543381 == iParam1)
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

void func_350(var uParam0)
{
	if (!func_398(uParam0))
	{
		func_412(uParam0);
	}
}

int func_351(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3653C46DD33107D5(2))
	{
		fVar0 = unk_0x51790FCCF27A8664(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x2503EB2EA811EC9A(2, 190)) || unk_0x3BFD60A58E503C0D(2, 190))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

void func_352(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_324(0);
	unk_0x39F91E7F4F162E9C(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_368(uVar0, uVar1, uVar2, uVar3, 1);
	func_367(1, 2, 0, 0, 0);
	func_366(1, 2, 1, 1, 1);
	func_365(0, 1, 0, 0, 0);
	func_364("DARTS_TITLE");
	func_362(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_359(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, func_348(uParam0->f_662 + 1, 1), 0);
	func_359(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, func_348(uParam0->f_664 + 1, 0), 0);
	func_355(2, 141, 141, 1);
	func_359(2, "DARTS_START", 0, 1, 0, 0);
	func_354(0);
	func_376(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_375(func_99(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_353(201, "ITEM_SELECT", -1);
	func_353(202, "IB_QUIT", -1);
}

void func_353(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF800E35ED8511D66(2, iParam0, true);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2543305, sVar0, 64);
		StringCopy(&(Global_2543305.f_16), sParam1, 16);
		Global_2543305.f_20 = iParam2;
		return;
		return;
	}
	unk_0xF73FBE4845C43B5B(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_354(int iParam0)
{
	Global_17236.f_4993 = iParam0;
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17236.f_7203 = iParam3;
	Global_17236.f_7200[0] = iParam1;
	Global_17236.f_7200[1] = iParam2;
	Global_17236.f_7204 = iParam0;
}

void func_356(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 2)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 2)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17236.f_3340[Global_17236.f_4496] = iParam1;
	Global_17236.f_4496++;
	fVar1 = func_358("NUMBER", iParam1);
	if (Global_17236.f_4352[Global_17236.f_4493])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
	{
		Global_17236.f_4345[Global_17236.f_4493] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_357("NUMBER", iParam1);
		if (fVar4 > Global_17236.f_5000[iParam0])
		{
			Global_17236.f_5000[iParam0] = fVar4;
		}
	}
	unk_0xF73FBE4845C43B5B(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 2;
}

float func_357(char* sParam0, int iParam1)
{
	if (!unk_0x73C258C68D6F55B6(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xF359FE61922AC246(0.35f, 0);
}

float func_358(char* sParam0, int iParam1)
{
	if (!unk_0x73C258C68D6F55B6(sParam0))
	{
		return 0f;
	}
	func_331(1, 1, 0, 0, 0, 0);
	unk_0xAA01A6DC6F359160(sParam0);
	unk_0xF00CED653959DE03(uParam1);
	return unk_0x6ECFBEBF963B31D0(1);
}

void func_359(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_361(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_360(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0xF73FBE4845C43B5B(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_360(char* sParam0)
{
	if (!unk_0x73C258C68D6F55B6(sParam0))
	{
	}
	return unk_0xF359FE61922AC246(0.35f, 0);
}

float func_361(char* sParam0)
{
	if (!unk_0x602102324604D96B(sParam0))
	{
		if (unk_0xFD340785ADF8CFB7(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_331(0, 1, 0, 0, 0, 0);
	unk_0xAA01A6DC6F359160(sParam0);
	return unk_0x6ECFBEBF963B31D0(1);
}

void func_362(int iParam0, char* sParam1, char* sParam2)
{
	Global_17236 = iParam0;
	func_363(29, sParam1, sParam2);
}

void func_363(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17236.f_5263[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17236.f_6048[iParam0 /*16*/]), sParam2, 64);
}

void func_364(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4352[0] = iParam0;
	Global_17236.f_4352[1] = iParam1;
	Global_17236.f_4352[2] = iParam2;
	Global_17236.f_4352[3] = iParam3;
	Global_17236.f_4352[4] = iParam4;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_368(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17236.f_7177 = iParam4;
	Global_17236.f_7173 = uParam0;
	Global_17236.f_7174 = uParam1;
	Global_17236.f_7175 = uParam2;
	Global_17236.f_7176 = uParam3;
}

int func_369(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x3653C46DD33107D5(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_373(0) == -1 && Global_2543381 == iParam1)
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_370(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3653C46DD33107D5(2))
	{
		fVar0 = unk_0x51790FCCF27A8664(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x2503EB2EA811EC9A(2, 189))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_371(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3653C46DD33107D5(2))
	{
		fVar0 = unk_0x51790FCCF27A8664(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x2503EB2EA811EC9A(2, 187))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_372(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3653C46DD33107D5(2))
	{
		fVar0 = unk_0x51790FCCF27A8664(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x2503EB2EA811EC9A(2, 188))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_373(float fParam0)
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
	fVar2 = (fVar0 + Global_17235);
	fVar1 = (Global_17236.f_4988 - (IntToFloat(Global_17236.f_4990) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x3DBF4ED80996A17A(76, 84);
	unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
	unk_0xB122338EDDC15358(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB122338EDDC15358(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xA2050119A0AD6EF1();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_2543375 >= fVar0 && Global_2543375 < fVar5)
		{
			return -999;
		}
	}
	if (Global_2543375 >= fVar0 && Global_2543375 < fVar4)
	{
		return -1;
	}
	if (Global_2543375 >= fVar4 && Global_2543375 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_374()
{
	if (unk_0x3653C46DD33107D5(2))
	{
		return unk_0x3BFD60A58E503C0D(2, 237);
	}
	return 0;
}

void func_375(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_3969), sParam0, 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = iParam1;
	Global_17236.f_4044 = unk_0x4F67E8ECA7D3F667();
	Global_17236.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
}

void func_376(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = iParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2543305.f_21), "", 16);
	}
}

int func_377()
{
	if (unk_0x3653C46DD33107D5(2))
	{
		if (Global_2543381 > -1)
		{
			if (unk_0xCCBB0BB9790E1F47(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1)
{
	if (!unk_0x3653C46DD33107D5(2))
	{
		return 0;
	}
	if (unk_0x535384D6067BA42E() || unk_0xF0451C6FF481E814())
	{
		return 0;
	}
	unk_0xF12E4CCAF249DC10();
	if (Global_2543381 == -6)
	{
		unk_0x7F5858AAB5A58CCE(4);
		if (iParam0 && unk_0x2503EB2EA811EC9A(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2543381 = -1;
			return 0;
		}
	}
	if (((Global_2543381 > -1 || Global_2543381 == -3) || Global_2543381 == -2) || unk_0xA6CF4467861EF45A())
	{
		unk_0x7F5858AAB5A58CCE(1);
		return 0;
	}
	if (Global_2543381 == -1 && iParam0)
	{
		if (unk_0x2503EB2EA811EC9A(2, 237))
		{
			unk_0x7F5858AAB5A58CCE(4);
			Global_2543381 = -6;
			return 1;
		}
		else
		{
			unk_0x7F5858AAB5A58CCE(3);
			return 0;
		}
	}
	unk_0x7F5858AAB5A58CCE(1);
	return 0;
}

void func_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x3653C46DD33107D5(2))
	{
		Global_2543381 = -1;
		return;
	}
	unk_0xBF08CEA6D7A3EB21(1);
	fVar0 = Global_17233;
	fVar2 = (fVar0 + Global_17235);
	fVar3 = Global_17236.f_4988;
	fVar1 = (Global_17236.f_4988 - (IntToFloat(Global_17236.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17236.f_4990 < 1)
	{
		fVar1 = (Global_17236.f_4988 - 0.034722f);
	}
	unk_0x3DBF4ED80996A17A(76, 84);
	unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xB122338EDDC15358(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB122338EDDC15358(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xA2050119A0AD6EF1();
	func_381();
	if (Global_2543381 == -6)
	{
		return;
	}
	Global_2543381 = -1;
	fVar7 = Global_2543375;
	fVar8 = Global_2543376;
	if (Global_17236.f_4991 > Global_17236.f_4990)
	{
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= fVar3) && Global_2543376 < (fVar3 + fVar6))
		{
			Global_2543381 = -2;
			if (bParam3)
			{
				func_380(0);
			}
			return;
		}
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= (fVar3 + fVar6)) && Global_2543376 < (fVar3 + 0.034722f))
		{
			Global_2543381 = -3;
			if (bParam3)
			{
				func_380(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17236.f_4991 == -1)
		{
			Global_2543381 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17236.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x3DBF4ED80996A17A(76, 84);
				unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
				func_344(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17235, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xA2050119A0AD6EF1();
			}
		}
		Global_2543381 = Global_17236.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2543381 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2543381 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2543381 = -4;
		return;
	}
	Global_2543381 = -1;
}

void func_380(bool bParam0)
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
	fVar0 = Global_17233;
	fVar1 = Global_17236.f_4988;
	unk_0x3DBF4ED80996A17A(76, 84);
	unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
	if (Global_2543381 == -2)
	{
		func_344(fVar0, fVar1, Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2543381 == -3)
	{
		func_344(fVar0, (fVar1 + fVar2), Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xA2050119A0AD6EF1();
}

void func_381()
{
	Global_2543377 = Global_2543375;
	Global_2543378 = Global_2543376;
	Global_2543375 = unk_0x07B8F478FA169996(2, 239);
	Global_2543376 = unk_0x07B8F478FA169996(2, 240);
	Global_2543379 = (Global_2543375 - Global_2543377);
	Global_2543380 = (Global_2543376 - Global_2543378);
}

float func_382(float fParam0)
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

void func_383(var uParam0)
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
	func_324(0);
	unk_0x39F91E7F4F162E9C(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_368(uVar0, uVar1, uVar2, uVar3, 1);
	func_367(1, 2, 0, 0, 0);
	func_366(1, 2, 1, 1, 1);
	func_365(0, 1, 0, 0, 0);
	func_364("DARTS_TITLE");
	func_362(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_359(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, 1, 0);
	func_359(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, 1, 0);
	func_359(2, "DARTS_START", 0, 1, 0, 0);
	func_355(2, 141, 141, 1);
	func_354(0);
	func_376(0, 1, 1);
	func_375("DARTS_LEGD", 0, 0);
	func_384();
	func_353(201, "ITEM_SELECT", -1);
	func_353(202, "IB_QUIT", -1);
}

void func_384()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		unk_0x683F977B44C6CE9E(0.325f, 0.3f);
	}
}

int func_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_408() && unk_0x4F67E8ECA7D3F667() >= iLocal_314 + 1000) && *iParam0 != 8)
	{
		if (!unk_0xF5472C80DF2FF847() && !unk_0x02F39BEFE7B88D00())
		{
			unk_0x40C719A5E410B9E4(500);
		}
	}
	if (unk_0xF5472C80DF2FF847() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_30)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_314 = unk_0x4F67E8ECA7D3F667();
						func_393(uParam1->f_1, uParam1->f_4, func_395(2), func_394(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_265(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_252(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_30++;
							func_412(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_DOUBLE_T"))
					{
						func_396("DARTS_DOUBLE_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						unk_0x0BFC2C61FB5B6CA1(1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(3), func_394(0), 1000);
						iLocal_30 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_30)
			{
				case 0:
					if (!unk_0x578F8F1CAA17BD2B(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_265(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								func_412(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_TRIPLE_T"))
					{
						func_396("DARTS_TRIPLE_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						unk_0x0BFC2C61FB5B6CA1(1);
						func_393(uParam1->f_1, uParam1->f_4, func_395(4), func_394(0), 1000, 0);
						iLocal_30 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_30)
			{
				case 0:
					if (!unk_0x578F8F1CAA17BD2B(uLocal_126))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_265(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x8DA75EC60D972359(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								func_412(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_BULL_T"))
					{
						func_396("DARTS_BULL_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						unk_0x0BFC2C61FB5B6CA1(1);
						unk_0xB906B139171B1845(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(5), func_394(1), 1500);
						iLocal_30 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x578F8F1CAA17BD2B(uLocal_127) && !func_282("DARTS_DBL_WIN"))
			{
				func_396("DARTS_DBL_WIN", -1);
			}
			if (func_401(uParam5) > 6f)
			{
				func_412(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xB906B139171B1845(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0x8B15AE2987C1AC8F(uLocal_119, uLocal_127, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x578F8F1CAA17BD2B(uLocal_119))
			{
				iLocal_30 = 0;
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x00686F7B3723B82F();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_386(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0xF5472C80DF2FF847())
			{
				iLocal_30 = 0;
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x00686F7B3723B82F();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_386(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x87295BCA613800C8(uLocal_119, 1);
				unk_0x6A053CF596F67DF7(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_386(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		unk_0xF6A103413A202C37(*uParam0, Var0, 1, 0, 0, 1);
		unk_0x0AD8BB0ADAFEDEE5(uParam0);
		unk_0x931914268722C263(uParam0);
	}
}

void func_387(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0xCA1B30A3357C71F1(uLocal_127);
	unk_0x27666E5988D9D429(uLocal_127, 35f);
	unk_0xF9EE7D419EE49DE6(uLocal_127, unk_0x9145DDB13546ED45(Param0, fParam3, Param4));
	unk_0x63DFA6810AD78719(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0x8B15AE2987C1AC8F(uLocal_127, uLocal_126, iParam10, 1, 1);
}

int func_388(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_398(&(uParam0->f_2)))
	{
		func_412(&(uParam0->f_2));
	}
	unk_0xB5F6539FA93ECBF6(14);
	if (!bParam2)
	{
		unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x2503EB2EA811EC9A(2, 201))
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
		func_399(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_390(iParam5);
	unk_0xF6EA2AC68E7C7293(*uParam0, "RESET_MOVIE");
	unk_0xD4D85E4148B638AD();
	unk_0xF6EA2AC68E7C7293(*uParam0, sVar0);
	unk_0x164FB269C22AF51C("STRING");
	unk_0xB07108C8201910EA(iParam4);
	unk_0x734AB59A7DBD1DAA(sParam1);
	unk_0x5BB4D22B8B03A30B();
	if (!unk_0x2CF12F9ACF18F048(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0xA734310215BCF528(100);
		unk_0x58279158C52AF361(true);
	}
	unk_0xD4D85E4148B638AD();
	if (bParam6)
	{
		unk_0xF6EA2AC68E7C7293(*uParam0, "TRANSITION_UP");
		unk_0xBC38230AD29DBDD4(iParam7);
		unk_0xD4D85E4148B638AD();
	}
	func_412(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_390(int iParam0)
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

void func_391()
{
	unk_0x87295BCA613800C8(uLocal_119, 1);
	unk_0x33281167E4942E4F(1, false, 3000, 1, 0, 0);
	if (unk_0x63EFCC7E1810B8E6(uLocal_126))
	{
		unk_0x87295BCA613800C8(uLocal_126, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_121))
	{
		unk_0x87295BCA613800C8(uLocal_121, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_122))
	{
		unk_0x87295BCA613800C8(uLocal_122, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_123))
	{
		unk_0x87295BCA613800C8(uLocal_123, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_124))
	{
		unk_0x87295BCA613800C8(uLocal_124, 0);
	}
	if (unk_0x63EFCC7E1810B8E6(uLocal_125))
	{
		unk_0x87295BCA613800C8(uLocal_125, 0);
	}
}

char* func_392(int iParam0)
{
	if (iLocal_325 == 1)
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
	else if (iLocal_325 == 2)
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

void func_393(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0xCA1B30A3357C71F1(uLocal_126);
	unk_0x27666E5988D9D429(uLocal_126, 35f);
	unk_0xF9EE7D419EE49DE6(uLocal_126, unk_0x9145DDB13546ED45(Param0, fParam3, Param4));
	unk_0x63DFA6810AD78719(uLocal_126, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0x87295BCA613800C8(uLocal_126, 1);
	}
	else
	{
		unk_0x8B15AE2987C1AC8F(uLocal_126, uLocal_127, iParam10, 1, 1);
	}
}

Vector3 func_394(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_395(int iParam0)
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

void func_396(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

int func_397(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(func_475()))
	{
		func_4(func_475(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_398(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

void func_399(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_400(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_6(iParam2), 1);
}

float func_401(var uParam0)
{
	if (func_398(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_402(var uParam0)
{
	if (!func_398(uParam0))
	{
		func_350(uParam0);
	}
	else
	{
		func_412(uParam0);
	}
}

void func_403()
{
	Global_14558 = 0;
	func_404();
}

void func_404()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_405(int iParam0)
{
	if (Global_14551)
	{
		func_407(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_406())
	{
		Global_14393.f_1 = 3;
	}
}

int func_406()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_407(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_408()
{
	if (unk_0x535384D6067BA42E())
	{
		return 0;
	}
	if (unk_0xCCBB0BB9790E1F47(0, 18) || unk_0xCCBB0BB9790E1F47(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_409(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x2F96E7720B0B19EA();
	if (unk_0xD42BD6EB2E0F1677(uVar0))
	{
		if (!func_410(iVar0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && unk_0xC057F02B837A27F6(iVar0, unk_0x096275889B8E0EE0(), Local_283, 0, 1, 0))
			{
				unk_0x2B1738AD749BFC75(iVar0);
				unk_0xF66F820909453B8C(iVar0, 0, 0);
				unk_0x1794B4FCC84D812F(iVar0, 0);
				unk_0x7D9EFB7AD6B19754(iVar0, 1);
				unk_0xDC19C288082E586E(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (unk_0x7D5B1F88E7504BBA(iParam0))
		{
			return 1;
		}
		else if (!unk_0xB86D29B10F627379(iParam0, 0))
		{
			if (!unk_0x1BD7C371CE257C3E(iParam0))
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

void func_411(var uParam0, int iParam1)
{
	iParam1++;
	unk_0xF6EA2AC68E7C7293(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0xA734310215BCF528(iParam1);
	unk_0xD4D85E4148B638AD();
}

void func_412(var uParam0)
{
	func_66(uParam0, 0f);
}

void func_413(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

void func_414(var uParam0, var uParam1, char* sParam2)
{
	unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_415(uParam1);
	func_415(sParam2);
	unk_0xD4D85E4148B638AD();
}

void func_415(char* sParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

void func_416(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(func_475()) && !unk_0x6CFF81397164A1D3(func_475()))
	{
		unk_0x5BEB6DE8CD28F036(func_475());
	}
	else
	{
		if (unk_0xD42BD6EB2E0F1677(uParam8->f_5) && !unk_0x6CFF81397164A1D3(uParam8->f_5))
		{
			unk_0xDC19C288082E586E(uParam8->f_5, 1, 1);
			uLocal_286[1] = uParam8->f_5;
			unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
		}
		else if (func_418(uParam7))
		{
			unk_0x0F1ABE64C3C18E5A(uLocal_286[1]);
		}
		else
		{
			uLocal_286[1] = unk_0x9066DFD4D92E6773(26, iLocal_322, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0xD9D1CDBF3464DCDF(uLocal_286[1], "Darts_name"))
		{
			iVar0 = unk_0x44DB62727762FD9B(uLocal_286[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_382 = func_421("RAYMOND");
				iLocal_383 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_382 = func_421("JOHAN");
				iLocal_383 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_382 = func_421("STAN");
				iLocal_383 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_382 = func_421("VINCE");
				iLocal_383 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_382 = func_421("KRISTY");
				iLocal_383 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_382 = func_421("MARLENE");
				iLocal_383 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_382 = func_421("LORIE");
				iLocal_383 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_382 = func_421("SHELLEY");
				iLocal_383 = -863218904;
			}
		}
		unk_0xE88F4D7F52A6090F(uLocal_286[1], "Darts_name", iLocal_383);
	}
	iVar1 = unk_0xDA76A9F39210D365(uLocal_286[1]);
	func_417(iVar1);
	unk_0xFE920E72A4B34285(uLocal_286[1], uLocal_286[0], 0);
	unk_0xFE920E72A4B34285(uLocal_286[0], uLocal_286[1], 0);
}

void func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_101 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_101 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_101 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_101 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_101 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_418(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xD998C3CE9F8EB5C2(unk_0x096275889B8E0EE0(), uParam0, -1))
	{
		if (!unk_0x6CFF81397164A1D3((*uParam0)[iVar0]))
		{
			if ((((((unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0xDA76A9F39210D365((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xDC19C288082E586E((*uParam0)[iVar0], 1, 1);
				uLocal_286[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 3;
		while (iVar0 <= (147 - 1))
		{
			if (func_420(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_420(int iParam0)
{
	if (!func_78(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_421(char* sParam0)
{
	if (unk_0xDB917DA5C6835FCC() == 7)
	{
		if (unk_0xD3852F22AB713A1F(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xD3852F22AB713A1F(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_422(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		uParam0->f_4 = unk_0xC230DD956E2F5507(*uParam0);
	}
	if (!bParam3)
	{
		func_424(uParam1, uParam0);
	}
	Local_81 = { 0f, (-2.3685f + fLocal_54), 0.1f };
	Local_81 = { Local_81 + Local_55 };
	Local_78 = { unk_0x9145DDB13546ED45(uParam0->f_1, uParam0->f_4, Local_81) };
	func_423(uParam2, uParam0);
}

void func_423(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_55 };
	*uParam0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_424(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_54), -1.7272f) };
	uParam0->f_3 = { unk_0x9145DDB13546ED45(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_54), -1.7272f) };
}

int func_425(var uParam0, var uParam1)
{
	if (!unk_0x9C623A934CD60291("SCRIPT\DARTS", 0))
	{
		return 0;
	}
	if (!unk_0x9C623A934CD60291("SCRIPT\FAMILY1_2", 0))
	{
		return 0;
	}
	if ((((((((((((!unk_0x1283B8B89DD5D1B6(iLocal_27) || !unk_0x1283B8B89DD5D1B6(iLocal_28)) || !unk_0x1283B8B89DD5D1B6(iLocal_59)) || !unk_0x1283B8B89DD5D1B6(iLocal_322)) || !unk_0x64BAE9BE701E6C19(*uParam0)) || !unk_0x64BAE9BE701E6C19(uParam1->f_645)) || !unk_0x64BAE9BE701E6C19(uParam1->f_57)) || !unk_0x64BAE9BE701E6C19(uParam1->f_62)) || !unk_0x6C01088174B23EE3(3)) || !unk_0x54D6900929CCF162("Darts")) || !unk_0x27FF6FE8009B40CA(sLocal_384)) || !unk_0x27FF6FE8009B40CA(sLocal_385)) || !func_426(0, -1))
	{
		return 0;
	}
	return 1;
}

bool func_426(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_321(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x7C11D0C2EFACD80D(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0xA25C10B66B1AA911(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC1BA29DF5631B0F8("CommonMenu", 0);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x54D6900929CCF162("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_427(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_427(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x64BAE9BE701E6C19(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x64BAE9BE701E6C19(*uParam0))
					{
						uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x64BAE9BE701E6C19(*uParam0))
			{
				uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x64BAE9BE701E6C19(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_428(var uParam0, var uParam1)
{
	unk_0xFA28FE3A6246FC30(iLocal_27);
	unk_0xFA28FE3A6246FC30(iLocal_28);
	unk_0xFA28FE3A6246FC30(iLocal_59);
	unk_0xFA28FE3A6246FC30(iLocal_322);
	unk_0xC1BA29DF5631B0F8("Darts", 0);
	unk_0xC1BA29DF5631B0F8("ShopUI_Title_Darts", 0);
	unk_0xA862A2AD321F94B4(sLocal_384);
	unk_0xA862A2AD321F94B4(sLocal_385);
	*uParam0 = unk_0x67D02A194A2FC2BD("darts_scoreboard");
	uParam1->f_645 = func_179();
	uParam1->f_57 = func_430();
	uParam1->f_62 = func_429();
	unk_0x7C11D0C2EFACD80D("DARTS", 3);
}

var func_429()
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

var func_430()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_431(var uParam0, int iParam1, struct<3> Param2, float fParam5)
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
	if (!func_432(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0x9145DDB13546ED45(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_432(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_433(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_60.f_0 = 0.5f;
	Local_60.f_1 = 0.5f;
	if (unk_0x7A821A102AEDC6EC())
	{
		Local_60.f_2 = 0.05f;
		Local_60.f_3 = 0.095f;
	}
	else
	{
		Local_60.f_2 = 0.065f;
		Local_60.f_3 = 0.09f;
	}
	Local_60.f_4 = 255;
	Local_60.f_5 = 250;
	Local_60.f_6 = 255;
	Local_60.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_60.f_4 = 255;
		Local_60.f_5 = 255;
		Local_60.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_60.f_4 = 255;
		Local_60.f_5 = 255;
		Local_60.f_6 = 255;
	}
	Local_60.f_8 = 0f;
	Local_69.f_0 = 0f;
	Local_69.f_1 = 0f;
	Local_69.f_2 = 0.061f;
	Local_69.f_3 = 0.105f;
	Local_69.f_4 = 200;
	Local_69.f_5 = 45;
	Local_69.f_6 = 40;
	Local_69.f_7 = 255;
	Local_69.f_8 = 0f;
}

void func_434(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_27;
	}
	else
	{
		uParam0->f_1 = iLocal_28;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_435()
{
	int iVar0;
	
	unk_0x8F12E93648A9BBA9();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_436(struct<3> Param0, float fParam3)
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
	
	fLocal_133 = unk_0x1C672C3C3855417F(0);
	fVar21 = 30f;
	fVar21 = func_382(fLocal_133);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0x7A821A102AEDC6EC())
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
	Var3 = { unk_0x9145DDB13546ED45(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0x9145DDB13546ED45(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0x9145DDB13546ED45(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0x9145DDB13546ED45(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_119 = unk_0x98B99B9F27E2D60B(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_120 = unk_0x98B99B9F27E2D60B(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_121 = unk_0x98B99B9F27E2D60B(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_122 = unk_0x98B99B9F27E2D60B(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_123 = unk_0x98B99B9F27E2D60B(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_124 = unk_0x98B99B9F27E2D60B(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0x98B99B9F27E2D60B(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0x98B99B9F27E2D60B(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0x98B99B9F27E2D60B(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0x27666E5988D9D429(uLocal_121, 43.35f);
	unk_0x27666E5988D9D429(uLocal_122, 42.35f);
	unk_0xF9A7BCF5D050D4E7(uLocal_121, "HAND_SHAKE", 0.1f);
	unk_0xF9A7BCF5D050D4E7(uLocal_122, "HAND_SHAKE", 0.1f);
}

void func_437(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0xD42BD6EB2E0F1677(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_32[0] = 20;
	iLocal_32[10] = 3;
	iLocal_32[1] = 1;
	iLocal_32[11] = 19;
	iLocal_32[2] = 18;
	iLocal_32[12] = 7;
	iLocal_32[3] = 4;
	iLocal_32[13] = 16;
	iLocal_32[4] = 13;
	iLocal_32[14] = 8;
	iLocal_32[5] = 6;
	iLocal_32[15] = 11;
	iLocal_32[6] = 10;
	iLocal_32[16] = 14;
	iLocal_32[7] = 15;
	iLocal_32[17] = 9;
	iLocal_32[8] = 2;
	iLocal_32[18] = 12;
	iLocal_32[9] = 17;
	iLocal_32[19] = 5;
	iLocal_32[20] = 20;
}

void func_438()
{
	Global_17098.f_6 = 1;
}

void func_439(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&Global_24688, iParam0);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_24688, iParam0);
	}
}

var func_440(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_441(iParam0, iParam1);
	unk_0x380F22FED8D528A4(uVar1, &uVar0, -1);
	return uVar0;
}

var func_441(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_442(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_442(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_443(bool bParam0)
{
	if (bParam0)
	{
		func_444();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_37(0))
		{
			func_405(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_444()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_445(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x8D61ACC859220793(1);
	func_244(8);
	func_297();
	if (bLocal_296)
	{
		func_463(&uLocal_312);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_386(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x4AD96EF928BD4F9A(iLocal_27);
	unk_0x4AD96EF928BD4F9A(iLocal_28);
	if (!unk_0x6CFF81397164A1D3(uLocal_286[0]) && !unk_0x6CFF81397164A1D3(uLocal_286[1]))
	{
		unk_0x939C1E5F1840360D(uLocal_286[0]);
		unk_0x939C1E5F1840360D(uLocal_286[1]);
	}
	func_462();
	unk_0x4AD96EF928BD4F9A(iLocal_59);
	func_461();
	func_460(uParam1->f_645);
	func_459(&(uParam1->f_57));
	if (!unk_0x7D5B1F88E7504BBA(func_475()))
	{
		unk_0xC17B8A7D48C194DB(func_475(), func_458());
		func_457(iLocal_320, iLocal_321);
	}
	else
	{
		func_455(&(uLocal_286[1]));
	}
	func_443(0);
	func_454(uParam2);
	func_34(0);
	unk_0x6E6485C88690115F(15);
	if (unk_0x3758E345C82DAFF2())
	{
		if (iParam0->f_460 && !iLocal_310)
		{
			func_453(190, 0);
		}
	}
	func_89();
	func_435();
	func_81(&(uParam1->f_72));
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_303)
	{
		func_449(130, 0, 0);
		func_446();
	}
	func_439(23, 0);
	unk_0x5E8B6D17FF91CD59();
}

void func_446()
{
	func_447();
}

int func_447()
{
	if (func_448(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_448(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_449(int iParam0, int iParam1, int iParam2)
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
		func_452((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_450();
	}
}

void func_450()
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_71(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_451() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_447();
				}
			}
		}
	}
}

int func_451()
{
	return Global_24444;
}

int func_452(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_336();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_453(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0x3758E345C82DAFF2())
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
	if (func_209(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		unk_0x4DFFD3436F0150C3(103, iLocal_150[1], 0f);
		unk_0x4DFFD3436F0150C3(99, iLocal_150[2], 0f);
		unk_0x4DFFD3436F0150C3(109, iLocal_150[3], 0f);
		unk_0x4DFFD3436F0150C3(106, iLocal_150[5], 0f);
		unk_0x4DFFD3436F0150C3(2, iLocal_150[10], 0f);
		unk_0x4DFFD3436F0150C3(107, iLocal_150[8], 0f);
		unk_0x4DFFD3436F0150C3(116, iLocal_150[6], 0f);
	}
}

void func_454(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB0FB6CFAA5A1C833())
		{
			unk_0xF6EA2AC68E7C7293(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x58279158C52AF361(false);
			unk_0xD4D85E4148B638AD();
		}
		unk_0x6215C0F9FFF76BAD(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x5CB83156AA038F95(0);
		uParam0->f_564 = 0;
	}
	if (!Global_68513)
	{
		if (!unk_0x2E9C3FCB6798F397(unk_0x47E385B0D957C8D4()))
		{
			if (!Global_68514)
			{
				if (unk_0xF5472C80DF2FF847() && !func_448(0))
				{
					unk_0x6A053CF596F67DF7(800);
				}
			}
		}
	}
	func_34(0);
}

void func_455(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0) && !unk_0x6CFF81397164A1D3(*uParam0))
	{
		unk_0x5EC7E18324A7D03D(&uLocal_323);
		unk_0xF4BF3E3D7FE56705(&uLocal_323);
		if (unk_0xD42BD6EB2E0F1677(uLocal_286[0]))
		{
			unk_0xD4648EA39998A07B(0, uLocal_286[0], 8000, 2049, 3);
		}
		unk_0xD984B17E68AE4E17(0, 1000);
		if (bLocal_301)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97314, 10))
			{
				unk_0x14A4402A811D03C0(0, func_456(iLocal_325 == 2, Local_366, Local_372), 1f, 20000, 0.25f, 0, func_108(iLocal_325 == 2, fLocal_376, fLocal_378));
			}
			else
			{
				unk_0x14A4402A811D03C0(0, func_456(iLocal_325 == 2, Local_363, Local_369), 1f, 20000, 0.25f, 0, func_108(iLocal_325 == 2, fLocal_375, fLocal_377));
			}
			unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x14A4402A811D03C0(0, func_456(iLocal_325 == 2, Local_363, Local_369), 1f, 20000, 0.25f, 0, func_108(iLocal_325 == 2, 172.6813f, 142.6717f));
			unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0xFF7E39890B2840DD(uLocal_323);
		unk_0xD59C10966EB589EA(*uParam0, uLocal_323);
		unk_0x2AD4789CBFD829EC(*uParam0, 1);
	}
	unk_0x4AD96EF928BD4F9A(iLocal_322);
}

Vector3 func_456(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_457(int iParam0, var uParam1)
{
	if (Global_86193 == iParam0)
	{
		Global_86194 = Global_86193;
		Global_86195 = uParam1;
		Global_86193 = 23;
	}
}

var func_458()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

void func_459(var uParam0)
{
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		unk_0x6215C0F9FFF76BAD(uParam0);
		*uParam0 = 0;
	}
}

void func_460(var uParam0)
{
	unk_0x6215C0F9FFF76BAD(&uParam0);
}

void func_461()
{
	unk_0x0BFC2C61FB5B6CA1(1);
	unk_0x163600D6E136C9F8(0);
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
	unk_0x1B3DA717B9AFF828(1);
}

void func_462()
{
	if (unk_0xD42BD6EB2E0F1677(uLocal_58))
	{
		unk_0x931914268722C263(&iLocal_58);
	}
}

void func_463(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xD42BD6EB2E0F1677(uVar0))
	{
		if (!func_410(iVar0))
		{
			unk_0xF66F820909453B8C(iVar0, 1, 0);
			unk_0x1794B4FCC84D812F(iVar0, 1);
			unk_0x7D9EFB7AD6B19754(iVar0, 0);
		}
	}
}

void func_464()
{
	int iVar0;
	
	if (unk_0xE97BD36574F8B0A6("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97353.f_7341 || func_448(0))
	{
		if (!func_472())
		{
			iVar0 = func_471();
			if (iVar0 != -1)
			{
				if (!func_466(iVar0))
				{
					return;
				}
				unk_0xF73FBE4845C43B5B(&(Global_81119[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_465();
		}
	}
}

void func_465()
{
	Global_89997 = 1;
	if (unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1))
	{
		if (unk_0x2CF12F9ACF18F048(&Global_68477))
		{
			switch (func_75())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0x2CF12F9ACF18F048(&Global_68477))
		{
			switch (func_75())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		unk_0xF73FBE4845C43B5B(&(Global_89962.f_20), 25);
	}
}

int func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_465();
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		unk_0x392050BA6DFC37B6(5000);
	}
	iVar0 = Global_81119[iParam0 /*5*/];
	iVar1 = Global_68514.f_109[iVar0 /*4*/];
	func_470(iVar1, 1);
	unk_0xCAB3E11DE010E86F(unk_0x217E9DC48139933D());
	unk_0xA50674CBC79771CC(unk_0x217E9DC48139933D());
	func_467(&(Global_97353.f_1729.f_539), iVar1);
	if (Global_84542 == Global_89999)
	{
		Global_97353.f_7341.f_328[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x4ED6CFDFE8D4131A(Global_81155[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			unk_0xDF3B5846DE5904AF(0);
		}
	}
	Global_97353.f_7341.f_328[iVar1 /*6*/].f_2++;
	Global_84542 = Global_89999;
	if (iParam0 == -1)
	{
		if (Global_97353.f_7341)
		{
		}
		return 0;
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_81119[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_81119[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_467(var uParam0, int iParam1)
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
		iVar1 = Global_97353.f_16787[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_469(Global_97353.f_16787[iVar0], &Var2, &fVar5))
			{
				Global_97353.f_16787[iVar0] = 318;
				func_468(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_468(var uParam0)
{
	*uParam0 = -15;
}

int func_469(int iParam0, var uParam1, float fParam2)
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
			return func_469(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_469(8, uParam1, fParam2);
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

void func_470(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

int func_471()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_81119[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_472()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

void func_473(int iParam0, bool bParam1)
{
	if (unk_0x6CFF81397164A1D3(func_475()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x353BB517ED4FBC95(func_475(), func_458()))
		{
			return;
		}
		if (!unk_0x6CFF81397164A1D3(func_474()))
		{
			if (!unk_0x353BB517ED4FBC95(func_474(), func_458()))
			{
				return;
			}
		}
	}
	if (Global_86193 == 23)
	{
		Global_86195 = 10;
		Global_86193 = iParam0;
	}
}

var func_474()
{
	return Global_86200;
}

int func_475()
{
	return Global_86199;
}

void func_476()
{
	if (iLocal_281 == 1)
	{
		return;
	}
	func_297();
	unk_0x7F7FCF431E93AE1E("Darts");
	iLocal_281 = 1;
}

int func_477(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


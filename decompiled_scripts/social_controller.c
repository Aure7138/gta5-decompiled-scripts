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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 8;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 8;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	bool bLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	struct<6> Local_143 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_149 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162[3] = { 0, 0, 0 };
	int iLocal_166[3] = { 0, 0, 0 };
	int iLocal_170[3] = { 0, 0, 0 };
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188[3] = { 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_200[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
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
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
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
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 1;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = -1;
	var uLocal_303 = -1;
	var uLocal_304 = 2;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 2;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
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
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
#endregion

void __EntryFunction__()
{
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_72 = 1;
	iLocal_73 = 65;
	iLocal_74 = 49;
	iLocal_75 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_97 = -0.05f;
	fLocal_98 = 0.92f;
	fLocal_99 = 1.94f;
	fLocal_100 = 2.99f;
	fLocal_101 = 3.7f;
	Local_103 = { -0.4f, 0.96f, 0.85f };
	fLocal_106 = 0.95f;
	Local_107 = { 0f, 2f, 2.5f };
	fLocal_110 = 1.75f;
	Local_111 = { 0f, 0f, 120f };
	fLocal_114 = 35.5f;
	iLocal_124 = -1;
	iLocal_125 = -1;
	iLocal_126 = 21;
	iLocal_128 = 2;
	iLocal_136 = 1;
	if (unk_0xB9B05E900D325C36(32))
	{
		unk_0xBEE2834559A8897A();
	}
	unk_0x11103F6657466FF8();
	iLocal_161 = unk_0x31CD6E9F83C10233();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_486();
		func_447();
		switch (iLocal_127)
		{
			case 0:
				func_446();
				break;
			
			case 1:
				func_186();
				func_181();
				func_29(&uLocal_209);
				func_26();
				func_10();
				if (unk_0x27CA09C6DFAB1E79())
				{
					func_2();
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()
{
	unk_0xBEE2834559A8897A();
}

void func_2()
{
	if (!func_9(&uLocal_376))
	{
		func_8(&uLocal_376, 0, 0);
	}
	else if (func_7(&uLocal_376, 7200000, 0))
	{
		if (func_6(0))
		{
			if (func_5(unk_0x3D35F9864E4640B1()))
			{
				if (!func_4())
				{
					func_3(&uLocal_376);
					unk_0xC8EBA5D7FC75C1C0("SC_PLAY_REM");
					unk_0xC59BF654690FB5DC(0, 1);
				}
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_4()
{
	return Global_1312853;
}

bool func_5(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 6);
}

bool func_6(int iParam0)
{
	return Global_1767185.f_16[iParam0 /*44*/].f_4;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar24;
	int iVar25;
	int iVar26;
	char* sVar27;
	struct<8> Var28;
	
	switch (iLocal_380)
	{
		case 0:
			if ((Global_101138 && !iLocal_378) && !Global_262145.f_9326)
			{
				iLocal_381 = -1;
				iVar0 = 0;
				while (iVar0 < Global_101126)
				{
					if (!unk_0x0BD3CCFB6C6CFA91(&(Global_101126[iVar0 /*4*/])))
					{
						iLocal_381 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_381 != -1)
				{
					iLocal_380++;
				}
				else
				{
					Global_101138 = 0;
				}
			}
			if (((!Global_101138 && unk_0x27CA09C6DFAB1E79()) && func_23(3763, -1, -1)) && (!iLocal_383 || unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_384)) > 25000))
			{
				uLocal_385[0] = func_20(1362, -1, -1);
				uLocal_385[1] = func_20(1363, -1, -1);
				uLocal_385[2] = func_20(1364, -1, -1);
				uLocal_385[3] = func_20(1365, -1, -1);
				uLocal_385[4] = func_20(1366, -1, -1);
				uLocal_385[5] = func_20(1367, -1, -1);
				uLocal_385[6] = func_20(1368, -1, -1);
				uLocal_385[7] = func_20(1369, -1, -1);
				func_19(&sVar1, &uLocal_385, -1);
				func_16(&sVar1);
				iLocal_383 = 0;
			}
			break;
		
		case 1:
			if (iLocal_382 == 0)
			{
				unk_0x411523057B1B5C5D(&(Global_101126[iLocal_381 /*4*/]), &iLocal_382);
			}
			else if (!unk_0xC4ABE79FD283FA9B(iLocal_382))
			{
				switch (unk_0xAE641F9FFE4EBDE6(iLocal_382))
				{
					case 0:
						bVar7 = false;
						iVar5 = Global_100974;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!unk_0x0BD3CCFB6C6CFA91(&(Global_100974[iVar6 /*4*/])))
							{
								if (unk_0x50B7853132D8438E(&(Global_100974[iVar6 /*4*/])) == unk_0x50B7853132D8438E(&(Global_101126[iLocal_381 /*4*/])))
								{
									bVar7 = true;
									iVar6 = iVar5 + 1;
								}
							}
							iVar6++;
						}
						if (bVar7)
						{
							iLocal_380 = 3;
						}
						else
						{
							iLocal_380 = 2;
						}
						break;
					
					default:
						iLocal_380 = 0;
						StringCopy(&(Global_101126[iLocal_381 /*4*/]), "", 16);
						break;
				}
				iLocal_382 = 0;
			}
			break;
		
		case 2:
			if (iLocal_382 == 0)
			{
				StringCopy(&Var8, "", 64);
				if (Global_101135[iLocal_381])
				{
					func_15(&Var8, "SPPlate", 0);
					func_15(&Var8, "MPPlate", 1);
				}
				else
				{
					func_15(&Var8, "SPPlate", 1);
				}
				unk_0xD691A49EA9494B59(&(Global_101126[iLocal_381 /*4*/]), &Var8, &iLocal_382);
			}
			else if (!unk_0x2D311F9B41554C53(iLocal_382))
			{
				switch (unk_0x58110C8493911994(iLocal_382))
				{
					case 0:
						iLocal_378 = 1;
						iLocal_380 = 0;
						StringCopy(&(Global_101126[iLocal_381 /*4*/]), "", 16);
						iLocal_382 = 0;
						if (unk_0x27CA09C6DFAB1E79())
						{
							func_13(3763, 0, -1, 1);
						}
						break;
					
					default:
						iLocal_382 = 0;
						iLocal_380 = 0;
						StringCopy(&(Global_101126[iLocal_381 /*4*/]), "", 16);
						if (unk_0x27CA09C6DFAB1E79())
						{
							iLocal_383 = 1;
							uLocal_384 = unk_0x898811EA80D35DE2();
						}
						break;
				}
				iLocal_382 = 0;
			}
			break;
		
		case 3:
			if (unk_0x0F89A9C10948E713(iLocal_382))
			{
				if (!unk_0x4E123259A3F8B6E7(iLocal_382))
				{
					iVar24 = -1;
					iVar25 = unk_0xA157F007907024BE(iLocal_382);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						sVar27 = unk_0x44D34E2B3B083454(iLocal_382, iVar26);
						if (!unk_0x0BD3CCFB6C6CFA91(sVar27) && unk_0x50B7853132D8438E(sVar27) == unk_0x50B7853132D8438E(&(Global_101126[iLocal_381 /*4*/])))
						{
							iVar24 = iVar26;
							iVar26 = iVar25 + 1;
						}
						iVar26++;
					}
					if (iVar24 != -1)
					{
						StringCopy(&Var28, unk_0xCA5A7D36C0BA5078(iLocal_382, iVar24), 64);
						if (Global_101135[iLocal_381])
						{
							func_15(&Var28, "SPPlate", 0);
							func_15(&Var28, "MPPlate", 1);
						}
						else if (!func_11(&Var28, "MPPlate"))
						{
							func_15(&Var28, "SPPlate", 1);
						}
						unk_0xD9EB0280F70D31BF(sVar27, sVar27, &Var28);
						if (unk_0x27CA09C6DFAB1E79())
						{
							func_13(3763, 0, -1, 1);
						}
					}
					else if (unk_0x27CA09C6DFAB1E79())
					{
						iLocal_383 = 1;
						uLocal_384 = unk_0x898811EA80D35DE2();
					}
					iLocal_378 = 1;
					iLocal_380 = 0;
					StringCopy(&(Global_101126[iLocal_381 /*4*/]), "", 16);
					iLocal_382 = 0;
				}
			}
			else
			{
				unk_0xEBDAD827C962801E("TEST", &iLocal_382);
			}
			break;
	}
}

int func_11(char* sParam0, char* sParam1)
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	
	func_12(sParam0, &Var0);
	iVar82 = unk_0x50B7853132D8438E(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0.f_0)
	{
		if (!unk_0x0BD3CCFB6C6CFA91(&(Var0[iVar81 /*8*/])))
		{
			if (unk_0x50B7853132D8438E(&(Var0[iVar81 /*8*/])) == iVar82)
			{
				return 1;
			}
		}
		iVar81++;
	}
	return 0;
}

void func_12(char* sParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	bool bVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		iVar0 = unk_0xB969E1CEA20D42E1(sParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar12 = iVar0 != false;
	iVar14 = 0;
	while (iVar14 < *uParam1)
	{
		StringCopy(uParam1[iVar14 /*8*/], "", 32);
		iVar14++;
	}
	while (bVar12)
	{
		StringCopy(&cVar2, unk_0x6B73FBA4FFD49093(sParam0, iVar1, iVar1 + 1), 8);
		iVar1++;
		if (unk_0x50B7853132D8438E(&cVar2) == 625527429 || iVar1 >= iVar0)
		{
			if (unk_0x50B7853132D8438E(&cVar2) != 625527429)
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar13 < *uParam1)
			{
				*(uParam1[iVar13 /*8*/]) = { cVar4 };
				iVar13++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (iVar1 >= iVar0)
		{
			bVar12 = false;
		}
	}
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
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

int func_14()
{
	return Global_1312735;
}

void func_15(char* sParam0, char* sParam1, bool bParam2)
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	int iVar83;
	bool bVar84;
	
	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar82 = unk_0x50B7853132D8438E(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0.f_0)
	{
		if (!unk_0x0BD3CCFB6C6CFA91(&(Var0[iVar81 /*8*/])))
		{
			iVar83 = unk_0x50B7853132D8438E(&(Var0[iVar81 /*8*/]));
			if (iVar83 != iVar82)
			{
				if (bVar84)
				{
					StringConCat(sParam0, ",", 64);
					bVar84 = false;
				}
				StringConCat(sParam0, &(Var0[iVar81 /*8*/]), 64);
				bVar84 = true;
			}
		}
		iVar81++;
	}
	if (bParam2)
	{
		if (bVar84)
		{
			StringConCat(sParam0, ",", 64);
			bVar84 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar84 = true;
	}
}

int func_16(char* sParam0)
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar11 = unk_0xB969E1CEA20D42E1(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_101126)
	{
		if (unk_0x0BD3CCFB6C6CFA91(&(Global_101126[iVar0 /*4*/])))
		{
			StringCopy(&(Global_101126[iVar0 /*4*/]), sParam0, 16);
			Global_101135[iVar0] = unk_0x27CA09C6DFAB1E79();
			Global_101138 = 1;
			Global_101139 = 1;
			if (unk_0x27CA09C6DFAB1E79())
			{
				iVar10 = 0;
				while (iVar10 < 8)
				{
					if (iVar10 < iVar11)
					{
						uVar1[iVar10] = func_18(unk_0x6B73FBA4FFD49093(sParam0, iVar10, iVar10 + 1));
					}
					else
					{
						uVar1[iVar10] = func_18("");
					}
					iVar10++;
				}
				func_17(1362, uVar1[0], -1, 1);
				func_17(1363, uVar1[1], -1, 1);
				func_17(1364, uVar1[2], -1, 1);
				func_17(1365, uVar1[3], -1, 1);
				func_17(1366, uVar1[4], -1, 1);
				func_17(1367, uVar1[5], -1, 1);
				func_17(1368, uVar1[6], -1, 1);
				func_17(1369, uVar1[7], -1, 1);
				func_13(3763, 1, -1, 1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101126)
	{
		iVar0++;
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_18(char* sParam0)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 37;
	}
	if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("A"))
	{
		return 0;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("B"))
	{
		return 1;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("C"))
	{
		return 2;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("D"))
	{
		return 3;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("E"))
	{
		return 4;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("F"))
	{
		return 5;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("G"))
	{
		return 6;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("H"))
	{
		return 7;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("I"))
	{
		return 8;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("J"))
	{
		return 9;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("K"))
	{
		return 10;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("L"))
	{
		return 11;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("M"))
	{
		return 12;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("N"))
	{
		return 13;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("O"))
	{
		return 14;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("P"))
	{
		return 15;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("Q"))
	{
		return 16;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("R"))
	{
		return 17;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("S"))
	{
		return 18;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("T"))
	{
		return 19;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("U"))
	{
		return 20;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("V"))
	{
		return 21;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("W"))
	{
		return 22;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("X"))
	{
		return 23;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("Y"))
	{
		return 24;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("Z"))
	{
		return 25;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("0"))
	{
		return 26;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("1"))
	{
		return 27;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("2"))
	{
		return 28;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("3"))
	{
		return 29;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("4"))
	{
		return 30;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("5"))
	{
		return 31;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("6"))
	{
		return 32;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("7"))
	{
		return 33;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("8"))
	{
		return 34;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E("9"))
	{
		return 35;
	}
	else if (unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(" "))
	{
		return 36;
	}
	return 37;
}

void func_19(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && unk_0x0BADBFA3B172435F(unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*uParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				
				default:
					StringConCat(sParam0, "", 16);
					break;
				}
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	iVar1 = func_22(iParam0, iParam1);
	uVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (Global_101139 && !iLocal_378)
	{
		iLocal_378 = 1;
		Global_101139 = 0;
	}
	if ((((iLocal_378 && iLocal_380 == 0) && !bLocal_140) && !Global_262145.f_9325) && iLocal_127 != 0)
	{
		iVar0 = 0;
		unk_0xE0E59AE643E9BBB5("car");
		unk_0xF266CB99D17AA11D("appdata");
		iVar0 = (iVar0 + func_27("orderCount_sp0"));
		iVar0 = (iVar0 + func_27("orderCount_sp1"));
		iVar0 = (iVar0 + func_27("orderCount_sp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp0"));
		iVar0 = (iVar0 + func_27("orderCount_mp1"));
		iVar0 = (iVar0 + func_27("orderCount_mp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp3"));
		iVar0 = (iVar0 + func_27("orderCount_mp4"));
		unk_0x25F628B35B652916();
		unk_0xC7C77285A27883FD();
		iVar0 = iVar0;
		if (unk_0x0F89A9C10948E713(iLocal_382))
		{
			if (!unk_0x4E123259A3F8B6E7(iLocal_382))
			{
				iVar2 = Global_100974;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_100974[iVar1 /*4*/]), "", 16);
					Global_101095[iVar1] = 0;
					iVar1++;
				}
				iVar2 = unk_0xA157F007907024BE(iLocal_382);
				Global_101140 = iVar2 >= Global_100974;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_100974)
					{
						StringCopy(&(Global_100974[iVar1 /*4*/]), unk_0x44D34E2B3B083454(iLocal_382, iVar1), 16);
						StringCopy(&Var3, unk_0xCA5A7D36C0BA5078(iLocal_382, iVar1), 64);
						if ((func_11(&Var3, "MPPlate") || func_11(&Var3, "NoDelete")) || iVar1 == 0)
						{
							Global_101095[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_382 = 0;
				iLocal_378 = 0;
				Global_101141 = 1;
			}
		}
		else
		{
			unk_0xEBDAD827C962801E("TEST", &iLocal_382);
		}
	}
}

int func_27(char* sParam0)
{
	return unk_0x8E7AE9E8B626E53F(func_28(sParam0));
}

char* func_28(char* sParam0)
{
	int iVar0;
	
	iVar0 = unk_0x50B7853132D8438E(uParam0);
	if (unk_0x50B7853132D8438E("uid") == iVar0)
	{
		return "0";
	}
	if (unk_0x50B7853132D8438E("carModel") == iVar0)
	{
		return "1";
	}
	if (unk_0x50B7853132D8438E("playerSlot") == iVar0)
	{
		return "2";
	}
	if (unk_0x50B7853132D8438E("playerRank") == iVar0)
	{
		return "3";
	}
	if (unk_0x50B7853132D8438E("playerGangR") == iVar0)
	{
		return "4";
	}
	if (unk_0x50B7853132D8438E("playerGangG") == iVar0)
	{
		return "5";
	}
	if (unk_0x50B7853132D8438E("playerGangB") == iVar0)
	{
		return "6";
	}
	if (unk_0x50B7853132D8438E("carColour1") == iVar0)
	{
		return "7";
	}
	if (unk_0x50B7853132D8438E("carColour2") == iVar0)
	{
		return "8";
	}
	if (unk_0x50B7853132D8438E("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (unk_0x50B7853132D8438E("windowTint") == iVar0)
	{
		return "10";
	}
	if (unk_0x50B7853132D8438E("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (unk_0x50B7853132D8438E("carEngine") == iVar0)
	{
		return "12";
	}
	if (unk_0x50B7853132D8438E("carBrakes") == iVar0)
	{
		return "13";
	}
	if (unk_0x50B7853132D8438E("carExhaust") == iVar0)
	{
		return "14";
	}
	if (unk_0x50B7853132D8438E("carWheel") == iVar0)
	{
		return "15";
	}
	if (unk_0x50B7853132D8438E("carHorn1") == iVar0)
	{
		return "16";
	}
	if (unk_0x50B7853132D8438E("carHorn2") == iVar0)
	{
		return "17";
	}
	if (unk_0x50B7853132D8438E("carHorn3") == iVar0)
	{
		return "18";
	}
	if (unk_0x50B7853132D8438E("carHorn4") == iVar0)
	{
		return "19";
	}
	if (unk_0x50B7853132D8438E("carHorn5") == iVar0)
	{
		return "20";
	}
	if (unk_0x50B7853132D8438E("carHorn6") == iVar0)
	{
		return "21";
	}
	if (unk_0x50B7853132D8438E("carHorn7") == iVar0)
	{
		return "22";
	}
	if (unk_0x50B7853132D8438E("carHorn8") == iVar0)
	{
		return "23";
	}
	if (unk_0x50B7853132D8438E("carHorn9") == iVar0)
	{
		return "24";
	}
	if (unk_0x50B7853132D8438E("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (unk_0x50B7853132D8438E("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (unk_0x50B7853132D8438E("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (unk_0x50B7853132D8438E("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (unk_0x50B7853132D8438E("carHorn") == iVar0)
	{
		return "29";
	}
	if (unk_0x50B7853132D8438E("carArmour") == iVar0)
	{
		return "30";
	}
	if (unk_0x50B7853132D8438E("carTurbo") == iVar0)
	{
		return "31";
	}
	if (unk_0x50B7853132D8438E("carSuspension") == iVar0)
	{
		return "32";
	}
	if (unk_0x50B7853132D8438E("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (unk_0x50B7853132D8438E("carWheelType") == iVar0)
	{
		return "34";
	}
	if (unk_0x50B7853132D8438E("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (unk_0x50B7853132D8438E("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (unk_0x50B7853132D8438E("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (unk_0x50B7853132D8438E("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (unk_0x50B7853132D8438E("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (unk_0x50B7853132D8438E("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (unk_0x50B7853132D8438E("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (unk_0x50B7853132D8438E("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (unk_0x50B7853132D8438E("carHornCount") == iVar0)
	{
		return "43";
	}
	if (unk_0x50B7853132D8438E("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (unk_0x50B7853132D8438E("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (unk_0x50B7853132D8438E("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (unk_0x50B7853132D8438E("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (unk_0x50B7853132D8438E("carType") == iVar0)
	{
		return "53";
	}
	if (unk_0x50B7853132D8438E("playerGang") == iVar0)
	{
		return "54";
	}
	if (unk_0x50B7853132D8438E("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (unk_0x50B7853132D8438E("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (unk_0x50B7853132D8438E("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (unk_0x50B7853132D8438E("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (unk_0x50B7853132D8438E("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (unk_0x50B7853132D8438E("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (unk_0x50B7853132D8438E("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (unk_0x50B7853132D8438E("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (unk_0x50B7853132D8438E("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (unk_0x50B7853132D8438E("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (unk_0x50B7853132D8438E("spDiscount") == iVar0)
	{
		return "65";
	}
	if (unk_0x50B7853132D8438E("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (unk_0x50B7853132D8438E("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (unk_0x50B7853132D8438E("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (unk_0x50B7853132D8438E("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (unk_0x50B7853132D8438E("playerName") == iVar0)
	{
		return "70";
	}
	if (unk_0x50B7853132D8438E("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (unk_0x50B7853132D8438E("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (unk_0x50B7853132D8438E("playerNameMP") == iVar0)
	{
		return "74";
	}
	return sParam0;
}

void func_29(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_9(&(uParam0->f_10)))
	{
		func_8(&(uParam0->f_10), 0, 0);
	}
	else if (func_7(&(uParam0->f_10), func_180(), 0))
	{
		if (!uParam0->f_165)
		{
			bVar0 = true;
		}
	}
	func_54(uParam0, bVar0);
	if (func_53() && func_52())
	{
		func_30(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_165)
		{
			func_3(&(uParam0->f_10));
			uParam0->f_165 = 0;
		}
	}
}

void func_30(var uParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		*uParam0 = 0;
		return;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return;
	}
	if (uParam0->f_1 != func_14())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_14())
			{
				uParam0->f_2 = func_51(1076, -1, 0);
				uParam0->f_3 = func_51(146, -1, 0);
				uParam0->f_4 = func_51(147, -1, 0);
				uParam0->f_5 = func_51(109, -1, 0);
				uParam0->f_6 = func_50(11, -1);
				uParam0->f_7 = func_49(32, -1);
				uParam0->f_8 = func_49(0, -1);
				if (func_46(10))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
				}
				if (func_43(10))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
				}
				if (func_40(10))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
				}
				if (func_37(10))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 3);
				}
				if (func_46(11))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 4);
				}
				if (func_43(11))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 5);
				}
				if (func_40(11))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
				}
				if (func_37(11))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
				}
				if (func_46(60))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
				}
				if (func_43(60))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
				}
				if (func_40(60))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
				}
				if (func_37(60))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
				}
				if (func_31(23))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 15);
				}
				if (func_46(61))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 16);
				}
				if (func_43(61))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 17);
				}
				if (func_40(61))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 18);
				}
				if (func_37(61))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
				}
				if (func_46(62))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
				}
				if (func_43(62))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
				}
				if (func_40(62))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
				}
				if (func_37(62))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
				}
				if (func_46(63))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
				}
				if (func_43(63))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 25);
				}
				if (func_40(63))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
				}
				if (func_37(63))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = func_14();
				*uParam0++;
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 0))
			{
				if (func_46(10))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 1))
			{
				if (func_43(10))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 2))
			{
				if (func_40(10))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 3))
			{
				if (func_37(10))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 3);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 4))
			{
				if (func_46(11))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 4);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 5))
			{
				if (func_43(11))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 5);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 6))
			{
				if (func_40(11))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 7))
			{
				if (func_37(11))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 8))
			{
				if (func_46(60))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 9))
			{
				if (func_43(60))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 10))
			{
				if (func_40(60))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 11))
			{
				if (func_37(60))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 15))
			{
				if (func_31(23))
				{
					unk_0x638CCE3C926DD31F(joaat("mp0_awd_fmfurthestwheelie"), func_49(32, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 15);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 16))
			{
				if (func_46(61))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 16);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 17))
			{
				if (func_43(61))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 17);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 18))
			{
				if (func_40(61))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 18);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 19))
			{
				if (func_37(61))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 20))
			{
				if (func_46(62))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 21))
			{
				if (func_43(62))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 22))
			{
				if (func_40(62))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 23))
			{
				if (func_37(62))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_9, 24))
			{
				if (func_46(63))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 25))
			{
				if (func_43(63))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 25);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 26))
			{
				if (func_40(63))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
				}
			}
			else if (!unk_0x2A3398C6222EB190(uParam0->f_9, 27))
			{
				if (func_37(63))
				{
					unk_0x25676C1B212BF4A8(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
				}
			}
			break;
	}
}

bool func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_33(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_32(iVar1));
}

int func_32(int iParam0)
{
	return (iParam0 % 32);
}

int func_33(var uParam0)
{
	switch (func_35(uParam0))
	{
		case 761:
			return Global_1365071[func_34(-1)];
		
		case 762:
			return Global_1365077[func_34(-1)];
		
		case 763:
			return Global_1365083[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 761;
			break;
		
		case 1:
			return 762;
			break;
		
		case 2:
			return 763;
			break;
	}
	return 7237;
}

int func_36(int iParam0)
{
	return (iParam0 / 32);
}

bool func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_38(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_32(iVar1));
}

int func_38(var uParam0)
{
	switch (func_39(uParam0))
	{
		case 754:
			return Global_1365029[func_34(-1)];
		
		case 755:
			return Global_1365035[func_34(-1)];
		
		case 756:
			return Global_1365041[func_34(-1)];
		
		case 757:
			return Global_1365041[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 754;
			break;
		
		case 1:
			return 755;
			break;
		
		case 2:
			return 756;
			break;
		
		case 3:
			return 757;
			break;
	}
	return 7237;
}

bool func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_41(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_32(iVar1));
}

int func_41(var uParam0)
{
	switch (func_42(uParam0))
	{
		case 764:
			return Global_1364957[func_34(-1)];
		
		case 765:
			return Global_1364963[func_34(-1)];
		
		case 766:
			return Global_1364969[func_34(-1)];
		
		case 767:
			return Global_1364969[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 764;
			break;
		
		case 1:
			return 765;
			break;
		
		case 2:
			return 766;
			break;
		
		case 3:
			return 767;
			break;
	}
	return 7237;
}

bool func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_44(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_32(iVar1));
}

int func_44(var uParam0)
{
	switch (func_45(uParam0))
	{
		case 774:
			return Global_1364981[func_34(-1)];
		
		case 775:
			return Global_1364987[func_34(-1)];
		
		case 776:
			return Global_1364993[func_34(-1)];
		
		case 777:
			return Global_1364993[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 774;
			break;
		
		case 1:
			return 775;
			break;
		
		case 2:
			return 776;
			break;
		
		case 3:
			return 777;
			break;
	}
	return 7237;
}

bool func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_47(iParam0);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(iVar0, func_32(iVar1));
}

int func_47(var uParam0)
{
	switch (func_48(uParam0))
	{
		case 784:
			return Global_1365005[func_34(-1)];
		
		case 785:
			return Global_1365011[func_34(-1)];
		
		case 786:
			return Global_1365017[func_34(-1)];
		
		case 787:
			return Global_1365017[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 784;
			break;
		
		case 1:
			return 785;
			break;
		
		case 2:
			return 786;
			break;
		
		case 3:
			return 787;
			break;
	}
	return 7237;
}

float func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2533679[iParam0 /*3*/][func_34(iParam1)];
	if (unk_0x00B0AABF6D593141(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2535703[iParam0 /*3*/][func_34(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_34(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52()
{
	if (unk_0x21674C87EC1A66D4() == 0)
	{
		return 0;
	}
	if (unk_0x6EC0C21CF01F429C())
	{
		if (unk_0x69156518443803E3(1, -1))
		{
			if (unk_0xF60A5AF58996CED2())
			{
				return 1;
			}
		}
	}
	if (unk_0x43F4A6D2081CC5ED())
	{
		if (unk_0x4C69E6D9E2ED0169(1))
		{
			if (unk_0xF60A5AF58996CED2())
			{
				return 1;
			}
		}
	}
	if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x2792DE3D57C3435A(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0x69156518443803E3(0, -1))
		{
			if (unk_0xF60A5AF58996CED2())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53()
{
	if (unk_0x6EC0C21CF01F429C() && unk_0xDC89EE24F4F4F213() == 3)
	{
		return 1;
	}
	if (unk_0x8BCF3CDD10AB0F3C() && unk_0xDC89EE24F4F4F213() == 3)
	{
		return 1;
	}
	if (unk_0x43F4A6D2081CC5ED() && unk_0xFEF369FFF9545F0F() == 0)
	{
		return 1;
	}
	if (unk_0x9D3EA2635512FD6B() && unk_0xFEF369FFF9545F0F() == 0)
	{
		return 1;
	}
	if (unk_0x20551D6D924ED04B() && unk_0xF60A5AF58996CED2())
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		switch (iVar1)
		{
			case 197:
				func_179(iVar0);
				func_173(iVar0, uParam0, bParam1);
				break;
			
			case 215:
				func_171(iVar0, uParam0, bParam1);
				break;
			
			case 199:
				break;
			
			case 186:
				break;
			
			case 187:
				func_170(iVar0, uParam0, bParam1);
				break;
			
			case 188:
				break;
			
			case 208:
				func_169(iVar0, uParam0, bParam1);
				break;
			
			case 218:
				func_168(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_70785)
	{
		if (Global_104382 > 0)
		{
			func_158();
		}
	}
	func_55(uParam0, bParam1);
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar19;
	char[] cVar35[8];
	struct<18> Var51;
	struct<36> Var71;
	struct<68> Var164;
	
	if (unk_0x957E53BB191CB24D())
	{
		return;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return;
	}
	if (func_4())
	{
		return;
	}
	iVar0 = unk_0x36420D6685E691B7();
	iVar1 = 0;
	Var71.f_17 = 1;
	Var71.f_21 = -1;
	Var71.f_22 = -1;
	Var71.f_23 = 2;
	Var71.f_35 = 2;
	Var164.f_65 = -1;
	Var164.f_66 = -1;
	Var164.f_67 = 2;
	switch (uParam0->f_166)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!unk_0x24D34B1CF1B2E078(iVar1))
					{
						if (func_53() && func_52())
						{
							iVar2 = unk_0x7D20317079A7E38C(iVar1);
							if (func_157(iVar2))
							{
								switch (iVar2)
								{
									case -877581966:
										if (unk_0x03CCEFDDDC599303(802) == 1)
										{
											unk_0x894463A97AA0AA57(iVar1);
											if (unk_0x30DC6771D1E81A39(iVar1, "msg", &uVar3))
											{
											}
											unk_0x6F6A7E1607DBFE08(iVar1);
										}
										break;
									
									case 1988401830:
										func_156(iVar1, 0);
										break;
									}
							}
						}
						else
						{
							unk_0x6F6A7E1607DBFE08(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_166++;
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!unk_0x24D34B1CF1B2E078(iVar1))
				{
					iVar2 = unk_0x7D20317079A7E38C(iVar1);
					switch (iVar2)
					{
						case -877581966:
							if (bParam1)
							{
								if (func_53() && func_52())
								{
									if (unk_0x03CCEFDDDC599303(802) == 1)
									{
										unk_0x894463A97AA0AA57(iVar1);
										if (unk_0x30DC6771D1E81A39(iVar1, "msg", &uVar3))
										{
										}
										unk_0x6F6A7E1607DBFE08(iVar1);
									}
								}
								else
								{
									unk_0x6F6A7E1607DBFE08(iVar1);
								}
							}
							break;
						
						case -302691102:
							break;
						
						case -1940449706:
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_153())
									{
										if (unk_0x27CA09C6DFAB1E79())
										{
											if (func_152(unk_0x3D35F9864E4640B1(), 0, 1))
											{
												if (func_53() && func_52())
												{
													unk_0x894463A97AA0AA57(iVar1);
													func_113(0, "XPT_MISSVER", 663093519, 475954354, 5000, 1, -1, 0);
													if (unk_0x30DC6771D1E81A39(iVar1, "msg", &uVar3))
													{
													}
													unk_0x6F6A7E1607DBFE08(iVar1);
												}
												else
												{
													unk_0x6F6A7E1607DBFE08(iVar1);
												}
												uParam0->f_165 = 1;
											}
										}
									}
								}
							}
							break;
						
						case 1894043873:
							if (func_53() && func_52())
							{
								unk_0x894463A97AA0AA57(iVar1);
								if (unk_0x30DC6771D1E81A39(iVar1, "msg", &uVar3))
								{
								}
								unk_0x6F6A7E1607DBFE08(iVar1);
							}
							else
							{
								unk_0x6F6A7E1607DBFE08(iVar1);
							}
							break;
						
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_53() && func_52())
									{
										if (((((((((((((((((func_112() == 0 && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && !func_104()) && (func_153() && func_100())) && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 8) && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 9) && !func_98(unk_0x3D35F9864E4640B1())) && !func_97()) && !func_95(unk_0x3D35F9864E4640B1(), 1, 0)) && !unk_0xF4F91CD09D59F42E()) && !func_94()) && !Global_1757696)
										{
											if (unk_0x6365ABC380E88ECC(iVar1, &(uParam0->f_13)))
											{
												if (func_81(&Var71, &(uParam0->f_13), &Var164))
												{
													if (Var71.f_0)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_78(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var164.f_22));
														unk_0x6F6A7E1607DBFE08(iVar1);
														uParam0->f_165 = 1;
													}
													else
													{
														unk_0x6F6A7E1607DBFE08(iVar1);
													}
												}
											}
										}
									}
									else
									{
										unk_0x6F6A7E1607DBFE08(iVar1);
									}
								}
								else
								{
									unk_0x6F6A7E1607DBFE08(iVar1);
								}
							}
							break;
						
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_53() && func_52())
									{
										if (unk_0x30DC6771D1E81A39(iVar1, "mn", &cVar35))
										{
											if (unk_0x30DC6771D1E81A39(iVar1, "gtag", &sVar19))
											{
												func_77("SC_PUBLISH", &sVar19, &cVar35, 0, 1, 0);
												unk_0x6F6A7E1607DBFE08(iVar1);
												uParam0->f_165 = 1;
											}
										}
									}
									else
									{
										unk_0x6F6A7E1607DBFE08(iVar1);
									}
								}
								else
								{
									unk_0x6F6A7E1607DBFE08(iVar1);
								}
							}
							break;
						
						case 1662919852:
							unk_0x6F6A7E1607DBFE08(iVar1);
							break;
						
						case joaat("bounty"):
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									unk_0x24F56D917CD757CA(iVar1, &Var51);
									if (unk_0x2A3398C6222EB190(Var51.f_16, 2))
									{
										if (func_53() && func_52())
										{
											func_75("FM_TXT_BNTY7", &Var51, Var51.f_17, 0, 1, 0);
										}
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (unk_0x2A3398C6222EB190(Var51.f_16, 0))
									{
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (func_53() && func_52())
										{
											func_65("FM_TXT_BNTY5", &Var51, &(Var51.f_8), Var51.f_17, 0, 1);
										}
									}
									unk_0x6F6A7E1607DBFE08(iVar1);
									uParam0->f_165 = 1;
								}
								else
								{
									unk_0x6F6A7E1607DBFE08(iVar1);
								}
							}
							break;
						
						case -775483672:
							if (func_53() && func_52())
							{
								if (bParam1)
								{
									if (!uParam0->f_165)
									{
										func_58("SC_WON_TOURN", 1);
									}
								}
							}
							func_56(151, 1, -1, 1);
							unk_0x6F6A7E1607DBFE08(iVar1);
							break;
						
						case 1988401830:
							func_156(iVar1, 0);
							break;
						
						default:
							if (bParam1)
							{
								if (unk_0x50B7853132D8438E(unk_0xD39E41DC9F174F2D(iVar1)) != joaat("COUPON"))
								{
									unk_0x6F6A7E1607DBFE08(iVar1);
								}
							}
							break;
						}
				}
				iVar1++;
			}
			if (uParam0->f_165)
			{
				uParam0->f_166 = 0;
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_57())
	{
		iVar0 = Global_2534367[iParam0 /*3*/][func_34(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x356621BE3FFD87C4(iVar0, iParam1, iParam3);
		}
	}
}

int func_57()
{
	return 1;
	return 0;
}

int func_58(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_59(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_64() || !unk_0xF4F91CD09D59F42E()) || !func_62(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_60(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_61(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

bool func_64()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

int func_65(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	if (!iParam4 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam4);
	}
	unk_0x50B3C23D0902259F(func_66(sParam2));
	if (!iParam4 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam4);
	}
	unk_0x96577CAA1D1E72DB(iParam3);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_59(42, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return iVar0;
}

var func_66(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_67(&cVar0);
}

var func_67(char[4] cParam0)
{
	return cParam0;
}

void func_68(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4)
{
	func_69(sParam0, sParam1, iParam2, sParam3, sParam4, "");
}

void func_69(char* sParam0, char* sParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_70(iVar0, sParam0, sParam1, uParam2, sParam3, sParam4, sParam5, 0))
	{
		return;
	}
}

int func_70(int iParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam4))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam5))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam1) > 23)
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam2) > 1)
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam4) > 7)
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam5) > 15)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		iParam7 = 0;
	}
	iVar0 = iParam0;
	if (func_74(iVar0))
	{
		return 0;
	}
	func_73(iVar0, 0);
	StringCopy(&(Global_1348168.f_15[iVar0 /*24*/].f_1), sParam1, 24);
	StringCopy(&(Global_1348168.f_15[iVar0 /*24*/].f_7), sParam2, 8);
	Global_1348168.f_15[iVar0 /*24*/].f_9 = uParam3;
	StringCopy(&(Global_1348168.f_15[iVar0 /*24*/].f_10), sParam4, 8);
	StringCopy(&(Global_1348168.f_15[iVar0 /*24*/].f_12), sParam5, 16);
	StringCopy(&(Global_1348168.f_15[iVar0 /*24*/].f_18), sParam6, 24);
	func_72(iVar0, iParam7);
	func_71(iVar0);
	return 1;
}

void func_71(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1348168.f_15[iParam0 /*24*/]), 0);
}

void func_72(int iParam0, int iParam1)
{
	Global_1348168.f_15[iParam0 /*24*/].f_16 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam1);
	Global_1348168.f_15[iParam0 /*24*/].f_17 = 1;
}

void func_73(int iParam0, bool bParam1)
{
	Global_1348168.f_15[iParam0 /*24*/] = 0;
	StringCopy(&(Global_1348168.f_15[iParam0 /*24*/].f_1), "", 24);
	StringCopy(&(Global_1348168.f_15[iParam0 /*24*/].f_7), "", 8);
	Global_1348168.f_15[iParam0 /*24*/].f_9 = 145;
	StringCopy(&(Global_1348168.f_15[iParam0 /*24*/].f_10), "", 8);
	StringCopy(&(Global_1348168.f_15[iParam0 /*24*/].f_12), "", 16);
	StringCopy(&(Global_1348168.f_15[iParam0 /*24*/].f_18), "", 24);
	Global_1348168.f_15[iParam0 /*24*/].f_17 = 0;
	if (bParam1)
	{
		return;
	}
}

bool func_74(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1348168.f_15[iParam0 /*24*/], 1);
}

int func_75(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	if (!iParam3 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam3);
	}
	unk_0x96577CAA1D1E72DB(iParam2);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(29, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

struct<16> func_76(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_77(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	if (!iParam3 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam3);
	}
	unk_0xA9895403BC230880(sParam2);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

void func_78(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	switch (iParam2)
	{
		case 3:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 1, 0);
			break;
		
		case 1:
			switch (iParam3)
			{
				case 0:
					func_80("SC_BTRSCR_DMN", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
				
				case 1:
					func_80("SC_BTRSCR_DMT", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
				
				case 2:
					func_80("SC_BTRSCR_DMV", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 0:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
				
				case 1:
					func_79("SC_BTRSCR_RACG", sParam0, iParam1, sParam4, 0);
					break;
				
				case 2:
					func_79("SC_BTRSCR_RACR", sParam0, iParam1, sParam4, 0);
					break;
				
				case 3:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
			}
			break;
		
		case 8:
			func_79("SC_BTRSCR_BJP", sParam0, iParam1, sParam4, 0);
			break;
		
		case 0:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 1, 0);
			break;
	}
}

int func_79(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	unk_0x50B3C23D0902259F(sParam3);
	unk_0xC2D818A5754306C0(iParam2, 7);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_80(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	if (!iParam4 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam4);
	}
	unk_0x50B3C23D0902259F(sParam2);
	unk_0x96577CAA1D1E72DB(iParam3);
	if (bParam6)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(30, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

int func_81(var uParam0, var uParam1, char* sParam2)
{
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			if (func_97())
			{
				return 0;
			}
			func_93();
			func_92();
			if (func_91())
			{
				*uParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x2CDB7F81DB8FD6D4(0);
			}
			func_90(uParam0, 1);
			break;
		
		case 1:
			if (unk_0xCD2BE02E0BD92C25(uParam1, func_89(0)))
			{
				func_90(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0xCEA0440E8BDEF565())
			{
				uParam0->f_40 = unk_0x91FECB5C100C254E();
				if (unk_0x70220995CD80C870())
				{
				}
				else
				{
					func_88(uParam0, 1, 1);
					uParam0->f_40 = unk_0x91FECB5C100C254E();
					*uParam0 = 0;
					return 1;
				}
				if (unk_0x35D6961075D31EA2() > 0)
				{
					if (unk_0xA0A92CE0CE8E5498(0))
					{
						func_82(sParam2, 0);
						func_88(uParam0, 1, 1);
						*uParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_88(uParam0, 1, 1);
					*uParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = unk_0x69CFEDFDD0AC6963();
	iVar1 = unk_0x81A4486CE40EE0C2(iVar0, "mission");
	iVar2 = unk_0x81A4486CE40EE0C2(iVar1, "gen");
	StringCopy(sParam0, unk_0xCFDEB69C1A5631E5(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x8FAD74DF19467BCD(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x2D562701A56259BF(iParam1), 64);
	sParam0->f_56 = { func_87(iVar2, "start") };
	sParam0->f_59 = { func_87(iVar2, "cam") };
	sParam0->f_62 = { func_86(iVar2) };
	sParam0->f_65 = unk_0xF9C625E4DFB7ECE6(iVar2, "type");
	sParam0->f_68 = unk_0xF9C625E4DFB7ECE6(iVar2, "subtype");
	sParam0->f_80 = unk_0xF9C625E4DFB7ECE6(iVar2, "adverm");
	sParam0->f_79 = unk_0xF9C625E4DFB7ECE6(iVar2, "testcomplete");
	sParam0->f_69 = unk_0xF9C625E4DFB7ECE6(iVar2, "min");
	sParam0->f_70 = unk_0xF9C625E4DFB7ECE6(iVar2, "rank");
	sParam0->f_71 = unk_0xF9C625E4DFB7ECE6(iVar2, "num");
	sParam0->f_73 = func_85(unk_0x5B0CFE2040E907B8(iParam1, 0), unk_0x409941E7E8C2937B(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0xF9C625E4DFB7ECE6(iVar2, "charcon");
	if (func_84(unk_0x50B7853132D8438E(unk_0xC3D7EF6978977F71(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_83() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4746)
		{
			sParam0->f_71 = Global_262145.f_4746;
		}
		if (sParam0->f_69 > Global_262145.f_4746)
		{
			sParam0->f_69 = Global_262145.f_4746;
		}
	}
	if (!func_91())
	{
		uVar3 = unk_0x26572B69DA42DC43(iParam1);
		if (unk_0xE8BECE41B0A00C4A(uVar3))
		{
			sParam0->f_54 = unk_0xDD1DE81BEE12A2D9(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0xFF4D26F3527EE224(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0xF9C625E4DFB7ECE6(iVar2, "ltm");
	}
	unk_0xCD7E92DE2BFA0B0D(&(sParam0->f_76), 13);
	func_92();
}

int func_83()
{
	return Global_25222;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_8341[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(float fParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = unk_0xF2DB717A73826179((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_86(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFF4D26F3527EE224(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0xB1367D13B72DA476(iParam0, "camp");
	}
	else if (unk_0xFF4D26F3527EE224(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xF9C625E4DFB7ECE6(iParam0, "camp"));
	}
	if (unk_0xFF4D26F3527EE224(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0xB1367D13B72DA476(iParam0, "camh");
	}
	else if (unk_0xFF4D26F3527EE224(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xF9C625E4DFB7ECE6(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_87(int iParam0, char* sParam1)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xFF4D26F3527EE224(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x839D6C107DE58F09(iParam0, sParam1) };
	}
	else if (unk_0xFF4D26F3527EE224(iParam0, sParam1) == 6)
	{
		uVar3 = unk_0x81A4486CE40EE0C2(iParam0, sParam1);
		if (unk_0xFF4D26F3527EE224(uVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xF9C625E4DFB7ECE6(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0xB1367D13B72DA476(iVar3, "x");
		}
		if (unk_0xFF4D26F3527EE224(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0xF9C625E4DFB7ECE6(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0xB1367D13B72DA476(iVar3, "y");
		}
		if (unk_0xFF4D26F3527EE224(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xF9C625E4DFB7ECE6(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0xB1367D13B72DA476(iVar3, "z");
		}
	}
	return Var0;
}

void func_88(var uParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;
	
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_12 = 0;
	uParam0->f_31 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 1;
	uParam0->f_17 = 1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_3 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	Global_1573291[0] = 0;
	Global_1573291[1] = 0;
	uParam0->f_40 = 0;
	if (bParam2)
	{
		uParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_90(uParam0, 0);
	}
}

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

bool func_91()
{
	return Global_1573274.f_4;
}

void func_92()
{
	if (unk_0x69CFEDFDD0AC6963() != 0)
	{
		unk_0xA282140624EC713D();
	}
}

void func_93()
{
	if (func_91())
	{
		unk_0x5AA982BACFB9821D();
	}
	else
	{
		unk_0x8F08A86E2A473541();
	}
}

bool func_94()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 11);
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_96()
{
	return -1;
}

int func_97()
{
	if (unk_0xFC599EC707315343())
	{
		return 1;
	}
	else if (unk_0xE161FED2A349D606())
	{
		return 1;
	}
	else if (unk_0xB0C806B8D14FA368())
	{
		return 1;
	}
	return 0;
}

bool func_98(int iParam0)
{
	return func_99(iParam0);
}

bool func_99(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

int func_100()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return func_101(120, -1);
}

int func_101(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_34(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_102()
{
	return Global_1312841;
}

bool func_103()
{
	return Global_1312843;
}

int func_104()
{
	if ((!Global_2394786 && !Global_2394786.f_1) && !Global_2394786.f_2)
	{
		return 0;
	}
	if (!Global_2394786.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_1310987.f_5;
}

bool func_106()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_35;
}

bool func_107()
{
	return Global_2445582.f_587;
}

bool func_108()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 21);
}

bool func_109()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 19);
}

bool func_110()
{
	return Global_2453457.f_1;
}

bool func_111()
{
	return Global_2445582.f_572;
}

int func_112()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189;
}

var func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_114(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_114(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_115(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_115(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_151(unk_0x3D35F9864E4640B1()) || func_150(unk_0x3D35F9864E4640B1()))
	{
		if (Global_262145.f_8836 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8836;
		}
	}
	else if (Global_262145.f_6030 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6030;
	}
	if (func_149(uParam2))
	{
	}
	if (func_148())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_146(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_145(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_142(0, &iVar1);
					break;
				
				case 3:
					func_142(1, &iVar1);
					break;
				
				case 1:
					func_138(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1788555)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_136(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_126((func_135(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
				{
					func_136(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_120(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_116((func_118(unk_0x3D35F9864E4640B1()) + iVar1));
			}
			else
			{
				func_116((func_118(unk_0x3D35F9864E4640B1()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_116(int iParam0)
{
	if (func_148())
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
		func_117(joaat("mpply_globalxp"), iParam0);
	}
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
	}
}

int func_118(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_152(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return func_119(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_5;
			}
		}
		else
		{
			return func_119(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_120(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_125(unk_0x3D35F9864E4640B1()) };
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(&Var0))
		{
			iVar13 = func_123(func_124(&Var0));
			if (iVar13 == 0)
			{
				func_122(&Global_1364944, iParam0);
				func_121(joaat("mpply_crew_local_xp_0"), Global_1364944);
			}
			else if (iVar13 == 1)
			{
				func_122(&Global_1364945, iParam0);
				func_121(joaat("mpply_crew_local_xp_1"), Global_1364945);
			}
			else if (iVar13 == 2)
			{
				func_122(&Global_1364946, iParam0);
				func_121(joaat("mpply_crew_local_xp_2"), Global_1364946);
			}
			else if (iVar13 == 3)
			{
				func_122(&Global_1364947, iParam0);
				func_121(joaat("mpply_crew_local_xp_3"), Global_1364947);
			}
			else if (iVar13 == 4)
			{
				func_122(&Global_1364948, iParam0);
				func_121(joaat("mpply_crew_local_xp_4"), Global_1364948);
			}
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1364939 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1364942 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1364943 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1364944 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1364945 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1364946 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1364947 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1364948 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1364949 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1364950 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1364951 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1364952 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1364953 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1364954 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1364955 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_123(int iParam0)
{
	if (iParam0 == Global_1364939)
	{
		return 0;
	}
	else if (iParam0 == Global_1364940)
	{
		return 1;
	}
	else if (iParam0 == Global_1364941)
	{
		return 2;
	}
	else if (iParam0 == Global_1364942)
	{
		return 3;
	}
	else if (iParam0 == Global_1364943)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_124(var uParam0)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(uParam0))
		{
			return Global_2455041;
		}
	}
	return Global_2455041;
}

struct<13> func_125(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_148())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1365059[func_34(-1)])
				{
					unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1365059[func_34(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_134(unk_0x3D35F9864E4640B1()))
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_132(iParam0, 1);
		}
		func_131(636, iParam0, -1, 1);
		func_130(637, func_132(iParam0, 1), -1, 1, 0);
		Global_1365059[func_34(-1)] = iParam0;
		func_127(7, 0);
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_129(iParam0, iParam1))
	{
		iVar0 = func_128();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_128()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2455018[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_129(int iParam0, var uParam1)
{
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_34(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_34(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_34(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_34(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_34(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_34(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_34(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_34(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_34(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_34(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_34(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_34(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_34(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_34(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_34(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_34(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_34(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_34(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_34(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_34(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_34(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_34(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_34(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_34(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_34(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_34(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_34(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_34(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_34(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_34(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_34(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_132(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_133(iParam0, 0);
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_283571[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_283571[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_134(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_1, iParam0);
	}
	return 1;
}

int func_135(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return Global_1365059[func_34(-1)];
			}
			else if (func_134(iParam0))
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1365059[func_34(-1)];
	}
	return 0;
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_51(iParam0, func_34(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_137(iParam0))
	{
		func_130(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_131(iParam0, iVar0, iParam2, 1);
	}
}

int func_137(int iParam0)
{
	if (Global_1364938)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
				return 1;
				break;
			}
	}
	return 0;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		iVar4 = unk_0xDF6AF3C6DAF25A51(iVar0);
		if (unk_0xA3C5F17FDDF2701D(iVar4))
		{
			iVar5 = unk_0x3F3ED1FF7CF1C641(iVar4);
			if (unk_0xB5E2A107E006EC7A(iVar5) != -1)
			{
				if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_141(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3D35F9864E4640B1())
					{
						if (func_140(unk_0x3D35F9864E4640B1(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_139(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_140(int iParam0, int iParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_125(iParam0) };
		Global_2488588 = { func_125(iParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_142(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x32C41AA379415932())
		{
			iVar3 = iVar0;
			if (unk_0xA3C5F17FDDF2701D(iVar3))
			{
				iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
				if (func_152(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3D35F9864E4640B1())
					{
						iVar1++;
						if (func_140(unk_0x3D35F9864E4640B1(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_152(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3D35F9864E4640B1())
				{
					if (func_143(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_140(unk_0x3D35F9864E4640B1(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_139(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_139(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_143(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_144(iParam0), func_144(iParam1));
	return 0f;
}

Vector3 func_144(var uParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(uParam0), 0);
}

int func_145(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DB8DA6E03DC888B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_146(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x0C58CE21DE9AD283(iParam0) > func_135(unk_0x3D35F9864E4640B1()))
		{
			iParam0 = -func_135(unk_0x3D35F9864E4640B1());
		}
	}
	if (func_147(8000, 0, 0) > 0)
	{
		if (func_147(8000, 0, 0) < (iParam0 + func_135(unk_0x3D35F9864E4640B1())))
		{
			iParam0 = (func_147(8000, 0, 0) - func_135(unk_0x3D35F9864E4640B1()));
		}
	}
	return iParam0;
}

int func_147(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_283571[iParam0];
}

int func_148()
{
	return 1;
}

int func_149(var uParam0)
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

bool func_150(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_151(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_153()
{
	if (func_155() && func_154(0))
	{
		return 1;
	}
	return 0;
}

var func_154(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_155()
{
	return func_154(func_14() + 1);
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar19;
	var uVar20;
	int iVar36;
	int iVar37;
	var uVar38;
	
	iVar0 = 0;
	iVar1 = 0;
	StringCopy(&Global_2456381, "", 64);
	unk_0x7B55E5D0F11B18E6(iParam0, "awardAmount", &iVar2);
	unk_0x30DC6771D1E81A39(iParam0, "awardType", &uVar3);
	iVar19 = unk_0xA4D66A436DB905E3(iParam0, "fullRefresh");
	unk_0x30DC6771D1E81A39(iParam0, "awardLabel", &Global_2456381);
	unk_0x30DC6771D1E81A39(iParam0, "items", &uVar20);
	unk_0x7B55E5D0F11B18E6(iParam0, "userScreen", &iVar36);
	unk_0x6F6A7E1607DBFE08(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2456363 = -99;
			Global_2456362 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2456363 = -1;
			Global_2456362 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2456363 = 1;
			Global_2456362 = iVar2;
		}
		iVar1 = 1;
	}
	if (unk_0xB3404E397FF56B3B(&uVar20, "[]") == 0)
	{
		Global_2456399 = 1;
	}
	if (iVar36 > 0)
	{
		Global_2456400 = iVar36;
	}
	if (iParam1 == 0)
	{
		if (func_83() == 0)
		{
			if (iVar19 == 1)
			{
				unk_0xE2A314A6903DD12E(&iVar37, &uVar38);
				if (iVar37 == 8)
				{
					unk_0x2188A3A6C39EA489(iVar0, iVar1);
				}
			}
		}
	}
}

int func_157(int iParam0)
{
	if (iParam0 == -877581966)
	{
		return 1;
	}
	if (iParam0 == 1988401830)
	{
		return 1;
	}
	return 0;
}

void func_158()
{
	int iVar0;
	
	Global_104380 = unk_0x31CD6E9F83C10233();
	if ((Global_104380 - Global_104381) > Global_104186)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_104374[iVar0] == 1)
			{
				Global_104382 = (Global_104382 - 1);
				if (Global_104382 < 0)
				{
					Global_104382 = 0;
				}
				Global_104374[iVar0] = 0;
				func_159(Global_104187[iVar0 /*36*/], Global_104368[iVar0]);
				iVar0 = 5;
				Global_104381 = unk_0x31CD6E9F83C10233();
			}
			iVar0++;
		}
	}
}

void func_159(struct<36> Param0, int iParam36)
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];
	
	iParam36 = func_166(Param0.f_0);
	if (iParam36 != -1)
	{
		if (unk_0x03CCEFDDDC599303(803) == 1)
		{
			if (func_53())
			{
				func_162(Param0, iParam36);
			}
		}
	}
	else
	{
		switch (Param0.f_0)
		{
			case joaat("total_progress_made"):
				if (unk_0x03CCEFDDDC599303(803) == 1)
				{
					if (func_53())
					{
						unk_0xC8EBA5D7FC75C1C0("CELL_FEED_F100PC_COMP");
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
						Global_104381 = unk_0x31CD6E9F83C10233();
					}
				}
				break;
			
			case joaat("sp_vehicle_models_driven"):
				if (Param0.f_17 == 200)
				{
					Global_104380 = unk_0x31CD6E9F83C10233();
					if ((Global_104380 - Global_104381) > Global_104186)
					{
						if (unk_0x03CCEFDDDC599303(803) == 1)
						{
							if (func_53())
							{
								unk_0xC8EBA5D7FC75C1C0("CELL_FEED_DRIVEN_ALL_VEH");
								StringCopy(&cVar16, "<C>", 64);
								StringConCat(&cVar16, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar16, &(Param0.f_1), 64);
								StringConCat(&cVar16, "...", 64);
								StringConCat(&cVar16, "</C>", 64);
								unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar16, 0);
								Global_104381 = unk_0x31CD6E9F83C10233();
							}
						}
					}
					else
					{
						func_161(Param0, -1);
					}
				}
				break;
			
			case joaat("num_rndevents_completed"):
				Global_104380 = unk_0x31CD6E9F83C10233();
				if ((Global_104380 - Global_104381) > Global_104186)
				{
					if (unk_0x03CCEFDDDC599303(803) == 1)
					{
						if (func_53())
						{
							unk_0xC8EBA5D7FC75C1C0("CELL_FEED_RNDEV_COMP");
							StringCopy(&cVar32, "<C>", 64);
							StringConCat(&cVar32, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar32, &(Param0.f_1), 64);
							StringConCat(&cVar32, "...", 64);
							StringConCat(&cVar32, "</C>", 64);
							unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar32, 0);
							Global_104381 = unk_0x31CD6E9F83C10233();
						}
					}
				}
				else
				{
					func_161(Param0, -1);
				}
				break;
			
			case joaat("num_hidden_packages_0"):
				if (Param0.f_17 == 50)
				{
					func_160(Param0, "CELL_FEED_LETTER_SCRAPS");
				}
				break;
			
			case joaat("num_hidden_packages_1"):
				if (Param0.f_17 == 50)
				{
					func_160(Param0, "CELL_FEED_SPACESHIP_PARTS");
				}
				break;
			
			case joaat("num_hidden_packages_3"):
				if (Param0.f_17 == 50)
				{
					func_160(Param0, "CELL_FEED_SONAR_COLL");
				}
				break;
			
			case joaat("sp0_dist_driving_car"):
				if (Param0.f_18 == 500f)
				{
					func_160(Param0, "CELL_FEED_DRIVEN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_160(Param0, "CELL_FEED_DRIVEN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_160(Param0, "CELL_FEED_DRIVEN_50000");
				}
				break;
			
			case joaat("sp0_dist_driving_plane"):
				if (Param0.f_18 == 500f)
				{
					func_160(Param0, "CELL_FEED_FLOWN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_160(Param0, "CELL_FEED_FLOWN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_160(Param0, "CELL_FEED_FLOWN_50000");
				}
				break;
			
			case joaat("sp0_dist_running"):
				if (Param0.f_18 == 50f)
				{
					func_160(Param0, "CELL_FEED_RAN_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_160(Param0, "CELL_FEED_RAN_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_160(Param0, "CELL_FEED_RAN_1000");
				}
				break;
			
			case joaat("sp0_dist_swimming"):
				if (Param0.f_18 == 50f)
				{
					func_160(Param0, "CELL_FEED_SWAM_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_160(Param0, "CELL_FEED_SWAM_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_160(Param0, "CELL_FEED_SWAM_1000");
				}
				break;
			
			case joaat("sp0_busted"):
				if (Param0.f_17 == 10)
				{
					func_160(Param0, "CELL_FEED_BUSTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_160(Param0, "CELL_FEED_BUSTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_160(Param0, "CELL_FEED_BUSTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_160(Param0, "CELL_FEED_BUSTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_160(Param0, "CELL_FEED_BUSTED_250");
				}
				break;
			
			case joaat("sp0_deaths"):
				if (Param0.f_17 == 10)
				{
					func_160(Param0, "CELL_FEED_WASTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_160(Param0, "CELL_FEED_WASTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_160(Param0, "CELL_FEED_WASTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_160(Param0, "CELL_FEED_WASTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_160(Param0, "CELL_FEED_WASTED_250");
				}
				break;
			
			case joaat("sp0_shots"):
				if (Param0.f_17 == 1000000)
				{
					func_160(Param0, "CELL_FEED_SHOTS_1ML");
				}
				if (Param0.f_17 == 2000000)
				{
					func_160(Param0, "CELL_FEED_SHOTS_2ML");
				}
				if (Param0.f_17 == 3000000)
				{
					func_160(Param0, "CELL_FEED_SHOTS_3ML");
				}
				if (Param0.f_17 == 4000000)
				{
					func_160(Param0, "CELL_FEED_SHOTS_4ML");
				}
				if (Param0.f_17 == 5000000)
				{
					func_160(Param0, "CELL_FEED_SHOTS_5ML");
				}
				break;
			
			case joaat("sp0_stars_evaded"):
				if (Param0.f_17 == 5)
				{
					func_160(Param0, "CELL_FEED_5STARS_WL");
				}
				break;
			
			case joaat("sp0_crouched"):
				if (Param0.f_17 == 10)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 0))
					{
						func_160(Param0, "CELL_FEED_WEB_CAR");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 0);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 1))
					{
						func_160(Param0, "CELL_FEED_WEB_RHINO");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 1);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 2))
					{
						func_160(Param0, "CELL_FEED_WEB_BUZZARD");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 2);
					}
				}
				break;
			
			case joaat("sp0_crouched_and_shot"):
				if (Param0.f_17 == 10)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 3))
					{
						func_160(Param0, "CELL_FEED_STOCK_INV");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 4))
					{
						func_160(Param0, "CELL_FEED_STOCK_WIN");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 5))
					{
						func_160(Param0, "CELL_FEED_STOCK_LOSS");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 5);
					}
				}
				break;
			
			case joaat("sp0_water_cannon_kills"):
				if (Param0.f_17 == 25)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 10))
					{
						func_160(Param0, "CELL_FEED_STNJ_25");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 11))
					{
						func_160(Param0, "CELL_FEED_STNJ_50");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 12))
					{
						func_160(Param0, "CELL_FEED_STNJ_75");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 13))
					{
						func_160(Param0, "CELL_FEED_STNJ_100");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 13);
					}
				}
				break;
			
			case joaat("sp0_water_cannon_deaths"):
				if (Param0.f_17 == 25)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 6))
					{
						func_160(Param0, "CELL_FEED_UTB_25");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 7))
					{
						func_160(Param0, "CELL_FEED_UTB_50");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 8))
					{
						func_160(Param0, "CELL_FEED_UTB_75");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 9))
					{
						func_160(Param0, "CELL_FEED_UTB_100");
						unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 9);
					}
				}
				break;
			}
	}
}

void func_160(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, char* sParam36)
{
	char cVar0[64];
	
	if (unk_0x03CCEFDDDC599303(803) == 1)
	{
		if (func_53())
		{
			Global_104380 = unk_0x31CD6E9F83C10233();
			if ((Global_104380 - Global_104381) > Global_104186)
			{
				unk_0xC8EBA5D7FC75C1C0(sParam36);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
				Global_104381 = unk_0x31CD6E9F83C10233();
			}
		}
	}
}

void func_161(struct<36> Param0, int iParam36)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_104374[iVar0] == 0)
		{
			Global_104187[iVar0 /*36*/] = { Param0 };
			Global_104368[iVar0] = iParam36;
			Global_104374[iVar0] = 1;
			Global_104382++;
			if (Global_104382 > 5)
			{
				Global_104382 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_162(struct<36> Param0, int iParam36)
{
	int iVar0;
	var uVar1;
	char cVar17[24];
	char cVar23[64];
	char cVar39[64];
	
	if (func_53())
	{
		MemCopy(&uVar1, {func_165(iParam36)}, 16);
		StringCopy(&cVar17, "NO_BLURB_REQ", 24);
		switch (iParam36)
		{
			case 53:
				StringCopy(&cVar17, "CELL_F_PROLOGUE", 24);
				break;
			
			case 44:
				StringCopy(&cVar17, "CELL_F_LESTER1", 24);
				break;
			
			case 20:
				StringCopy(&cVar17, "CELL_F_FAMILY4", 24);
				break;
			
			case 75:
				StringCopy(&cVar17, "CELL_F_DOCKH2B", 24);
				break;
			
			case 38:
				StringCopy(&cVar17, "CELL_F_FIB4", 24);
				break;
			
			case 93:
				StringCopy(&cVar17, "CELL_F_RURALH2", 24);
				break;
			
			case 69:
				StringCopy(&cVar17, "CELL_F_AGENCYH3A", 24);
				break;
			
			case 70:
				StringCopy(&cVar17, "CELL_F_AGENCYH3B", 24);
				break;
			
			case 47:
				StringCopy(&cVar17, "CELL_F_MICHAEL2", 24);
				break;
			
			case 42:
				StringCopy(&cVar17, "CELL_F_FRANKLIN2", 24);
				break;
			
			case 84:
				StringCopy(&cVar17, "CELL_F_FINALEH2A", 24);
				break;
			
			case 85:
				StringCopy(&cVar17, "CELL_F_FINALEH2B", 24);
				break;
			
			case 24:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 25:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 27:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
		}
		Global_104380 = unk_0x31CD6E9F83C10233();
		if ((Global_104380 - Global_104381) > Global_104186)
		{
			if (!unk_0xB3404E397FF56B3B(&cVar17, "NO_BLURB_REQ"))
			{
				unk_0xC8EBA5D7FC75C1C0(&cVar17);
				StringCopy(&cVar23, "<C>", 64);
				StringConCat(&cVar23, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar23, &(Param0.f_1), 64);
				StringConCat(&cVar23, "...", 64);
				StringConCat(&cVar23, "</C>", 64);
				unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar23, 0);
			}
			else if (func_164(iParam36))
			{
				iVar0 = func_163(iParam36);
				if (Param0.f_17 > iVar0)
				{
					unk_0xC8EBA5D7FC75C1C0("CELL_FEED_BEAT_MIS_SCORE");
					unk_0x7C8A7ECFBAD2C8C4(&uVar1);
					StringCopy(&cVar39, "<C>", 64);
					StringConCat(&cVar39, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar39, &(Param0.f_1), 64);
					StringConCat(&cVar39, "...", 64);
					StringConCat(&cVar39, "</C>", 64);
					unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar39, 0);
				}
			}
			Global_104381 = unk_0x31CD6E9F83C10233();
		}
		else
		{
			func_161(Param0, iParam36);
		}
	}
}

var func_163(int iParam0)
{
	return Global_104439.f_8946.f_330[iParam0 /*6*/].f_4;
}

int func_164(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104439.f_8946.f_330[iParam0 /*6*/];
}

struct<2> func_165(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83695[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104439.f_8946.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!unk_0x2A3398C6222EB190(Global_83695[iVar1 /*34*/].f_15, 6))
		{
			if (func_167(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_167(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0x2A3398C6222EB190(Global_83695[iParam0 /*34*/].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_83695[iParam0 /*34*/].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_104439.f_8946.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return unk_0x50B7853132D8438E(&cVar0);
	}
	return joaat("cities_passed");
}

void func_168(var uParam0, bool bParam1)
{
	if (!func_53())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (unk_0x03CCEFDDDC599303(803) == 1 && uParam0->f_165 == 0)
	{
		uParam0->f_165 = 1;
	}
	else
	{
		if (unk_0x03CCEFDDDC599303(803) != 1)
		{
		}
		if (uParam0->f_165 == 1)
		{
		}
	}
}

void func_169(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (unk_0x03CCEFDDDC599303(803) == 1 && uParam1->f_165 == 0)
		{
			if (Var0.f_1)
			{
				unk_0xC8EBA5D7FC75C1C0("CREWKICK_TA");
				unk_0x44A75C89E348D71C(0, 1);
			}
			else
			{
				unk_0xC8EBA5D7FC75C1C0("CREWKICK_TI");
				unk_0x44A75C89E348D71C(0, 1);
			}
		}
	}
}

void func_170(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (unk_0x03CCEFDDDC599303(803) == 1 && uParam1->f_165 == 0)
		{
			if (Var0.f_1)
			{
				unk_0xC8EBA5D7FC75C1C0("CREWLEFT_TA");
				unk_0xC59BF654690FB5DC(0, 1);
			}
			else
			{
				unk_0xC8EBA5D7FC75C1C0("CREWLEFT_TA");
				unk_0xC59BF654690FB5DC(0, 1);
			}
		}
	}
}

void func_171(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;
	struct<4> Var35;
	int iVar46;
	int iVar47;
	struct<4> Var48;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var35, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (unk_0x03CCEFDDDC599303(803) == 1 && uParam1->f_165 == 0)
		{
			iVar46 = unk_0xDDB869F4E944A2B9();
			iVar47 = 0;
			while (iVar47 < iVar46)
			{
				unk_0x1E098F5693807D2F(&Var0, iVar47);
				if (Var0.f_0 == Var35.f_0)
				{
					if (Var35.f_2)
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("HIGHER_RANK"), 32);
					}
					else
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("LOWER_RANK"), 32);
					}
					if (unk_0xB3404E397FF56B3B(&(Var35.f_3), "Rank4"))
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("CREW_RANK4"), 32);
					}
					if (unk_0xB3404E397FF56B3B(&(Var35.f_3), "Rank3"))
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("CREW_RANK3"), 32);
					}
					if (unk_0xB3404E397FF56B3B(&(Var35.f_3), "Rank2"))
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("CREW_RANK2"), 32);
					}
					if (unk_0xB3404E397FF56B3B(&(Var35.f_3), "Rank1"))
					{
						StringCopy(&Var48, unk_0xC0D54565FC1032F4("CREW_RANK1"), 32);
					}
					if (Var35.f_2)
					{
						func_172("CREWPROM", &Var48, &(Var0.f_1), 1);
					}
					else
					{
						func_172("CREWDEMO", &Var48, &(Var0.f_1), 1);
					}
					uParam1->f_165 = 1;
				}
				iVar47++;
			}
		}
	}
}

int func_172(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(sParam1);
	unk_0x50B3C23D0902259F(sParam2);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_59(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_173(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<21> Var1;
	struct<36> Var37;
	struct<68> Var130;
	
	if (!func_53())
	{
		return;
	}
	if (!func_153())
	{
		return;
	}
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (unk_0x03CCEFDDDC599303(803) == 1 && uParam1->f_165 == 0)
		{
			switch (Var1.f_0)
			{
				case joaat("mp0_awd_50_vehicles_blownup"):
				case joaat("mp1_awd_50_vehicles_blownup"):
					iVar0 = func_50(10, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_178("SCFEED_13", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_178("SCFEED_13b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_awd_vehicles_jackedr"):
				case joaat("mp1_awd_vehicles_jackedr"):
					iVar0 = func_50(11, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_178("SCFEED_10", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_178("SCFEED_10b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmtime5starwanted"):
				case joaat("mp1_awd_fmtime5starwanted"):
					iVar0 = func_50(60, -1);
					if (Var1.f_17 > iVar0)
					{
						func_178("SCFEED_4", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmfurthestwheelie"):
				case joaat("mp1_awd_fmfurthestwheelie"):
					iVar0 = unk_0xF2DB717A73826179(func_49(32, -1));
					if (Var1.f_17 > iVar0)
					{
						if (func_177(unk_0x3D35F9864E4640B1()) == 133 && func_176(unk_0x3D35F9864E4640B1()) == 4)
						{
						}
						else
						{
							if (unk_0xE42DE35DC4399ED5())
							{
								func_178("SCFEED_5", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							else
							{
								func_178("SCFEED_5b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							uParam1->f_165 = 1;
						}
					}
					break;
				
				case joaat("mp0_awd_fmdrivewithoutcrash"):
				case joaat("mp1_awd_fmdrivewithoutcrash"):
					iVar0 = func_50(61, -1);
					if (Var1.f_17 > iVar0)
					{
						func_178("SCFEED_6", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmmostflipsinonevehicle"):
				case joaat("mp1_awd_fmmostflipsinonevehicle"):
					iVar0 = func_50(62, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_178("SCFEED_7", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_178("SCFEED_7b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmmostspinsinonevehicle"):
				case joaat("mp1_awd_fmmostspinsinonevehicle"):
					iVar0 = func_50(63, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_178("SCFEED_8", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_178("SCFEED_8b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_165 = 1;
					}
					break;
				
				case joaat("mp0_char_fm_race_record_times"):
				case joaat("mp1_char_fm_race_record_times"):
					if ((((((((((((((func_112() == 0 && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && !func_104()) && (func_153() && func_100())) && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 8) && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 != 9) && !func_98(unk_0x3D35F9864E4640B1())) && !func_97()) && !func_95(unk_0x3D35F9864E4640B1(), 1, 0))
					{
						Var37.f_17 = 1;
						Var37.f_21 = -1;
						Var37.f_22 = -1;
						Var37.f_23 = 2;
						Var37.f_35 = 2;
						Var130.f_65 = -1;
						Var130.f_66 = -1;
						Var130.f_67 = 2;
						if (func_81(&Var37, &(Var1.f_20), &Var130))
						{
							if (Var37.f_0)
							{
								func_175("SCFEED_11", &(Var1.f_1), Var1.f_17, &(Var130.f_22), 1, 2f);
								if (!func_174())
								{
									unk_0x18F1BFAF88AC511B(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
								}
								uParam1->f_165 = 1;
							}
						}
					}
					break;
				}
		}
	}
}

bool func_174()
{
	return Global_1312830;
}

int func_175(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	unk_0x50B3C23D0902259F(sParam3);
	unk_0xC2D818A5754306C0(uParam2, 2055);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x6603281D73DDBBA9("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_176(int iParam0)
{
	if (func_177(iParam0) == 133)
	{
		return Global_2501777.f_4788;
	}
	return -1;
}

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

int func_178(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x50B3C23D0902259F(func_66(sParam1));
	if (!iParam4 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam4);
	}
	unk_0x96577CAA1D1E72DB(uParam2);
	if (!iParam4 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam4);
	}
	unk_0x96577CAA1D1E72DB(iParam3);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = unk_0x10DFDE006F19F20F("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		unk_0xC59BF654690FB5DC(0, 1);
	}
	func_59(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_179(int iParam0)
{
	struct<36> Var0;
	int iVar36;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 36))
	{
		func_159(Var0, iVar36);
	}
}

int func_180()
{
	switch (unk_0x03CCEFDDDC599303(807))
	{
		case 0:
			return 0;
		
		case 1:
			return 60000;
		
		case 2:
			return 120000;
		
		case 3:
			return 180000;
		
		case 4:
			return 240000;
		
		case 5:
			return 300000;
		
		case 6:
			return 600000;
		
		case 7:
			return 900000;
		
		case 8:
			return 1800000;
		
		case 9:
			return 3600000;
		
		default:
	}
	return 300000;
}

void func_181()
{
	if (!iLocal_183)
	{
		if (unk_0x9D1DEF58A2286C01(iLocal_181))
		{
			if (!unk_0x8079F6226B677FE3(iLocal_181))
			{
				if (unk_0x57B7A5F9862C08C3(iLocal_181))
				{
					iLocal_181 = 0;
					iLocal_183 = 1;
				}
				else
				{
					if (unk_0x27CA09C6DFAB1E79())
					{
						Global_2097152[func_183() /*11035*/].f_5526.f_1992 = { func_184() };
					}
					else
					{
						Global_104439.f_19979.f_267 = { func_184() };
					}
					iLocal_181 = 0;
					iLocal_183 = 1;
				}
			}
		}
		else if (func_182(&uLocal_177, &uLocal_182))
		{
			unk_0xA103EF192E9B35DF(&uLocal_177, &iLocal_181);
		}
		else
		{
			iLocal_181 = 0;
			iLocal_183 = 1;
		}
	}
}

int func_182(var uParam0, var uParam1)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
	}
	else if (Global_104439.f_19979.f_261)
	{
		*uParam0 = { Global_104439.f_19979.f_267 };
		*uParam1 = Global_104439.f_19979.f_271;
		return 1;
	}
	return 0;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

struct<4> func_184()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	iVar5 = 0;
	while (iVar5 <= 7)
	{
		if (iVar5 < 2)
		{
			iVar4 = unk_0x3AF262D7332EEDF5(1, 10);
			StringConCat(&Var0, func_185(iVar4), 16);
		}
		else if (iVar5 < 5)
		{
			iVar4 = unk_0x3AF262D7332EEDF5(10, 36);
			StringConCat(&Var0, func_185(iVar4), 16);
		}
		else
		{
			iVar4 = unk_0x3AF262D7332EEDF5(1, 10);
			StringConCat(&Var0, func_185(iVar4), 16);
		}
		iVar5++;
	}
	return Var0;
}

char* func_185(int iParam0)
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_186()
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_141 == 0)
	{
		func_445();
		if (bLocal_137)
		{
			return;
		}
		func_444();
	}
	func_418();
	if (bLocal_140)
	{
		return;
	}
	func_409();
	func_407();
	bVar0 = iLocal_139;
	bVar1 = ((iLocal_129 == 0 && !bLocal_140) && !bLocal_137);
	if (iLocal_139)
	{
		iLocal_139 = 0;
	}
	else
	{
		iLocal_129 = (iLocal_129 + 1 % 30);
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (iLocal_129 < 20)
		{
			if (!bVar0)
			{
				iLocal_130++;
				if (iLocal_130 >= 10)
				{
					iLocal_130 = 0;
					bLocal_133 = !bLocal_133;
				}
			}
			iLocal_132 = (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iLocal_130] - 1);
			if (bLocal_133)
			{
				if (func_406((Global_2097152[func_183() /*11035*/].f_5526.f_1999[iLocal_130] - 1), &iLocal_131))
				{
					func_193(3);
				}
			}
			else if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iLocal_130] == 0)
			{
				func_192(iLocal_130);
			}
		}
	}
	else
	{
		switch (iLocal_129)
		{
			case 0:
				func_193(0);
				break;
			
			case 1:
				func_193(1);
				break;
			
			case 2:
				func_193(2);
				break;
			
			case 3:
				func_187();
				break;
			}
	}
	if (bVar1)
	{
		if (iLocal_157)
		{
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0x8C0B8B990CC3181C();
				unk_0xC7C77285A27883FD();
				iLocal_157 = 0;
			}
		}
	}
}

void func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (func_191())
	{
		return;
	}
	if (Global_25367)
	{
		if (!iLocal_155)
		{
			unk_0xE0E59AE643E9BBB5("dog");
			unk_0xF266CB99D17AA11D("saveData");
			func_190("chopKilled", unk_0x3AF262D7332EEDF5(0, 65535));
			unk_0x8C0B8B990CC3181C();
			unk_0x25F628B35B652916();
			unk_0xC7C77285A27883FD();
			iLocal_155 = 1;
		}
	}
	else
	{
		iLocal_155 = 0;
	}
	unk_0xE0E59AE643E9BBB5("dog");
	unk_0xF266CB99D17AA11D("saveData");
	if (unk_0x2E0831CE47B470B9())
	{
		iVar0 = unk_0x8E7AE9E8B626E53F("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = unk_0x8E7AE9E8B626E53F("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = unk_0x8E7AE9E8B626E53F("time_stamp");
		iVar3 = unk_0x6239D1A379D387A4();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = unk_0x8E7AE9E8B626E53F("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = func_189((iVar4 - iVar6), 0, 100);
		Global_104439.f_19979.f_254 = unk_0xBBDA792448DB5A89(iVar7);
		Global_104439.f_19979.f_254.f_1 = unk_0x84FEEFD31E8D2CFA("cleanliness");
		Global_104439.f_19979.f_254.f_2 = unk_0x84FEEFD31E8D2CFA("hunger");
		Global_104439.f_19979.f_254.f_3 = func_27("trainingLevel");
		Global_104439.f_19979.f_254.f_4 = func_27("collar");
		Global_104439.f_19979.f_254.f_5 = 1;
		if (Global_104439.f_19979.f_254 > 50f)
		{
		}
		if (Global_104439.f_19979.f_254.f_2 > 50f)
		{
		}
		Global_104439.f_19979.f_263 = func_27("usedApp") != 0;
		if (unk_0xA617FFC40BC2D0D9(joaat("chop_app_used"), &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_104439.f_19979.f_263)
				{
					unk_0x356621BE3FFD87C4(joaat("chop_app_used"), 1, 1);
				}
			}
		}
	}
	unk_0x25F628B35B652916();
	unk_0xC7C77285A27883FD();
	if (Global_104439.f_19979.f_264)
	{
		unk_0xE0E59AE643E9BBB5("dog");
		unk_0xF266CB99D17AA11D("saveData");
		if (func_188(6))
		{
			func_190("chopSafeHouse", 1);
		}
		else
		{
			func_190("chopSafeHouse", 0);
		}
		unk_0x8C0B8B990CC3181C();
		unk_0x25F628B35B652916();
		unk_0xC7C77285A27883FD();
		Global_104439.f_19979.f_264 = 0;
	}
}

bool func_188(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_104439.f_7090[iParam0], 0);
}

int func_189(int iParam0, int iParam1, int iParam2)
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

void func_190(char* sParam0, int iParam1)
{
	unk_0x0144B3C31A88F39C(func_28(sParam0), iParam1);
}

int func_191()
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	return 1;
}

void func_192(int iParam0)
{
	char cVar0[16];
	
	if (!Global_2097152[func_183() /*11035*/].f_5526.f_1849[iParam0])
	{
		unk_0xE0E59AE643E9BBB5("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, func_14(), 16);
		unk_0xF266CB99D17AA11D(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		unk_0xF266CB99D17AA11D(&cVar0);
		func_190("carUnlocked", 0);
		unk_0x25F628B35B652916();
		iLocal_157 = 1;
		unk_0xC1B1E9A034A63A62(0);
		unk_0x25F628B35B652916();
		unk_0xC7C77285A27883FD();
		Global_2097152[func_183() /*11035*/].f_5526.f_1849[iParam0] = 1;
	}
}

void func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<6> Var8;
	char cVar14[24];
	struct<6> Var20;
	struct<43> Var26;
	struct<41> Var69;
	int iVar110;
	int iVar111;
	struct<82> Var112;
	int iVar210;
	int iVar211;
	int iVar212;
	char cVar213[16];
	int iVar217;
	bool bVar218;
	int iVar219;
	int iVar220;
	int iVar221[6];
	int iVar228;
	bool bVar229;
	bool bVar230;
	struct<2> Var231;
	int iVar235;
	int iVar236;
	int iVar237;
	int iVar238;
	int iVar239;
	int iVar240;
	int iVar241;
	
	Var26.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar14, "sp0_order", 24);
		Var26 = { Global_104439.f_19979[0 /*43*/] };
		Var69 = { Global_104439.f_19979.f_130[0 /*41*/] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar14, "sp1_order", 24);
		Var26 = { Global_104439.f_19979[1 /*43*/] };
		Var69 = { Global_104439.f_19979.f_130[1 /*41*/] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar14, "sp2_order", 24);
		Var26 = { Global_104439.f_19979[2 /*43*/] };
		Var69 = { Global_104439.f_19979.f_130[2 /*41*/] };
	}
	else if (iParam0 == 3)
	{
		iVar3 = func_14();
		iVar2 = (3 + iVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, iVar3, 24);
		StringCopy(&cVar14, "mp", 24);
		StringIntConCat(&cVar14, iVar3, 24);
		StringConCat(&cVar14, "_order", 24);
		if (func_405(iLocal_131, &iVar110))
		{
			func_404(&Var26, iVar110);
		}
		else
		{
			func_404(&Var26, 0);
		}
		Var69 = { Global_2097152[func_183() /*11035*/].f_5526.f_1808 };
		StringCopy(&Var20, "vehicle", 24);
		StringIntConCat(&Var20, iLocal_130, 24);
	}
	else
	{
		return;
	}
	if (iLocal_156 || (!unk_0x27CA09C6DFAB1E79() && iLocal_134))
	{
		if (unk_0x27CA09C6DFAB1E79())
		{
			iLocal_156 = 0;
		}
		else
		{
			unk_0xE0E59AE643E9BBB5("car");
			unk_0xF266CB99D17AA11D("singleplayer0");
			func_190("carUnlocked", 0);
			unk_0x25F628B35B652916();
			unk_0xF266CB99D17AA11D("singleplayer2");
			func_190("carUnlocked", 0);
			unk_0x25F628B35B652916();
			unk_0xC7C77285A27883FD();
			if (unk_0xE096BC82D913B3DB())
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0xF266CB99D17AA11D("appdata");
				func_190("playerName", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
			}
			iVar111 = 0;
			while (iVar111 < Global_104439.f_19979)
			{
				if (!Global_104439.f_19979[iVar111 /*43*/].f_41)
				{
					Global_104439.f_19979[iVar111 /*43*/].f_40 = 0;
					if (Global_104439.f_19979[iVar111 /*43*/] != 0 && Global_104439.f_19979[iVar111 /*43*/].f_29 != 0)
					{
						Global_104439.f_19979[iVar111 /*43*/].f_40 = 1;
					}
					else
					{
						Global_104439.f_19979.f_273[iVar111] = 0;
					}
				}
				iVar111++;
			}
			iLocal_156 = 0;
		}
		if (iParam0 >= 2)
		{
			iLocal_156 = 0;
			iLocal_134 = 0;
		}
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (!Global_104439.f_19979.f_273[iParam0])
		{
			if (((!func_403(0) && !func_403(3)) && !func_403(2)) || !func_164(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && func_164(0)) && func_402(iParam0)) && !Global_104439.f_8946.f_99.f_58[135])) || (((iParam0 == 2 && func_164(0)) && func_402(iParam0)) && !Global_104439.f_8946.f_99.f_58[136]))
				{
					unk_0xE0E59AE643E9BBB5("car");
					unk_0xF266CB99D17AA11D(&Var8);
					unk_0x1F3060258D375765();
					Var112.f_11 = 12;
					Var112.f_31 = 49;
					Var112.f_81 = 2;
					func_401(iParam0, &Var112, 1);
					func_400(Var112.f_5, Var112.f_7, -1, 1, &iVar210);
					func_400(Var112.f_6, -1, -1, 0, &iVar211);
					func_190("carUnlocked", 1);
					func_190("carModel", Var112.f_0);
					func_190("tyreSmokeColourEnabled", 1);
					func_190("tyreSmokeColourRed", 255);
					func_190("tyreSmokeColourGreen", 255);
					func_190("tyreSmokeColourBlue", 255);
					if (Var112.f_0 == joaat("buffalo2"))
					{
						func_399("carType", "sport");
						func_190("carEngineCount", 5);
						func_190("carBrakesCount", 4);
						func_190("carExhaustCount", 6);
						func_190("carWheelCount", 26);
						func_190("carHornCount", 5);
						func_190("carArmourCount", 6);
						func_190("carSuspensionCount", 5);
						func_190("carHorn1", 1748384362);
						func_190("carHorn2", 1766676233);
						func_190("carHorn3", -1390777827);
						func_190("carHorn4", -1751761149);
						func_190("carHorn5", 1732399718);
						func_398("carPriceModifier", 3.25f);
						func_190("carColour1", iVar210);
						func_190("carColour2", iVar211);
						func_190("carColour1Unlocked", 1);
						func_190("carColour2Unlocked", 1);
					}
					else if (Var112.f_0 == joaat("bodhi2"))
					{
						func_399("carType", "car");
						func_190("carEngineCount", 5);
						func_190("carBrakesCount", 4);
						func_190("carExhaustCount", 1);
						func_190("carWheelCount", 26);
						func_190("carHornCount", 5);
						func_190("carArmourCount", 6);
						func_190("carSuspensionCount", 1);
						func_190("carHorn1", -1512308941);
						func_190("carHorn2", 1766676233);
						func_190("carHorn3", -1390777827);
						func_190("carHorn4", -1751761149);
						func_190("carHorn5", 1732399718);
						func_398("carPriceModifier", 1f);
						func_190("carColour1", iVar210);
						func_190("carColour1Unlocked", 1);
					}
					else if (Var112.f_0 == joaat("tailgater"))
					{
						func_399("carType", "car");
						func_190("carEngineCount", 5);
						func_190("carBrakesCount", 5);
						func_190("carExhaustCount", 5);
						func_190("carWheelCount", 26);
						func_190("carHornCount", 5);
						func_190("carArmourCount", 6);
						func_190("carSuspensionCount", 5);
						func_190("carHorn1", 36213993);
						func_190("carHorn2", 1766676233);
						func_190("carHorn3", -1390777827);
						func_190("carHorn4", -1751761149);
						func_190("carHorn5", 1732399718);
						func_398("carPriceModifier", 1f);
						func_190("carColour1", iVar210);
						func_190("carColour2", iVar211);
						func_190("carColour1Unlocked", 1);
						func_190("carColour2Unlocked", 1);
					}
					unk_0x25F628B35B652916();
					Local_143 = { Var8 };
					Local_149 = { Var20 };
					iLocal_142 = Var112.f_0;
					bLocal_140 = true;
					iLocal_157 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0xC7C77285A27883FD();
					Global_104439.f_19979.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_104439.f_8946.f_99.f_58[135]) || (iParam0 == 2 && Global_104439.f_8946.f_99.f_58[136]))
		{
			Global_104439.f_19979[iParam0 /*43*/].f_41 = 1;
			Global_104439.f_19979.f_273[iParam0] = 0;
		}
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar212 = 0;
		if (iLocal_185 == 0)
		{
			iVar212 = func_397(joaat("mpply_carapp_data_sent_0"));
		}
		else if (iLocal_185 == 1)
		{
			iVar212 = func_397(joaat("mpply_carapp_data_sent_1"));
		}
		else if (iLocal_185 == 2)
		{
			iVar212 = func_397(joaat("mpply_carapp_data_sent_2"));
		}
		else if (iLocal_185 == 3)
		{
			iVar212 = func_397(joaat("mpply_carapp_data_sent_3"));
		}
		else if (iLocal_185 == 4)
		{
			iVar212 = func_397(joaat("mpply_carapp_data_sent_4"));
		}
		if (iVar212 && !func_396(iLocal_185))
		{
			unk_0xE0E59AE643E9BBB5("car");
			StringCopy(&cVar213, "multiplayer", 16);
			StringIntConCat(&cVar213, iLocal_185, 16);
			unk_0xF266CB99D17AA11D(&cVar213);
			iVar217 = 0;
			while (iVar217 < 10)
			{
				StringCopy(&cVar213, "vehicle", 16);
				StringIntConCat(&cVar213, iVar217, 16);
				unk_0xF266CB99D17AA11D(&cVar213);
				func_190("carUnlocked", 0);
				unk_0x25F628B35B652916();
				iVar217++;
			}
			unk_0x25F628B35B652916();
			iLocal_157 = 1;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xC7C77285A27883FD();
			if (iLocal_185 == 0)
			{
				func_395(joaat("mpply_carapp_data_sent_0"), 0);
			}
			else if (iLocal_185 == 1)
			{
				func_395(joaat("mpply_carapp_data_sent_1"), 0);
			}
			else if (iLocal_185 == 2)
			{
				func_395(joaat("mpply_carapp_data_sent_2"), 0);
			}
			else if (iLocal_185 == 3)
			{
				func_395(joaat("mpply_carapp_data_sent_3"), 0);
			}
			else if (iLocal_185 == 4)
			{
				func_395(joaat("mpply_carapp_data_sent_4"), 0);
			}
		}
		iLocal_185++;
		if (iLocal_185 > 4)
		{
			iLocal_185 = 0;
		}
	}
	if (!bLocal_140)
	{
		if (Var26.f_42)
		{
			Local_143 = { Var8 };
			Local_149 = { Var20 };
			iLocal_142 = Var26.f_0;
			bLocal_140 = true;
			iLocal_157 = 1;
			unk_0xC1B1E9A034A63A62(0);
			Var26.f_42 = 0;
		}
		else if (unk_0x27CA09C6DFAB1E79() && func_152(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (unk_0xC9D9444186B5A374() > 5000)
			{
				bVar218 = false;
				if (iLocal_186 == 0)
				{
					func_394(&iVar219);
					bVar218 = iVar219 != iLocal_188[0];
					iLocal_186++;
					unk_0x5AE11BC36633DE4E(0);
				}
				else if (iLocal_186 == 1)
				{
					func_385(&iVar220);
					bVar218 = iVar220 != iLocal_188[1];
					iLocal_186++;
					unk_0x5AE11BC36633DE4E(0);
				}
				else if (iLocal_186 == 2)
				{
					if (func_378(&iVar221, iLocal_187) == -1)
					{
						iLocal_187 = 0;
						iLocal_186++;
						unk_0x5AE11BC36633DE4E(0);
					}
					else
					{
						bVar218 = unk_0x2A3398C6222EB190(iVar221[(iLocal_187 / 32)], (iLocal_187 % 32)) != unk_0x2A3398C6222EB190(uLocal_200[(iLocal_187 / 32)], (iLocal_187 % 32));
						iLocal_187++;
						unk_0x5AE11BC36633DE4E(4900);
					}
				}
				if (bVar218)
				{
					Local_143 = { Var8 };
					Local_149 = { Var20 };
					iLocal_142 = Var26.f_0;
					bLocal_140 = true;
					iLocal_157 = 1;
					unk_0xC1B1E9A034A63A62(0);
				}
				if (iLocal_186 > 2)
				{
					iLocal_186 = 0;
				}
			}
		}
	}
	if (Var69.f_33)
	{
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (func_83() == 0)
			{
				iVar228 = Global_2097152[func_183() /*11035*/].f_5526.f_1998;
				if (Global_1319069[iVar228 /*140*/].f_66 == Var69.f_0)
				{
					if (Var69.f_37)
					{
						Var69.f_38 = 0;
						if (iLocal_160 == 0)
						{
							if (unk_0x9D1DEF58A2286C01(iLocal_158))
							{
								if (!unk_0x8079F6226B677FE3(iLocal_158))
								{
									if (unk_0x57B7A5F9862C08C3(iLocal_158))
									{
										iLocal_158 = 0;
										Var69.f_37 = 0;
									}
									else
									{
										Var69.f_38 = 1;
										iLocal_158 = 0;
										Var69.f_37 = 0;
									}
								}
							}
							else
							{
								unk_0xA103EF192E9B35DF(&(Global_2097152[func_183() /*11035*/].f_5526.f_1808.f_28), &iLocal_158);
							}
						}
						else if (iLocal_160 == 1)
						{
							if (iLocal_159 == 0)
							{
								unk_0x411523057B1B5C5D(&(Global_2097152[func_183() /*11035*/].f_5526.f_1808.f_28), &iLocal_159);
							}
							else if (!unk_0xC4ABE79FD283FA9B(iLocal_159))
							{
								switch (unk_0xAE641F9FFE4EBDE6(iLocal_159))
								{
									case 0:
										iLocal_159 = 0;
										Var69.f_37 = 0;
										break;
									
									default:
										Var69.f_38 = 1;
										iLocal_159 = 0;
										Var69.f_37 = 0;
										break;
									}
								}
						}
					}
					else if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
					{
					}
					else if (func_377(unk_0x3D35F9864E4640B1(), 1))
					{
					}
					else if (!func_153())
					{
					}
					else if (Var69.f_38)
					{
						if (func_376(96, "SOCIAL_CARAPP2", 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (iLocal_174)
					{
						Var69.f_39 = 0;
						if (iLocal_176)
						{
							if (!func_365(&Var69, iVar228))
							{
								iLocal_174 = 0;
							}
							iLocal_176 = 0;
						}
						else if (Var69.f_27 > 0 && !unk_0x48EED803374DB438(Var69.f_27, 0, 1, 0, -1))
						{
							Var69.f_39 = 1;
							iLocal_174 = 0;
						}
						else
						{
							if (!iLocal_175)
							{
								func_363(&Var69, 0);
								unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iVar228 /*140*/].f_101), 14);
								iLocal_175 = 1;
								func_344(iVar228, &(Global_1319069[iVar228 /*140*/]), 1, -1, 0, 0);
								func_127(3, 0);
							}
							if (func_269(96, "SOCIAL_CARAPP1", unk_0x0C9AAE7EC92AB471(Var69.f_0), 0, -99, 0, 0, 0, 0))
							{
								bVar229 = unk_0x89AAFC610FD6BBDE() >= Var69.f_27;
								bVar230 = (!bVar229 && unk_0x89AAFC610FD6BBDE() > 0);
								if (Var69.f_27 > 0)
								{
									unk_0xEE8CDFD4CBC9B722(Var69.f_27, Var69.f_0, 8, 1, bVar229, "CMOD_MAIN_0", unk_0x50B7853132D8438E(func_268(39, 0)), unk_0x50B7853132D8438E("CMOD_MAIN_0"), 0, bVar230);
								}
								Var69.f_33 = 0;
								Var69.f_36 = 1;
								Var69.f_35 = 1;
								iLocal_174 = 0;
								func_363(&Var69, 1);
								func_267(&Var69, 3);
								unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iVar228 /*140*/].f_101), 14);
								func_344(iVar228, &(Global_1319069[iVar228 /*140*/]), 1, -1, 0, 0);
								func_127(3, 0);
							}
						}
					}
					else if (Var69.f_39)
					{
						if (func_269(96, "SOCIAL_CARAPP3", unk_0x0C9AAE7EC92AB471(Var69.f_0), 0, -99, 0, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (func_269(96, "SOCIAL_CARAPP", unk_0x0C9AAE7EC92AB471(Var69.f_0), 0, -99, 0, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
					}
					iLocal_139 = 1;
				}
				else
				{
					Var69.f_33 = 0;
					Var69.f_36 = 0;
					Var69.f_35 = 0;
					Var69.f_34 = 0;
				}
			}
		}
		else if (iParam0 == func_263())
		{
			if ((((((Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam0 /*98*/] == Var69.f_0 || Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam0 /*98*/] == Var69.f_0) || Global_104439.f_2244.f_539.f_2387[2 /*295*/][iParam0 /*98*/] == Var69.f_0) || Global_104439.f_2244.f_539.f_2387[3 /*295*/][iParam0 /*98*/] == Var69.f_0) || ((iParam0 == 1 && Var69.f_0 == joaat("buffalo2")) && !Global_104439.f_19979.f_281[iParam0])) || ((iParam0 == 0 && Var69.f_0 == joaat("tailgater")) && !Global_104439.f_19979.f_281[iParam0])) || ((iParam0 == 2 && Var69.f_0 == joaat("bodhi2")) && !Global_104439.f_19979.f_281[iParam0]))
			{
				if (Var69.f_37)
				{
					Var69.f_38 = 0;
					if (iLocal_160 == 0)
					{
						if (unk_0x9D1DEF58A2286C01(iLocal_158))
						{
							if (!unk_0x8079F6226B677FE3(iLocal_158))
							{
								if (unk_0x57B7A5F9862C08C3(iLocal_158))
								{
									iLocal_158 = 0;
									Var69.f_37 = 0;
								}
								else
								{
									Var69.f_38 = 1;
									iLocal_158 = 0;
									Var69.f_37 = 0;
								}
							}
						}
						else
						{
							unk_0xA103EF192E9B35DF(&(Global_104439.f_19979.f_130[iParam0 /*41*/].f_28), &iLocal_158);
						}
					}
					else if (iLocal_160 == 1)
					{
						if (iLocal_159 == 0)
						{
							unk_0x411523057B1B5C5D(&(Global_104439.f_19979.f_130[iParam0 /*41*/].f_28), &iLocal_159);
						}
						else if (!unk_0xC4ABE79FD283FA9B(iLocal_159))
						{
							switch (unk_0xAE641F9FFE4EBDE6(iLocal_159))
							{
								case 0:
									iLocal_159 = 0;
									Var69.f_37 = 0;
									break;
								
								default:
									Var69.f_38 = 1;
									iLocal_159 = 0;
									Var69.f_37 = 0;
									break;
								}
							}
					}
				}
				else if (Var69.f_38)
				{
					if ((!func_403(0) && !func_403(3)) && !func_403(2))
					{
						if (func_262(96, "SOCIAL_CARAPP2", 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if (iLocal_162[iParam0])
				{
					iLocal_162[iParam0] = 0;
					Var69.f_39 = 0;
					Var69.f_34 = 0;
					if (!func_258(Var69.f_27) && (iParam0 != 1 || Global_104439.f_19979.f_281[iParam0]))
					{
						Var69.f_39 = 1;
					}
					else
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 1;
						Var69.f_34 = iLocal_166[iParam0];
					}
					iLocal_166[iParam0] = 0;
				}
				else if (Var69.f_39)
				{
					if ((!func_403(0) && !func_403(3)) && !func_403(2))
					{
						if (func_246(96, "SOCIAL_CARAPP3", 2, unk_0xC0D54565FC1032F4(unk_0x0C9AAE7EC92AB471(Global_104439.f_19979.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if ((!func_403(0) && !func_403(3)) && !func_403(2))
				{
					StringCopy(&Var231, "SOCIAL_CARAPP", 16);
					if (iParam0 == 1 && !Global_104439.f_19979.f_281[iParam0])
					{
						StringCopy(&Var231, "SOCIAL_FREE", 16);
					}
					if (func_246(96, &Var231, 2, unk_0xC0D54565FC1032F4(unk_0x0C9AAE7EC92AB471(Global_104439.f_19979.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
						Var69.f_34 = 0;
						func_245();
					}
				}
				iLocal_139 = 1;
			}
			else
			{
				Var69.f_33 = 0;
				Var69.f_36 = 0;
				Var69.f_35 = 0;
				Var69.f_34 = 0;
			}
		}
	}
	iVar235 = 1;
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (((iParam0 != 3 || !func_242(39)) || func_241()) || func_95(unk_0x3D35F9864E4640B1(), 1, 0))
		{
			iVar235 = 0;
		}
	}
	else if (!func_240(iParam0) || func_241())
	{
		iVar235 = 0;
	}
	if (iVar235 && !Var69.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0xF266CB99D17AA11D(&cVar14);
				if (unk_0x2E0831CE47B470B9())
				{
					iVar236 = func_27("uid");
					if (((iVar236 != 0 && iVar236 != Var69.f_26) && func_27("character") == iVar2) && (!unk_0x27CA09C6DFAB1E79() || func_27("vehicle") == iLocal_130))
					{
						if (unk_0x27CA09C6DFAB1E79())
						{
						}
						Var69.f_26 = iVar236;
						Var69.f_0 = func_27("carModel");
						if (!unk_0x6DFDB26E7DC403AF(Var69.f_0))
						{
							if (iParam0 == 0)
							{
								Var69.f_0 = func_239(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var69.f_0 = func_239(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var69.f_0 = func_239(2, 1);
							}
							else
							{
								Var69.f_0 = joaat("buffalo2");
							}
						}
						Var69.f_27 = func_27("cost");
						Var69.f_1 = func_27("carColour1");
						Var69.f_2 = func_27("carColour2");
						Var69.f_3 = func_27("carColour1Group");
						Var69.f_4 = func_27("carColour2Group");
						Var69.f_5 = func_27("windowTint");
						Var69.f_18 = func_238(func_27("bulletProofTyres"));
						Var69.f_9 = func_27("carEngine");
						Var69.f_10 = func_27("carBrakes");
						Var69.f_13 = func_27("carExhaust");
						Var69.f_11 = func_27("carWheel");
						Var69.f_6 = func_27("tyreSmokeColourRed");
						Var69.f_7 = func_27("tyreSmokeColourGreen");
						Var69.f_8 = func_27("tyreSmokeColourBlue");
						Var69.f_16 = func_27("carHorn");
						Var69.f_15 = func_27("carArmour");
						Var69.f_19 = func_27("carTurbo");
						Var69.f_14 = func_27("carSuspension");
						Var69.f_17 = func_27("carXenonLights");
						Var69.f_20 = func_27("tyreSmoke");
						Var69.f_12 = Var26.f_10;
						iVar0 = 1;
						if (!unk_0x27CA09C6DFAB1E79())
						{
							if (!iLocal_170[iParam0] && (unk_0x31CD6E9F83C10233() - iLocal_161) < 20000)
							{
								iLocal_162[iParam0] = 1;
							}
							else if (((!func_164(0) && func_237(1, 0) == 0) && (Global_104439.f_8946 || func_236(0))) && (unk_0x2A3398C6222EB190(Global_104439.f_8946.f_2[27 /*3*/], 1) || func_236(0)))
							{
								iLocal_162[iParam0] = 1;
								iLocal_166[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var69.f_0 == joaat("tailgater")) || (iParam0 == 1 && Var69.f_0 == joaat("buffalo2"))) || (iParam0 == 1 && Var69.f_0 == joaat("bagger"))) || (iParam0 == 2 && Var69.f_0 == joaat("bodhi2")))
							{
								if (func_237(iParam0, Var69.f_0) == 0)
								{
									iLocal_162[iParam0] = 1;
									iLocal_166[iParam0] = 1;
								}
							}
							if (!iLocal_162[iParam0])
							{
							}
						}
					}
					if (!unk_0x27CA09C6DFAB1E79())
					{
						iLocal_170[iParam0] = 1;
					}
				}
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
			}
			else if (iVar1 == 1 && iVar0)
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0xF266CB99D17AA11D("plate");
				if (unk_0x2E0831CE47B470B9())
				{
					Var69.f_32 = func_27("carPlateBack");
					if (Var69.f_32 > 4)
					{
						Var69.f_32 = 0;
						Var69.f_32 = func_27("carPlateBack");
					}
					StringCopy(&(Var69.f_28), func_235("carPlateText"), 16);
				}
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
				Var69.f_33 = 1;
				Var69.f_37 = 1;
				Var69.f_39 = 0;
				Var69.f_35 = 0;
				Var69.f_40 = 0;
				if (!unk_0x27CA09C6DFAB1E79())
				{
					unk_0x356621BE3FFD87C4(joaat("car_mod_app_used"), 1, 1);
					func_234(135, 1);
					Global_104439.f_19979.f_262 = 1;
				}
				else
				{
					Global_2097152[func_183() /*11035*/].f_5526.f_1998 = iLocal_132;
					func_56(99, 1, -1, 1);
				}
				iLocal_378 = 1;
			}
			iVar1++;
		}
	}
	if ((!Var26.f_41 && iVar235) && Var26.f_40)
	{
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (!func_232(&Var26))
			{
				iLocal_139 = 1;
				return;
			}
		}
		if (unk_0x27CA09C6DFAB1E79())
		{
		}
		unk_0xE0E59AE643E9BBB5("car");
		unk_0xF266CB99D17AA11D("appdata");
		iVar237 = func_231();
		if (iVar237 == 0)
		{
			iVar237 = func_231();
		}
		func_190("appUID", iVar237);
		Global_104439.f_19979.f_272 = iVar237;
		iVar238 = 0;
		iVar239 = 0;
		if (func_153())
		{
			if (func_203())
			{
				iVar239 = (iVar239 + Global_262145.f_121);
			}
		}
		func_398("spDiscount", (1f - (unk_0xBBDA792448DB5A89(iVar238) / 100f)));
		func_398("mpDiscount", (1f - (unk_0xBBDA792448DB5A89(iVar239) / 100f)));
		if (unk_0xE096BC82D913B3DB())
		{
			func_190("playerName", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
			if (unk_0x27CA09C6DFAB1E79())
			{
				func_190("playerNameMP", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
			}
			else
			{
				func_190("playerNameSP", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
			}
		}
		unk_0x25F628B35B652916();
		unk_0xF266CB99D17AA11D(&Var8);
		if (unk_0x27CA09C6DFAB1E79())
		{
			unk_0xF266CB99D17AA11D(&Var20);
		}
		if (!func_202(Var26.f_0))
		{
			func_190("carUnlocked", 0);
		}
		else
		{
			func_190("carUnlocked", 1);
			if ((((Var26.f_0 == joaat("sanchez") || Var26.f_0 == joaat("faggio2")) || Var26.f_0 == joaat("dune")) || Var26.f_0 == joaat("bfinjection")) || Var26.f_10 >= 8)
			{
				Var26.f_27 = 0;
			}
			if (func_201(Var26.f_0, 1))
			{
				Var26.f_30 = 0;
			}
			if (Var26.f_0 == joaat("lectro") || Var26.f_0 == joaat("vindicator"))
			{
				Var26.f_28 = 0;
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				func_190("playerSlot", iVar3);
				func_190("playerRank", func_200(unk_0x3D35F9864E4640B1()));
				switch (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
				{
					case joaat("mp_m_freemode_01"):
					case joaat("mp_f_freemode_01"):
						func_399("playerGang", "None");
						unk_0xB922891BFD232C45(116, &iVar4, &iVar5, &iVar6, &uVar7);
						break;
				}
				func_190("playerGangR", iVar4);
				func_190("playerGangG", iVar5);
				func_190("playerGangB", iVar6);
			}
			if (!unk_0x6DFDB26E7DC403AF(Var26.f_0))
			{
				func_190("carModel", -1);
				func_190("carUnlocked", 0);
			}
			else
			{
				func_190("carModel", Var26.f_0);
			}
			if (!unk_0x27CA09C6DFAB1E79())
			{
				switch (Var26.f_39)
				{
					case 0:
						if (unk_0x2076012573940835(Var26.f_0))
						{
							func_399("carType", "car");
						}
						else
						{
							func_399("carType", "bike");
						}
						break;
					
					case 1:
						func_399("carType", "sport");
						break;
					
					case 2:
						func_399("carType", "suv");
						break;
					
					case 3:
						func_399("carType", "special");
						break;
				}
			}
			else
			{
				iVar240 = func_196(Var26.f_0);
				switch (iVar240)
				{
					case 0:
						func_399("carType", "car");
						break;
					
					case 1:
						func_399("carType", "sport");
						break;
					
					case 2:
						func_399("carType", "suv");
						break;
					
					case 3:
						func_399("carType", "special");
						break;
					
					case 4:
						func_399("carType", "bike");
						break;
					
					case 5:
						func_399("carType", "special");
						break;
					
					case 6:
						func_399("carType", "car");
						break;
					
					case 7:
						func_399("carType", "special");
						break;
					
					case 10:
						func_399("carType", "special");
						break;
					
					case 11:
						func_399("carType", "car");
						break;
					
					case 28:
						func_399("carType", "car");
						break;
					
					case 26:
						func_399("carType", "special");
						break;
					
					case 27:
						func_399("carType", "special");
						break;
					
					case 29:
						func_399("carType", "special");
						break;
					
					case 30:
						func_399("carType", "special");
						break;
					
					case 31:
						func_399("carType", "special");
						break;
					
					case 32:
						func_399("carType", "special");
						break;
					
					default:
						break;
					}
			}
			func_190("carColour1", Var26.f_1);
			func_190("carColour2", Var26.f_2);
			func_190("windowTint", Var26.f_3);
			func_190("bulletProofTyres", func_195(Var26.f_16));
			func_190("carEngine", Var26.f_7);
			func_190("carBrakes", Var26.f_8);
			func_190("carExhaust", Var26.f_11);
			func_190("carWheel", Var26.f_9);
			func_190("tyreSmokeColourRed", Var26.f_4);
			func_190("tyreSmokeColourGreen", Var26.f_5);
			func_190("tyreSmokeColourBlue", Var26.f_6);
			func_190("carHorn", Var26.f_14);
			func_190("carArmour", Var26.f_13);
			func_190("carTurbo", Var26.f_17);
			func_190("carSuspension", Var26.f_12);
			func_190("carXenonLights", Var26.f_15);
			func_190("tyreSmoke", Var26.f_18);
			func_190("tyreSmoke", Var26.f_18);
			func_190("carWheelType", Var26.f_10);
			func_190("carEngineCount", Var26.f_24);
			func_190("carBrakesCount", Var26.f_25);
			func_190("carExhaustCount", Var26.f_26);
			func_190("carWheelCount", Var26.f_27);
			func_190("carHornCount", Var26.f_28);
			func_190("carArmourCount", Var26.f_29);
			func_190("carSuspensionCount", Var26.f_30);
			func_190("carHorn1", Var26.f_33[0]);
			func_190("carHorn2", Var26.f_33[1]);
			func_190("carHorn3", Var26.f_33[2]);
			func_190("carHorn4", Var26.f_33[3]);
			func_190("carHorn5", Var26.f_33[4]);
			func_398("carPriceModifier", Var26.f_31);
			if (!unk_0x2A3398C6222EB190(Var26.f_32, 0) || Var26.f_0 == joaat("sovereign"))
			{
				func_190("carColour1Unlocked", 0);
			}
			else
			{
				func_190("carColour1Unlocked", 1);
			}
			if (!unk_0x2A3398C6222EB190(Var26.f_32, 1) || Var26.f_0 == joaat("sovereign"))
			{
				func_190("carColour2Unlocked", 0);
			}
			else
			{
				func_190("carColour2Unlocked", 1);
			}
			iVar241 = 0;
			if (!unk_0x27CA09C6DFAB1E79() || unk_0x2A3398C6222EB190(Global_1319069[iLocal_132 /*140*/].f_101, 17))
			{
				unk_0xCD7E92DE2BFA0B0D(&iVar241, 0);
			}
			if (!unk_0x27CA09C6DFAB1E79() || unk_0x2A3398C6222EB190(Global_1319069[iLocal_132 /*140*/].f_101, 18))
			{
				unk_0xCD7E92DE2BFA0B0D(&iVar241, 1);
			}
			func_190("newItemUnlocks", iVar241);
		}
		if (unk_0x27CA09C6DFAB1E79())
		{
			unk_0x25F628B35B652916();
		}
		unk_0x25F628B35B652916();
		Local_143 = { Var8 };
		Local_149 = { Var20 };
		iLocal_142 = Var26.f_0;
		bLocal_140 = true;
		unk_0xF266CB99D17AA11D("plate");
		func_190("carPlateBack", Var26.f_23);
		unk_0x25F628B35B652916();
		unk_0xC7C77285A27883FD();
		Var26.f_40 = 0;
		iLocal_157 = 1;
		unk_0xC1B1E9A034A63A62(0);
		if (!unk_0x27CA09C6DFAB1E79())
		{
			Global_104439.f_19979.f_277[iParam0] = 1;
		}
		else
		{
			if (iVar3 == 0)
			{
				func_395(joaat("mpply_carapp_data_sent_0"), 1);
			}
			else if (iVar3 == 1)
			{
				func_395(joaat("mpply_carapp_data_sent_1"), 1);
			}
			else if (iVar3 == 2)
			{
				func_395(joaat("mpply_carapp_data_sent_2"), 1);
			}
			else if (iVar3 == 3)
			{
				func_395(joaat("mpply_carapp_data_sent_3"), 1);
			}
			else if (iVar3 == 4)
			{
				func_395(joaat("mpply_carapp_data_sent_4"), 1);
			}
			Global_2097152[func_183() /*11035*/].f_5526.f_1849[iLocal_130] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104439.f_19979[iParam0 /*43*/] = { Var26 };
			Global_104439.f_19979.f_130[iParam0 /*41*/] = { Var69 };
			break;
		
		case 3:
			func_194(&(Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/]), &Var26);
			Global_2097152[func_183() /*11035*/].f_5526.f_1808 = { Var69 };
			break;
	}
}

void func_194(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = uParam1->f_2;
	uParam0->f_9 = uParam1->f_27;
	uParam0->f_3[0] = uParam1->f_33[0];
	uParam0->f_3[1] = uParam1->f_33[1];
	uParam0->f_3[2] = uParam1->f_33[2];
	uParam0->f_3[3] = uParam1->f_33[3];
	uParam0->f_3[4] = uParam1->f_33[4];
	uParam0->f_10 = uParam1->f_40;
	uParam0->f_11 = uParam1->f_41;
	uParam0->f_12 = uParam1->f_42;
}

int func_195(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
	}
	if (func_199(iParam0))
	{
		return 33;
	}
	else if (func_198(iParam0))
	{
		return 34;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_197(iParam0))
	{
		return 3;
	}
	if (unk_0x34C854420D02F57B(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
			return 3;
			break;
	}
	return 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	return 0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
			return 1;
			break;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
			return 1;
			break;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = func_135(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_133(iVar0, 0);
}

int func_201(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13342)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17784)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17786)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17790)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17787)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17794)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17792)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17797)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19649)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19650)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger"))
	{
		return 0;
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		return 0;
	}
	if ((((((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("monster")) || iParam0 == joaat("technical")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("boxville5"))
	{
		return 0;
	}
	if (unk_0x1DBFCF939B3B47D0(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_203()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0x20551D6D924ED04B())
	{
		return 0;
	}
	if (func_153())
	{
		if (func_206())
		{
			iVar0 = func_205();
			iVar1 = func_204();
			fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1364950);
	iVar0 = (iVar0 + Global_1364953);
	return iVar0;
}

int func_205()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1364951);
	iVar0 = (iVar0 + Global_1364952);
	iVar0 = (iVar0 + Global_1364950);
	iVar0 = (iVar0 + Global_1364953);
	iVar0 = (iVar0 + Global_1364955);
	iVar0 = (iVar0 + Global_1364954);
	iVar0 = (iVar0 + func_119(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_119(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_119(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_119(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_119(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_119(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_119(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_119(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_119(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_206()
{
	struct<7> Var0;
	struct<7> Var7;
	
	unk_0xB3DBA6F07BAB49F2(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_230(joaat("mpply_started_mp")) };
	if (func_207(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_207(struct<7> Param0, struct<7> Param7, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(Param7);
	iVar1 = func_218(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_208(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_216(iParam1) || !func_216(iParam0))
	{
		return 1;
	}
	iVar0 = func_214(iParam0);
	iVar1 = func_214(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_210(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_211(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_212(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_213(int iParam0)
{
	return iParam0 & 15;
}

var func_214(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_215(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_215(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_216(int iParam0)
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
	iVar0 = func_209(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_211(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_214(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_213(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_217(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0, int iParam1)
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

var func_218(struct<7> Param0, int iParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_227(Param0) == 0)
	{
		uVar0 = func_228(Param0);
		uVar1 = uVar0;
		func_219(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_219(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_214(*uParam0);
	iVar1 = func_213(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_211(*uParam0);
	iVar4 = func_210(*uParam0);
	iVar5 = func_209(*uParam0);
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
	iVar6 = func_217(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_217(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_220(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_226(uParam0, iParam1);
	func_225(uParam0, iParam2);
	func_224(uParam0, iParam3);
	func_223(uParam0, iParam5);
	func_222(uParam0, iParam4);
	func_221(uParam0, iParam6);
}

void func_221(var uParam0, int iParam1)
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

void func_222(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_214(*uParam0);
	if (iParam1 < 1 || iParam1 > func_217(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_223(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_224(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_225(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_226(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_227(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_228(struct<6> Param0, var uParam6)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_221(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_223(&uVar0, func_229(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_222(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_224(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_225(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_226(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_229(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_230(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (unk_0x69B5FBD97FE45C90(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_231()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0x3AF262D7332EEDF5(0, 2) == 0)
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_232(var uParam0)
{
	var uVar0;
	
	if (!func_202(*uParam0))
	{
		return 1;
	}
	if (iLocal_208)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_207)) < 1500)
		{
			return 0;
		}
	}
	iLocal_208 = 0;
	unk_0xBE91026C1FC72180(*uParam0);
	if (!unk_0x772F801619C83779(*uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5129A9193468FF77(*uParam0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 0f, 0, 0, 0);
	if (unk_0x5583DCB5A49F0E53(uVar0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(uVar0, 0);
	}
	uParam0->f_24 = unk_0x43CF7C22C63E44EA(uVar0, 11) + 1;
	uParam0->f_25 = unk_0x43CF7C22C63E44EA(uVar0, 12) + 1;
	uParam0->f_26 = unk_0x43CF7C22C63E44EA(uVar0, 4) + 1;
	uParam0->f_28 = unk_0x43CF7C22C63E44EA(uVar0, 14) + 1;
	uParam0->f_29 = unk_0x43CF7C22C63E44EA(uVar0, 16) + 1;
	uParam0->f_30 = unk_0x43CF7C22C63E44EA(uVar0, 15) + 1;
	uParam0->f_31 = func_233(uVar0);
	uParam0->f_32 = unk_0xC70F2BB57FE317CD(uVar0);
	uParam0->f_39 = unk_0xDF012B24B1C790FF(uVar0);
	unk_0xE9F8539D5AF6B052(&uVar0);
	unk_0x9793B48C4C8275F8(*uParam0);
	iLocal_208 = 1;
	uLocal_207 = unk_0x898811EA80D35DE2();
	unk_0xC1B1E9A034A63A62(0);
	return 1;
}

float func_233(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x76B3C79DE564AFC6(uParam0) && unk_0x432757A9E7AAFA96(uParam0, 0)) && unk_0x0A264F4746D9A02B(uParam0) >= 0) && unk_0x0A264F4746D9A02B(uParam0) < 255)
	{
		if (unk_0xDF012B24B1C790FF(uParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xDF012B24B1C790FF(uParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xDF012B24B1C790FF(uParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xDF012B24B1C790FF(uParam0) == 0)
		{
			if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(uParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

void func_234(int iParam0, int iParam1)
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

var func_235(char* sParam0)
{
	return unk_0x1B335720C41DE290(func_28(sParam0));
}

bool func_236(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar1]) && unk_0x432757A9E7AAFA96(Global_90238[iVar1], 0))
		{
			if (Global_90248[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0xE9559A12052415BE(Global_90238[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_238(int iParam0)
{
	return iParam0 == 1;
}

int func_239(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_240(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_401(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_240(int iParam0)
{
	return iParam0 < 3;
}

bool func_241()
{
	return Global_92814.f_310 > 0;
}

bool func_242(int iParam0)
{
	return func_243(iParam0, 0, 0);
}

int func_243(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x2A3398C6222EB190(Global_92814.f_1315[iParam0], iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_83() == 0)
		{
			return unk_0x2A3398C6222EB190(func_51(func_244(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 6632;
			break;
		
		case 45:
			return 3787;
			break;
		
		case 46:
			return 5362;
			break;
		
		default:
			break;
	}
	return 7237;
}

int func_245()
{
	if (func_236(0))
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

int func_246(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xD804ACF2A7171150(&Global_2313, 10);
	iVar0 = 3;
	if (func_247(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_247(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
	{
	}
	func_257();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
			{
				return 0;
			}
		}
		if (Global_104439.f_13912[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_256() == 0)
	{
		func_254();
		return 0;
	}
	func_253(Global_16812);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/]), sParam1, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_25 = iParam7;
	Global_104439.f_14002[Global_16812 /*104*/].f_26 = uParam8;
	Global_104439.f_14002[Global_16812 /*104*/].f_29 = uParam9;
	Global_104439.f_14002[Global_16812 /*104*/].f_30 = uParam12;
	Global_104439.f_14002[Global_16812 /*104*/].f_31 = uParam11;
	Global_104439.f_14002[Global_16812 /*104*/].f_28 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x2A3398C6222EB190(Global_2313, 10))
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_252(0);
		func_252(2);
		func_252(1);
	}
	else
	{
		func_257();
		switch (iParam16)
		{
			case 3:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_252(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_252(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_252(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_252(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x2A3398C6222EB190(Global_2313, 10))
		{
			Global_104439.f_13912[0 /*20*/].f_17 = 1;
			Global_104439.f_13912[1 /*20*/].f_17 = 1;
			Global_104439.f_13912[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104439.f_13912[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104439.f_13912[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104439.f_13912[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104439.f_13912[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_257();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_4())
			{
				unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_251(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_248(1);
			func_251(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_248(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_403(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar2);
								unk_0x1C703A54AB4B12F6();
							}
							if (Global_2455109)
							{
								if (iVar1 == 14)
								{
									func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70785)
								{
									iVar4 = 0;
									iVar4 = Global_2606876;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2606877[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2606877[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(Global_2319);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar7);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar8);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 8)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_250(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622539.f_1;
								func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_249(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_249(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_250(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		func_250(sParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
	{
		func_250(sParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam10))
	{
		func_250(sParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam11))
	{
		func_250(sParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_250(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_251(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_252(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104439.f_13912[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_253(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x6676AD594A1E113E();
	uVar1 = unk_0xE647A8424B4399CE();
	uVar2 = unk_0x41413FABD538FC3A();
	uVar3 = unk_0xEC3E0DDCEEBF8A00();
	uVar4 = unk_0x1A7BD52C0A88E679() + 1;
	uVar5 = unk_0x760D3328FB0F48C5();
	Global_104439.f_14002[iParam0 /*104*/].f_18 = uVar0;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_255(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_24 = 1;
}

int func_255(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0 || Global_104439.f_14002[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_255(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_257()
{
	if (func_403(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_263();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_258(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (func_260(1))
	{
		if (Global_70785)
		{
			if (unk_0x48EED803374DB438(iParam0, 0, 1, 0, -1))
			{
				return 1;
			}
		}
		else if (func_259(func_263()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_260(bool bParam0)
{
	if (Global_70785)
	{
		return func_152(unk_0x3D35F9864E4640B1(), bParam0, !func_261(1));
	}
	return !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445());
}

bool func_261(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2445582.f_664.f_28 && unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_2445582.f_664.f_31);
	}
	return Global_2445582.f_664.f_28;
}

int func_262(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD804ACF2A7171150(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_247(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_263()
{
	func_264();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_264()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_266(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_265(unk_0x0031992CA618A445());
			if (func_240(iVar0) && (!func_403(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_240(Global_104439.f_2244.f_539.f_4301))
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

int func_265(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_266(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_266(int iParam0)
{
	if (func_240(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_267(var uParam0, int iParam1)
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		Global_2097152[func_183() /*11035*/].f_5526.f_1990 = 1;
		Global_2097152[func_183() /*11035*/].f_5526.f_1991 = 1;
		Global_2097152[func_183() /*11035*/].f_5526.f_1996 = uParam0->f_32;
		Global_2097152[func_183() /*11035*/].f_5526.f_1992 = { uParam0->f_28 };
		Global_2097152[func_183() /*11035*/].f_5526.f_1997++;
	}
	else
	{
		Global_104439.f_19979.f_265 = 1;
		Global_104439.f_19979.f_266 = iParam1;
		Global_104439.f_19979.f_261 = 1;
		Global_104439.f_19979.f_271 = uParam0->f_32;
		Global_104439.f_19979.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_104439.f_19979.f_281[iParam1] = 1;
			Global_104439.f_19979.f_285[iParam1]++;
			unk_0x36E9A95630877B8A(joaat("sp_car_app_order_count"), 1f);
		}
	}
}

char* func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
					break;
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

bool func_269(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_270(&uVar0, iParam0, func_343(), sParam1, iVar165, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_270(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam3))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A());
	iVar1 = func_342(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		iVar2 = unk_0x50B7853132D8438E(sParam7);
	}
	if (func_341(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_335(uParam6))
	{
		return 0;
	}
	if (func_332(iVar0, iVar1, iVar2))
	{
		if (func_331())
		{
			return 0;
		}
		func_330();
		return func_277(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_276(iParam4))
	{
		return 0;
	}
	func_271(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_271(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1348168.f_40.f_1 = iParam0;
	Global_1348168.f_40.f_2 = iParam1;
	Global_1348168.f_40.f_3 = iParam2;
	StringCopy(&(Global_1348168.f_40.f_4), sParam3, 16);
	Global_1348168.f_40.f_8 = iParam4;
	Global_1348168.f_40.f_9 = iParam5;
	Global_1348168.f_40.f_14 = uParam6;
	func_272(iParam4);
	func_330();
	Global_1348168.f_40.f_13 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 7000);
}

void func_272(int iParam0)
{
	if (func_275(iParam0))
	{
		func_274();
		return;
	}
	func_273();
}

void func_273()
{
	Global_1348168.f_40.f_10 = 0;
}

void func_274()
{
	Global_1348168.f_40.f_10 = 1;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_276(int iParam0)
{
	return iParam0 > Global_1348168.f_40.f_8;
}

int func_277(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_329();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_326(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_323(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_326(uParam0, sParam3, sParam4);
		}
		return func_306(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_305(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_302(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_301(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_278(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_278(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_300();
	bVar0 = true;
	if (func_280(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_279(120000);
		return 1;
	}
	return 0;
}

void func_279(int iParam0)
{
	Global_1348168.f_40.f_11 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam0);
	Global_1348168.f_40.f_12 = 1;
}

int func_280(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_96();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x06D7899D9C1F422F(iVar0);
		iVar1 = func_294(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_293(uParam5, bParam6, &iVar3);
	uVar5 = func_291(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		iVar6++;
		if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xB3404E397FF56B3B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x2A3398C6222EB190(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x2A3398C6222EB190(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
	{
		bVar12 = func_290(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_284(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 0))
	{
		func_283();
	}
	func_300();
	func_282();
	func_281();
	return 1;
}

void func_281()
{
	Global_1348168.f_57 = 0;
	Global_1348168.f_57.f_1 = 0;
}

void func_282()
{
	Global_1348168.f_40 = 3;
}

void func_283()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2313, 8);
}

int func_284(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_285(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
		}
		return 1;
	}
	return 0;
}

int func_285(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
	{
	}
	func_257();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
			{
				return 0;
			}
		}
		if (Global_2608127 == 1)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_289() == 0)
	{
		func_287();
		return 0;
	}
	func_286(Global_2608126);
	StringCopy(&(Global_2606877[Global_2608126 /*104*/]), sParam1, 64);
	Global_2606877[Global_2608126 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2606877[Global_2608126 /*104*/].f_24 = iParam2;
	}
	Global_2606877[Global_2608126 /*104*/].f_25 = iParam7;
	Global_2606877[Global_2608126 /*104*/].f_26 = uParam8;
	Global_2606877[Global_2608126 /*104*/].f_29 = uParam9;
	Global_2606877[Global_2608126 /*104*/].f_30 = uParam12;
	Global_2606877[Global_2608126 /*104*/].f_31 = uParam11;
	Global_2606877[Global_2608126 /*104*/].f_28 = 0;
	Global_2606877[Global_2608126 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_33), sParam4, 64);
	Global_2606877[Global_2608126 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_50), sParam5, 64);
	Global_2606877[Global_2608126 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_83), sParam15, 64);
	func_257();
	switch (iParam16)
	{
		case 3:
			Global_2606877[Global_2608126 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2606877[Global_2608126 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2606877[Global_2608126 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2606877[Global_2608126 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_252(0);
				break;
			
			case 1:
				func_252(1);
				break;
			
			case 2:
				func_252(2);
				break;
			
			case 3:
				func_252(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2608127 = 1;
				break;
			
			case 0:
				Global_2608127 = 1;
				break;
			
			case 2:
				Global_2608127 = 1;
				break;
			
			case 1:
				Global_2608127 = 1;
				break;
			}
	}
	Global_16814[Global_2608126] = 0;
	if (bParam10)
	{
		func_257();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_4())
			{
				unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_251(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_248(1);
			func_251(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_286(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x6676AD594A1E113E();
	uVar1 = unk_0xE647A8424B4399CE();
	uVar2 = unk_0x41413FABD538FC3A();
	uVar3 = unk_0xEC3E0DDCEEBF8A00();
	uVar4 = unk_0x1A7BD52C0A88E679() + 1;
	uVar5 = unk_0x760D3328FB0F48C5();
	Global_2606877[iParam0 /*104*/].f_18 = uVar0;
	Global_2606877[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2606877[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2606877[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2606877[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2606877[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_287()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2608126 = 11;
	Global_2606877[Global_2608126 /*104*/].f_18 = -1;
	Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_288(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
		{
			Global_2608126 = iVar2;
		}
		iVar2++;
	}
	Global_2606877[Global_2608126 /*104*/].f_24 = 1;
}

int func_288(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_289()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2606877[iVar2 /*104*/].f_24 == 0)
		{
			Global_2608126 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2608126 = 11;
	Global_2606877[Global_2608126 /*104*/].f_18 = -1;
	Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2606877[iVar2 /*104*/].f_24 == 0 || Global_2606877[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_288(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
			{
				Global_2608126 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2608126 == 11)
	{
		return 0;
	}
	Global_2606877[Global_2608126 /*104*/].f_99[0] = 0;
	Global_2606877[Global_2608126 /*104*/].f_99[1] = 0;
	Global_2606877[Global_2608126 /*104*/].f_99[2] = 0;
	return 1;
}

int func_290(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_285(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
		}
		return 1;
	}
	return 0;
}

int func_291(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_292(2, iParam1);
	return iParam0;
}

void func_292(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_293(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return sLocal_21;
	}
	if (unk_0xB3404E397FF56B3B(sParam0, sLocal_21))
	{
		return sLocal_21;
	}
	func_292(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xC0D54565FC1032F4(sParam0);
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = func_297(iParam0);
	if (iVar0 == -1)
	{
		func_295(iParam0, 1);
		return 0;
	}
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_295(int iParam0, bool bParam1)
{
	if (!func_152(iParam0, 0, 1))
	{
		return;
	}
	if (func_297(iParam0) != -1)
	{
		return;
	}
	if (Global_1366023)
	{
		if (iParam0 == Global_1366023.f_1)
		{
			return;
		}
	}
	if (func_296(iParam0))
	{
		return;
	}
	if (Global_1366061 >= 32)
	{
		return;
	}
	Global_1366028[Global_1366061] = iParam0;
	Global_1366061++;
	if (bParam1)
	{
	}
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366061)
	{
		if (Global_1366028[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (!func_152(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1366021 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366021)
	{
		if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_298(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_298(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1366021)
	{
		return;
	}
	if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1365860[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
			unk_0x24EBBC5B25484B08(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1366021)
	{
		Global_1365860[iVar32 /*5*/] = { Global_1365860[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_299(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_299(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_96();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

void func_300()
{
	Global_1348168.f_40.f_9 = 4;
}

int func_301(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_300();
	bVar0 = false;
	return func_280(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_302(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_303(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_303(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_96();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x06D7899D9C1F422F(iVar0);
		iVar1 = func_294(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_293(uParam5, bParam6, &iVar3);
	uVar5 = func_291(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		iVar6++;
		if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xB3404E397FF56B3B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x2A3398C6222EB190(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x2A3398C6222EB190(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
	{
		bVar12 = func_246(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_262(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 0))
	{
		func_283();
	}
	func_304();
	func_282();
	func_281();
	return 1;
}

void func_304()
{
	Global_1348168.f_40.f_9 = 3;
}

int func_305(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
	}
	if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	func_304();
	bVar0 = true;
	if (func_303(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_279(120000);
		return 1;
	}
	return 0;
}

int func_306(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x2A3398C6222EB190(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 4))
	{
		bVar0 = func_322(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_312(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x2A3398C6222EB190(iParam4, 3))
		{
			func_311(1);
		}
		if (unk_0x2A3398C6222EB190(iParam4, 5))
		{
			func_310(1);
		}
		func_309();
		func_282();
		func_308();
		func_307();
		return 1;
	}
	return 0;
}

void func_307()
{
	Global_2510108 = 0;
}

void func_308()
{
	Global_1348168.f_57 = 1;
	Global_1348168.f_57.f_1 = 0;
}

void func_309()
{
	Global_1348168.f_40.f_9 = 1;
}

void func_310(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2315, 0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2315, 0);
	}
}

void func_311(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 20);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 20);
	}
}

int func_312(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_321(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_313(sParam3, iParam4, bParam7);
}

int func_313(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_320();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_319(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_318();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_257();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_317())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_316())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_315();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_314();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_320();
	}
	return 0;
}

void func_314()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_315()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_316()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_317()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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

void func_318()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_319(int iParam0, int iParam1)
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

void func_320()
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

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_322(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_321(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_313(sParam3, iParam4, bParam7);
}

int func_323(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
	}
	if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (func_325(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_324();
		func_309();
		func_282();
		func_308();
		func_307();
		return 1;
	}
	return 0;
}

void func_324()
{
	Global_16763 = 0;
}

bool func_325(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_321(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_313(sParam3, iParam4, bParam8);
}

int func_326(var uParam0, char* sParam1, char* sParam2)
{
	if (func_328(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_327();
		func_282();
		func_308();
		return 1;
	}
	return 0;
}

void func_327()
{
	Global_1348168.f_40.f_9 = 2;
}

bool func_328(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_321(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_313(sParam2, iParam3, 0);
}

void func_329()
{
	Global_1348168.f_55 = Global_1348168.f_40.f_1;
	Global_1348168.f_55.f_1 = Global_1348168.f_40.f_10;
}

void func_330()
{
	Global_1348168.f_40 = 1;
}

bool func_331()
{
	return Global_1348168.f_40 == 1;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	if (!func_333(iParam0))
	{
		return 0;
	}
	if (Global_1348168.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1348168.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_333(int iParam0)
{
	if (!func_334())
	{
		return 0;
	}
	if (!Global_1348168.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_334()
{
	if (Global_1348168.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_335(int iParam0)
{
	if (func_340())
	{
		return 0;
	}
	if (func_339())
	{
		return 0;
	}
	if (func_338(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1767039 || func_337())
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(uParam0, 6))
	{
		if (func_336())
		{
			return 0;
		}
	}
	return 1;
}

bool func_336()
{
	return unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1364754);
}

int func_337()
{
	if (Global_2595735.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_338(int iParam0)
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

bool func_339()
{
	return Global_1348168.f_40 == 3;
}

bool func_340()
{
	return func_316();
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	if (!func_339())
	{
		return 0;
	}
	return func_332(iParam0, iParam1, iParam2);
}

int func_342(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x50B7853132D8438E(&cVar0);
}

char* func_343()
{
	return "TXTMSG";
}

int func_344(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_183() /*11035*/].f_7550.f_1165 = unk_0x6239D1A379D387A4();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_362(1411, iParam0);
	func_17(iVar1, uParam1->f_136, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_362(1412, iParam0);
	func_17(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_361(iParam0))
	{
	}
	else
	{
		iVar1 = func_362(1413, iParam0);
		func_17(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_362(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_360(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_362(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_362(1441, iParam0);
	func_17(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_362(1442, iParam0);
	func_17(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_362(1443, iParam0);
	func_17(iVar1, uParam1->f_64, iParam3, 1);
	if (func_361(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_362(1444, iParam0);
		func_17(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_362(1445, iParam0);
	func_17(iVar1, uParam1->f_67, iParam3, 1);
	if (func_361(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_362(1446, iParam0);
		func_17(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_362(1447, iParam0);
	func_17(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_362(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_362(1449, iParam0);
	func_17(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_362(1450, iParam0);
	func_17(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_362(1451, iParam0);
	func_17(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_362(1452, iParam0);
	func_17(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_362(1453, iParam0);
	func_17(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_362(1454, iParam0);
	func_17(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_362(1455, iParam0);
	func_17(iVar1, uParam1->f_8, iParam3, 1);
	if (func_361(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_362(3880, iParam0);
		func_17(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_362(3881, iParam0);
		func_17(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_362(3882, iParam0);
		func_17(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_359(iParam0);
		func_17(iVar1, uParam1->f_96, iParam3, 1);
		iVar1 = func_358(iParam0);
		func_17(iVar1, uParam1->f_98, iParam3, 1);
		iVar1 = func_347(iParam0);
		func_17(iVar1, uParam1->f_97, iParam3, 1);
	}
	uVar2 = Global_2097152[func_183() /*11035*/].f_7550.f_1165;
	if (bParam5)
	{
		uVar2 = unk_0x6239D1A379D387A4();
	}
	func_130(1625, uVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_130(func_346(1, iParam0), uParam1->f_101, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_130(func_346(2, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_130(func_346(3, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_130(func_346(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_130(func_346(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_130(func_346(7, iParam0), uParam1->f_138, iParam3, 1, 0);
	if (!func_361(iParam0))
	{
		if (!unk_0x0BD3CCFB6C6CFA91(&(uParam1->f_1)))
		{
			func_345(func_346(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_345(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6ACD6012FE412CB7(iVar0, uParam1);
	}
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5904;
				
				case 160:
					return 5911;
				
				case 161:
					return 5918;
				
				case 162:
					return 5925;
				
				case 163:
					return 5932;
				
				case 164:
					return 5939;
				
				case 165:
					return 5946;
				
				case 166:
					return 5953;
				
				case 167:
					return 5960;
				
				case 168:
					return 5967;
				
				case 169:
					return 5974;
				
				case 170:
					return 5981;
				
				case 171:
					return 5988;
				
				case 172:
					return 5995;
				
				case 173:
					return 6002;
				
				case 174:
					return 6009;
				
				case 175:
					return 6016;
				
				case 176:
					return 6023;
				
				case 177:
					return 6030;
				
				case 178:
					return 6037;
				
				case 179:
					return 6044;
				
				case 180:
					return 6051;
				
				case 181:
					return 6058;
				
				case 182:
					return 6065;
				
				case 183:
					return 6072;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5905;
				
				case 160:
					return 5912;
				
				case 161:
					return 5919;
				
				case 162:
					return 5926;
				
				case 163:
					return 5933;
				
				case 164:
					return 5940;
				
				case 165:
					return 5947;
				
				case 166:
					return 5954;
				
				case 167:
					return 5961;
				
				case 168:
					return 5968;
				
				case 169:
					return 5975;
				
				case 170:
					return 5982;
				
				case 171:
					return 5989;
				
				case 172:
					return 5996;
				
				case 173:
					return 6003;
				
				case 174:
					return 6010;
				
				case 175:
					return 6017;
				
				case 176:
					return 6024;
				
				case 177:
					return 6031;
				
				case 178:
					return 6038;
				
				case 179:
					return 6045;
				
				case 180:
					return 6052;
				
				case 181:
					return 6059;
				
				case 182:
					return 6066;
				
				case 183:
					return 6073;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5906;
				
				case 160:
					return 5913;
				
				case 161:
					return 5920;
				
				case 162:
					return 5927;
				
				case 163:
					return 5934;
				
				case 164:
					return 5941;
				
				case 165:
					return 5948;
				
				case 166:
					return 5955;
				
				case 167:
					return 5962;
				
				case 168:
					return 5969;
				
				case 169:
					return 5976;
				
				case 170:
					return 5983;
				
				case 171:
					return 5990;
				
				case 172:
					return 5997;
				
				case 173:
					return 6004;
				
				case 174:
					return 6011;
				
				case 175:
					return 6018;
				
				case 176:
					return 6025;
				
				case 177:
					return 6032;
				
				case 178:
					return 6039;
				
				case 179:
					return 6046;
				
				case 180:
					return 6053;
				
				case 181:
					return 6060;
				
				case 182:
					return 6067;
				
				case 183:
					return 6074;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5907;
				
				case 160:
					return 5914;
				
				case 161:
					return 5921;
				
				case 162:
					return 5928;
				
				case 163:
					return 5935;
				
				case 164:
					return 5942;
				
				case 165:
					return 5949;
				
				case 166:
					return 5956;
				
				case 167:
					return 5963;
				
				case 168:
					return 5970;
				
				case 169:
					return 5977;
				
				case 170:
					return 5984;
				
				case 171:
					return 5991;
				
				case 172:
					return 5998;
				
				case 173:
					return 6005;
				
				case 174:
					return 6012;
				
				case 175:
					return 6019;
				
				case 176:
					return 6026;
				
				case 177:
					return 6033;
				
				case 178:
					return 6040;
				
				case 179:
					return 6047;
				
				case 180:
					return 6054;
				
				case 181:
					return 6061;
				
				case 182:
					return 6068;
				
				case 183:
					return 6075;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3325;
				
				case 78:
					return 3333;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_347(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_348(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_357(iParam0);
		return func_356(iVar0);
	}
	return (func_349(iParam0, -1) * iParam0 + 1);
}

int func_349(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_352(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_351(iParam1))
			{
				return 0;
			}
			else if (func_350(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 <= 116 && iParam1 > 0)
			{
				if (Global_1049495[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
	}
	return 0;
}

int func_350(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_352(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_353(unk_0x3D35F9864E4640B1(), 0);
	}
	if (bParam1)
	{
		if (func_353(unk_0x3D35F9864E4640B1(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_353(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_96())
	{
		if (!func_355(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_354(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_354(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 9);
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 2);
	}
	return 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_357(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

int func_358(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_348(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_348(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_348(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	return 0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_348(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_348(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_348(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_348(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	return iVar0;
}

int func_363(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = Global_2097152[func_183() /*11035*/].f_5526.f_1998;
	if ((*uParam0 == Global_1319069[iVar0 /*140*/].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1319069[iVar0 /*140*/].f_1 = { uParam0->f_28 };
		Global_1319069[iVar0 /*140*/] = uParam0->f_32;
		if (func_364(uParam0->f_1, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iVar0 /*140*/].f_77), 13);
			Global_1319069[iVar0 /*140*/].f_5 = iVar6;
			Global_1319069[iVar0 /*140*/].f_7 = iVar7;
			Global_1319069[iVar0 /*140*/].f_136 = iVar1;
		}
		if (func_364(uParam0->f_2, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iVar0 /*140*/].f_77), 12);
			Global_1319069[iVar0 /*140*/].f_6 = iVar6;
			Global_1319069[iVar0 /*140*/].f_137 = iVar1;
		}
		if (uParam0->f_18)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iVar0 /*140*/].f_77), 9);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iVar0 /*140*/].f_77), 9);
		}
		Global_1319069[iVar0 /*140*/].f_62 = uParam0->f_6;
		Global_1319069[iVar0 /*140*/].f_63 = uParam0->f_7;
		Global_1319069[iVar0 /*140*/].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1319069[iVar0 /*140*/].f_65 = 0;
		}
		else
		{
			Global_1319069[iVar0 /*140*/].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1319069[iVar0 /*140*/].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && uParam0->f_12 < 8)
		{
			Global_1319069[iVar0 /*140*/].f_9[23] = uParam0->f_11;
			Global_1319069[iVar0 /*140*/].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1319069[iVar0 /*140*/].f_9[20] = uParam0->f_20;
		}
		if (func_406(iVar0, &iVar8))
		{
			if (bParam1)
			{
				Global_2097152[func_183() /*11035*/].f_5526[iVar8 /*13*/].f_10 = 1;
				Global_2097152[func_183() /*11035*/].f_5526[iVar8 /*13*/].f_11 = 0;
			}
			Global_2097152[func_183() /*11035*/].f_5526[iVar8 /*13*/] = Global_1319069[iVar0 /*140*/].f_66;
			Global_2097152[func_183() /*11035*/].f_5526[iVar8 /*13*/].f_1 = uParam0->f_1;
			Global_2097152[func_183() /*11035*/].f_5526[iVar8 /*13*/].f_2 = uParam0->f_2;
		}
		return 1;
	}
	return 0;
}

bool func_364(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

bool func_365(var uParam0, int iParam1)
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
	var uVar9;
	int iVar10;
	char* sVar11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = 0;
	iVar2 = Global_1319069[iParam1 /*140*/].f_5;
	iVar3 = Global_1319069[iParam1 /*140*/].f_6;
	iVar4 = Global_1319069[iParam1 /*140*/].f_7;
	iVar5 = Global_1319069[iParam1 /*140*/].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar16 = 0;
	if (func_375(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			func_364(uParam0->f_1, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_369(&sVar11, iVar15, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (func_375(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			func_364(uParam0->f_2, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_369(&sVar11, iVar15, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (uParam0->f_32 != Global_1319069[iParam1 /*140*/])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!unk_0x2A3398C6222EB190(Global_1319069[iParam1 /*140*/].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar17 = Global_1319069[iParam1 /*140*/].f_62;
	iVar18 = Global_1319069[iParam1 /*140*/].f_63;
	iVar19 = Global_1319069[iParam1 /*140*/].f_64;
	if ((uParam0->f_6 != iVar17 || uParam0->f_7 != iVar18) || uParam0->f_8 != iVar19)
	{
		switch (func_366(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			
			case 2:
				iVar0 += 5000;
				break;
			
			case 3:
				iVar0 += 10000;
				break;
			
			case 4:
				iVar0 += 12500;
				break;
			
			case 6:
				iVar0 += 15000;
				break;
			
			case 8:
				iVar0 += 20000;
				break;
			
			case 5:
				iVar0 += 14000;
				break;
			
			case 7:
				iVar0 += 17500;
				break;
			
			case 9:
				iVar0 = (iVar0 + Global_262145.f_7059);
				break;
			
			case 10:
				iVar0 = (iVar0 + Global_262145.f_7060);
				break;
			
			case 11:
				iVar0 = (iVar0 + Global_262145.f_7197);
				break;
			}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_7054);
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1319069[iParam1 /*140*/].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1319069[iParam1 /*140*/].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1319069[iParam1 /*140*/].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1319069[iParam1 /*140*/].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1319069[iParam1 /*140*/].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

int func_366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314010 && iParam1 == Global_1314011) && iParam2 == Global_1314012)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_368())
	{
		unk_0xB922891BFD232C45(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		unk_0xB922891BFD232C45(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_367())
	{
		unk_0xB922891BFD232C45(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		unk_0xB922891BFD232C45(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_367()
{
	return unk_0x43456EBBDC27D696(1785846048);
}

bool func_368()
{
	return unk_0x43456EBBDC27D696(42019760);
}

int func_369(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			iVar0 = func_374(sParam0);
			break;
		
		case 4:
			iVar0 = func_373(sParam0);
			break;
		
		case 0:
			iVar0 = func_372(sParam0);
			break;
		
		case 3:
			iVar0 = func_371(sParam0);
			break;
		
		case 5:
			iVar0 = 25000;
			break;
		
		case 2:
			iVar0 = func_370(sParam0);
			break;
	}
	if (iParam3 && !bParam2)
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 2f));
	}
	if (bParam4)
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_13739));
	}
	if (bParam5)
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_13740));
	}
	if (bParam6)
	{
		iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_13741));
	}
	return iVar0;
}

int func_370(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2520;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 2430;
			break;
		
		case joaat("GRAPHITE"):
			return 2370;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 2490;
			break;
		
		case joaat("BLACK_STEEL"):
			return 2580;
			break;
		
		case joaat("DARK_SILVER"):
			return 2340;
			break;
		
		case joaat("SILVER"):
			return 2460;
			break;
		
		case joaat("BLUE_SILVER"):
			return 3200;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 2340;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 2580;
			break;
		
		case joaat("STONE_SILVER"):
			return 2610;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 2700;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 2640;
			break;
		
		case joaat("RED"):
			return 4200;
			break;
		
		case joaat("TORINO_RED"):
			return 15250;
			break;
		
		case joaat("FORMULA_RED"):
			return 15000;
			break;
		
		case joaat("LAVA_RED"):
			return 19550;
			break;
		
		case joaat("BLAZE_RED"):
			return 5400;
			break;
		
		case joaat("GRACE_RED"):
			return 2850;
			break;
		
		case joaat("GARNET_RED"):
			return 2670;
			break;
		
		case joaat("SUNSET_RED"):
			return 18100;
			break;
		
		case joaat("CABERNET_RED"):
			return 16240;
			break;
		
		case joaat("WINE_RED"):
			return 8200;
			break;
		
		case joaat("CANDY_RED"):
			return 19800;
			break;
		
		case 1224546404:
			return 20000;
			break;
		
		case joaat("PINK"):
			return 19200;
			break;
		
		case joaat("SALMON_PINK"):
			return 17600;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 15800;
			break;
		
		case joaat("ORANGE"):
			return 15480;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 15620;
			break;
		
		case joaat("GOLD"):
			return 3500;
			break;
		
		case joaat("BRONZE"):
			return 3450;
			break;
		
		case joaat("YELLOW"):
			return 15590;
			break;
		
		case joaat("RACE_YELLOW"):
			return 15860;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 16000;
			break;
		
		case joaat("DARK_GREEN"):
			return 2610;
			break;
		
		case joaat("RACING_GREEN"):
			return 15760;
			break;
		
		case joaat("SEA_GREEN"):
			return 2850;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 2550;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 15970;
			break;
		
		case joaat("PETROL_GREEN"):
			return 16850;
			break;
		
		case joaat("LIME_GREEN"):
			return 20000;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 7500;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 3030;
			break;
		
		case joaat("DARK_BLUE"):
			return 2790;
			break;
		
		case joaat("SAXON_BLUE"):
			return 2700;
			break;
		
		case joaat("BLUE"):
			return 3840;
			break;
		
		case joaat("MARINER_BLUE"):
			return 2610;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 2520;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 15700;
			break;
		
		case joaat("SURF_BLUE"):
			return 3900;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 3610;
			break;
		
		case joaat("RACING_BLUE"):
			return 15340;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 18750;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 3450;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 6300;
			break;
		
		case joaat("BISON_BROWN"):
			return 5800;
			break;
		
		case joaat("CREEK_BROWN"):
			return 2340;
			break;
		
		case joaat("UMBER_BROWN"):
			return 2430;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 2550;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 2700;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 2760;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 2490;
			break;
		
		case joaat("MOSS_BROWN"):
			return 2580;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 2700;
			break;
		
		case joaat("STRAW_BROWN"):
			return 2640;
			break;
		
		case joaat("SANDY_BROWN"):
			return 2610;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 2340;
			break;
		
		case joaat("PURPLE"):
			return 5650;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 10000;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 9400;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 20000;
			break;
		
		case joaat("CREAM"):
			return 2340;
			break;
		
		case joaat("WHITE"):
			return 2430;
			break;
		
		case joaat("FROST_WHITE"):
			return 2610;
			break;
	}
	return 0;
}

int func_371(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2200;
			break;
		
		case joaat("GREY"):
			return 2050;
			break;
		
		case joaat("LIGHT_GREY"):
			return 2000;
			break;
		
		case joaat("WHITE"):
			return 2120;
			break;
		
		case joaat("BLUE"):
			return 14250;
			break;
		
		case joaat("DARK_BLUE"):
			return 2150;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 10000;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		
		case joaat("PURPLE"):
			return 17000;
			break;
		
		case joaat("RED"):
			return 12500;
			break;
		
		case joaat("DARK_RED"):
			return 15000;
			break;
		
		case joaat("ORANGE"):
			return 14000;
			break;
		
		case joaat("YELLOW"):
			return 11600;
			break;
		
		case joaat("LIME_GREEN"):
			return 17500;
			break;
		
		case joaat("GREEN"):
			return 2130;
			break;
		
		case joaat("MATTE_FOR"):
			return 2150;
			break;
		
		case joaat("MATTE_FOIL"):
			return 2100;
			break;
		
		case joaat("MATTE_OD"):
			return 2250;
			break;
		
		case joaat("MATTE_DIRT"):
			return 2240;
			break;
		
		case joaat("MATTE_DESERT"):
			return 2170;
			break;
	}
	return 0;
}

int func_372(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1400;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 1350;
			break;
		
		case joaat("GRAPHITE"):
			return 1320;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 1380;
			break;
		
		case joaat("BLACK_STEEL"):
			return 1440;
			break;
		
		case joaat("DARK_SILVER"):
			return 1300;
			break;
		
		case joaat("SILVER"):
			return 1370;
			break;
		
		case joaat("BLUE_SILVER"):
			return 1340;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 1300;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 1430;
			break;
		
		case joaat("STONE_SILVER"):
			return 1450;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 1500;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 1470;
			break;
		
		case joaat("RED"):
			return 1530;
			break;
		
		case joaat("TORINO_RED"):
			return 9260;
			break;
		
		case joaat("FORMULA_RED"):
			return 8890;
			break;
		
		case joaat("LAVA_RED"):
			return 14500;
			break;
		
		case joaat("BLAZE_RED"):
			return 5000;
			break;
		
		case joaat("GRACE_RED"):
			return 1590;
			break;
		
		case joaat("GARNET_RED"):
			return 1480;
			break;
		
		case joaat("SUNSET_RED"):
			return 13250;
			break;
		
		case joaat("CABERNET_RED"):
			return 12000;
			break;
		
		case joaat("WINE_RED"):
			return 13000;
			break;
		
		case joaat("CANDY_RED"):
			return 14750;
			break;
		
		case 1224546404:
			return 15000;
			break;
		
		case joaat("PINK"):
			return 13750;
			break;
		
		case joaat("SALMON_PINK"):
			return 13000;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 11000;
			break;
		
		case joaat("ORANGE"):
			return 7500;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 9000;
			break;
		
		case joaat("GOLD"):
			return 1650;
			break;
		
		case joaat("BRONZE"):
			return 1550;
			break;
		
		case joaat("YELLOW"):
			return 8500;
			break;
		
		case joaat("RACE_YELLOW"):
			return 11500;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 12000;
			break;
		
		case joaat("DARK_GREEN"):
			return 1450;
			break;
		
		case joaat("RACING_GREEN"):
			return 10500;
			break;
		
		case joaat("SEA_GREEN"):
			return 1580;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 1420;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 12000;
			break;
		
		case joaat("PETROL_GREEN"):
			return 13000;
			break;
		
		case joaat("LIME_GREEN"):
			return 15000;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 12250;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 1690;
			break;
		
		case joaat("DARK_BLUE"):
			return 1550;
			break;
		
		case joaat("SAXON_BLUE"):
			return 1500;
			break;
		
		case joaat("BLUE"):
			return 1430;
			break;
		
		case joaat("MARINER_BLUE"):
			return 1450;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 1400;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 10890;
			break;
		
		case joaat("SURF_BLUE"):
			return 1530;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 1480;
			break;
		
		case joaat("RACING_BLUE"):
			return 7500;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 13750;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 1350;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 11250;
			break;
		
		case joaat("BISON_BROWN"):
			return 10000;
			break;
		
		case joaat("CREEK_BROWN"):
			return 1300;
			break;
		
		case joaat("UMBER_BROWN"):
			return 1350;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 1420;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 1500;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 1530;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 1380;
			break;
		
		case joaat("MOSS_BROWN"):
			return 1430;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 1500;
			break;
		
		case joaat("STRAW_BROWN"):
			return 1470;
			break;
		
		case joaat("SANDY_BROWN"):
			return 1450;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 1300;
			break;
		
		case joaat("PURPLE"):
			return 7500;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 14250;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 15000;
			break;
		
		case joaat("CREAM"):
			return 1300;
			break;
		
		case joaat("WHITE"):
			return 1350;
			break;
		
		case joaat("FROST_WHITE"):
			return 1450;
			break;
	}
	return 0;
}

int func_373(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BR_STEEL"):
			return 12500;
			break;
		
		case -644198701:
			return 11500;
			break;
		
		case joaat("BR_ALUMINIUM"):
			return 10250;
			break;
		
		case joaat("GOLD_P"):
			return Global_262145.f_7148;
			break;
		
		case joaat("GOLD_S"):
			return Global_262145.f_7149;
			break;
	}
	return 0;
}

int func_374(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 840;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 810;
			break;
		
		case joaat("GRAPHITE"):
			return 790;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 830;
			break;
		
		case joaat("BLACK_STEEL"):
			return 860;
			break;
		
		case joaat("DARK_SILVER"):
			return 780;
			break;
		
		case joaat("SILVER"):
			return 820;
			break;
		
		case joaat("BLUE_SILVER"):
			return 800;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 780;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 860;
			break;
		
		case joaat("STONE_SILVER"):
			return 870;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 900;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 880;
			break;
		
		case joaat("RED"):
			return 920;
			break;
		
		case joaat("TORINO_RED"):
			return 5600;
			break;
		
		case joaat("FORMULA_RED"):
			return 5200;
			break;
		
		case joaat("LAVA_RED"):
			return 11600;
			break;
		
		case joaat("BLAZE_RED"):
			return 3800;
			break;
		
		case joaat("GRACE_RED"):
			return 950;
			break;
		
		case joaat("GARNET_RED"):
			return 890;
			break;
		
		case joaat("SUNSET_RED"):
			return 10600;
			break;
		
		case joaat("CABERNET_RED"):
			return 9600;
			break;
		
		case joaat("WINE_RED"):
			return 10400;
			break;
		
		case joaat("CANDY_RED"):
			return 12150;
			break;
		
		case 1224546404:
			return 12500;
			break;
		
		case joaat("PINK"):
			return 11000;
			break;
		
		case joaat("SALMON_PINK"):
			return 10400;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 8800;
			break;
		
		case joaat("ORANGE"):
			return 4500;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 5400;
			break;
		
		case joaat("GOLD"):
			return 990;
			break;
		
		case joaat("BRONZE"):
			return 930;
			break;
		
		case joaat("YELLOW"):
			return 5100;
			break;
		
		case joaat("RACE_YELLOW"):
			return 9200;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 9600;
			break;
		
		case joaat("DARK_GREEN"):
			return 870;
			break;
		
		case joaat("RACING_GREEN"):
			return 8400;
			break;
		
		case joaat("SEA_GREEN"):
			return 950;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 850;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 9600;
			break;
		
		case joaat("PETROL_GREEN"):
			return 10400;
			break;
		
		case joaat("LIME_GREEN"):
			return 12500;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 9800;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 1010;
			break;
		
		case joaat("DARK_BLUE"):
			return 930;
			break;
		
		case joaat("SAXON_BLUE"):
			return 900;
			break;
		
		case joaat("BLUE"):
			return 860;
			break;
		
		case joaat("MARINER_BLUE"):
			return 870;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 840;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 8650;
			break;
		
		case joaat("SURF_BLUE"):
			return 920;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 890;
			break;
		
		case joaat("RACING_BLUE"):
			return 4500;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 11000;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 810;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 9050;
			break;
		
		case joaat("BISON_BROWN"):
			return 8000;
			break;
		
		case joaat("CREEK_BROWN"):
			return 780;
			break;
		
		case joaat("UMBER_BROWN"):
			return 810;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 850;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 900;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 920;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 830;
			break;
		
		case joaat("MOSS_BROWN"):
			return 860;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 900;
			break;
		
		case joaat("STRAW_BROWN"):
			return 880;
			break;
		
		case joaat("SANDY_BROWN"):
			return 870;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 780;
			break;
		
		case joaat("PURPLE"):
			return 4500;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 11400;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 11000;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 12500;
			break;
		
		case joaat("CREAM"):
			return 780;
			break;
		
		case joaat("WHITE"):
			return 810;
			break;
		
		case joaat("FROST_WHITE"):
			return 870;
			break;
	}
	return 0;
}

bool func_375(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	char* sVar1;
	
	func_364(iParam0, &sVar1, &uVar0, uParam1, uParam2);
	return (*uParam1 != -1 && *uParam2 != -1);
}

bool func_376(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_269(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_377(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_98(iParam0))
		{
			return 1;
		}
	}
	if (Global_1593076[iParam0 /*647*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && func_364(iVar0, &sVar3, &iVar2, &uVar7, &uVar8))
	{
		bVar1 = true;
		iVar9 = func_384(&sVar3);
		if (iVar2 == 0)
		{
			if (func_379(0, iVar9, 1, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (func_379(1, iVar9, 1, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (func_379(3, iVar9, 1, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (func_379(4, iVar9, 1, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (func_379(5, iVar9, 1, 0))
			{
				unk_0xCD7E92DE2BFA0B0D(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

int func_379(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return 1;
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return 1;
	}
	else if (unk_0x76B3C79DE564AFC6(iParam3))
	{
		if ((unk_0xEE37D610E00A6E4E(iParam3, joaat("phantom3")) || unk_0xEE37D610E00A6E4E(iParam3, joaat("hauler2"))) || unk_0xEE37D610E00A6E4E(iParam3, joaat("trailerlarge")))
		{
			return 1;
		}
		if (unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iParam3)) || unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iParam3)))
		{
			return 1;
		}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 32 || iParam1 == 91)
		{
			return func_132(func_383(unk_0x3D35F9864E4640B1(), 1), 0) >= 100;
		}
	}
	iVar0 = func_382(iParam0, iParam1, bParam2);
	if (iVar0 != 0)
	{
		return func_380(iParam0, iVar0);
	}
	return 1;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
			if (func_132(func_383(unk_0x3D35F9864E4640B1(), 1), 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_50(38, -1) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 152:
		case 153:
		case 154:
			if (func_51(150, -1, 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_51(157, -1, 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 159:
		case 160:
		case 161:
			if (func_51(158, -1, 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_51(815, -1, 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 133:
			return 1;
			break;
		
		case 134:
			return 1;
			break;
		
		case 135:
			if (func_50(51, -1) >= 1 || func_50(52, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 170:
			if (func_132(func_383(unk_0x3D35F9864E4640B1(), 1), 0) >= func_381(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 136:
			if (func_50(58, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 137:
			if (func_50(57, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_381(int iParam0, int iParam1)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_382(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
				break;
			
			case 70:
			case 72:
			case 43:
			case 44:
			case joaat("mpsv_lp0_31"):
				return 137;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
			}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
				break;
			
			case 32:
			case 91:
				return 170;
				break;
			}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
			break;
		
		case 44:
			return 149;
			break;
		
		case 55:
			return 150;
			break;
		
		case 25:
			return 151;
			break;
		
		case 29:
			return 152;
			break;
		
		case 85:
			return 153;
			break;
		
		case 43:
			return 154;
			break;
		
		case 23:
			return 155;
			break;
		
		case 38:
			return 156;
			break;
		
		case 71:
			return 157;
			break;
		
		case 26:
			return 158;
			break;
		
		case 24:
			return 159;
			break;
		
		case 42:
			return 160;
			break;
		
		case 18:
			return 161;
			break;
		
		case 62:
			return 162;
			break;
		
		case 12:
			return 163;
			break;
		
		case 32:
			return 164;
			break;
		
		case 84:
			return 165;
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
					break;
				
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
					break;
				
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
					break;
				
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
					break;
				
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
					break;
				
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
					break;
				
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
					break;
				
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
					break;
				
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
					break;
				
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
					break;
			}
			break;
	}
	return 0;
}

int func_383(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_135(iParam0);
}

int func_384(char* sParam0)
{
	int iVar0;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!unk_0xA56C5821F50C3275(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 2;
			break;
		
		case joaat("GRAPHITE"):
			return 3;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 4;
			break;
		
		case joaat("BLACK_STEEL"):
			return 5;
			break;
		
		case joaat("DARK_SILVER"):
			return 6;
			break;
		
		case -2077191789:
			return 7;
			break;
		
		case joaat("SILVER"):
			return 8;
			break;
		
		case joaat("BLUE_SILVER"):
			return 9;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 10;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 11;
			break;
		
		case joaat("STONE_SILVER"):
			return 12;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 13;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 14;
			break;
		
		case joaat("RED"):
			return 15;
			break;
		
		case joaat("TORINO_RED"):
			return 16;
			break;
		
		case joaat("FORMULA_RED"):
			return 17;
			break;
		
		case joaat("LAVA_RED"):
			return 18;
			break;
		
		case joaat("BLAZE_RED"):
			return 19;
			break;
		
		case joaat("GRACE_RED"):
			return 20;
			break;
		
		case joaat("GARNET_RED"):
			return 21;
			break;
		
		case joaat("SUNSET_RED"):
			return 22;
			break;
		
		case joaat("WINE_RED"):
			return 23;
			break;
		
		case joaat("CABERNET_RED"):
			return 24;
			break;
		
		case joaat("CANDY_RED"):
			return 25;
			break;
		
		case 1224546404:
			return 26;
			break;
		
		case joaat("PINK"):
			return 27;
			break;
		
		case joaat("SALMON_PINK"):
			return 28;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 29;
			break;
		
		case joaat("ORANGE"):
			return 30;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 31;
			break;
		
		case joaat("GOLD"):
			return 32;
			break;
		
		case joaat("BRONZE"):
			return 33;
			break;
		
		case joaat("YELLOW"):
			return 34;
			break;
		
		case joaat("RACE_YELLOW"):
			return 35;
			break;
		
		case -1411292916:
			return 36;
			break;
		
		case joaat("DARK_GREEN"):
			return 37;
			break;
		
		case joaat("RACING_GREEN"):
			return 38;
			break;
		
		case joaat("SEA_GREEN"):
			return 39;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 40;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 41;
			break;
		
		case joaat("PETROL_GREEN"):
			return 42;
			break;
		
		case joaat("LIME_GREEN"):
			return 43;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 44;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 45;
			break;
		
		case joaat("DARK_BLUE"):
			return 46;
			break;
		
		case joaat("SAXON_BLUE"):
			return 47;
			break;
		
		case joaat("BLUE"):
			return 48;
			break;
		
		case joaat("MARINER_BLUE"):
			return 49;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 50;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 51;
			break;
		
		case joaat("SURF_BLUE"):
			return 52;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 53;
			break;
		
		case joaat("RACING_BLUE"):
			return 54;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 55;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 56;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 57;
			break;
		
		case joaat("BISON_BROWN"):
			return 58;
			break;
		
		case joaat("CREEK_BROWN"):
			return 59;
			break;
		
		case joaat("UMBER_BROWN"):
			return 60;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 61;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 62;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 63;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 64;
			break;
		
		case joaat("MOSS_BROWN"):
			return 65;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 66;
			break;
		
		case joaat("STRAW_BROWN"):
			return 67;
			break;
		
		case joaat("SANDY_BROWN"):
			return 68;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 69;
			break;
		
		case joaat("PURPLE"):
			return 70;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 71;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 72;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 73;
			break;
		
		case joaat("CREAM"):
			return 74;
			break;
		
		case joaat("WHITE"):
			return 75;
			break;
		
		case joaat("FROST_WHITE"):
			return 76;
			break;
		
		case joaat("GREY"):
			return 77;
			break;
		
		case joaat("LIGHT_GREY"):
			return 78;
			break;
		
		case joaat("DARK_RED"):
			return 79;
			break;
		
		case joaat("GREEN"):
			return 80;
			break;
		
		case joaat("BR_STEEL"):
			return 81;
			break;
		
		case -644198701:
			return 82;
			break;
		
		case joaat("BR_ALUMINIUM"):
			return 83;
			break;
		
		case joaat("CHROME"):
			return 84;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 85;
			break;
		
		case joaat("MATTE_OD"):
			return 86;
			break;
		
		case joaat("MATTE_FOR"):
			return 87;
			break;
		
		case joaat("MATTE_FOIL"):
			return 88;
			break;
		
		case joaat("MATTE_DESERT"):
			return 89;
			break;
		
		case joaat("MATTE_DIRT"):
			return 90;
			break;
		
		case joaat("GOLD_S"):
			return 91;
			break;
		
		case joaat("GOLD_P"):
			return 32;
			break;
	}
	return 0;
}

void func_385(int iParam0)
{
	*iParam0 = 0;
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 0);
	}
	if (func_386(5, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 1);
	}
	if (func_386(6, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 2);
	}
	if (func_386(7, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 3);
	}
	if (func_386(8, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 4);
	}
	if (func_386(29, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 5);
	}
	if (func_386(30, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 6);
	}
	if (func_386(31, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 7);
	}
	if (func_386(32, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 8);
	}
	if (func_386(33, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 9);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 10);
	}
	if (func_386(81, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 11);
	}
	if (func_386(51, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 12);
	}
	if (func_386(61, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 13);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 14);
	}
	if (func_386(34, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 15);
	}
	if (func_386(35, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 16);
	}
	if (func_386(36, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 17);
	}
	if (func_386(37, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 18);
	}
	if (func_367())
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 19);
	}
}

int func_386(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_393(iParam1, iParam3))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2221[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (func_392(iParam1, iParam3))
		{
			if (unk_0x76B3C79DE564AFC6(iParam2))
			{
				if (unk_0xEE37D610E00A6E4E(iParam2, joaat("phantom3")) || unk_0xEE37D610E00A6E4E(iParam2, joaat("hauler2")))
				{
					return 1;
				}
				else if (unk_0xEE37D610E00A6E4E(iParam2, joaat("trailerlarge")))
				{
					if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
					{
						return 1;
					}
				}
			}
		}
		if (func_391(iParam1, iParam3))
		{
			return 1;
		}
		if (unk_0xEE37D610E00A6E4E(iParam2, joaat("vigilante")))
		{
			if (iParam0 == 85 || iParam0 == 86)
			{
				return 1;
			}
		}
	}
	if (func_83() == 0)
	{
		return func_387(iParam0, -1);
	}
	return 1;
}

bool func_387(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_388(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x2A3398C6222EB190(uVar0, func_32(iVar1));
}

var func_388(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_51(func_389(uParam0), iParam1, 0);
	return uVar0;
}

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	if ((func_83() == 0 || func_390() == 0) || (func_83() == 999 && func_390() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 726;
				break;
			
			case 1:
				return 727;
				break;
			
			case 2:
				return 728;
				break;
			
			case 3:
				return 729;
				break;
			
			case 4:
				return 730;
				break;
			
			case 5:
				return 731;
				break;
			
			case 6:
				return 732;
				break;
			}
	}
	return 7237;
}

int func_390()
{
	return Global_25223;
}

int func_391(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_394(int iParam0)
{
	*uParam0 = 0;
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 1);
	}
	if (func_386(43, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 2);
	}
	if (func_386(44, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 3);
	}
	if (func_386(45, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 4);
	}
	if (func_386(55, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 5);
	}
	if (func_386(56, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 6);
	}
	if (func_386(57, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 7);
	}
	if (func_386(58, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 8);
	}
	if (func_386(59, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 9);
	}
	if (func_386(60, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 10);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 11);
	}
	if (func_386(47, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 12);
	}
	if (func_386(48, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 13);
	}
	if (func_386(49, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 14);
	}
	if (func_386(50, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 15);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 16);
	}
	if (func_386(13, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 17);
	}
	if (func_386(14, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 18);
	}
	if (func_386(15, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 19);
	}
	if (func_386(16, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 20);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 21);
	}
	if (func_386(77, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 22);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 23);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 24);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 25);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 26);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 27);
	}
	if (func_386(-1, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 28);
	}
	if (func_386(46, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 29);
	}
}

void func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x356621BE3FFD87C4(iVar0, iParam1, 1);
	}
}

int func_396(int iParam0)
{
	if (func_101(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_398(char* sParam0, float fParam1)
{
	unk_0x15D45F4BD4D522A5(func_28(sParam0), fParam1);
}

void func_399(char* sParam0, char* sParam1)
{
	unk_0x2446573F927E8D2C(func_28(sParam0), sParam1);
}

int func_400(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_364(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_401(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104439.f_8946.f_99.f_58[128] && !Global_104439.f_8946.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104439.f_8946.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104439.f_8946.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_402(int iParam0)
{
	if (func_240(iParam0))
	{
		if ((Global_104439.f_8946 || Global_3) || func_236(0))
		{
			return Global_104439.f_2244.f_539.f_2328[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_403(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_404(var uParam0, int iParam1)
{
	*uParam0 = Global_1319069[iParam1 /*140*/].f_66;
	uParam0->f_3 = Global_1319069[iParam1 /*140*/].f_65;
	uParam0->f_4 = Global_1319069[iParam1 /*140*/].f_62;
	uParam0->f_5 = Global_1319069[iParam1 /*140*/].f_63;
	uParam0->f_6 = Global_1319069[iParam1 /*140*/].f_64;
	uParam0->f_10 = Global_1319069[iParam1 /*140*/].f_69;
	uParam0->f_16 = unk_0x2A3398C6222EB190(Global_1319069[iParam1 /*140*/].f_77, 9);
	uParam0->f_19 = { Global_1319069[iParam1 /*140*/].f_1 };
	uParam0->f_23 = Global_1319069[iParam1 /*140*/];
	uParam0->f_7 = Global_1319069[iParam1 /*140*/].f_9[11];
	uParam0->f_8 = Global_1319069[iParam1 /*140*/].f_9[12];
	uParam0->f_9 = Global_1319069[iParam1 /*140*/].f_9[23];
	uParam0->f_11 = Global_1319069[iParam1 /*140*/].f_9[4];
	uParam0->f_12 = Global_1319069[iParam1 /*140*/].f_9[15];
	uParam0->f_13 = Global_1319069[iParam1 /*140*/].f_9[16];
	uParam0->f_14 = Global_1319069[iParam1 /*140*/].f_9[14];
	uParam0->f_15 = Global_1319069[iParam1 /*140*/].f_9[22];
	uParam0->f_18 = Global_1319069[iParam1 /*140*/].f_9[20];
	uParam0->f_17 = Global_1319069[iParam1 /*140*/].f_9[18];
	uParam0->f_1 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_1;
	uParam0->f_2 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_2;
	uParam0->f_27 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_9;
	uParam0->f_33[0] = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_3[0];
	uParam0->f_33[1] = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_3[1];
	uParam0->f_33[2] = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_3[2];
	uParam0->f_33[3] = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_3[3];
	uParam0->f_33[4] = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_3[4];
	uParam0->f_40 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_10;
	uParam0->f_41 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_11;
	uParam0->f_42 = Global_2097152[func_183() /*11035*/].f_5526[iLocal_131 /*13*/].f_12;
}

int func_405(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 184)
	{
		if (func_406(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_406(int iParam0, int iParam1)
{
	if (iParam0 == 157 || iParam0 == 158)
	{
		return 0;
	}
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = iParam0;
		return 1;
	}
	else if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - 3);
		return 1;
	}
	else if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - 6);
		return 1;
	}
	else if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - 9);
		return 1;
	}
	else if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - 12);
		return 1;
	}
	else if (iParam0 >= 65 && iParam0 <= 84)
	{
		if (!Global_100973)
		{
			*iParam1 = (iParam0 - 15);
			return 1;
		}
	}
	else if (iParam0 >= 88 && iParam0 <= 156)
	{
		if (!Global_100973)
		{
			*iParam1 = (iParam0 - 18);
			return 1;
		}
	}
	return 0;
}

void func_407()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x27CA09C6DFAB1E79() && func_152(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_408())
		{
			if (!func_23(3612, -1, -1))
			{
				func_13(2921, 1, -1, 1);
				func_13(2922, 1, -1, 1);
				func_13(2923, 1, -1, 1);
				func_13(2924, 1, -1, 1);
				func_13(2925, 1, -1, 1);
				func_13(3612, 1, -1, 1);
			}
		}
		else if (func_23(3612, -1, -1))
		{
			func_13(3612, 0, -1, 1);
		}
		iVar0 = func_183();
		if (((((iVar0 == 0 && func_23(2921, -1, -1)) || (iVar0 == 1 && func_23(2922, -1, -1))) || (iVar0 == 2 && func_23(2923, -1, -1))) || (iVar0 == 3 && func_23(2924, -1, -1))) || (iVar0 == 4 && func_23(2925, -1, -1)))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2097152[iVar0 /*11035*/].f_5526.f_2010[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1319069[iVar2 /*140*/].f_66 != 0) && (!unk_0x2A3398C6222EB190(Global_1319069[iVar2 /*140*/].f_101, 1) || unk_0x2A3398C6222EB190(Global_1319069[iVar2 /*140*/].f_101, 2))) && func_202(Global_1319069[iVar2 /*140*/].f_66))
				{
					if (func_406(iVar2, &iVar3))
					{
						if (!Global_2097152[iVar0 /*11035*/].f_5526[iVar3 /*13*/].f_11 && Global_2097152[iVar0 /*11035*/].f_5526[iVar3 /*13*/] == Global_1319069[iVar2 /*140*/].f_66)
						{
							Global_2097152[iVar0 /*11035*/].f_5526[iVar3 /*13*/].f_10 = 1;
						}
					}
				}
				iVar1++;
			}
			Global_2097152[iVar0 /*11035*/].f_5526.f_1989 = 0;
			if (iVar0 == 0)
			{
				func_13(2921, 0, -1, 1);
			}
			if (iVar0 == 1)
			{
				func_13(2922, 0, -1, 1);
			}
			if (iVar0 == 2)
			{
				func_13(2923, 0, -1, 1);
			}
			if (iVar0 == 3)
			{
				func_13(2924, 0, -1, 1);
			}
			if (iVar0 == 4)
			{
				func_13(2925, 0, -1, 1);
			}
		}
	}
}

int func_408()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[10];
	bool bVar18;
	int iVar19;
	bool bVar20;
	
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0];
		iVar0++;
	}
	switch (iLocal_379)
	{
		case 0:
			bVar6 = false;
			if (!func_410(unk_0x3D35F9864E4640B1(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1319069[iVar2 /*140*/].f_66 == 0 || (unk_0x2A3398C6222EB190(Global_1319069[iVar2 /*140*/].f_101, 1) && !unk_0x2A3398C6222EB190(Global_1319069[iVar2 /*140*/].f_101, 2))))
					{
						Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar1] == iVar2 + 1)
							{
								Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_379++;
			break;
		
		case 1:
			iVar2 = -1;
			if (((Global_2097152[func_183() /*11035*/].f_7550.f_2 != Global_2097152[func_183() /*11035*/].f_5526.f_2021 && Global_2097152[func_183() /*11035*/].f_7550.f_2 != -1) && Global_1319069[Global_2097152[func_183() /*11035*/].f_7550.f_2 /*140*/].f_66 != 0) && (!unk_0x2A3398C6222EB190(Global_1319069[Global_2097152[func_183() /*11035*/].f_7550.f_2 /*140*/].f_101, 1) || unk_0x2A3398C6222EB190(Global_1319069[Global_2097152[func_183() /*11035*/].f_7550.f_2 /*140*/].f_101, 2)))
			{
				iVar2 = Global_2097152[func_183() /*11035*/].f_7550.f_2;
				Global_2097152[func_183() /*11035*/].f_5526.f_2021 = iVar2;
			}
			else if (Global_2097152[func_183() /*11035*/].f_5526.f_2022 != 0)
			{
				iVar2 = (Global_2097152[func_183() /*11035*/].f_5526.f_2022 - 1);
				Global_2097152[func_183() /*11035*/].f_5526.f_2022 = 0;
			}
			if (iVar2 != -1)
			{
				bVar18 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] == iVar2 + 1)
					{
						bVar18 = true;
					}
					iVar0++;
				}
				if (!bVar18)
				{
					iVar19 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] > 0)
						{
							iVar19 = iVar0;
						}
						iVar0++;
					}
					if (iVar19 < 9)
					{
						iVar19++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] == Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar19])
						{
							Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2097152[func_183() /*11035*/].f_5526.f_2010[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] = 0;
					iVar0++;
				}
			}
			else
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				iVar4 = 0;
				iVar0 = 0;
				while (iVar0 <= 183)
				{
					if (((func_406(iVar0, &iVar1) && Global_1319069[iVar0 /*140*/].f_66 != 0) && (!unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 1) || unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 2))) && func_202(Global_1319069[iVar0 /*140*/].f_66))
					{
						iVar4++;
					}
					iVar0++;
				}
				if (iVar3 > 0 && iVar4 > (10 - iVar3))
				{
					iVar0 = 0;
					while (iVar0 <= 183)
					{
						if (((func_406(iVar0, &iVar1) && Global_1319069[iVar0 /*140*/].f_66 != 0) && (!unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 1) || unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 2))) && func_202(Global_1319069[iVar0 /*140*/].f_66))
						{
							bVar20 = false;
							iVar1 = 0;
							while (iVar1 < 10)
							{
								if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar1] == iVar0 + 1)
								{
									bVar20 = true;
									iVar1 = 11;
								}
								iVar1++;
							}
							if (!bVar20)
							{
								iVar2 = iVar0;
								iVar0 = 185;
							}
						}
						iVar0++;
					}
					if (iVar2 != -1)
					{
						iVar0 = 0;
						while (iVar0 < 10)
						{
							if (Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] == Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar5])
							{
								Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] = iVar2 + 1;
								iVar0 = 11;
							}
							iVar0++;
						}
						Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar5] = iVar2 + 1;
					}
				}
			}
			iLocal_379++;
			break;
		
		default:
			iLocal_379++;
			break;
	}
	if (iLocal_379 > 30)
	{
		iLocal_379 = 0;
	}
}

int func_410(int iParam0, bool bParam1)
{
	if (func_411(iParam0, bParam1, 0, 0, 0, 0, 0))
	{
		if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (Global_1593076[iParam0 /*647*/].f_259.f_16 > 0)
	{
		if (bParam1)
		{
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_415(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_414(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_412(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_152(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_413(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
	}
	return -1;
}

int func_414(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_152(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_413(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_152(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_413(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_152(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_413(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_152(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_413(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (iLocal_141)
	{
		case 0:
			if (bLocal_140)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					func_431(0, 0);
				}
				func_394(&iVar0);
				unk_0xE0E59AE643E9BBB5("car");
				if (unk_0x27CA09C6DFAB1E79())
				{
					unk_0xF266CB99D17AA11D(&Local_143);
					unk_0xF266CB99D17AA11D("mpUnlocks");
				}
				else
				{
					unk_0xF266CB99D17AA11D("spUnlocks");
				}
				func_190("unlockBitset1", iVar0);
				iLocal_188[0] = iVar0;
				if (unk_0x27CA09C6DFAB1E79())
				{
					unk_0x25F628B35B652916();
					unk_0x25F628B35B652916();
				}
				else
				{
					unk_0x25F628B35B652916();
				}
				unk_0xC7C77285A27883FD();
				iLocal_141++;
			}
			break;
		
		case 1:
			func_385(&iVar0);
			unk_0xE0E59AE643E9BBB5("car");
			if (unk_0x27CA09C6DFAB1E79())
			{
				unk_0xF266CB99D17AA11D(&Local_143);
				unk_0xF266CB99D17AA11D("mpUnlocks");
			}
			else
			{
				unk_0xF266CB99D17AA11D("spUnlocks");
			}
			func_190("unlockBitset2", iVar0);
			iLocal_188[1] = iVar0;
			if (unk_0x27CA09C6DFAB1E79())
			{
				unk_0x25F628B35B652916();
				unk_0x25F628B35B652916();
			}
			else
			{
				unk_0x25F628B35B652916();
			}
			unk_0xC7C77285A27883FD();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_193[iVar1] = 0;
				iVar1++;
			}
			iLocal_192 = 0;
			iLocal_141++;
			break;
		
		case 2:
			if (unk_0x27CA09C6DFAB1E79())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_378(&iLocal_193, iLocal_192) == -1)
					{
						bVar3 = true;
						iLocal_141++;
					}
					iLocal_192++;
					iVar2++;
				}
			}
			else
			{
				iLocal_141++;
			}
			break;
		
		case 3:
			if (unk_0x27CA09C6DFAB1E79())
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0xF266CB99D17AA11D(&Local_143);
				unk_0xF266CB99D17AA11D(&Local_149);
				func_190("carColoursUnlocked0", iLocal_193[0]);
				uLocal_200[0] = iLocal_193[0];
				func_190("carColoursUnlocked1", iLocal_193[1]);
				uLocal_200[1] = iLocal_193[1];
				func_190("carColoursUnlocked2", iLocal_193[2]);
				uLocal_200[2] = iLocal_193[2];
				func_190("carColoursUnlocked3", iLocal_193[3]);
				uLocal_200[3] = iLocal_193[3];
				func_190("carColoursUnlocked4", iLocal_193[4]);
				uLocal_200[4] = iLocal_193[4];
				func_190("carColoursUnlocked5", iLocal_193[5]);
				uLocal_200[5] = iLocal_193[5];
				func_419(&iVar0);
				func_190("unlockBitset3", iVar0);
				iLocal_188[2] = iVar0;
				unk_0x25F628B35B652916();
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
			}
			else
			{
				unk_0xE0E59AE643E9BBB5("car");
				unk_0xF266CB99D17AA11D("spUnlocks");
				func_378(&iLocal_193, -1);
				func_190("carColoursUnlocked0", iLocal_193[0]);
				uLocal_200[0] = iLocal_193[0];
				func_190("carColoursUnlocked1", iLocal_193[1]);
				uLocal_200[1] = iLocal_193[1];
				func_190("carColoursUnlocked2", iLocal_193[2]);
				uLocal_200[2] = iLocal_193[2];
				func_190("carColoursUnlocked3", iLocal_193[3]);
				uLocal_200[3] = iLocal_193[3];
				func_190("carColoursUnlocked4", iLocal_193[4]);
				uLocal_200[4] = iLocal_193[4];
				func_190("carColoursUnlocked5", iLocal_193[5]);
				uLocal_200[5] = iLocal_193[5];
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
			}
			iLocal_141++;
			break;
		
		case 4:
			bLocal_140 = false;
			iLocal_141 = 0;
			break;
	}
}

void func_419(int iParam0)
{
	if (func_420(18, 1) || func_386(61, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 0);
	}
	if (func_420(11, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 1);
	}
	if (func_420(11, 1) || func_386(47, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 2);
	}
	if (func_420(11, 2) || func_386(48, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 3);
	}
	if (func_420(11, 3) || func_386(49, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 4);
	}
	if (func_420(11, 4) || func_386(50, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 5);
	}
	if (func_420(12, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 6);
	}
	if (func_420(12, 1) || func_386(13, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 7);
	}
	if (func_420(12, 2) || func_386(14, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 8);
	}
	if (func_420(12, 3) || func_386(15, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 9);
	}
	if (func_420(12, 4) || func_386(16, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 10);
	}
	if (func_420(4, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 11);
	}
	if (func_420(4, 1) || func_386(77, -1, 0, -1))
	{
		unk_0xCD7E92DE2BFA0B0D(iParam0, 12);
	}
}

int func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_423(iLocal_142, iParam0, iParam1, &iVar0))
	{
		return func_421(iVar0);
	}
	return 1;
}

int func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_51(815, -1, 0);
	iVar1 = func_422(iParam0);
	if (iVar1 == -1)
	{
		return 1;
	}
	else if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 2;
		
		case 11:
			return 2;
		
		case 12:
			return 3;
		
		case 5:
			return 3;
		
		case 3:
			return 3;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		case 8:
			return 4;
		
		case 40:
			return 5;
		
		case 38:
			return 5;
		
		case 37:
			return 5;
		
		case 46:
			return 6;
		
		case 45:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 7;
		
		case 41:
			return 7;
		
		case 39:
			return 7;
		
		case 42:
			return 8;
		
		case 43:
			return 8;
		
		case 44:
			return 8;
		
		case 16:
			return 9;
		
		case 14:
			return 9;
		
		case 13:
			return 9;
		
		case 21:
			return 10;
		
		case 22:
			return 10;
		
		case 23:
			return 10;
		
		case 24:
			return 11;
		
		case 17:
			return 11;
		
		case 15:
			return 11;
		
		case 18:
			return 12;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		case 27:
			return 13;
		
		case 26:
			return 13;
		
		case 25:
			return 13;
		
		case 32:
			return 14;
		
		case 34:
			return 14;
		
		case 35:
			return 14;
		
		case 36:
			return 15;
		
		case 28:
			return 15;
		
		case 33:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 16;
		
		case 31:
			return 16;
		
		case 52:
			return 17;
		
		case 50:
			return 17;
		
		case 49:
			return 17;
		
		case 57:
			return 18;
		
		case 58:
			return 18;
		
		case 59:
			return 18;
		
		case 60:
			return 19;
		
		case 53:
			return 19;
		
		case 51:
			return 19;
		
		case 54:
			return 20;
		
		case 55:
			return 20;
		
		case 56:
			return 20;
		
		case 85:
			return 21;
		
		case 86:
			return 21;
		
		case 87:
			return 21;
		
		case 88:
			return 22;
		
		case 89:
			return 22;
		
		case 90:
			return 22;
		
		case 91:
			return 23;
		
		case 92:
			return 23;
		
		case 93:
			return 23;
		
		case 94:
			return 24;
		
		case 95:
			return 24;
		
		case 96:
			return 24;
		
		case 97:
			return 25;
		
		case 98:
			return 25;
		
		case 99:
			return 25;
		
		case 100:
			return 26;
		
		case 101:
			return 26;
		
		case 102:
			return 26;
		
		case 103:
			return 27;
		
		case 104:
			return 27;
		
		case 105:
			return 27;
		
		case 106:
			return 28;
		
		case 107:
			return 28;
		
		case 108:
			return 28;
		
		case 64:
			return 29;
		
		case 62:
			return 29;
		
		case 61:
			return 29;
		
		case 69:
			return 30;
		
		case 70:
			return 30;
		
		case 71:
			return 30;
		
		case 72:
			return 31;
		
		case 65:
			return 31;
		
		case 63:
			return 31;
		
		case 66:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 109:
			return 33;
		
		case 110:
			return 33;
		
		case 111:
			return 33;
		
		case 112:
			return 34;
		
		case 113:
			return 34;
		
		case 114:
			return 34;
		
		case 115:
			return 35;
		
		case 116:
			return 35;
		
		case 117:
			return 35;
		
		case 118:
			return 36;
		
		case 119:
			return 36;
		
		case 120:
			return 36;
		
		case 121:
			return 37;
		
		case 122:
			return 37;
		
		case 123:
			return 37;
		
		case 124:
			return 38;
		
		case 125:
			return 38;
		
		case 126:
			return 38;
		
		case 127:
			return 39;
		
		case 128:
			return 39;
		
		case 129:
			return 39;
		
		case 131:
			return 40;
		
		case 130:
			return 40;
		
		case 132:
			return 40;
		
		case 76:
			return 41;
		
		case 74:
			return 41;
		
		case 73:
			return 41;
		
		case 81:
			return 42;
		
		case 82:
			return 42;
		
		case 83:
			return 42;
		
		case 84:
			return 43;
		
		case 77:
			return 43;
		
		case 75:
			return 43;
		
		case 78:
			return 44;
		
		case joaat("mpsv_lp0_31"):
			return 44;
		
		case 80:
			return 44;
		
		default:
	}
	return -1;
}

bool func_423(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return 0;
	}
	uVar0 = func_424(iParam0);
	*uParam3 = 0;
	if (iParam1 == 11)
	{
		if (unk_0x2A3398C6222EB190(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 61;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 73;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 62;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 74;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 63;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 75;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 64;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 76;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 65;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 77;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 66;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 78;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 67;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 79;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 68;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 80;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 69;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 81;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 70;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 82;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 71;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 83;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 72;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (unk_0x2A3398C6222EB190(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 49;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 50;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 51;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 52;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 53;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 54;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 55;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 56;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 57;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 58;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 59;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (unk_0x2A3398C6222EB190(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 87;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 111;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 86;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 110;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 93;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 117;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 85;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 109;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 92;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 116;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 94;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 118;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 95;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 119;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 120;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 120;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 88;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 112;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 89;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 113;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 90;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 114;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 91;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (unk_0x2A3398C6222EB190(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 99;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 123;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 98;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 122;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 105;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 129;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 97;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 121;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 104;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 128;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 106;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 130;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 107;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 131;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 108;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 132;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 100;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 124;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 101;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 125;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 102;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 126;
			}
		}
		else if (unk_0x2A3398C6222EB190(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 103;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 127;
			}
		}
	}
	return *uParam3 != 0;
}

var func_424(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (func_425(iParam0, iVar1))
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_425(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		if (func_430(iParam0))
		{
			return 1;
		}
	}
	else if (func_427(iParam0, iParam1))
	{
		return 1;
	}
	else if (unk_0x13ED5971E86205D9(iParam0) == func_426(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_429(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_428(iParam1, iVar1) == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
				
				case 1:
					return joaat("bullet");
				
				case 2:
					return joaat("cheetah");
				
				case 3:
					return joaat("entityxf");
				
				case 4:
					return joaat("infernus");
				
				case 5:
					return joaat("vacca");
				
				case 6:
					return joaat("voltic");
				
				case 7:
					return joaat("banshee2");
				
				case 8:
					return joaat("fmj");
				
				case 9:
					return joaat("osiris");
				
				case 10:
					return joaat("pfister811");
				
				case 11:
					return joaat("prototipo");
				
				case 12:
					return joaat("reaper");
				
				case 13:
					return joaat("sultanrs");
				
				case 14:
					return joaat("t20");
				
				case 15:
					return joaat("turismor");
				
				case 16:
					return joaat("zentorno");
				
				case 17:
					return joaat("le7b");
				
				case 18:
					return joaat("tyrus");
				
				case 19:
					return joaat("sheava");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
				
				case 1:
					return joaat("banshee");
				
				case 2:
					return joaat("carbonizzare");
				
				case 3:
					return joaat("comet2");
				
				case 4:
					return joaat("coquette");
				
				case 5:
					return joaat("feltzer2");
				
				case 6:
					return joaat("fusilade");
				
				case 7:
					return joaat("rapidgt2");
				
				case 8:
					return joaat("sultan");
				
				case 9:
					return joaat("alpha");
				
				case 10:
					return joaat("bestiagts");
				
				case 11:
					return joaat("blista2");
				
				case 12:
					return joaat("blista3");
				
				case 13:
					return joaat("buffalo");
				
				case 14:
					return joaat("buffalo2");
				
				case 15:
					return joaat("buffalo3");
				
				case 16:
					return joaat("carbonizzare");
				
				case 17:
					return joaat("elegy2");
				
				case 18:
					return joaat("feltzer3");
				
				case 19:
					return joaat("furoregt");
				
				case 20:
					return joaat("futo");
				
				case 21:
					return joaat("jester");
				
				case 22:
					return joaat("jester2");
				
				case 23:
					return joaat("khamelion");
				
				case 24:
					return joaat("kuruma");
				
				case 25:
					return joaat("kuruma2");
				
				case 26:
					return joaat("massacro");
				
				case 27:
					return joaat("massacro2");
				
				case 28:
					return joaat("ninef");
				
				case 29:
					return joaat("penumbra");
				
				case 30:
					return joaat("rapidgt");
				
				case 31:
					return joaat("schwarzer");
				
				case 32:
					return joaat("seven70");
				
				case 33:
					return joaat("surano");
				
				case 34:
					return joaat("verlierer2");
				
				case 35:
					return joaat("tropos");
				
				case 36:
					return joaat("tampa2");
				
				case 37:
					return joaat("omnis");
				
				case 38:
					return joaat("lynx");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
				
				case 1:
					return joaat("exemplar");
				
				case 2:
					return joaat("f620");
				
				case 3:
					return joaat("felon");
				
				case 4:
					return joaat("felon2");
				
				case 5:
					return joaat("jackal");
				
				case 6:
					return joaat("oracle");
				
				case 7:
					return joaat("oracle2");
				
				case 8:
					return joaat("sentinel");
				
				case 9:
					return joaat("sentinel2");
				
				case 10:
					return joaat("windsor");
				
				case 11:
					return joaat("windsor2");
				
				case 12:
					return joaat("zion");
				
				case 13:
					return joaat("zion2");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
				
				case 1:
					return joaat("dominator");
				
				case 2:
					return joaat("gauntlet");
				
				case 3:
					return joaat("phoenix");
				
				case 4:
					return joaat("picador");
				
				case 5:
					return joaat("ruiner");
				
				case 6:
					return joaat("sabregt");
				
				case 7:
					return joaat("vigero");
				
				case 8:
					return joaat("blade");
				
				case 9:
					return joaat("buccaneer2");
				
				case 10:
					return joaat("chino");
				
				case 11:
					return joaat("chino2");
				
				case 12:
					return joaat("coquette3");
				
				case 13:
					return joaat("dominator2");
				
				case 14:
					return joaat("dukes");
				
				case 15:
					return joaat("dukes2");
				
				case 16:
					return joaat("faction");
				
				case 17:
					return joaat("faction2");
				
				case 18:
					return joaat("faction3");
				
				case 19:
					return joaat("gauntlet2");
				
				case 20:
					return joaat("hotknife");
				
				case 21:
					return joaat("lurcher");
				
				case 22:
					return joaat("moonbeam");
				
				case 23:
					return joaat("moonbeam2");
				
				case 24:
					return joaat("nightshade");
				
				case 25:
					return joaat("ratloader");
				
				case 26:
					return joaat("ratloader2");
				
				case 27:
					return joaat("sabregt2");
				
				case 28:
					return joaat("slamvan");
				
				case 29:
					return joaat("slamvan2");
				
				case 30:
					return joaat("slamvan3");
				
				case 31:
					return joaat("stalion");
				
				case 32:
					return joaat("stalion2");
				
				case 33:
					return joaat("tampa");
				
				case 34:
					return joaat("virgo");
				
				case 35:
					return joaat("virgo2");
				
				case 36:
					return joaat("virgo3");
				
				case 37:
					return joaat("voodoo");
				
				case 38:
					return joaat("voodoo2");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
				
				case 1:
					return joaat("monroe");
				
				case 2:
					return joaat("stinger");
				
				case 3:
					return joaat("ztype");
				
				case 4:
					return joaat("btype");
				
				case 5:
					return joaat("btype2");
				
				case 6:
					return joaat("btype3");
				
				case 7:
					return joaat("casco");
				
				case 8:
					return joaat("coquette2");
				
				case 9:
					return joaat("mamba");
				
				case 10:
					return joaat("manana");
				
				case 11:
					return joaat("peyote");
				
				case 12:
					return joaat("pigalle");
				
				case 13:
					return joaat("stinger");
				
				case 14:
					return joaat("stingergt");
				
				case 15:
					return joaat("tornado");
				
				case 16:
					return joaat("tornado2");
				
				case 17:
					return joaat("tornado3");
				
				case 18:
					return joaat("tornado4");
				
				case 19:
					return joaat("tornado5");
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
				
				case 1:
					return joaat("asterope");
				
				case 2:
					return joaat("fugitive");
				
				case 3:
					return joaat("premier");
				
				case 4:
					return joaat("primo");
				
				case 5:
					return joaat("schafter2");
				
				case 6:
					return joaat("stanier");
				
				case 7:
					return joaat("superd");
				
				case 8:
					return joaat("surge");
				
				case 9:
					return joaat("tailgater");
				
				case 10:
					return joaat("washington");
				
				case 11:
					return joaat("cog55");
				
				case 12:
					return joaat("cognoscenti");
				
				case 13:
					return joaat("cognoscenti2");
				
				case 14:
					return joaat("emperor");
				
				case 15:
					return joaat("emperor2");
				
				case 16:
					return joaat("emperor3");
				
				case 17:
					return joaat("glendale");
				
				case 18:
					return joaat("asea2");
				
				case 19:
					return joaat("cog552");
				
				case 20:
					return joaat("ingot");
				
				case 21:
					return joaat("intruder");
				
				case 22:
					return joaat("limo2");
				
				case 23:
					return joaat("primo2");
				
				case 24:
					return joaat("regina");
				
				case 25:
					return joaat("romero");
				
				case 26:
					return joaat("schafter3");
				
				case 27:
					return joaat("schafter4");
				
				case 28:
					return joaat("schafter5");
				
				case 29:
					return joaat("schafter6");
				
				case 30:
					return joaat("stratum");
				
				case 31:
					return joaat("stretch");
				
				case 32:
					return joaat("warrener");
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
				
				case 1:
					return joaat("baller2");
				
				case 2:
					return joaat("bjxl");
				
				case 3:
					return joaat("cavalcade");
				
				case 4:
					return joaat("cavalcade2");
				
				case 5:
					return joaat("crusader");
				
				case 6:
					return joaat("dubsta");
				
				case 7:
					return joaat("granger");
				
				case 8:
					return joaat("gresley");
				
				case 9:
					return joaat("landstalker");
				
				case 10:
					return joaat("mesa");
				
				case 11:
					return joaat("pranger");
				
				case 12:
					return joaat("radi");
				
				case 13:
					return joaat("seminole");
				
				case 14:
					return joaat("serrano");
				
				case 15:
					return joaat("baller3");
				
				case 16:
					return joaat("baller4");
				
				case 17:
					return joaat("baller5");
				
				case 18:
					return joaat("baller6");
				
				case 19:
					return joaat("dubsta2");
				
				case 20:
					return joaat("fq2");
				
				case 21:
					return joaat("habanero");
				
				case 22:
					return joaat("huntley");
				
				case 23:
					return joaat("mesa2");
				
				case 24:
					return joaat("patriot");
				
				case 25:
					return joaat("rocoto");
				
				case 26:
					return joaat("xls");
				
				case 27:
					return joaat("xls2");
				
				case 28:
					return joaat("contender");
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
				
				case 1:
					return joaat("dilettante");
				
				case 2:
					return joaat("issi2");
				
				case 3:
					return joaat("prairie");
				
				case 4:
					return joaat("dilettante2");
				
				case 5:
					return joaat("panto");
				
				case 6:
					return joaat("rhapsody");
				
				case 7:
					return joaat("brioso");
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
				
				case 1:
					return joaat("baller");
				
				case 2:
					return joaat("blazer");
				
				case 3:
					return joaat("dloader");
				
				case 4:
					return joaat("dune");
				
				case 5:
					return joaat("patriot");
				
				case 6:
					return joaat("sanchez");
				
				case 7:
					return joaat("sandking");
				
				case 8:
					return joaat("paradise");
				
				case 9:
					return joaat("sanchez2");
				
				case 10:
					return joaat("guardian");
				
				case 11:
					return joaat("bifta");
				
				case 12:
					return joaat("blazer2");
				
				case 13:
					return joaat("blazer3");
				
				case 14:
					return joaat("bodhi2");
				
				case 15:
					return joaat("brawler");
				
				case 16:
					return joaat("dubsta3");
				
				case 17:
					return joaat("insurgent2");
				
				case 18:
					return joaat("kalahari");
				
				case 19:
					return joaat("marshall");
				
				case 20:
					return joaat("mesa3");
				
				case 21:
					return joaat("monster");
				
				case 22:
					return joaat("rancherxl");
				
				case 23:
					return joaat("rancherxl2");
				
				case 24:
					return joaat("rebel");
				
				case 25:
					return joaat("rebel2");
				
				case 26:
					return joaat("sandking2");
				
				case 28:
					return joaat("trophytruck");
				
				case 29:
					return joaat("trophytruck2");
				
				case 30:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
				
				case 1:
					return joaat("cutter");
				
				case 2:
					return joaat("dump");
				
				case 3:
					return joaat("handler");
				
				case 4:
					return joaat("mixer");
				
				case 5:
					return joaat("flatbed");
				
				case 6:
					return joaat("guardian");
				
				case 7:
					return joaat("mixer2");
				
				case 8:
					return joaat("rubble");
				
				case 9:
					return joaat("tiptruck");
				
				case 10:
					return joaat("tiptruck2");
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
				
				case 1:
					return joaat("caddy");
				
				case 2:
					return joaat("faggio2");
				
				case 3:
					return joaat("tractor2");
				
				case 4:
					return joaat("forklift");
				
				case 5:
					return joaat("mower");
				
				case 6:
					return joaat("ripley");
				
				case 7:
					return joaat("armytanker");
				
				case 8:
					return joaat("sadler");
				
				case 9:
					return joaat("sadler2");
				
				case 10:
					return joaat("scrap");
				
				case 11:
					return joaat("towtruck");
				
				case 12:
					return joaat("towtruck2");
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
				
				case 1:
					return joaat("burrito2");
				
				case 2:
					return joaat("camper");
				
				case 3:
					return joaat("speedo2");
				
				case 4:
					return joaat("journey");
				
				case 5:
					return joaat("pony");
				
				case 6:
					return joaat("rumpo");
				
				case 7:
					return joaat("surfer");
				
				case 8:
					return joaat("taco");
				
				case 9:
					return joaat("youga");
				
				case 10:
					return joaat("bison");
				
				case 11:
					return joaat("bison2");
				
				case 12:
					return joaat("bison3");
				
				case 13:
					return joaat("bobcatxl");
				
				case 14:
					return joaat("boxville2");
				
				case 15:
					return joaat("boxville3");
				
				case 16:
					return joaat("boxville4");
				
				case 17:
					return joaat("burrito");
				
				case 18:
					return joaat("burrito3");
				
				case 19:
					return joaat("burrito4");
				
				case 20:
					return joaat("burrito5");
				
				case 21:
					return joaat("gburrito");
				
				case 22:
					return joaat("gburrito2");
				
				case 23:
					return joaat("minivan");
				
				case 24:
					return joaat("minivan2");
				
				case 25:
					return joaat("paradise");
				
				case 26:
					return joaat("pony2");
				
				case 27:
					return joaat("rumpo2");
				
				case 28:
					return joaat("rumpo3");
				
				case 29:
					return joaat("speedo");
				
				case 30:
					return joaat("surfer2");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
				
				case 1:
					return joaat("bagger");
				
				case 2:
					return joaat("bati");
				
				case 3:
					return joaat("bati2");
				
				case 4:
					return joaat("blazer");
				
				case 5:
					return joaat("daemon");
				
				case 6:
					return joaat("double");
				
				case 7:
					return joaat("nemesis");
				
				case 8:
					return joaat("pcj");
				
				case 9:
					return joaat("ruffian");
				
				case 10:
					return joaat("sanchez");
				
				case 11:
					return joaat("sanchez2");
				
				case 12:
					return joaat("vader");
				
				case 13:
					return joaat("carbonrs");
				
				case 14:
					return joaat("enduro");
				
				case 15:
					return joaat("faggio2");
				
				case 16:
					return joaat("hakuchou");
				
				case 17:
					return joaat("hexer");
				
				case 18:
					return joaat("innovation");
				
				case 19:
					return joaat("lectro");
				
				case 20:
					return joaat("sovereign");
				
				case 21:
					return joaat("thrust");
				
				case 22:
					return joaat("vindicator");
				
				case 23:
					return joaat("gargoyle");
				
				case 24:
					return joaat("cliffhanger");
				
				case 25:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
				
				case 1:
					return joaat("cruiser");
				
				case 2:
					return joaat("scorcher");
				
				case 3:
					return joaat("tribike");
				
				case 4:
					return joaat("tribike2");
				
				case 5:
					return joaat("tribike3");
				
				default:
			}
			break;
	}
	return 0;
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 20;
		
		case 6:
			return 39;
		
		case 3:
			return 14;
		
		case 4:
			return 39;
		
		case 5:
			return 20;
		
		case 1:
			return 32;
		
		case 2:
			return 29;
		
		case 0:
			return 8;
		
		case 9:
			return 31;
		
		case 10:
			return 11;
		
		case 11:
			return 13;
		
		case 12:
			return 31;
		
		case 8:
			return 26;
		
		case 13:
			return 6;
		
		default:
	}
	return 39;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
			return 1;
		
		default:
	}
	return 0;
}

void func_431(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		func_437(39, 1, 0);
		func_437(40, 1, 0);
		func_437(41, 1, 0);
		func_437(42, 1, 0);
		func_437(43, 1, 0);
	}
	func_432(1, iParam0, 0);
	func_432(2, iParam0, 1);
	func_432(3, iParam0, 2);
	func_432(4, iParam0, 3);
	func_432(103, iParam0, 3);
	func_432(5, iParam0, 0);
	func_432(6, iParam0, 0);
	func_432(7, iParam0, 0);
	func_432(8, iParam0, 0);
	func_432(9, iParam0, 0);
	func_432(10, iParam0, 0);
	func_432(11, iParam0, 0);
	func_432(12, iParam0, 0);
	func_432(13, iParam0, 0);
	func_432(14, iParam0, 2);
	func_432(15, iParam0, 3);
	func_432(16, iParam0, 3);
	func_432(17, iParam0, 0);
	func_432(18, iParam0, 1);
	func_432(19, iParam0, 2);
	func_432(20, iParam0, 2);
	func_432(101, iParam0, 3);
	func_432(102, iParam0, 3);
	func_432(21, iParam0, 0);
	func_432(22, iParam0, 1);
	func_432(23, iParam0, 2);
	func_432(24, iParam0, 3);
	func_432(25, iParam0, 0);
	func_432(26, iParam0, 1);
	func_432(27, iParam0, 2);
	func_432(28, iParam0, 3);
	func_432(29, iParam0, 0);
	func_432(30, iParam0, 0);
	func_432(31, iParam0, 1);
	func_432(32, iParam0, 2);
	func_432(33, iParam0, 3);
	func_432(34, iParam0, 0);
	func_432(35, iParam0, 0);
	func_432(36, iParam0, 0);
	func_432(37, iParam0, 0);
	func_432(38, iParam0, 0);
	func_432(39, iParam0, 0);
	func_432(40, iParam0, 0);
	func_432(41, iParam0, 0);
	func_432(42, iParam0, 0);
	func_432(43, iParam0, 0);
	func_432(44, iParam0, 2);
	func_432(45, iParam0, 3);
	func_432(99, iParam0, 1);
	func_432(46, iParam0, 1);
	func_432(55, iParam0, 0);
	func_432(60, iParam0, 0);
	func_432(59, iParam0, 1);
	func_432(58, iParam0, 1);
	func_432(56, iParam0, 2);
	func_432(57, iParam0, 3);
	func_432(47, iParam0, 0);
	func_432(48, iParam0, 1);
	func_432(49, iParam0, 2);
	func_432(50, iParam0, 3);
	func_432(51, iParam0, 0);
	func_432(52, iParam0, 1);
	func_432(53, iParam0, 2);
	func_432(54, iParam0, 3);
	func_432(106, iParam0, 3);
	func_432(61, iParam0, 0);
	func_432(62, iParam0, 1);
	func_432(63, iParam0, 1);
	func_432(64, iParam0, 2);
	func_432(65, iParam0, 2);
	func_432(66, iParam0, 0);
	func_432(67, iParam0, 1);
	func_432(68, iParam0, 2);
	func_432(69, iParam0, 3);
	func_432(70, iParam0, 3);
	func_432(71, iParam0, 3);
	func_432(72, iParam0, 0);
	func_432(73, iParam0, 0);
	func_432(74, iParam0, 1);
	func_432(75, iParam0, 2);
	func_432(76, iParam0, 3);
	func_432(77, iParam0, 0);
	func_432(78, iParam0, 1);
	func_432(79, iParam0, 2);
	func_432(80, iParam0, 3);
	func_432(100, iParam0, 3);
	func_432(81, iParam0, 0);
	func_432(82, iParam0, 1);
	func_432(83, iParam0, 2);
	func_432(84, iParam0, 3);
	func_432(105, iParam0, 3);
	func_432(85, iParam0, 0);
	func_432(86, iParam0, 0);
	func_432(87, iParam0, 0);
	func_432(88, iParam0, 0);
	func_432(104, iParam0, 0);
	func_432(91, iParam0, 0);
	func_432(92, iParam0, 1);
	func_432(93, iParam0, 2);
	func_432(94, iParam0, 3);
	func_432(95, iParam0, 0);
	func_432(96, iParam0, 1);
	func_432(97, iParam0, 2);
	func_432(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_432(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 >= iParam2)
	{
		if (!unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2221[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_104439.f_19979)
			{
				Global_104439.f_19979[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2221[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_433(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_433(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	
	if (iParam1 == -1)
	{
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (iParam0 == 0)
			{
				iVar0 = 0;
				while (iVar0 < 279)
				{
					iVar1 = iVar0 * 3;
					iVar2 = func_436(unk_0x50B7853132D8438E(sParam2));
					if (iVar2 != -1)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_2097152[func_183() /*11035*/].f_7550.f_1944[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
					}
					iVar0++;
				}
			}
			else
			{
				iVar3 = func_435(iParam0);
				if (iVar3 != -1)
				{
					iVar4 = iVar3 * 3;
					iVar5 = func_436(unk_0x50B7853132D8438E(sParam2));
					if (iVar5 != -1)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_2097152[func_183() /*11035*/].f_7550.f_1944[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
					}
				}
				iVar6 = func_434(iParam0, iParam3, iParam4, iParam5);
				if (iVar6 > 0)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2097152[func_183() /*11035*/].f_7550.f_2782[(iVar6 / 32)]), (iVar6 % 32));
				}
			}
		}
		return;
	}
	if (iParam0 == 0)
	{
		iVar7 = 0;
		while (iVar7 < 279)
		{
			if (func_386(iParam1, -1, 0, -1))
			{
				iVar8 = (iVar7 * 4 + (iParam1 / 32));
				if (unk_0x27CA09C6DFAB1E79())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2097152[func_183() /*11035*/].f_7550.f_45[iVar8]), (iParam1 % 32));
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_668.f_76[iVar8]), (iParam1 % 32));
				}
			}
			iVar7++;
		}
	}
	else if (func_386(iParam1, -1, 0, -1))
	{
		iVar9 = func_435(iParam0);
		if (iVar9 != -1)
		{
			iVar10 = (iVar9 * 4 + (iParam1 / 32));
			iVar11 = (iParam1 % 32);
			if (unk_0x27CA09C6DFAB1E79())
			{
				if ((((iParam0 == joaat("avarus") || iParam0 == joaat("chimera")) || iParam0 == joaat("esskey")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey")))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iParam0 == joaat("trailerlarge") && iParam1 == 85)
				{
					iVar11++;
				}
				if (iParam0 == joaat("bombushka") && iParam1 == 21)
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 >= 0)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2097152[func_183() /*11035*/].f_7550.f_45[iVar10]), iVar11);
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_668.f_76[iVar10]), iVar11);
			}
		}
	}
}

int func_434(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == joaat("btype2"))
	{
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("lurcher"))
	{
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == joaat("faction2"))
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == joaat("buccaneer2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == joaat("chino2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("moonbeam2"))
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == joaat("primo2"))
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == joaat("voodoo"))
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("buccaneer"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("chino"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("moonbeam"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("primo"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("voodoo2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sultan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_10765)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("sultanrs"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_10765)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == joaat("btype3"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sabregt"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("virgo3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("minivan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("slamvan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("faction3"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_10765)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == joaat("minivan2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == joaat("sabregt2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == joaat("slamvan3"))
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("tornado5"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == joaat("virgo2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_10765)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == joaat("avarus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("chimera"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("daemon2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombiea"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombieb"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("sanctus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("wolfsbane"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("blazer4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("youga2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("fcr2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("diablous2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("nightblade"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("defiler"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("esskey"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("hakuchou2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("manchez"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("vortex"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("apc"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("halftrack"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("dune3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("tampa3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("nightshark"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("trailersmall2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("oppressor"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("insurgent3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("technical3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("ardent"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("specter2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == joaat("comet3"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == joaat("elegy"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == joaat("italigtb2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == joaat("nero2"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == joaat("starling"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("nokota"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("rogue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("molotok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("bombushka"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("tula"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("hunter"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("seabreeze"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("alphaz1"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("havok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("retinue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("microlight"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("visione"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iVar0 > 5800)
	{
	}
	return 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 1;
			break;
		
		case joaat("asea"):
			return 2;
			break;
		
		case joaat("asterope"):
			return 3;
			break;
		
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 5;
			break;
		
		case joaat("banshee"):
		case joaat("banshee2"):
			return 6;
			break;
		
		case joaat("bati"):
			return 7;
			break;
		
		case joaat("bati2"):
			return 8;
			break;
		
		case joaat("bfinjection"):
			return 9;
			break;
		
		case joaat("bison"):
			return 10;
			break;
		
		case joaat("bison2"):
			return 11;
			break;
		
		case joaat("bison3"):
			return 12;
			break;
		
		case joaat("bjxl"):
			return 13;
			break;
		
		case joaat("btype"):
			return 14;
			break;
		
		case joaat("blazer"):
			return 15;
			break;
		
		case joaat("blazer2"):
			return 15;
			break;
		
		case joaat("blazer3"):
			return 15;
			break;
		
		case joaat("blista"):
			return 16;
			break;
		
		case joaat("bobcatxl"):
			return 17;
			break;
		
		case joaat("bodhi2"):
			return 18;
			break;
		
		case joaat("boxville"):
			return 19;
			break;
		
		case joaat("boxville2"):
			return 20;
			break;
		
		case joaat("boxville3"):
			return 21;
			break;
		
		case joaat("buccaneer"):
		case joaat("buccaneer2"):
			return 22;
			break;
		
		case joaat("buffalo"):
			return 23;
			break;
		
		case joaat("buffalo2"):
			return 24;
			break;
		
		case joaat("bullet"):
			return 25;
			break;
		
		case joaat("burrito"):
			return 26;
			break;
		
		case joaat("paradise"):
			return 27;
			break;
		
		case joaat("bifta"):
			return 28;
			break;
		
		case joaat("kalahari"):
			return 29;
			break;
		
		case joaat("carbonizzare"):
			return 30;
			break;
		
		case joaat("carbonrs"):
			return 31;
			break;
		
		case joaat("cavalcade"):
			return 32;
			break;
		
		case joaat("cavalcade2"):
			return 33;
			break;
		
		case joaat("cheetah"):
			return 34;
			break;
		
		case joaat("cogcabrio"):
			return 35;
			break;
		
		case joaat("comet2"):
			return 36;
			break;
		
		case joaat("coquette"):
		case joaat("coquette2"):
			return 37;
			break;
		
		case joaat("daemon"):
			return 38;
			break;
		
		case joaat("dilettante"):
			return 39;
			break;
		
		case joaat("dominator"):
			return 40;
			break;
		
		case joaat("double"):
			return 41;
			break;
		
		case joaat("dubsta"):
			return 42;
			break;
		
		case joaat("dubsta2"):
			return 43;
			break;
		
		case joaat("elegy2"):
			return 44;
			break;
		
		case joaat("emperor"):
			return 45;
			break;
		
		case joaat("emperor2"):
			return 46;
			break;
		
		case joaat("emperor3"):
			return 47;
			break;
		
		case joaat("entityxf"):
			return 48;
			break;
		
		case joaat("exemplar"):
			return 49;
			break;
		
		case joaat("f620"):
			return 50;
			break;
		
		case joaat("faggio2"):
			return 51;
			break;
		
		case joaat("felon"):
			return 52;
			break;
		
		case joaat("felon2"):
			return 53;
			break;
		
		case joaat("feltzer2"):
			return 54;
			break;
		
		case joaat("fq2"):
			return 55;
			break;
		
		case joaat("fugitive"):
			return 56;
			break;
		
		case joaat("fusilade"):
			return 57;
			break;
		
		case joaat("futo"):
			return 58;
			break;
		
		case joaat("gauntlet"):
			return 59;
			break;
		
		case joaat("gburrito"):
			return 60;
			break;
		
		case joaat("granger"):
			return 61;
			break;
		
		case joaat("gresley"):
			return 62;
			break;
		
		case joaat("habanero"):
			return 63;
			break;
		
		case joaat("hexer"):
			return 64;
			break;
		
		case joaat("hotknife"):
			return 65;
			break;
		
		case joaat("infernus"):
			return 66;
			break;
		
		case joaat("ingot"):
			return 67;
			break;
		
		case joaat("intruder"):
			return 68;
			break;
		
		case joaat("issi2"):
			return 69;
			break;
		
		case joaat("jackal"):
			return 70;
			break;
		
		case joaat("jb700"):
			return 71;
			break;
		
		case joaat("khamelion"):
			return 72;
			break;
		
		case joaat("landstalker"):
			return 73;
			break;
		
		case joaat("lguard"):
			return 74;
			break;
		
		case joaat("manana"):
			return 75;
			break;
		
		case joaat("mesa"):
			return 76;
			break;
		
		case joaat("minivan"):
		case joaat("minivan2"):
			return 77;
			break;
		
		case joaat("monroe"):
			return 78;
			break;
		
		case joaat("nemesis"):
			return 79;
			break;
		
		case joaat("ninef"):
			return 80;
			break;
		
		case joaat("ninef2"):
			return 81;
			break;
		
		case joaat("oracle"):
			return 82;
			break;
		
		case joaat("oracle2"):
			return 83;
			break;
		
		case joaat("patriot"):
			return 84;
			break;
		
		case joaat("pcj"):
			return 85;
			break;
		
		case joaat("penumbra"):
			return 86;
			break;
		
		case joaat("peyote"):
			return 87;
			break;
		
		case joaat("phoenix"):
			return 88;
			break;
		
		case joaat("prairie"):
			return 89;
			break;
		
		case joaat("pranger"):
			return 90;
			break;
		
		case joaat("premier"):
			return 91;
			break;
		
		case joaat("primo"):
		case joaat("primo2"):
			return 92;
			break;
		
		case joaat("radi"):
			return 93;
			break;
		
		case joaat("rancherxl"):
			return 94;
			break;
		
		case joaat("rancherxl2"):
			return 95;
			break;
		
		case joaat("rapidgt"):
			return 96;
			break;
		
		case joaat("rapidgt2"):
			return 97;
			break;
		
		case joaat("ratloader"):
			return 98;
			break;
		
		case joaat("rebel"):
			return 99;
			break;
		
		case joaat("rebel2"):
			return 100;
			break;
		
		case joaat("regina"):
			return 101;
			break;
		
		case joaat("rocoto"):
			return 102;
			break;
		
		case joaat("ruffian"):
			return 103;
			break;
		
		case joaat("ruiner"):
			return 104;
			break;
		
		case joaat("rumpo"):
			return 105;
			break;
		
		case joaat("sabregt"):
		case joaat("sabregt2"):
			return 106;
			break;
		
		case joaat("sadler"):
			return 107;
			break;
		
		case joaat("sanchez"):
			return 108;
			break;
		
		case joaat("sandking"):
			return 109;
			break;
		
		case joaat("sandking2"):
			return 110;
			break;
		
		case joaat("schafter2"):
			return 111;
			break;
		
		case joaat("schwarzer"):
			return 112;
			break;
		
		case joaat("seminole"):
			return 113;
			break;
		
		case joaat("sentinel"):
			return 114;
			break;
		
		case joaat("sentinel2"):
			return 115;
			break;
		
		case joaat("serrano"):
			return 116;
			break;
		
		case joaat("speedo"):
			return 117;
			break;
		
		case joaat("speedo2"):
			return 118;
			break;
		
		case joaat("stanier"):
			return 119;
			break;
		
		case joaat("stinger"):
			return 120;
			break;
		
		case joaat("stingergt"):
			return 121;
			break;
		
		case joaat("stratum"):
			return 122;
			break;
		
		case joaat("stretch"):
			return 123;
			break;
		
		case joaat("sultan"):
		case joaat("sultanrs"):
			return 124;
			break;
		
		case joaat("superd"):
			return 125;
			break;
		
		case joaat("surano"):
			return 126;
			break;
		
		case joaat("surge"):
			return 127;
			break;
		
		case joaat("tailgater"):
			return 128;
			break;
		
		case joaat("jester"):
			return 129;
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("tornado5"):
			return 133;
			break;
		
		case joaat("vacca"):
			return 134;
			break;
		
		case joaat("vader"):
			return 135;
			break;
		
		case joaat("vigero"):
			return 136;
			break;
		
		case joaat("voltic"):
			return 137;
			break;
		
		case joaat("voodoo2"):
		case joaat("voodoo"):
			return 138;
			break;
		
		case joaat("washington"):
			return 139;
			break;
		
		case joaat("youga"):
			return 140;
			break;
		
		case joaat("zion"):
			return 141;
			break;
		
		case joaat("zion2"):
			return 142;
			break;
		
		case joaat("ztype"):
			return 143;
			break;
		
		case joaat("massacro"):
			return 144;
			break;
		
		case joaat("turismor"):
			return 145;
			break;
		
		case joaat("zentorno"):
			return 146;
			break;
		
		case joaat("huntley"):
			return 147;
			break;
		
		case joaat("alpha"):
			return 148;
			break;
		
		case joaat("cruiser"):
			return 149;
			break;
		
		case joaat("surfer"):
			return 150;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
			return 151;
			break;
		
		case joaat("chino"):
		case joaat("chino2"):
			return 152;
			break;
		
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 153;
			break;
		
		case joaat("btype2"):
			return 154;
			break;
		
		case joaat("lurcher"):
			return 155;
			break;
		
		case joaat("btype3"):
			return 156;
			break;
		
		case joaat("faction3"):
			return 157;
			break;
		
		case joaat("slamvan"):
		case joaat("slamvan2"):
		case joaat("slamvan3"):
			return 158;
			break;
		
		case joaat("virgo2"):
			return 159;
			break;
		
		case joaat("virgo3"):
			return 160;
			break;
		
		case joaat("bestiagts"):
			return 161;
			break;
		
		case joaat("brickade"):
			return 162;
			break;
		
		case joaat("fmj"):
			return 163;
			break;
		
		case joaat("nimbus"):
			return 164;
			break;
		
		case joaat("pfister811"):
			return 165;
			break;
		
		case joaat("prototipo"):
			return 166;
			break;
		
		case joaat("rumpo3"):
			return 167;
			break;
		
		case joaat("seven70"):
			return 168;
			break;
		
		case joaat("tug"):
			return 169;
			break;
		
		case joaat("volatus"):
			return 170;
			break;
		
		case joaat("windsor2"):
			return 171;
			break;
		
		case joaat("xls"):
			return 172;
			break;
		
		case joaat("xls2"):
			return 173;
			break;
		
		case joaat("reaper"):
			return 174;
			break;
		
		case joaat("le7b"):
			return 175;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
			return 176;
			break;
		
		case joaat("dominator2"):
			return 177;
			break;
		
		case joaat("gauntlet2"):
			return 178;
			break;
		
		case joaat("stalion2"):
			return 179;
			break;
		
		case joaat("omnis"):
			return 180;
			break;
		
		case joaat("tropos"):
			return 181;
			break;
		
		case joaat("brioso"):
			return 182;
			break;
		
		case joaat("trophytruck"):
			return 183;
			break;
		
		case joaat("trophytruck2"):
			return 184;
			break;
		
		case joaat("contender"):
			return 185;
			break;
		
		case joaat("cliffhanger"):
			return 186;
			break;
		
		case joaat("bf400"):
			return 187;
			break;
		
		case joaat("tyrus"):
			return 188;
			break;
		
		case joaat("rallytruck"):
			return 189;
			break;
		
		case joaat("tampa2"):
			return 190;
			break;
		
		case joaat("gargoyle"):
			return 191;
			break;
		
		case joaat("lynx"):
			return 192;
			break;
		
		case joaat("sheava"):
			return 193;
			break;
		
		case joaat("avarus"):
			return 194;
			break;
		
		case joaat("chimera"):
			return 195;
			break;
		
		case joaat("daemon2"):
			return 196;
			break;
		
		case joaat("defiler"):
			return 197;
			break;
		
		case joaat("esskey"):
			return 198;
			break;
		
		case joaat("nightblade"):
			return 199;
			break;
		
		case joaat("ratbike"):
			return 200;
			break;
		
		case joaat("zombiea"):
			return 202;
			break;
		
		case joaat("zombieb"):
			return 203;
			break;
		
		case joaat("shotaro"):
			return 204;
			break;
		
		case joaat("raptor"):
			return 205;
			break;
		
		case joaat("hakuchou2"):
			return 206;
			break;
		
		case joaat("blazer4"):
			return 207;
			break;
		
		case joaat("sanctus"):
			return 208;
			break;
		
		case joaat("vortex"):
			return 209;
			break;
		
		case joaat("manchez"):
			return 210;
			break;
		
		case joaat("tornado6"):
			return 211;
			break;
		
		case joaat("youga2"):
			return 212;
			break;
		
		case joaat("wolfsbane"):
			return 213;
			break;
		
		case joaat("faggio3"):
			return 214;
			break;
		
		case joaat("faggio"):
			return 215;
			break;
		
		case joaat("dune5"):
			return 216;
			break;
		
		case joaat("phantom2"):
			return 217;
			break;
		
		case joaat("technical2"):
			return 218;
			break;
		
		case joaat("blazer5"):
			return 219;
			break;
		
		case joaat("boxville5"):
			return 220;
			break;
		
		case joaat("wastelander"):
			return 221;
			break;
		
		case joaat("ruiner2"):
			return 222;
			break;
		
		case joaat("voltic2"):
			return 223;
			break;
		
		case joaat("penetrator"):
			return 224;
			break;
		
		case joaat("tempesta"):
			return 225;
			break;
		
		case joaat("italigtb2"):
			return 226;
			break;
		
		case joaat("nero2"):
			return 227;
			break;
		
		case joaat("diablous2"):
			return 228;
			break;
		
		case joaat("fcr2"):
			return 229;
			break;
		
		case joaat("elegy"):
			return 230;
			break;
		
		case joaat("comet3"):
			return 232;
			break;
		
		case joaat("specter2"):
			return 232;
			break;
		
		case joaat("nero"):
			return 233;
			break;
		
		case joaat("italigtb"):
			return 234;
			break;
		
		case joaat("fcr"):
			return 235;
			break;
		
		case joaat("specter"):
			return 236;
			break;
		
		case joaat("diablous"):
			return 237;
			break;
		
		case joaat("infernus2"):
			return 238;
			break;
		
		case joaat("gp1"):
			return 239;
			break;
		
		case joaat("ruston"):
			return 240;
			break;
		
		case joaat("turismo2"):
			return 241;
			break;
		
		case joaat("cheetah2"):
			return 242;
			break;
		
		case joaat("torero"):
			return 243;
			break;
		
		case joaat("vagner"):
			return 244;
			break;
		
		case joaat("xa21"):
			return 245;
			break;
		
		case joaat("nightshark"):
			return 246;
			break;
		
		case joaat("ardent"):
			return 247;
			break;
		
		case joaat("tampa3"):
			return 248;
			break;
		
		case joaat("apc"):
			return 249;
			break;
		
		case joaat("dune3"):
			return 250;
			break;
		
		case joaat("halftrack"):
			return 251;
			break;
		
		case joaat("oppressor"):
			return 252;
			break;
		
		case joaat("trailersmall2"):
			return 253;
			break;
		
		case joaat("insurgent3"):
			return 254;
			break;
		
		case joaat("technical3"):
			return 255;
			break;
		
		case joaat("hauler2"):
			return 256;
			break;
		
		case joaat("phantom3"):
			return 257;
			break;
		
		case joaat("trailerlarge"):
			return 258;
			break;
		
		case joaat("lazer"):
			return 259;
			break;
		
		case joaat("microlight"):
			return 260;
			break;
		
		case joaat("mogul"):
			return 261;
			break;
		
		case joaat("rogue"):
			return 262;
			break;
		
		case joaat("starling"):
			return 263;
			break;
		
		case joaat("seabreeze"):
			return 264;
			break;
		
		case joaat("tula"):
			return 265;
			break;
		
		case joaat("pyro"):
			return 266;
			break;
		
		case joaat("molotok"):
			return 267;
			break;
		
		case joaat("nokota"):
			return 268;
			break;
		
		case joaat("bombushka"):
			return 269;
			break;
		
		case joaat("hunter"):
			return 270;
			break;
		
		case joaat("havok"):
			return 271;
			break;
		
		case joaat("howard"):
			return 272;
			break;
		
		case joaat("alphaz1"):
			return 273;
			break;
		
		case joaat("cyclone"):
			return 274;
			break;
		
		case joaat("visione"):
			return 275;
			break;
		
		case joaat("vigilante"):
			return 276;
			break;
		
		case joaat("retinue"):
			return 277;
			break;
		
		case joaat("rapidgt3"):
			return 278;
			break;
	}
	return -1;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CMOD_TYR_10"):
		case joaat("CMOD_SMOKE_10"):
			return 0;
			break;
		
		case joaat("CMOD_TYR_11"):
		case joaat("CMOD_SMOKE_11"):
			return 1;
			break;
		
		case 232975537:
		case joaat("CMOD_SMOKE_4"):
			return 2;
			break;
		
		case 462718996:
		case joaat("CMOD_SMOKE_5"):
			return 3;
			break;
		
		case -444556307:
		case joaat("CMOD_SMOKE_6"):
			return 4;
			break;
		
		case -213731471:
		case joaat("CMOD_SMOKE_7"):
			return 5;
			break;
		
		case -968041086:
			return 6;
			break;
		
		case -694977009:
		case joaat("CMOD_SMOKE_3"):
			return 7;
			break;
		
		case 1523877515:
		case joaat("CMOD_SMOKE_8"):
			return 8;
			break;
		
		case -1518694851:
			return 9;
			break;
		
		case 685937731:
			return 10;
			break;
		
		case 1107182854:
			return 11;
			break;
		
		case 1795528252:
			return 12;
			break;
		
		case 963431690:
			return 13;
			break;
		
		case 7683469:
			return 14;
			break;
		
		case -1485567420:
			return 15;
			break;
		
		case joaat("HORN_CNOTE_C1"):
			return 16;
			break;
		
		case joaat("CMOD_WIN_5"):
			return 17;
			break;
		
		case -835077886:
		case joaat("CMOD_SMOKE_12"):
			return 18;
			break;
		
		case 1888648625:
		case joaat("CMOD_SMOKE_13"):
			return 19;
			break;
		
		case 1708257079:
			return 20;
			break;
		
		case -1440188433:
			return 22;
			break;
		
		case -1813427343:
			return 22;
			break;
		
		case -1940603832:
			return 23;
			break;
		
		case -665245345:
			return 24;
			break;
		
		case 1049163197:
			return 25;
			break;
		
		case -177872008:
			return 26;
			break;
		
		case -366752524:
			return 27;
			break;
		
		case -952091823:
			return 28;
			break;
		
		case joaat("HORN_LUXE1"):
			return 29;
			break;
		
		case joaat("HORN_LUXE2"):
			return 30;
			break;
		
		case joaat("HORN_LUXE3"):
			return 31;
			break;
		
		case joaat("HORN_LOWRDER1"):
			return 32;
			break;
		
		case joaat("HORN_LOWRDER2"):
			return 33;
			break;
		
		case joaat("HORN_HWEEN1"):
			return 34;
			break;
		
		case joaat("HORN_HWEEN2"):
			return 35;
			break;
		
		case joaat("HORN_XM15_1"):
			return 36;
			break;
		
		case joaat("HORN_XM15_2"):
			return 37;
			break;
		
		case joaat("HORN_XM15_3"):
			return 38;
			break;
	}
	return -1;
}

void func_437(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_243(iParam0, 0, 0))
		{
			if (iParam2 && Global_92814.f_18[iParam0])
			{
				if (func_443(iParam0) == 3 && !func_442(iParam0))
				{
					func_441(iParam0);
					func_440(iParam0, 0, 0);
					func_439(iParam0, 1, 0);
					func_438(iParam0);
				}
				else
				{
					func_440(iParam0, 1, 0);
					func_438(iParam0);
				}
			}
			else
			{
				func_440(iParam0, 0, 0);
				func_439(iParam0, 1, 0);
				func_438(iParam0);
			}
		}
		else
		{
			func_439(iParam0, 1, 0);
			func_438(iParam0);
		}
	}
	else if (func_243(iParam0, 0, 0))
	{
		func_439(iParam0, 0, 0);
		func_439(iParam0, 1, 0);
		func_438(iParam0);
	}
}

void func_438(int iParam0)
{
	Global_92814.f_163[iParam0] = 1;
	Global_92814.f_162 = 1;
}

void func_439(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD804ACF2A7171150(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_83() == 0)
		{
			uVar0 = func_51(func_244(iParam0), -1, 0);
			unk_0xD804ACF2A7171150(&uVar0, iParam1);
			func_130(func_244(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

void func_440(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_83() == 0)
		{
			uVar0 = func_51(func_244(iParam0), -1, 0);
			unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam1);
			func_130(func_244(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

void func_441(int iParam0)
{
	if (Global_92814.f_18[iParam0])
	{
		func_440(iParam0, 10, 1);
		func_440(iParam0, 19, 1);
	}
}

bool func_442(int iParam0)
{
	return func_243(iParam0, 5, 1);
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

void func_444()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	char cVar12[16];
	
	if (unk_0xE096BC82D913B3DB())
	{
		if (unk_0x27CA09C6DFAB1E79())
		{
			bVar0 = false;
			unk_0xE0E59AE643E9BBB5("car");
			unk_0xF266CB99D17AA11D("appdata");
			iVar1 = func_27("playerNameMP");
			if ((iVar1 != 0 && iVar1 != unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()))) || iLocal_135)
			{
				func_190("playerNameMP", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
				bVar0 = true;
				func_13(2921, 1, -1, 1);
				func_13(2922, 1, -1, 1);
				func_13(2923, 1, -1, 1);
				func_13(2924, 1, -1, 1);
				func_13(2925, 1, -1, 1);
				iLocal_135 = 0;
			}
			unk_0x25F628B35B652916();
			if (bVar0)
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					StringCopy(&cVar4, "multiplayer", 16);
					StringIntConCat(&cVar4, iVar2, 16);
					unk_0xF266CB99D17AA11D(&cVar4);
					iVar3 = 0;
					while (iVar3 < 10)
					{
						StringCopy(&cVar4, "vehicle", 16);
						StringIntConCat(&cVar4, iVar3, 16);
						unk_0xF266CB99D17AA11D(&cVar4);
						func_190("carUnlocked", 0);
						unk_0x25F628B35B652916();
						iVar3++;
					}
					unk_0x25F628B35B652916();
					iVar2++;
				}
			}
			unk_0xC7C77285A27883FD();
		}
		else
		{
			bVar8 = false;
			unk_0xE0E59AE643E9BBB5("car");
			unk_0xF266CB99D17AA11D("appdata");
			iVar9 = func_27("playerNameSP");
			if ((iVar9 != 0 && iVar9 != unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()))) || iLocal_134)
			{
				func_190("playerNameSP", unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1())));
				iLocal_156 = 1;
				iLocal_134 = 0;
				bVar8 = true;
			}
			unk_0x25F628B35B652916();
			if (bVar8)
			{
				iVar10 = 0;
				while (iVar10 < 5)
				{
					StringCopy(&cVar12, "multiplayer", 16);
					StringIntConCat(&cVar12, iVar10, 16);
					unk_0xF266CB99D17AA11D(&cVar12);
					iVar11 = 0;
					while (iVar11 < 10)
					{
						StringCopy(&cVar12, "vehicle", 16);
						StringIntConCat(&cVar12, iVar11, 16);
						unk_0xF266CB99D17AA11D(&cVar12);
						func_190("carUnlocked", 0);
						unk_0x25F628B35B652916();
						iVar11++;
					}
					unk_0x25F628B35B652916();
					iVar10++;
				}
			}
			unk_0xC7C77285A27883FD();
		}
	}
}

void func_445()
{
	int iVar0;
	char cVar1[16];
	char cVar5[16];
	int iVar9;
	struct<3> Var10;
	struct<3> Var16;
	int iVar22;
	
	iVar0 = func_183();
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (!Global_2097152[iVar0 /*11035*/].f_5526.f_1989)
		{
			unk_0xE0E59AE643E9BBB5("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_14(), 16);
			unk_0xF266CB99D17AA11D(&cVar1);
			iVar9 = 0;
			while (iVar9 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar9, 16);
				unk_0xF266CB99D17AA11D(&cVar1);
				func_190("carUnlocked", 0);
				unk_0x25F628B35B652916();
				iVar9++;
			}
			unk_0x25F628B35B652916();
			unk_0xF266CB99D17AA11D("appdata");
			StringCopy(&Var10, "orderCount_mp", 24);
			StringIntConCat(&Var10, func_14(), 24);
			func_190(&Var10, 0);
			unk_0x25F628B35B652916();
			iLocal_157 = 1;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xC7C77285A27883FD();
			Global_2097152[iVar0 /*11035*/].f_5526.f_1989 = 1;
		}
		if (Global_2097152[iVar0 /*11035*/].f_5526[iLocal_131 /*13*/].f_11)
		{
			unk_0xE0E59AE643E9BBB5("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_14(), 16);
			unk_0xF266CB99D17AA11D(&cVar1);
			StringCopy(&cVar1, "vehicle", 16);
			StringIntConCat(&cVar1, iLocal_130, 16);
			unk_0xF266CB99D17AA11D(&cVar1);
			func_190("carUnlocked", 0);
			unk_0x25F628B35B652916();
			iLocal_157 = 1;
			unk_0xC1B1E9A034A63A62(0);
			unk_0x25F628B35B652916();
			unk_0xC7C77285A27883FD();
			Global_2097152[iVar0 /*11035*/].f_5526[iLocal_131 /*13*/].f_11 = 0;
			Global_2097152[iVar0 /*11035*/].f_5526[iLocal_131 /*13*/].f_10 = 0;
			Global_2097152[iVar0 /*11035*/].f_5526[iLocal_131 /*13*/] = 0;
		}
		switch (iLocal_138)
		{
			case 0:
				if (Global_2097152[iVar0 /*11035*/].f_5526.f_1990)
				{
					unk_0x6E61DBE3A4830095("car");
					bLocal_137 = true;
					iLocal_138++;
				}
				else
				{
					bLocal_137 = false;
				}
				break;
			
			case 1:
				if (unk_0xAFCC6DE848483E13() != 1)
				{
					if (unk_0xAFCC6DE848483E13() != 3)
					{
						Global_2097152[iVar0 /*11035*/].f_5526.f_1990 = 0;
					}
					unk_0xE0E59AE643E9BBB5("car");
					StringCopy(&cVar5, "mp", 16);
					StringIntConCat(&cVar5, func_14(), 16);
					StringConCat(&cVar5, "_order", 16);
					unk_0xF266CB99D17AA11D(&cVar5);
					unk_0x1F3060258D375765();
					unk_0x25F628B35B652916();
					unk_0xF266CB99D17AA11D("appdata");
					StringCopy(&Var16, "orderCount_mp", 24);
					StringIntConCat(&Var16, func_14(), 24);
					func_190(&Var16, Global_2097152[iVar0 /*11035*/].f_5526.f_1997);
					unk_0x25F628B35B652916();
					unk_0xC7C77285A27883FD();
					iLocal_138 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_104439.f_19979.f_260)
		{
			unk_0xE0E59AE643E9BBB5("car");
			unk_0xF266CB99D17AA11D("singleplayer0");
			func_190("carUnlocked", 0);
			unk_0x25F628B35B652916();
			unk_0xF266CB99D17AA11D("singleplayer2");
			func_190("carUnlocked", 0);
			unk_0x25F628B35B652916();
			unk_0xF266CB99D17AA11D("appdata");
			func_190("orderCount_sp0", 0);
			func_190("orderCount_sp1", 0);
			func_190("orderCount_sp2", 0);
			unk_0x25F628B35B652916();
			iLocal_157 = 1;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xC7C77285A27883FD();
			unk_0xE0E59AE643E9BBB5("dog");
			unk_0xF266CB99D17AA11D("saveData");
			func_190("chopSafeHouse", 0);
			unk_0x8C0B8B990CC3181C();
			unk_0x25F628B35B652916();
			unk_0xC7C77285A27883FD();
			Global_104439.f_19979.f_273[0] = 0;
			Global_104439.f_19979.f_273[1] = 0;
			Global_104439.f_19979.f_273[2] = 0;
			Global_104439.f_19979.f_260 = 1;
		}
		iVar22 = 0;
		while (iVar22 < 3)
		{
			if (Global_104439.f_19979[iVar22 /*43*/].f_41)
			{
				unk_0xE0E59AE643E9BBB5("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar22, 16);
				unk_0xF266CB99D17AA11D(&cVar1);
				func_190("carUnlocked", 0);
				iLocal_157 = 1;
				unk_0xC1B1E9A034A63A62(0);
				unk_0x25F628B35B652916();
				unk_0xC7C77285A27883FD();
				Global_104439.f_19979.f_273[iVar22] = 0;
				Global_104439.f_19979[iVar22 /*43*/].f_41 = 0;
				Global_104439.f_19979[iVar22 /*43*/].f_40 = 0;
				Global_104439.f_19979[iVar22 /*43*/] = 0;
				Global_104439.f_19979.f_273[iVar22] = 0;
			}
			iVar22++;
		}
		switch (iLocal_138)
		{
			case 0:
				if (Global_104439.f_19979.f_265)
				{
					unk_0x6E61DBE3A4830095("car");
					bLocal_137 = true;
					iLocal_138++;
				}
				else
				{
					bLocal_137 = false;
				}
				break;
			
			case 1:
				if (unk_0xAFCC6DE848483E13() != 1)
				{
					if (unk_0xAFCC6DE848483E13() != 3)
					{
						Global_104439.f_19979.f_265 = 0;
					}
					unk_0xE0E59AE643E9BBB5("car");
					StringCopy(&cVar5, "sp", 16);
					StringIntConCat(&cVar5, Global_104439.f_19979.f_266, 16);
					StringConCat(&cVar5, "_order", 16);
					unk_0xF266CB99D17AA11D(&cVar5);
					unk_0x1F3060258D375765();
					unk_0x25F628B35B652916();
					unk_0xF266CB99D17AA11D("appdata");
					func_190("orderCount_sp0", Global_104439.f_19979.f_285[0]);
					func_190("orderCount_sp1", Global_104439.f_19979.f_285[1]);
					func_190("orderCount_sp2", Global_104439.f_19979.f_285[2]);
					unk_0x25F628B35B652916();
					unk_0xC7C77285A27883FD();
					iLocal_138 = 0;
				}
				break;
			}
	}
}

void func_446()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x2A1C4260DF2DF50D() || !unk_0x226461CC0D7B8C9E("car"))
	{
		iLocal_136 = 0;
		return;
	}
	else
	{
		if (!iLocal_136)
		{
			iLocal_134 = 1;
			iLocal_135 = 1;
			Global_101139 = 1;
		}
		iLocal_136 = 1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_83() != 0)
		{
			return;
		}
		if (!func_153())
		{
			return;
		}
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_83() == 0)
		{
			iLocal_128 = 1;
		}
		if (!Global_2097152[func_183() /*11035*/].f_5526.f_2023)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2097152[func_183() /*11035*/].f_5526.f_1999[iVar0] = iVar0 + 1;
				Global_2097152[func_183() /*11035*/].f_5526.f_2010[iVar0] = iVar0 + 1;
				Global_2097152[func_183() /*11035*/].f_5526.f_1849[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2097152[func_183() /*11035*/].f_5526.f_2021 = -1;
			Global_2097152[func_183() /*11035*/].f_5526.f_2023 = 1;
		}
	}
	else
	{
		iLocal_128 = 0;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (Global_2097152[func_183() /*11035*/].f_5526.f_1808.f_36)
		{
			iLocal_378 = 1;
		}
		if (func_101(187, -1))
		{
			iLocal_378 = 1;
			func_56(187, 0, -1, 1);
		}
		if (!Global_262145.f_9324 && !Global_101141)
		{
			iLocal_378 = 1;
		}
	}
	else if ((Global_104439.f_19979.f_130[0 /*41*/].f_36 || Global_104439.f_19979.f_130[1 /*41*/].f_36) || Global_104439.f_19979.f_130[2 /*41*/].f_36)
	{
		iLocal_378 = 1;
	}
	iLocal_138 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_183 = 0;
	bLocal_140 = false;
	iLocal_141 = 0;
	if (!iLocal_184 || Global_100972)
	{
		Global_104439.f_19979.f_264 = 1;
		iLocal_156 = 0;
		unk_0xE0E59AE643E9BBB5("car");
		unk_0xF266CB99D17AA11D("appdata");
		iVar1 = func_27("appUID");
		if (iVar1 != Global_104439.f_19979.f_272)
		{
			iLocal_156 = 1;
		}
		unk_0x25F628B35B652916();
		unk_0xC7C77285A27883FD();
		iVar2 = 0;
		while (iVar2 < Global_104439.f_19979.f_130)
		{
			iLocal_162[iVar2] = 0;
			iLocal_166[iVar2] = 0;
			iLocal_170[iVar2] = 0;
			iVar2++;
		}
		iLocal_174 = 0;
	}
	Global_100972 = 0;
	iLocal_184 = 1;
	iLocal_127 = 1;
}

void func_447()
{
	func_453();
	switch (iLocal_122)
	{
		case 0:
			func_452();
			break;
		
		case 1:
			func_450();
			break;
		
		case 2:
			func_448();
			break;
	}
}

void func_448()
{
	func_449(0);
}

void func_449(int iParam0)
{
	iLocal_122 = iParam0;
}

void func_450()
{
	struct<3> Var0;
	
	switch (iLocal_123)
	{
		case 0:
			iLocal_125 = iLocal_124;
			unk_0xC397DDF7C577BD55("tuneables_processing");
			if (unk_0xBE2C96D0FF6F8282("tuneables_processing") && unk_0x869D367E1242C75E(1424) > 0)
			{
				Var0.f_0 = func_451(iLocal_124);
				Var0.f_1 = func_451(iLocal_126);
				Var0.f_2 = iLocal_124 == 1;
				unk_0xB8BA7F44DF1575E1("tuneables_processing", &Var0, 3, 1424);
				unk_0xADA0A4C226503297("tuneables_processing");
				iLocal_123++;
			}
			break;
		
		case 1:
			if (unk_0x7832F791572D5809(joaat("tuneables_processing")) == 0)
			{
				func_449(2);
				iLocal_123 = 0;
			}
			break;
	}
}

int func_451(int iParam0)
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 9;
		
		case 6:
			return 10;
		
		case 7:
			return 11;
		
		case 8:
			return 12;
		
		case 9:
			return 13;
		
		case 10:
			return 14;
		
		case 11:
			return 17;
		
		case 12:
			return 18;
		
		case 13:
			return 19;
		
		case 18:
			return 26;
		
		case 14:
			return 20;
		
		case 15:
			return 21;
		
		case 16:
			return 22;
		
		case 19:
			return 23;
		
		case 17:
			return 24;
		
		case 20:
			return 25;
		
		case 21:
			return 27;
		
		default:
	}
	return 0;
}

void func_452()
{
	if (iLocal_124 != iLocal_125 || Global_262144)
	{
		Global_262144 = 0;
		func_449(1);
	}
}

void func_453()
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (((!unk_0x27CA09C6DFAB1E79() && !func_111()) && !func_485()) && func_83() == -1)
	{
		iLocal_124 = 0;
		iLocal_126 = 21;
	}
	else
	{
		if (unk_0xF4F91CD09D59F42E() && func_484())
		{
			return;
		}
		iLocal_124 = 1;
		iLocal_126 = 21;
		iVar0 = func_483(unk_0x3D35F9864E4640B1());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (func_98(unk_0x3D35F9864E4640B1()))
			{
				iVar1 = unk_0x68881ABE1CEBE803(unk_0x50B7853132D8438E(&(Global_970998.f_42)));
			}
			if (iVar1 == -1)
			{
				iVar1 = unk_0x68881ABE1CEBE803(unk_0x50B7853132D8438E(&(Global_1641087.f_97097)));
			}
			iLocal_126 = func_482(iVar1);
			if (iVar0 == 0)
			{
				if (func_377(unk_0x3D35F9864E4640B1(), 0) && func_462(Global_1641087.f_96810, Global_1641087.f_116067))
				{
					iLocal_124 = 20;
				}
				else if (func_461(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 12;
				}
				else if (func_460(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 13;
				}
				else if (func_459(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 14;
				}
				else if (func_458(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 16;
				}
				else if (func_457(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 15;
				}
				else if (func_456(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 19;
				}
				else if (func_455(unk_0x3D35F9864E4640B1()) || func_454(unk_0x3D35F9864E4640B1()))
				{
					iLocal_124 = 18;
				}
				else
				{
					iLocal_124 = 3;
				}
			}
			if (iVar0 == 6)
			{
				iLocal_124 = 17;
			}
			if (iVar0 == 3)
			{
				iLocal_124 = 4;
			}
			if (iVar0 == 1 || Global_1574288)
			{
				iLocal_124 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_124 = 5;
				if (Global_1641087.f_46375 == 0 || Global_1641087.f_46375 == 1)
				{
					iLocal_124 = 5;
				}
				if (Global_1641087.f_46375 == 6 || Global_1641087.f_46375 == 7)
				{
					iLocal_124 = 10;
				}
				if (Global_1641087.f_46375 == 2 || Global_1641087.f_46375 == 3)
				{
					iLocal_124 = 9;
				}
				if (Global_1641087.f_46375 == 4 || Global_1641087.f_46375 == 5)
				{
					iLocal_124 = 8;
				}
				if ((Global_1641087.f_46375 == 8 || Global_1641087.f_46375 == 9) || Global_1574313)
				{
					iLocal_124 = 11;
				}
				if (Global_1641087.f_46375 == 12 || Global_1641087.f_46375 == 13)
				{
					if (Global_1641087.f_46378 == 8)
					{
						iLocal_124 = 6;
					}
					else
					{
						iLocal_124 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_124 = 11;
			}
		}
		if (func_4())
		{
			iLocal_124 = 1;
			iLocal_126 = 21;
		}
		if ((((unk_0x27CA09C6DFAB1E79() && !func_111()) && !func_485()) && !func_83() == -1) && unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (Global_2453473 > 10000)
			{
				unk_0xB3DBA6F07BAB49F2(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2.f_0 > Global_2453466 || Var2.f_1 > Global_2453466.f_1) || Var2.f_2 > Global_2453466.f_2)
				{
					unk_0xB3DBA6F07BAB49F2(&Global_2453466, &(Global_2453466.f_1), &(Global_2453466.f_2), &(Global_2453466.f_3), &(Global_2453466.f_4), &(Global_2453466.f_5));
					func_449(1);
					Global_2453473 = 0;
				}
				Global_2453473 = 0;
			}
			else
			{
				Global_2453473++;
			}
		}
	}
}

bool func_454(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_455(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_456(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 8;
}

bool func_457(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 3;
}

bool func_458(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_459(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 1;
}

bool func_460(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

bool func_461(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 6;
}

int func_462(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((func_481(iParam0) || func_480(iParam0)) || func_479(iParam0)) || func_478(iParam0)) || func_477(iParam0)) || func_476(iParam0)) || func_475(iParam0)) || func_474(iParam0)) || func_473(iParam0)) || func_472(iParam0)) || func_471(iParam0)) || func_470(iParam0)) || func_469(iParam0)) || func_468(iParam0)) || func_467(iParam0)) || func_466(iParam0)) || func_465(iParam0)) || func_464(iParam0)) || func_463(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8535[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8568[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8557[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_466(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8546[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_467(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_8522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8511[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8500[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_470(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8489[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8392[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_472(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8414[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_473(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8403[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_474(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8381[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_475(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8370[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_476(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8359[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_477(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8325[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_478(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8333[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_479(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8320 || iParam0 == Global_262145.f_8321) || iParam0 == Global_262145.f_8322) || iParam0 == Global_262145.f_8323) || iParam0 == Global_262145.f_8324)
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8315 || iParam0 == Global_262145.f_8316) || iParam0 == Global_262145.f_8317) || iParam0 == Global_262145.f_8318) || iParam0 == Global_262145.f_8319)
	{
		return 1;
	}
	return 0;
}

int func_481(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_8308 || iParam0 == Global_262145.f_8309) || iParam0 == Global_262145.f_8310) || iParam0 == Global_262145.f_8311) || iParam0 == Global_262145.f_8312) || iParam0 == Global_262145.f_8313) || iParam0 == Global_262145.f_8314)
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

var func_483(int iParam0)
{
	return Global_1593076[iParam0 /*647*/];
}

bool func_484()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_31.f_3, 0);
}

bool func_485()
{
	return Global_2445582.f_573;
}

void func_486()
{
	if (iLocal_127 != 0 && iLocal_128 != 2)
	{
		if (iLocal_128 == 0)
		{
			if (unk_0x27CA09C6DFAB1E79())
			{
				iLocal_128 = 2;
			}
		}
		else if (iLocal_128 == 1)
		{
			if ((!unk_0x27CA09C6DFAB1E79() && !func_111()) && !func_487())
			{
				iLocal_128 = 2;
			}
			if (func_83() != 0)
			{
				iLocal_128 = 2;
			}
		}
		if (!unk_0x2A1C4260DF2DF50D())
		{
			iLocal_128 = 2;
		}
		if (Global_100972)
		{
			iLocal_128 = 2;
		}
		if (iLocal_128 == 2)
		{
			iLocal_127 = 0;
		}
	}
}

int func_487()
{
	if ((((func_108() || func_107()) || func_111()) || func_489()) || func_488())
	{
		return 1;
	}
	return 0;
}

var func_488()
{
	return Global_2445582.f_722;
}

var func_489()
{
	return Global_2445582.f_574;
}


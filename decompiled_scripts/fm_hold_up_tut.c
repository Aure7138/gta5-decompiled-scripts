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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	float fLocal_55 = 0f;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	struct<6> Local_89 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 32;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
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
	var uLocal_132 = 32;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
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
	int iLocal_226 = 0;
	var uLocal_227 = 16;
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
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
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
	var uLocal_316 = 0;
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
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_88 = 600000;
	iLocal_392 = -1;
	func_294(ScriptParam_0);
	while (true)
	{
		func_293();
		if (func_284() || !func_283(unk_0x1788E93557766241(), 0, 1))
		{
			func_281();
		}
		switch (func_280(unk_0x044A481E863E2F6B()))
		{
			case 0:
				if (func_279() == 2)
				{
					iLocal_169[unk_0x044A481E863E2F6B()] = 2;
				}
				else if (func_279() == 6)
				{
					iLocal_169[unk_0x044A481E863E2F6B()] = 5;
				}
				break;
			
			case 2:
				if (func_279() == 2)
				{
					if (!func_278())
					{
						if (func_34(&uLocal_202))
						{
						}
					}
					else
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 4))
						{
							func_33(1);
							func_32(0);
							func_25();
						}
						func_24(8, 0);
					}
				}
				else if (func_279() == 6)
				{
					iLocal_169[unk_0x044A481E863E2F6B()] = 5;
				}
				break;
			
			case 5:
				func_23(&(Local_89.f_3));
				if (func_22(&(Local_89.f_3)))
				{
					iLocal_169[unk_0x044A481E863E2F6B()] = 6;
				}
				break;
			
			case 3:
				iLocal_169[unk_0x044A481E863E2F6B()] = 6;
			
			case 6:
				func_281();
				break;
		}
		if (unk_0xE9849174628A9C50())
		{
			switch (func_279())
			{
				case 0:
					Local_89.f_0 = 2;
					break;
				
				case 2:
					func_21();
					func_2();
					if (func_1())
					{
						Local_89.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0x889D01384B54BCE3(Local_89.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	if (unk_0xE9849174628A9C50())
	{
		switch (Local_89.f_5.f_2)
		{
			case 0:
				if (!unk_0x889D01384B54BCE3(Local_89.f_5.f_3, 1))
				{
					iVar0 = 0;
					while (iVar0 <= 31)
					{
						Local_89.f_5.f_5[iVar0] = -1;
						Local_89.f_5.f_38[iVar0] = -1;
						iVar0++;
					}
					unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 1);
				}
				if (Global_2446992.f_1616)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 0);
					Global_2446992.f_1616 = 0;
				}
				if (unk_0x889D01384B54BCE3(Local_89.f_5.f_3, 1))
				{
					if (unk_0x889D01384B54BCE3(Local_89.f_5.f_3, 0))
					{
						if (!func_20(&(Local_89.f_5)) || func_19(&(Local_89.f_5), 5000, 0))
						{
							if (Local_89.f_5.f_4 == 0)
							{
								Local_89.f_5.f_72 = 0;
								unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 2);
								unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 3);
							}
							iVar0 = Local_89.f_5.f_4;
							iVar1 = iVar0;
							if (unk_0x38FA37FE3518BA38(iVar1))
							{
								if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 0))
								{
									unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_73), iVar1);
									Local_89.f_5.f_72++;
									if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 6))
									{
										Local_89.f_5.f_5[iVar0] = -1;
									}
								}
							}
							Local_89.f_5.f_4++;
							if (Local_89.f_5.f_4 == 32)
							{
								func_18(&(Local_89.f_5));
								func_17(&(Local_89.f_5), 0, 0);
								if (Local_89.f_5.f_72 >= 1)
								{
									Local_89.f_5.f_2 = 1;
									unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 2);
								}
								Local_89.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_89.f_5.f_4 == 0)
				{
					unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 2);
				}
				iVar0 = Local_89.f_5.f_4;
				if (unk_0x889D01384B54BCE3(Local_89.f_5.f_73, iVar0))
				{
					if (func_283(iVar0, 1, 1))
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 8))
						{
							if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 0))
							{
								if (Local_89.f_5.f_5[iVar0] == -1)
								{
									if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 6))
									{
										Local_89.f_5.f_5[iVar0] = -1;
									}
									iVar2 = func_16(iVar0, &(Local_89.f_5.f_73));
									if (iVar2 > -1)
									{
										Local_89.f_5.f_5[iVar0] = iVar2;
										Local_89.f_5.f_5[iVar2] = iVar0;
										unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 2);
									}
								}
								else
								{
									unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_89.f_5.f_4++;
				if (Local_89.f_5.f_4 == 32)
				{
					if (unk_0x889D01384B54BCE3(Local_89.f_5.f_3, 2))
					{
					}
					Local_89.f_5.f_4 = 0;
					Local_89.f_5.f_2 = 2;
					unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 3);
					func_15();
				}
				break;
			
			case 2:
				if (Local_89.f_5.f_4 == 0)
				{
					unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 3);
				}
				iVar0 = Local_89.f_5.f_4;
				if (unk_0x889D01384B54BCE3(Local_89.f_5.f_73, iVar0))
				{
					if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 0))
					{
						if (func_283(iVar0, 1, 1))
						{
							if (Local_89.f_5.f_38[iVar0] == -1)
							{
								iVar3 = Local_89.f_5.f_5[iVar0];
								if (iVar3 > -1)
								{
									if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 0))
									{
										if (Local_89.f_5.f_38[iVar0] == -1)
										{
											iVar2 = func_9(iVar0, &(Local_89.f_5.f_71));
											if (iVar2 > -1)
											{
												Local_89.f_5.f_38[iVar0] = iVar2;
												Local_89.f_5.f_38[iVar3] = iVar2;
												unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 3);
												func_8(iVar2);
											}
										}
										else if (Local_89.f_5.f_38[iVar0] == Local_89.f_5.f_38[iVar3] || Local_89.f_5.f_38[iVar3] == -1)
										{
											unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 3);
										}
										else if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 3))
										{
											Local_89.f_5.f_38[iVar0] = Local_89.f_5.f_38[iVar3];
										}
										else if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 3))
										{
											Local_89.f_5.f_38[iVar3] = Local_89.f_5.f_38[iVar0];
										}
									}
									else
									{
										Local_89.f_5.f_5[iVar0] = -1;
										Local_89.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									iVar2 = func_9(iVar0, &(Local_89.f_5.f_71));
									if (iVar2 > -1)
									{
										unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 3);
										Local_89.f_5.f_38[iVar0] = iVar2;
										func_8(iVar2);
									}
								}
							}
							else
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_5.f_3), 3);
							}
						}
					}
				}
				Local_89.f_5.f_4++;
				if (Local_89.f_5.f_4 == 32)
				{
					if (unk_0x889D01384B54BCE3(Local_89.f_5.f_3, 3))
					{
						func_3();
						unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 0);
						Local_89.f_5.f_2 = 0;
					}
					else
					{
						unk_0x29DB79DD4D939B38(&(Local_89.f_5.f_3), 0);
						Local_89.f_5.f_2 = 0;
					}
					Local_89.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()
{
	struct<2> Var0;
	
	Var0.f_0 = 215;
	Var0.f_1 = unk_0x1788E93557766241();
	unk_0xD311A006D41D0704(1, &Var0, 2, func_4(1, 1));
}

int func_4(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x42C0B50857BF923B(iVar1);
		if (func_283(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1788E93557766241() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_5(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_6(-1, 0) == 8;
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

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()
{
	return Global_1312729;
}

void func_8(int iParam0)
{
	unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_2), iParam0);
}

int func_9(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	
	iVar2 = -1;
	iVar3 = Local_89.f_5.f_5[iParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = iParam0;
	uVar11 = unk_0xFF34D923BFB5E9FB(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != iParam0)
		{
			if (Local_89.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				uVar13 = unk_0xFF34D923BFB5E9FB(iVar12);
				iVar1 = 0;
				while (iVar1 <= 19)
				{
					if (!bVar0)
					{
						if (unk_0x889D01384B54BCE3(*uParam1, iVar1))
						{
							if (!func_13(iVar1))
							{
								unk_0x29DB79DD4D939B38(uParam1, iVar1);
							}
						}
						if (func_12(iVar1))
						{
							iVar14 = func_11(iVar1);
							if (iVar14 != -1)
							{
								if (Global_2414156.f_87[iVar14] == 0)
								{
									if (!unk_0x889D01384B54BCE3(*uParam1, iVar1))
									{
										if (!unk_0x2DE0B96E966FD817(uVar11))
										{
											if (!unk_0x2DE0B96E966FD817(uVar13))
											{
												Var7 = { func_10(iVar1) };
												fVar4 = unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(uVar11, 1), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(uVar13, 1), Var7);
													if (fVar5 > fVar6)
													{
														iVar2 = iVar1;
														bVar0 = true;
														unk_0xD0E2BFCE93AE3ABD(uParam1, iVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar2 = Local_89.f_5.f_38[iVar3];
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (!bVar0)
			{
				if (func_12(iVar1))
				{
					iVar14 = func_11(iVar1);
					if (iVar14 != -1)
					{
						if (Global_2414156.f_87[iVar14] == 0)
						{
							if (!unk_0x889D01384B54BCE3(*uParam1, iVar1))
							{
								if (!unk_0x2DE0B96E966FD817(uVar11))
								{
									Var7 = { func_10(iVar1) };
									fVar4 = unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(uVar11, 1), Var7);
									if (fVar4 > fVar6)
									{
										iVar2 = iVar1;
										bVar0 = true;
										unk_0xD0E2BFCE93AE3ABD(uParam1, iVar1);
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return iVar2;
}

Vector3 func_10(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -52.27f, -1733.58f, 28.23f };
			break;
		
		case 1:
			Var0 = { 15.4693f, -1354.067f, 28.315f };
			break;
		
		case 2:
			Var0 = { -1238.39f, -904.58f, 13.27f };
			break;
		
		case 3:
			Var0 = { -724.14f, -912.37f, 20.34f };
			break;
		
		case 4:
			Var0 = { 1145.433f, -972.5638f, 45.6656f };
			break;
		
		case 5:
			Var0 = { -1502.037f, -380.4863f, 39.8563f };
			break;
		
		case 6:
			Var0 = { 364.9397f, 320.9199f, 102.6601f };
			break;
		
		case 7:
			Var0 = { 1162.664f, -338.0286f, 67.4397f };
			break;
		
		case 8:
			Var0 = { 2567.102f, 384.5044f, 107.4621f };
			break;
		
		case 9:
			Var0 = { -2970.054f, 401.0349f, 14.0942f };
			break;
		
		case 10:
			Var0 = { -3042.513f, 599.3762f, 6.5342f };
			break;
		
		case 11:
			Var0 = { -3252.98f, 992.51f, 13.5f };
			break;
		
		case 12:
			Var0 = { -1814.226f, 778.6277f, 136.175f };
			break;
		
		case 13:
			Var0 = { 531.4801f, 2675.505f, 41.4485f };
			break;
		
		case 14:
			Var0 = { 1183.174f, 2693.942f, 36.9294f };
			break;
		
		case 15:
			Var0 = { 1382.555f, 3598.162f, 33.8769f };
			break;
		
		case 16:
			Var0 = { 1959.975f, 3731.025f, 31.3247f };
			break;
		
		case 17:
			Var0 = { 2681.91f, 3292.97f, 55.49f };
			break;
		
		case 18:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
		
		case 19:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
	}
	return Var0;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 17;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 16;
			break;
		
		case 4:
			iVar0 = 13;
			break;
		
		case 5:
			iVar0 = 14;
			break;
		
		case 6:
			iVar0 = 9;
			break;
		
		case 7:
			iVar0 = 18;
			break;
		
		case 8:
			iVar0 = 4;
			break;
		
		case 9:
			iVar0 = 11;
			break;
		
		case 10:
			iVar0 = 1;
			break;
		
		case 11:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 19;
			break;
		
		case 13:
			iVar0 = 3;
			break;
		
		case 14:
			iVar0 = 10;
			break;
		
		case 15:
			iVar0 = 0;
			break;
		
		case 16:
			iVar0 = 7;
			break;
		
		case 17:
			iVar0 = 5;
			break;
		
		case 18:
			iVar0 = 15;
			break;
		
		case 19:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 != -1)
	{
		if (unk_0x889D01384B54BCE3(Global_2414156.f_64, iVar0))
		{
			if (!unk_0x889D01384B54BCE3(Global_2414156.f_62, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_14(iParam0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = iVar1;
		if (Local_89.f_5.f_38[iVar1] == iParam0)
		{
			if (func_283(iVar2, 0, 1))
			{
				if (!unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 4))
				{
					if (unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_14(int iParam0)
{
	return unk_0x889D01384B54BCE3(Local_89.f_2, iParam0);
}

void func_15()
{
	Local_89.f_2 = 0;
}

int func_16(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar1 == -1)
		{
			if (iVar0 != iParam0)
			{
				if (unk_0x889D01384B54BCE3(*uParam1, iVar0))
				{
					if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 0))
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 3))
						{
							if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
							{
								if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 8))
								{
									if (Local_89.f_5.f_5[iVar0] == -1)
									{
										iVar1 = iVar0;
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_18(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_17(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE9849174628A9C50())
	{
		if (iLocal_168 == 0)
		{
			unk_0x29DB79DD4D939B38(&iLocal_226, 0);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 1);
		}
		iVar1 = iLocal_168;
		iVar2 = Local_89.f_5.f_5[iLocal_168];
		if (func_283(iVar1, 0, 1))
		{
			if (!unk_0x889D01384B54BCE3(Global_1583725[iLocal_168 /*334*/].f_128, 4))
			{
				unk_0x29DB79DD4D939B38(&iLocal_226, 1);
			}
		}
		if (unk_0x889D01384B54BCE3(Global_1583725[iLocal_168 /*334*/].f_128, 0))
		{
			if (func_283(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_283(iVar0, 0, 1))
					{
						Local_89.f_5.f_5[iLocal_168] = -1;
					}
				}
			}
			else
			{
				if (Local_89.f_5.f_5[iLocal_168] != -1)
				{
					Local_89.f_5.f_5[iLocal_168] = -1;
				}
				if (Local_89.f_5.f_38[iLocal_168] != -1)
				{
					Local_89.f_5.f_38[iLocal_168] = -1;
				}
			}
		}
		else if (func_283(iVar1, 0, 1))
		{
			if (unk_0x889D01384B54BCE3(Global_1583725[iLocal_168 /*334*/].f_128, 12))
			{
				if (Local_89.f_5.f_5[iLocal_168] != -1)
				{
					Local_89.f_5.f_5[iLocal_168] = -1;
				}
				if (Local_89.f_5.f_38[iLocal_168] != -1)
				{
					Local_89.f_5.f_38[iLocal_168] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_283(iVar0, 0, 1))
					{
						Local_89.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_168++;
		if (iLocal_168 == 32)
		{
			if (unk_0x889D01384B54BCE3(iLocal_226, 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_89.f_1), 0);
			}
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 0);
			iLocal_168 = 0;
		}
	}
}

int func_22(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_23(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE9849174628A9C50())
		{
			func_17(uParam0, 0, 0);
		}
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
	{
		unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
	}
}

void func_25()
{
	if (!func_31())
	{
		return;
	}
	if (!unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_1312577.f_7)
	{
		return;
	}
	func_26();
}

void func_26()
{
	func_28();
	func_27(0);
}

void func_27(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x519586565311459B();
		Global_1312577.f_9 = unk_0x519586565311459B();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_28()
{
	if (!func_30())
	{
	}
	if (func_31())
	{
		unk_0x0945E066A4F6A0E3(&(Global_1312577.f_10));
		func_29();
		unk_0x88A8396804C29D3A();
	}
}

void func_29()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			unk_0x53B64327E3305DCB(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_30()
{
	if (!func_31())
	{
		return 0;
	}
	unk_0xA5FA652414A5B56F(&(Global_1312577.f_10));
	func_29();
	return unk_0x516C4E27C3C5FFAD();
}

int func_31()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 0))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 0);
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 4))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 4);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 4))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 4);
	}
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	var uVar18;
	
	if (Global_2446992.f_1616)
	{
		if (!unk_0xE9849174628A9C50())
		{
			Global_2446992.f_1616 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
		if (!unk_0x889D01384B54BCE3(uParam0->f_1, 2))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if ((func_275(unk_0x1788E93557766241(), 1) || func_274()) || func_273() != 0)
				{
					func_271(uParam0);
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 2);
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 12);
					unk_0x29DB79DD4D939B38(&iLocal_226, 11);
				}
			}
		}
		else if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				if (!func_275(unk_0x1788E93557766241(), 1))
				{
					if (!func_274())
					{
						if (func_273() == 0)
						{
							unk_0x29DB79DD4D939B38(&(uParam0->f_1), 2);
							unk_0x29DB79DD4D939B38(&(uParam0->f_1), 1);
							unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
							unk_0x29DB79DD4D939B38(&(uParam0->f_1), 3);
							unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = unk_0x1788E93557766241();
		if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 5))
		{
			if (func_275(unk_0x1788E93557766241(), 1) || func_274())
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar3 /*334*/].f_128), 5);
				*uParam0 = 0;
				func_32(0);
				func_270(0);
				func_24(8, 0);
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
				func_271(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_89.f_5.f_5[unk_0x1788E93557766241()] == -1)
			{
				if (func_19(&(uParam0->f_6), 15000, 0))
				{
					func_269();
					func_18(&(uParam0->f_6));
					func_17(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 9))
		{
			if (func_19(&(uParam0->f_6), 5000, 0))
			{
				func_269();
				func_18(&(uParam0->f_6));
				func_17(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = unk_0x1788E93557766241();
			if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 13))
			{
				if (unk_0x889D01384B54BCE3(Global_2446992.f_1617, 6) || unk_0x889D01384B54BCE3(Global_2446992.f_1619, 31))
				{
					if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 0))
					{
						if (!func_268())
						{
							if (!func_275(unk_0x1788E93557766241(), 1))
							{
								if (!func_274())
								{
									if (func_273() == 0)
									{
										if (func_158())
										{
											if (func_141(uParam0))
											{
												Global_1681282.f_1 = -1;
												func_32(1);
												func_269();
												if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 5))
												{
													unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 13))
					{
						if (!unk_0x11A809BBE3889742())
						{
							func_140("FM_IHELP_ACPI", -1);
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 13);
						}
					}
					if (unk_0x889D01384B54BCE3(Global_1681282, 1))
					{
						iVar3 = unk_0x1788E93557766241();
						iVar0 = Local_89.f_5.f_5[iVar3];
						iVar1 = Local_89.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_11(iVar1);
							if (iVar2 == 0)
							{
							}
							func_139(iVar2, 1, func_4(1, 1));
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
							func_270(1);
							func_24(8, 1);
							uVar18 = func_138(1185, -1, 0);
							unk_0x29DB79DD4D939B38(&uVar18, 1);
							unk_0x29DB79DD4D939B38(&uVar18, 2);
							unk_0x29DB79DD4D939B38(&uVar18, 3);
							unk_0x29DB79DD4D939B38(&uVar18, 5);
							unk_0x29DB79DD4D939B38(&uVar18, 6);
							*uParam0 = 1;
							func_137(1185, uVar18, -1, 1);
							iLocal_392 = func_138(1162, -1, 0);
						}
						else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 5000, 0))
						{
							func_269();
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 30000, 0))
					{
						func_269();
						func_18(&(uParam0->f_6));
						func_17(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 0))
				{
					unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 0);
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
					unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 2);
					unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
					func_32(0);
				}
				if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 12))
				{
					if (Local_89.f_5.f_38[iVar3] == -1 && Local_89.f_5.f_5[iVar3] == -1)
					{
						unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 12);
					}
				}
				else if (!func_20(&(uParam0->f_12)))
				{
					func_17(&(uParam0->f_12), 0, 0);
				}
				else if (func_19(&(uParam0->f_12), 30000, 0))
				{
					unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 13);
					func_18(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = unk_0x1788E93557766241();
			iVar1 = Local_89.f_5.f_38[iVar3];
			iVar0 = Local_89.f_5.f_5[iVar3];
			func_136();
			if (!unk_0x889D01384B54BCE3(uParam0->f_1, 0))
			{
				if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
				{
					unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
				}
				if (unk_0x889D01384B54BCE3(uParam0->f_1, 14))
				{
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 14);
				}
				if (!unk_0x5660C8AFDD9C1721(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = unk_0x64F646E6A974BF18(func_10(iVar1));
						unk_0xF1D09F0F8B016765(uParam0->f_4, 1);
						unk_0x85C00B9AEF9CC0BE(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_135(iVar0, 1))
				{
					iVar4 = iVar0;
					if (unk_0x38FA37FE3518BA38(iVar4))
					{
						if (func_283(iVar4, 0, 1))
						{
							if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 4) && !unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 5))
							{
								func_134("FM_HTUT_GO", 0);
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 0);
							}
						}
					}
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_1, 0))
				{
					func_134("FM_HTUT_GO", 0);
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 1);
				}
				else
				{
					func_18(&(uParam0->f_10));
					func_17(&(uParam0->f_10), 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 0);
			}
			else
			{
				if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
				{
					unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
				}
				if (unk_0x889D01384B54BCE3(uParam0->f_1, 14))
				{
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 14);
				}
				if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 2))
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if ((unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), func_10(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_133(25f))) || func_132(1101004800, 1117126656))
						{
							if (unk_0x5660C8AFDD9C1721(uParam0->f_4))
							{
								unk_0xB6FB9702660D84F6(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_135(iVar0, 1))
							{
								iVar4 = iVar0;
								if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
								{
									if (unk_0x38FA37FE3518BA38(iVar4))
									{
										if (func_283(iVar4, 1, 1))
										{
											if (!func_131())
											{
												Var5 = { func_130(iVar4) };
												if (unk_0x765DD998E5AD03DC(&Var5))
												{
													func_124("FM_HTUT_FWAT", iVar4, 0, 0);
												}
												else
												{
													func_124("FM_HTUT_WAT", iVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar3 /*334*/].f_128), 2);
						}
					}
				}
				else
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (!unk_0x889D01384B54BCE3(uParam0->f_1, 2))
						{
							if ((!unk_0x889D01384B54BCE3(iLocal_226, 18) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), func_10(iVar1)) > (35f * 35f)) || (unk_0x889D01384B54BCE3(iLocal_226, 18) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), func_10(iVar1)) > (90f * 90f)))
							{
								unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
								unk_0x29DB79DD4D939B38(&(Global_1583725[iVar3 /*334*/].f_128), 2);
								unk_0x29DB79DD4D939B38(&iLocal_226, 18);
							}
						}
					}
					if (unk_0x889D01384B54BCE3(Global_1681282, 15))
					{
						if (func_121("FM_HTUT_WAT") || func_121("FM_HTUT_FWAT"))
						{
							func_25();
						}
					}
				}
			}
			if (iVar0 > -1 && func_135(iVar0, 1))
			{
				if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
				{
					if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 2))
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 12))
						{
							if (func_20(&(uParam0->f_10)))
							{
								if (func_19(&(uParam0->f_10), iLocal_88, 0))
								{
									unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar3 /*334*/].f_128), 12);
									unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar3 /*334*/].f_128), 13);
									if (unk_0x5660C8AFDD9C1721(uParam0->f_4))
									{
										unk_0xB6FB9702660D84F6(&(uParam0->f_4));
									}
									func_25();
									*uParam0 = 0;
									unk_0x29DB79DD4D939B38(&(uParam0->f_1), 12);
									unk_0x29DB79DD4D939B38(&iLocal_226, 11);
								}
								else if (!unk_0x889D01384B54BCE3(uParam0->f_1, 2))
								{
									if (!unk_0x889D01384B54BCE3(uParam0->f_1, 12))
									{
										if (func_19(&(uParam0->f_10), (iLocal_88 - 60000), 0))
										{
											unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 12);
										}
										else if (!unk_0x889D01384B54BCE3(iLocal_226, 11))
										{
											if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
											{
												if (!func_19(&(uParam0->f_10), (iLocal_88 - 420000), 0))
												{
													func_18(&(uParam0->f_10));
													func_17(&(uParam0->f_10), 0, 0);
													unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 11);
													iLocal_88 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 12))
				{
					if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 2) && unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
					{
						unk_0x29DB79DD4D939B38(&(uParam0->f_1), 12);
						unk_0x29DB79DD4D939B38(&iLocal_226, 11);
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_271(uParam0);
						func_17(&uLocal_220, 0, 0);
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 6);
						func_120(1);
						func_17(&uLocal_220, 0, 0);
						if (func_135(iVar0, 1))
						{
							if (!unk_0x889D01384B54BCE3(uParam0->f_1, 15))
							{
								if (func_119(iVar0, 0))
								{
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 2))
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
						{
							func_111();
						}
					}
				}
			}
			else if (unk_0x889D01384B54BCE3(Global_1583725[iVar3 /*334*/].f_128, 2))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 4);
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 5);
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 6);
				func_271(uParam0);
				func_120(1);
				*uParam0 = 3;
			}
			if (unk_0x889D01384B54BCE3(uParam0->f_1, 12))
			{
				func_107(iLocal_88, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_19(&uLocal_220, 1000, 0))
			{
				*uParam0 = 3;
				func_271(uParam0);
				func_120(1);
				func_17(&uLocal_220, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = unk_0x1788E93557766241();
			iVar0 = Local_89.f_5.f_5[iVar3];
			iVar1 = Local_89.f_5.f_38[iVar3];
			if (!unk_0x889D01384B54BCE3(iLocal_226, 8))
			{
				if (func_133(35f))
				{
					iVar2 = func_11(iVar1);
					if (iVar2 == 0)
					{
					}
					func_139(iVar2, 0, func_4(1, 1));
					unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 8);
				}
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
			{
				unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
			}
			if (!unk_0x889D01384B54BCE3(uParam0->f_1, 3))
			{
				if (!unk_0x889D01384B54BCE3(uParam0->f_1, 14))
				{
					if (!func_106())
					{
						if (iVar0 > -1 && func_135(iVar0, 1))
						{
							iVar4 = iVar0;
							if (unk_0x38FA37FE3518BA38(iVar4))
							{
								if (func_283(iVar4, 1, 1))
								{
									if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 16))
									{
										Var5 = { func_130(iVar4) };
										if (unk_0x765DD998E5AD03DC(&Var5))
										{
											func_124("FM_HTUT_FHLD", iVar4, 0, 0);
										}
										else
										{
											func_124("FM_HTUT_HLD", iVar4, 0, 0);
										}
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 3);
									}
									else if (!unk_0x889D01384B54BCE3(uParam0->f_1, 14))
									{
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 14);
										func_124("FM_HTUT_HLC", iVar4, 1, 0);
									}
								}
							}
						}
						if (!unk_0x889D01384B54BCE3(uParam0->f_1, 3) && !unk_0x889D01384B54BCE3(uParam0->f_1, 14))
						{
							func_134("FM_HTUT_HLS", 0);
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 3);
							unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar3 /*334*/].f_128), 8);
						}
					}
				}
				else
				{
					iVar3 = unk_0x1788E93557766241();
					iVar0 = Local_89.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_135(iVar0, 1))
					{
						if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 16))
						{
							unk_0x29DB79DD4D939B38(&(uParam0->f_1), 14);
						}
					}
					else
					{
						unk_0x29DB79DD4D939B38(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_106())
			{
				if (unk_0x889D01384B54BCE3(uParam0->f_1, 3))
				{
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_135(iVar0, 1))
			{
				if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 16))
				{
					unk_0x29DB79DD4D939B38(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_105(uParam0);
		func_97(uParam0);
		func_88(uParam0);
		func_85(uParam0);
		if (!func_278())
		{
			if (func_82(uParam0))
			{
				if (unk_0x5660C8AFDD9C1721(uParam0->f_4))
				{
					unk_0xB6FB9702660D84F6(&(uParam0->f_4));
				}
				if (unk_0x5660C8AFDD9C1721(uParam0->f_5))
				{
					unk_0xB6FB9702660D84F6(&(uParam0->f_5));
				}
				if (unk_0x889D01384B54BCE3(uParam0->f_1, 15))
				{
					iVar0 = Local_89.f_5.f_5[unk_0x1788E93557766241()];
					if (func_119(iVar0, 1))
					{
					}
				}
				if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
				{
					func_81(1);
				}
				if (unk_0x889D01384B54BCE3(iLocal_226, 12))
				{
					unk_0x5687AEB601657A7E(1);
					unk_0x29DB79DD4D939B38(&iLocal_226, 12);
				}
				func_25();
				func_33(1);
				func_270(0);
				func_32(0);
				func_24(8, 0);
				func_79(121, 1, -1, 1);
				func_35(1);
				*uParam0 = 99;
			}
		}
	}
	return 0;
}

void func_35(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_78())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573725[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_75(unk_0x1788E93557766241(), bParam0);
	iVar2 = func_73(iVar1, bParam0);
	if (!func_72(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573725[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573725[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 146)
	{
		iVar3 = func_71(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_69(iVar4))
			{
				func_61(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_54(func_56(59, 0), 0);
	func_52(func_56(22, 0), func_56(73, 0));
	if (func_78())
	{
		if (func_50(77, -1))
		{
			func_49(1);
			func_48(1);
		}
	}
	if (func_47() || func_46())
	{
		func_79(77, 1, -1, 1);
		if (unk_0x1DAD7CE53BEE7710())
		{
			func_36(28, 1, 0);
			func_36(29, 1, 0);
			func_36(30, 1, 0);
			func_36(31, 1, 0);
			func_36(32, 1, 0);
			func_36(33, 1, 0);
			func_36(34, 1, 0);
			func_36(35, 1, 0);
			func_36(36, 1, 0);
			func_36(37, 1, 0);
			func_36(38, 1, 0);
		}
	}
	if (func_56(21, 0))
	{
		unk_0xCCA8FC7E3B390CC1(0);
	}
	Global_973959 = 0;
}

void func_36(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_90094.f_17[iParam0])
			{
				if (func_44(iParam0) == 3 && !func_43(iParam0))
				{
					func_42(iParam0);
					func_41(iParam0, 0, 0);
					func_38(iParam0, 1, 0);
					func_37(iParam0);
				}
				else
				{
					func_41(iParam0, 1, 0);
					func_37(iParam0);
				}
			}
			else
			{
				func_41(iParam0, 0, 0);
				func_38(iParam0, 1, 0);
				func_37(iParam0);
			}
		}
		else
		{
			func_38(iParam0, 1, 0);
			func_37(iParam0);
		}
	}
	else if (func_45(iParam0, 0, 0))
	{
		func_38(iParam0, 0, 0);
		func_38(iParam0, 1, 0);
		func_37(iParam0);
	}
}

void func_37(int iParam0)
{
	Global_90094.f_153[iParam0] = 1;
	Global_90094.f_152 = 1;
}

void func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_40() == 0)
		{
			iVar0 = func_138(func_39(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&iVar0, iParam1);
			func_137(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

int func_40()
{
	return Global_24446;
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_40() == 0)
		{
			iVar0 = func_138(func_39(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&iVar0, iParam1);
			func_137(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_42(int iParam0)
{
	if (Global_90094.f_17[iParam0])
	{
		func_41(iParam0, 10, 1);
		func_41(iParam0, 19, 1);
	}
}

bool func_43(int iParam0)
{
	return func_45(iParam0, 5, 1);
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
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
	}
	return 5;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_40() == 0)
		{
			return unk_0x889D01384B54BCE3(func_138(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

bool func_46()
{
	return Global_1315879;
}

bool func_47()
{
	return Global_1315881;
}

void func_48(bool bParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	func_36(28, bParam0, 0);
	func_36(30, bParam0, 0);
	func_36(31, bParam0, 0);
	func_36(33, bParam0, 0);
	func_36(34, bParam0, 0);
	func_36(38, bParam0, 0);
}

void func_49(bool bParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	func_36(29, bParam0, 0);
	func_36(32, bParam0, 0);
	func_36(36, bParam0, 0);
	func_36(35, bParam0, 0);
	func_36(37, bParam0, 0);
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

void func_52(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_36(0, bParam0, 1);
	func_36(1, bParam0, 1);
	func_36(2, bParam0, 1);
	func_36(3, bParam0, 1);
	func_36(4, bParam0, 1);
	func_36(5, bParam0, 1);
	func_36(6, bParam0, 1);
	func_36(7, bParam0, bVar0);
	func_36(8, bParam0, 1);
	func_36(9, bParam0, 1);
	func_36(10, bParam0, 1);
	func_36(11, bParam0, 1);
	func_36(12, bParam0, bVar0);
	func_36(13, bParam0, 1);
	func_36(21, bParam0, 1);
	func_36(14, bParam0, 1);
	func_36(15, bParam0, 1);
	func_36(16, bParam0, 1);
	func_36(17, bParam0, 1);
	func_36(18, bParam0, 1);
	func_36(19, bParam0, 1);
	func_36(20, bParam0, 1);
	func_36(22, bParam0, 1);
	func_36(23, bParam0, 1);
	func_36(24, bParam0, 1);
	func_36(25, bParam0, 1);
	func_36(26, bParam0, 1);
	func_36(27, bParam0, 1);
	func_53(1, !bParam1);
	if (!bVar0)
	{
		func_42(12);
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_90094.f_9[iParam0] = 1;
	}
	else
	{
		Global_90094.f_9[iParam0] = 0;
	}
}

void func_54(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	uVar0 = func_55(0);
	func_36(39, bParam0, 0);
	func_36(40, bParam0, 0);
	func_36(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_36(43, bParam0, 0);
		func_36(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_43(39))
		{
			func_42(39);
		}
		if (!func_43(40))
		{
			func_42(40);
		}
		if (!func_43(41))
		{
			func_42(41);
		}
		if (!func_43(42))
		{
			func_42(42);
		}
		if (!func_43(43))
		{
			func_42(43);
		}
	}
}

int func_55(bool bParam0)
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_1617, 26))
		{
			iVar0 = func_138(1186, -1, 0);
			if (!unk_0x889D01384B54BCE3(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_50(122, -1);
}

bool func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6027 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_58(unk_0x1788E93557766241(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4831 == 1)
		{
			return 1;
		}
	}
	if (func_47() || func_46())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_57())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x889D01384B54BCE3(Global_1573725[iVar1], iVar0);
}

int func_57()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 23))
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	iVar0 = Global_1336485[func_51(-1)];
	if (unk_0x889D01384B54BCE3(iVar0, 7))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1622), 23);
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_78())
	{
		return 0;
	}
	if (func_60())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_59(iParam1);
	iVar1 = uVar0;
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_309, iVar1);
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_60()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 3);
}

void func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_68(-1))
			{
				if (!func_78())
				{
					return;
				}
			}
			if (!func_68(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_278() && !func_67())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_66())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_68(-1))
				{
					if (!func_62())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573725[iVar1]), iVar0);
	}
}

int func_62()
{
	int iVar0;
	
	if (func_65(unk_0x1788E93557766241()))
	{
		return 1;
	}
	iVar0 = Global_1336485[func_51(-1)];
	if (unk_0x889D01384B54BCE3(iVar0, 2))
	{
		func_63(1);
		return 1;
	}
	return 0;
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 25))
		{
			func_64(unk_0x1788E93557766241(), 12);
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 25);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 25))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 25);
	}
}

void func_64(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_59(iParam1);
	iVar1 = uVar0;
	unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iParam0 /*334*/].f_309), iVar1);
}

bool func_65(int iParam0)
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_124, 25);
}

int func_66()
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 6))
	{
		return 1;
	}
	iVar0 = Global_1336485[func_51(-1)];
	if (unk_0x889D01384B54BCE3(iVar0, 0))
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_1622, 6))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1622), 6);
		}
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 7);
}

bool func_68(int iParam0)
{
	return func_50(123, iParam0);
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
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
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_138(func_70(iParam0), -1, 0);
			if (unk_0x889D01384B54BCE3(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1195;
		
		case 1:
			return 1196;
		
		case 2:
			return 1197;
		
		case 3:
			return 1198;
		
		case 4:
			return 1199;
		
		default:
	}
	return 1195;
}

int func_71(int iParam0)
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
			if (!func_68(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 135:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_72(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(119, iParam0);
}

int func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0);
}

int func_76(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_51(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_51(-1)];
	}
	return 0;
}

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

int func_78()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(120, -1);
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_80())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
		}
	}
}

int func_80()
{
	return 1;
	return 0;
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 17))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 17);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 17))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 17);
	}
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_5.f_5[unk_0x1788E93557766241()];
	if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x044A481E863E2F6B() /*334*/].f_128, 2))
	{
		if (func_138(1162, -1, 0) > iLocal_392)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (unk_0x38FA37FE3518BA38(iVar1))
				{
					if (func_283(iVar1, 1, 1))
					{
						if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 2))
						{
							Global_1681282.f_1 = iVar0;
							unk_0xD0E2BFCE93AE3ABD(&Global_1681282, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_84())
		{
			if (!unk_0x889D01384B54BCE3(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					iVar1 = iVar0;
					if (unk_0x38FA37FE3518BA38(iVar1))
					{
						if (func_283(iVar1, 1, 1))
						{
							Global_1681282.f_1 = iVar0;
							unk_0xD0E2BFCE93AE3ABD(&Global_1681282, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_83())
		{
			if (!unk_0x889D01384B54BCE3(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((unk_0x889D01384B54BCE3(uParam0->f_1, 7) && !unk_0x889D01384B54BCE3(uParam0->f_1, 10)) && !unk_0x889D01384B54BCE3(uParam0->f_1, 9))
	{
		if (!func_20(&(uParam0->f_16)))
		{
			func_17(&(uParam0->f_16), 0, 0);
		}
		else if (func_19(&(uParam0->f_16), 3000, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 11);
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	int iVar0;
	
	iVar0 = Local_89.f_5.f_5[unk_0x1788E93557766241()];
	if (iVar0 > -1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_84()
{
	int iVar0;
	
	iVar0 = Local_89.f_5.f_5[unk_0x1788E93557766241()];
	if (iVar0 > -1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_128, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x889D01384B54BCE3(uParam0->f_1, 6))
	{
		if (!unk_0x5660C8AFDD9C1721(uParam0->f_5))
		{
			if (!func_106())
			{
				iVar0 = Local_89.f_5.f_38[unk_0x1788E93557766241()];
				if (iVar0 > -1)
				{
					Var1 = { func_87(iVar0) };
					if (!func_86(Var1, 0f, 0f, 0f, 0))
					{
						if (!unk_0x5660C8AFDD9C1721(uParam0->f_5))
						{
							unk_0xBFB6307D3CFD9B6C(1);
							uParam0->f_5 = unk_0x64F646E6A974BF18(Var1);
							unk_0x2025496D9184D312(uParam0->f_5, 52);
							unk_0xBE97A5A41C1F5C4C(uParam0->f_5, 1f);
							unk_0x85C00B9AEF9CC0BE(uParam0->f_5, 7);
							unk_0xF1D09F0F8B016765(uParam0->f_5, 1);
						}
					}
				}
			}
		}
		else if (func_106())
		{
			if (unk_0x5660C8AFDD9C1721(uParam0->f_5))
			{
				unk_0xB6FB9702660D84F6(&(uParam0->f_5));
			}
		}
	}
}

bool func_86(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_87(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -53.124f, -1756.405f, 28.421f };
			break;
		
		case 1:
			Var0 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 2:
			Var0 = { -1226.464f, -902.5864f, 11.2783f };
			break;
		
		case 3:
			Var0 = { -711.721f, -916.6965f, 18.2145f };
			break;
		
		case 4:
			Var0 = { 1141.36f, -980.8802f, 45.4155f };
			break;
		
		case 5:
			Var0 = { -1491.057f, -383.5728f, 39.1706f };
			break;
		
		case 6:
			Var0 = { 376.6533f, 323.6471f, 102.5664f };
			break;
		
		case 7:
			Var0 = { 1159.542f, -326.6986f, 67.923f };
			break;
		
		case 8:
			Var0 = { 2559.247f, 385.5266f, 107.623f };
			break;
		
		case 9:
			Var0 = { -2973.262f, 390.8184f, 14.0433f };
			break;
		
		case 10:
			Var0 = { -3038.908f, 589.5187f, 6.9048f };
			break;
		
		case 11:
			Var0 = { -3240.317f, 1004.433f, 11.8307f };
			break;
		
		case 12:
			Var0 = { -1822.287f, 788.006f, 137.1859f };
			break;
		
		case 13:
			Var0 = { 544.2802f, 2672.811f, 41.1566f };
			break;
		
		case 14:
			Var0 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			break;
		
		case 15:
			Var0 = { 1394.169f, 3599.86f, 34.0121f };
			break;
		
		case 16:
			Var0 = { 1965.054f, 3740.555f, 31.3448f };
			break;
		
		case 17:
			Var0 = { 2682.003f, 3282.543f, 54.2411f };
			break;
		
		case 18:
			Var0 = { 1698.808f, 4929.198f, 41.0783f };
			break;
		
		case 19:
			Var0 = { 1731.21f, 6411.403f, 34.0372f };
			break;
	}
	return Var0;
}

void func_88(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (unk_0x889D01384B54BCE3(uParam0->f_1, 4))
			{
				if (!unk_0x889D01384B54BCE3(uParam0->f_1, 5))
				{
					if (!unk_0x11A809BBE3889742())
					{
						if (!unk_0x2B0FFD431FD5A9FA())
						{
							if (func_90())
							{
								uParam0->f_2++;
							}
						}
					}
				}
				else
				{
					uParam0->f_2++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x11A809BBE3889742())
			{
				if (!unk_0x2B0FFD431FD5A9FA())
				{
					if (func_90())
					{
						func_140("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = func_138(1185, -1, 0);
						if (!unk_0x889D01384B54BCE3(iVar0, 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&iVar0, 1);
							func_137(1185, iVar0, -1, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x11A809BBE3889742())
			{
				if (!unk_0x2B0FFD431FD5A9FA())
				{
					if (func_90())
					{
						if (func_133(1089470464))
						{
							if (!func_89())
							{
								func_140("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!unk_0x889D01384B54BCE3(iLocal_226, 7) || unk_0x4E151C54AB29940C(0, 37))
							{
								func_140("FM_PASS_DBL", -1);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_89()
{
	return Global_1312416;
}

int func_90()
{
	if (((((((((((((((!func_283(unk_0x1788E93557766241(), 1, 1) || unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || func_96(8, -1)) || func_96(15, -1)) || func_95()) || func_96(3, -1)) || unk_0x11A809BBE3889742()) || func_275(unk_0x1788E93557766241(), 1)) || func_274()) || func_94()) || func_93()) || func_92()) || unk_0x2B0FFD431FD5A9FA()) || unk_0x31EF25060710376C()) || func_91())
	{
		return 0;
	}
	return 1;
}

bool func_91()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_1623, 12);
}

bool func_92()
{
	return Global_2422491.f_2419.f_585;
}

bool func_93()
{
	return Global_90094.f_291 > 0;
}

bool func_94()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

var func_95()
{
	return Global_2394624;
}

bool func_96(int iParam0, int iParam1)
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

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_84())
	{
		if (*uParam0 <= 1)
		{
			if (!unk_0x889D01384B54BCE3(uParam0->f_1, 8))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_60())
	{
		if (!func_20(&uLocal_395) || func_19(&uLocal_395, 5000, 0))
		{
			if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 2))
			{
				if (iLocal_392 > -1)
				{
					iVar1 = func_138(1162, -1, 0);
					if (iLocal_392 != iVar1)
					{
						iLocal_392 = iVar1;
					}
					func_18(&uLocal_395);
					func_17(&uLocal_395, 0, 0);
				}
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(uParam0->f_1, 7))
	{
		if (!func_104())
		{
			iVar0 = func_138(1162, -1, 0);
			if (iLocal_392 > -1 && iVar0 == iLocal_392)
			{
				if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 2) && ((unk_0x16CDA1894CFE0781(joaat("am_hold_up")) == 0 && !unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16)) && !func_103()))
				{
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 9);
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_106() && !unk_0x889D01384B54BCE3(uParam0->f_1, 8)) && unk_0x16CDA1894CFE0781(joaat("am_hold_up")) == 0)
					{
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 9);
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 7);
					}
					else
					{
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (unk_0x889D01384B54BCE3(uParam0->f_1, 10))
	{
		if (func_104())
		{
			if (unk_0x889D01384B54BCE3(uParam0->f_1, 7))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 7);
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 9);
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 10);
			}
		}
	}
	if (unk_0x889D01384B54BCE3(uParam0->f_1, 9))
	{
		if (!unk_0x889D01384B54BCE3(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_133(10f))
				{
					iVar2 = unk_0xE7CD1A45CD3148E7("freemode", -1, 0);
					if (iVar2 != func_102())
					{
						unk_0x29DB79DD4D939B38(&(uParam0->f_1), 9);
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 10);
						func_99();
					}
				}
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_226, 12))
	{
		if (func_106())
		{
			unk_0x5687AEB601657A7E(0);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 12);
		}
	}
	else if (!func_106())
	{
		unk_0x5687AEB601657A7E(1);
		unk_0x29DB79DD4D939B38(&iLocal_226, 12);
	}
	if (func_133(25f))
	{
		if (!func_103())
		{
			func_98(1);
		}
	}
	else if (func_103())
	{
		func_98(0);
	}
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_1623, 21))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1623), 21);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2446992.f_1623, 21))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1623), 21);
	}
}

void func_99()
{
	int iVar0;
	
	if (Local_89.f_5.f_38[unk_0x1788E93557766241()] > -1)
	{
		iVar0 = func_11(Local_89.f_5.f_38[unk_0x1788E93557766241()]);
		func_100(iVar0, 1, func_101(unk_0xE7CD1A45CD3148E7("freemode", -1, 0)));
	}
}

void func_100(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 19;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 4, iParam2);
	}
}

int func_101(int iParam0)
{
	var uVar0;
	
	unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam0);
	return uVar0;
}

int func_102()
{
	return -1;
}

bool func_103()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_1623, 21);
}

int func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_5.f_38[unk_0x1788E93557766241()];
	iVar1 = func_11(iVar0);
	if (unk_0x889D01384B54BCE3(Global_2414156.f_65, iVar1))
	{
		return 1;
	}
	if (iVar0 > -1)
	{
		if (func_12(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1788E93557766241();
	iVar0 = Local_89.f_5.f_5[iVar1];
	if (!unk_0x889D01384B54BCE3(uParam0->f_1, 1) && !unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 8))
	{
		if (iVar0 > -1)
		{
			if (unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 6))
			{
				unk_0x29DB79DD4D939B38(&(Global_1583725[iVar1 /*334*/].f_128), 6);
			}
			if (!func_135(iVar0, 1))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 6))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar1 /*334*/].f_128), 6);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1583725[iVar1 /*334*/].f_128, 6))
		{
			unk_0x29DB79DD4D939B38(&(Global_1583725[iVar1 /*334*/].f_128), 6);
		}
		if (iVar0 > -1)
		{
			if (func_135(iVar0, 1))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 1);
				unk_0x29DB79DD4D939B38(&(uParam0->f_1), 0);
				unk_0x29DB79DD4D939B38(&(Global_1583725[iVar1 /*334*/].f_128), 6);
			}
		}
	}
}

int func_106()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_87(Local_89.f_5.f_38[unk_0x1788E93557766241()]) };
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (!func_86(Var1, 0f, 0f, 0f, 0))
		{
			iVar0 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
			if (iVar0 != 0)
			{
				if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Var1, 1) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_107(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_20(&uParam1))
	{
		iVar0 = (iParam0 - unk_0xF001CC441E445DFD(unk_0x519586565311459B(), uParam1));
		if (iVar0 >= 0)
		{
			func_108(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_110(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_109(7, iVar0);
		Global_1328903.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_109(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_110(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x889D01384B54BCE3(iLocal_226, 14))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_226, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = unk_0x42C0B50857BF923B(iVar0);
				if (func_283(iVar1, 1, 1))
				{
					if (iVar1 != unk_0x1788E93557766241())
					{
						if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
						{
							if (func_118(iVar1))
							{
								unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 15);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (func_112(0, 1, 1, 1))
		{
			func_140("FM_IHELP_BLP", -1);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 14);
		}
	}
}

int func_112(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (!unk_0x83B393DE31BAC8F0())
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_275(unk_0x1788E93557766241(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_116(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (func_92())
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (Global_1573536)
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (func_113())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (Global_2453882)
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

bool func_114()
{
	return Global_2428577.f_565;
}

bool func_115()
{
	return Global_2428577.f_715;
}

int func_116(int iParam0)
{
	if (Global_2414327[iParam0 /*255*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_117()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

bool func_118(int iParam0)
{
	return unk_0x5660C8AFDD9C1721(Global_2410646[iParam0]);
}

int func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (unk_0x38FA37FE3518BA38(iVar0))
		{
			if (func_283(iVar0, 0, 1))
			{
				unk_0xA6BD0CAA6E857381(unk_0xA16EC202D9D35357(), iVar0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_120(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 7))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 7);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 7))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 7);
	}
}

int func_121(char* sParam0)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return 0;
	}
	return func_122(sParam0);
}

bool func_122(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_123(sParam0);
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
}

bool func_123(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(uParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

void func_124(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_125(sParam0, unk_0xF3E5891C26514A74(iParam1), bParam3);
}

void func_125(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (unk_0x06771AF7795B3ECF(sParam1))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam1) > 63)
	{
		return;
	}
	if (func_129(sParam0, sParam1))
	{
		return;
	}
	func_26();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_128();
	func_127(bParam2);
	func_126();
}

void func_126()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 1);
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_1312577.f_39), 0);
}

void func_128()
{
	Global_1312577.f_8 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 86400000);
	Global_1312577.f_9 = unk_0x519586565311459B();
}

bool func_129(char* sParam0, char* sParam1)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam1))
	{
		return 0;
	}
	if (!unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam1) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

struct<13> func_130(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

int func_131()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = unk_0x1788E93557766241();
	iVar1 = Local_89.f_5.f_5[iVar0];
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			iVar2 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (iVar1 > -1 && func_135(iVar1, 1))
			{
				iVar3 = iVar1;
				if (unk_0x38FA37FE3518BA38(iVar3))
				{
					if (func_283(iVar3, 0, 1))
					{
						uVar4 = unk_0xFF34D923BFB5E9FB(iVar3);
						if (!unk_0x2DE0B96E966FD817(uVar4))
						{
							if (unk_0x74AE4BA75DB7653F(uVar4))
							{
								if (unk_0x6ADAC08D70C79DE5(uVar4, 0) == iVar2)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_132(float fParam0, float fParam1)
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x5AF66EDEBFA76B9B(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) > fParam0)
			{
				if (func_133(fParam1))
				{
					if (!unk_0x889D01384B54BCE3(iLocal_226, 18))
					{
						unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = unk_0x1788E93557766241();
	if (iVar0 > -1)
	{
		Var1 = { func_87(Local_89.f_5.f_38[iVar0]) };
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var4 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xB7A628320EFF8E47(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134(char* sParam0, bool bParam1)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (func_122(sParam0))
	{
		return;
	}
	func_26();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_128();
	func_127(bParam1);
	func_126();
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_283(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 4))
		{
			return 0;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 8))
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 5))
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 12))
	{
		return 0;
	}
	return 1;
}

void func_136()
{
	if (!unk_0x889D01384B54BCE3(iLocal_226, 16))
	{
		if (func_112(0, 1, 1, 1))
		{
			func_140("FM_IHELP_INV", 10000);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 16);
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_226, 6))
	{
		if (unk_0x889D01384B54BCE3(iLocal_226, 13))
		{
			if (!func_20(&uLocal_224))
			{
				func_17(&uLocal_224, 0, 0);
			}
			else if (func_19(&uLocal_224, 15000, 0))
			{
				if (func_112(0, 1, 1, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 6);
				}
			}
		}
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_139(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 20;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 4, iParam2);
	}
}

void func_140(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_141(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_20(&(uParam0->f_14)))
			{
				func_17(&(uParam0->f_14), 0, 0);
			}
			else if (func_19(&(uParam0->f_14), 7000, 0))
			{
				if (func_156())
				{
					if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
					{
						if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
						{
							unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
						}
						if (!func_155(0))
						{
							func_148(19, 30, "", 0);
							func_140("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
					{
						func_134("FM_IHELP_LCP", 0);
						unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
						if (func_147("FM_IHELP_INV2") || func_147("FM_IHELP_INV"))
						{
							unk_0xFD1E0AEC770DAF2E(1);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_142(19, 30))
			{
				unk_0xFD1E0AEC770DAF2E(1);
				uParam0->f_3++;
			}
			else if (func_156())
			{
				if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
				{
					if (func_121("FM_IHELP_LCP"))
					{
						func_25();
					}
					if ((!func_20(&uLocal_393) || func_19(&uLocal_393, 20000, 0)) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
					{
						if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
						{
							unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
						}
						if (!unk_0x889D01384B54BCE3(iLocal_226, 16))
						{
							if (!func_147("FM_IHELP_INV"))
							{
								if (!func_147("FM_IHELP_QNV"))
								{
									if (func_90())
									{
										func_140("FM_IHELP_INV", 10000);
										unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 16);
									}
								}
							}
						}
						else if (!func_147("FM_IHELP_INV"))
						{
							if (!func_147("FM_IHELP_INV2"))
							{
								if (!unk_0x11A809BBE3889742())
								{
									if (func_90())
									{
										func_140("FM_IHELP_INV2", -1);
										func_18(&uLocal_393);
										func_17(&uLocal_393, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 16))
				{
					func_134("FM_IHELP_LCP", 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 16);
					if ((func_147("FM_IHELP_INV2") || func_147("FM_IHELP_INV")) || func_147("FM_IHELP_QNV"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
				}
			}
			else if ((func_147("FM_IHELP_INV2") || func_147("FM_IHELP_INV")) || func_147("FM_IHELP_QNV"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_146(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394032[iVar0 /*43*/].f_7)
	{
		return 0;
	}
	if (!Global_2394032[iVar0 /*43*/].f_1)
	{
		return 0;
	}
	func_143(iVar0);
	Global_2394871 = unk_0x09560C7DE2A384BD() + 1500;
	return 1;
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1336142)
	{
		return;
	}
	if (Global_2394032[iParam0 /*43*/].f_25 != -1)
	{
		unk_0x465FBA277E9176E4(Global_2394032[iParam0 /*43*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1336142)
	{
		Global_2394032[iVar0 /*43*/] = { Global_2394032[iVar1 /*43*/] };
		Global_2394032[iVar0 /*43*/] = { Global_2394032[iVar1 /*43*/] };
		iVar0++;
		iVar1++;
	}
	func_145(iVar0);
	Global_1336142 = (Global_1336142 - 1);
	if (Global_1336113)
	{
		if (Global_1336111 > 0)
		{
			func_144();
		}
	}
}

void func_144()
{
	Global_1336113 = 0;
}

void func_145(int iParam0)
{
	Global_2394032[iParam0 /*43*/] = 0;
	Global_2394032[iParam0 /*43*/].f_1 = 0;
	Global_2394032[iParam0 /*43*/].f_2 = 0;
	Global_2394032[iParam0 /*43*/].f_3 = 0;
	Global_2394032[iParam0 /*43*/].f_4 = func_102();
	Global_2394032[iParam0 /*43*/].f_5 = 145;
	Global_2394032[iParam0 /*43*/].f_6 = 1;
	Global_2394032[iParam0 /*43*/].f_7 = -1;
	Global_2394032[iParam0 /*43*/].f_8 = -1;
	StringCopy(&(Global_2394032[iParam0 /*43*/].f_9), "", 64);
	Global_2394032[iParam0 /*43*/].f_25 = -1;
	StringCopy(&(Global_2394032[iParam0 /*43*/].f_26), "", 32);
	Global_2394032[iParam0 /*43*/].f_34 = -1;
	Global_2394032[iParam0 /*43*/].f_35 = -1;
	Global_2394032[iParam0 /*43*/].f_36 = 0;
	Global_2394032[iParam0 /*43*/].f_38 = 0;
	Global_2394032[iParam0 /*43*/].f_39 = -1;
	Global_2394032[iParam0 /*43*/].f_40 = 0;
	Global_2394032[iParam0 /*43*/].f_41 = 0;
	Global_2394032[iParam0 /*43*/].f_42 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		Global_2394032[iParam0 /*43*/].f_37 = unk_0x519586565311459B();
	}
}

int func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336142)
	{
		if (!Global_2394032[iVar0 /*43*/].f_6)
		{
			if (Global_2394032[iVar0 /*43*/].f_5 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_147(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_148(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_146(iParam0);
	if (iVar0 != -1)
	{
		func_143(iVar0);
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_149(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1);
}

void func_149(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar19;
	
	uVar0 = func_102();
	iVar1 = 145;
	if (bParam2)
	{
		uVar0 = unk_0x42C0B50857BF923B(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_154())
		{
			return;
		}
	}
	iVar2 = Global_1336142;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394032[iVar2 /*43*/] = { Global_2394032[iVar3 /*43*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1336142++;
	if (Global_1336142 > 12)
	{
		Global_1336142 = 12;
	}
	iVar4 = 0;
	Global_2394032[iVar4 /*43*/] = 0;
	Global_2394032[iVar4 /*43*/].f_1 = 0;
	Global_2394032[iVar4 /*43*/].f_2 = 0;
	Global_2394032[iVar4 /*43*/].f_3 = 0;
	Global_2394032[iVar4 /*43*/].f_4 = uVar0;
	Global_2394032[iVar4 /*43*/].f_5 = iVar1;
	Global_2394032[iVar4 /*43*/].f_6 = bParam2;
	Global_2394032[iVar4 /*43*/].f_7 = iParam0;
	Global_2394032[iVar4 /*43*/].f_8 = -1;
	StringCopy(&(Global_2394032[iVar4 /*43*/].f_9), sParam3, 64);
	Global_2394032[iVar4 /*43*/].f_25 = -1;
	StringCopy(&(Global_2394032[iVar4 /*43*/].f_26), sParam4, 32);
	Global_2394032[iVar4 /*43*/].f_34 = iParam6;
	Global_2394032[iVar4 /*43*/].f_35 = iParam7;
	Global_2394032[iVar4 /*43*/].f_36 = 0;
	Global_2394032[iVar4 /*43*/].f_37 = unk_0x519586565311459B();
	Global_2394032[iVar4 /*43*/].f_38 = uParam5;
	Global_2394032[iVar4 /*43*/].f_39 = Global_2394870;
	if (iParam0 == 123)
	{
		Global_2394032[iVar4 /*43*/].f_8 = func_151();
	}
	Global_2394870++;
	func_150();
	Global_2394032[iVar4 /*43*/].f_40 = 0;
	Global_2394032[iVar4 /*43*/].f_41 = 0;
	Global_2394032[iVar4 /*43*/].f_42 = 0;
	if (unk_0x9F979F481F18EB48())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_130(uVar0) };
				iVar19 = unk_0xBA4DB9741BAE662F(&Var6);
				if (iVar19 != -1)
				{
					Global_2394032[iVar4 /*43*/].f_40 = iVar19;
					Global_2394032[iVar4 /*43*/].f_41 = 1;
					Global_2394032[iVar4 /*43*/].f_42 = 0;
				}
			}
		}
	}
}

void func_150()
{
	Global_1336115 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 30000);
}

int func_151()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_153() };
	if (unk_0x06771AF7795B3ECF(&cVar0) || unk_0x9BA82E09A986BA4B(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_152(13, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_152(14, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_152(15, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_152(16, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_152(17, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_152(18, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_152(19, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x06771AF7795B3ECF(&cVar0) && !unk_0x9BA82E09A986BA4B(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_138(2639, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!unk_0x889D01384B54BCE3(uVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_152(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2472744[iParam0 /*5*/][func_51(iParam1)];
	return unk_0x105C43C972E0168C(uVar0, -1);
}

struct<6> func_153()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x06771AF7795B3ECF(&(Global_1696054.f_10)))
	{
		iVar7 = func_138(2640, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1118)
			{
				if ((Global_794538.f_4[iVar6 /*86*/].f_65 == 0 && Global_794538.f_4[iVar6 /*86*/].f_68 == 1) && unk_0x889D01384B54BCE3(Global_794538.f_4[iVar6 /*86*/].f_76, 13))
				{
					if (Global_794538.f_96153[iVar6 /*12*/].f_1 == iVar7)
					{
						Var0 = { Global_794538.f_109580[Global_794538.f_96153[iVar6 /*12*/].f_9 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (unk_0x06771AF7795B3ECF(&Var0))
			{
			}
		}
		Global_1696054.f_10 = { Var0 };
		return Var0;
	}
	return Global_1696054.f_10;
}

bool func_154()
{
	return Global_1315849 == 10;
}

int func_155(int iParam0)
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

int func_156()
{
	if (func_157() == 0)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	return Global_1312466.f_18;
}

bool func_158()
{
	var uVar0;
	
	if (!unk_0x889D01384B54BCE3(iLocal_226, 2))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_226, 10))
		{
			if (func_266(1103626240))
			{
				unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 9);
			}
			unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 10);
		}
		else if (!unk_0x889D01384B54BCE3(iLocal_226, 9))
		{
			if (!unk_0x889D01384B54BCE3(iLocal_226, 3))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_226, 5) || (unk_0x889D01384B54BCE3(iLocal_226, 5) && func_19(&uLocal_222, 60000, 0)))
				{
					if (func_262())
					{
						if (!unk_0x889D01384B54BCE3(iLocal_226, 4))
						{
							func_260(19, 3, 0);
							func_259(&uLocal_227, 1, 0, "Lamar", 0, 1);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 4);
						}
						else
						{
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 4);
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 7);
							if (func_255(&uLocal_227, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 3);
								unk_0x29DB79DD4D939B38(&iLocal_226, 5);
							}
						}
					}
				}
			}
			else if (!func_268())
			{
				if (func_254())
				{
					unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 2);
					func_253(0);
				}
				else
				{
					func_18(&uLocal_222);
					func_17(&uLocal_222, 0, 0);
					unk_0x29DB79DD4D939B38(&iLocal_226, 3);
					unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 5);
				}
			}
		}
		else if (func_262())
		{
			if (func_159(19, "CELL_HOLD", 0, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&iLocal_226, 2);
				func_253(0);
			}
		}
	}
	return unk_0x889D01384B54BCE3(iLocal_226, 2);
}

bool func_159(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_160(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_160(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_161(&uVar0, iParam0, func_252(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x06771AF7795B3ECF(sParam2))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam3))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
	iVar1 = func_251(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		iVar2 = unk_0xB793F1A0B6CC4AE1(sParam7);
	}
	if (func_250(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_245(uParam6))
	{
		return 0;
	}
	if (func_242(iVar0, iVar1, iVar2))
	{
		if (func_241())
		{
			return 0;
		}
		func_240();
		return func_168(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_167(iParam4))
	{
		return 0;
	}
	func_162(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_162(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1321250.f_40.f_1 = iParam0;
	Global_1321250.f_40.f_2 = iParam1;
	Global_1321250.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321250.f_40.f_4), sParam3, 16);
	Global_1321250.f_40.f_8 = iParam4;
	Global_1321250.f_40.f_9 = iParam5;
	Global_1321250.f_40.f_14 = uParam6;
	func_163(iParam4);
	func_240();
	Global_1321250.f_40.f_13 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 7000);
}

void func_163(int iParam0)
{
	if (func_166(iParam0))
	{
		func_165();
		return;
	}
	func_164();
}

void func_164()
{
	Global_1321250.f_40.f_10 = 0;
}

void func_165()
{
	Global_1321250.f_40.f_10 = 1;
}

int func_166(int iParam0)
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

bool func_167(int iParam0)
{
	return iParam0 > Global_1321250.f_40.f_8;
}

int func_168(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_239();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_236(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_233(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_236(uParam0, sParam3, sParam4);
		}
		return func_217(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_216(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_206(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_205(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_169(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_169(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_204();
	bVar0 = true;
	if (func_171(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_170(120000);
		return 1;
	}
	return 0;
}

void func_170(int iParam0)
{
	Global_1321250.f_40.f_11 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), iParam0);
	Global_1321250.f_40.f_12 = 1;
}

int func_171(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_102();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_198(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
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
	sVar4 = func_197(sParam5, bParam6, &iVar3);
	uVar5 = func_195(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
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
		if (unk_0x889D01384B54BCE3(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
	{
		bVar12 = func_194(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_175(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 0))
	{
		func_174();
	}
	func_204();
	func_173();
	func_172();
	return 1;
}

void func_172()
{
	Global_1321250.f_57 = 0;
	Global_1321250.f_57.f_1 = 0;
}

void func_173()
{
	Global_1321250.f_40 = 3;
}

void func_174()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 8);
}

int func_175(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_176(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
		}
		return 1;
	}
	return 0;
}

int func_176(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
	{
	}
	func_188();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_2542611 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_187() == 0)
	{
		func_185();
		return 0;
	}
	func_184(Global_2542610);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/]), sParam1, 64);
	Global_2541361[Global_2542610 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2541361[Global_2542610 /*104*/].f_24 = iParam2;
	}
	Global_2541361[Global_2542610 /*104*/].f_25 = iParam7;
	Global_2541361[Global_2542610 /*104*/].f_26 = uParam8;
	Global_2541361[Global_2542610 /*104*/].f_29 = uParam9;
	Global_2541361[Global_2542610 /*104*/].f_30 = uParam12;
	Global_2541361[Global_2542610 /*104*/].f_31 = uParam11;
	Global_2541361[Global_2542610 /*104*/].f_28 = 0;
	Global_2541361[Global_2542610 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_33), sParam4, 64);
	Global_2541361[Global_2542610 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_50), sParam5, 64);
	Global_2541361[Global_2542610 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_83), sParam15, 64);
	func_188();
	switch (iParam16)
	{
		case 3:
			Global_2541361[Global_2542610 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2541361[Global_2542610 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2541361[Global_2542610 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2541361[Global_2542610 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14394)
		{
			case 0:
				func_183(0);
				break;
			
			case 1:
				func_183(1);
				break;
			
			case 2:
				func_183(2);
				break;
			
			case 3:
				func_183(3);
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
				Global_2542611 = 1;
				break;
			
			case 0:
				Global_2542611 = 1;
				break;
			
			case 2:
				Global_2542611 = 1;
				break;
			
			case 1:
				Global_2542611 = 1;
				break;
			}
	}
	Global_16762[Global_2542610] = 0;
	if (bParam10)
	{
		func_188();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_182())
			{
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_181(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_177(1);
			func_181(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_177(int iParam0)
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_180(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_179(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
							{
								if (iVar1 == 14)
								{
									func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_179(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_179(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_179(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_179(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_178(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_178(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_179(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		func_179(sParam8);
	}
	if (!unk_0x06771AF7795B3ECF(sParam9))
	{
		func_179(sParam9);
	}
	if (!unk_0x06771AF7795B3ECF(sParam10))
	{
		func_179(sParam10);
	}
	if (!unk_0x06771AF7795B3ECF(sParam11))
	{
		func_179(sParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_179(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

bool func_180(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_181(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

bool func_182()
{
	return Global_1315891;
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97439.f_12305[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_184(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_2541361[iParam0 /*104*/].f_18 = uVar0;
	Global_2541361[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2541361[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2541361[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2541361[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2541361[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_186(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
		{
			Global_2542610 = iVar2;
		}
		iVar2++;
	}
	Global_2541361[Global_2542610 /*104*/].f_24 = 1;
}

int func_186(struct<6> Param0, struct<6> Param6)
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

int func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2541361[iVar2 /*104*/].f_24 == 0)
		{
			Global_2542610 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2541361[iVar2 /*104*/].f_24 == 0 || Global_2541361[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_186(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
			{
				Global_2542610 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2542610 == 11)
	{
		return 0;
	}
	Global_2541361[Global_2542610 /*104*/].f_99[0] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[1] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[2] = 0;
	return 1;
}

void func_188()
{
	if (func_180(14))
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
		Global_14394 = func_189();
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

var func_189()
{
	func_190();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_190()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_193(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_192(unk_0xA16EC202D9D35357());
			if (func_191(iVar0) && (!func_180(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_191(Global_97439.f_1729.f_539.f_3213))
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

bool func_191(int iParam0)
{
	return iParam0 < 3;
}

int func_192(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_193(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_193(int iParam0)
{
	if (func_191(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_194(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_176(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
		}
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_196(2, iParam1);
	return iParam0;
}

void func_196(int iParam0, var uParam1)
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

char* func_197(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return sLocal_17;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_196(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x69C910B9EE514763(sParam0);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = func_201(iParam0);
	if (iVar0 == -1)
	{
		func_199(iParam0, 1);
		return 0;
	}
	Global_1337286[iVar0 /*5*/].f_4 = 1;
	return Global_1337286[iVar0 /*5*/].f_2;
}

void func_199(int iParam0, bool bParam1)
{
	if (!func_283(iParam0, 0, 1))
	{
		return;
	}
	if (func_201(iParam0) != -1)
	{
		return;
	}
	if (Global_1337449)
	{
		if (iParam0 == Global_1337449.f_1)
		{
			return;
		}
	}
	if (func_200(iParam0))
	{
		return;
	}
	if (Global_1337487 >= 32)
	{
		return;
	}
	Global_1337454[Global_1337487] = iParam0;
	Global_1337487++;
	if (bParam1)
	{
	}
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337487)
	{
		if (Global_1337454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (!func_283(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1337447 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337447)
	{
		if (Global_1337286[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA18877A025EABCF1(Global_1337286[iVar0 /*5*/].f_2) && unk_0x1285CB0DD714CE61(Global_1337286[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_202(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_202(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1337447)
	{
		return;
	}
	if (unk_0xA18877A025EABCF1(Global_1337286[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1337286[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE60D88CF3EF91AA6(Global_1337286[iParam0 /*5*/].f_2), 64);
			unk_0x5F0F8D01B163177A(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x8138315499FE0236(Global_1337286[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1337447)
	{
		Global_1337286[iVar32 /*5*/] = { Global_1337286[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_203(&(Global_1337286[iVar32 /*5*/]));
	Global_1337447 = (Global_1337447 - 1);
}

void func_203(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		uParam0->f_3 = unk_0x519586565311459B();
	}
}

void func_204()
{
	Global_1321250.f_40.f_9 = 4;
}

int func_205(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_204();
	bVar0 = false;
	return func_171(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_206(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_207(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_207(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_102();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_198(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16754 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_197(sParam5, bParam6, &iVar3);
	uVar5 = func_195(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
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
		if (unk_0x889D01384B54BCE3(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
	{
		bVar12 = func_215(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_209(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 0))
	{
		func_174();
	}
	func_208();
	func_173();
	func_172();
	return 1;
}

void func_208()
{
	Global_1321250.f_40.f_9 = 3;
}

int func_209(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_210(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_210(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
	{
	}
	func_188();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_97439.f_12305[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_214() == 0)
	{
		func_212();
		return 0;
	}
	func_211(Global_16760);
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/]), sParam1, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_25 = iParam7;
	Global_97439.f_12395[Global_16760 /*104*/].f_26 = uParam8;
	Global_97439.f_12395[Global_16760 /*104*/].f_29 = uParam9;
	Global_97439.f_12395[Global_16760 /*104*/].f_30 = uParam12;
	Global_97439.f_12395[Global_16760 /*104*/].f_31 = uParam11;
	Global_97439.f_12395[Global_16760 /*104*/].f_28 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x889D01384B54BCE3(Global_2264, 10))
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
		func_183(0);
		func_183(2);
		func_183(1);
	}
	else
	{
		func_188();
		switch (iParam16)
		{
			case 3:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_183(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_183(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_183(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_183(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 10))
		{
			Global_97439.f_12305[0 /*20*/].f_17 = 1;
			Global_97439.f_12305[1 /*20*/].f_17 = 1;
			Global_97439.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97439.f_12305[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97439.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97439.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97439.f_12305[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_188();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_182())
			{
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_181(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_177(1);
			func_181(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_211(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_97439.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_212()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
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
	Global_16760 = 34;
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_213(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_24 = 1;
}

int func_213(struct<6> Param0, struct<6> Param6)
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

int func_214()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
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
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97439.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_213(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 0;
	return 1;
}

int func_215(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
	iVar0 = 3;
	if (func_210(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_216(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	func_208();
	bVar0 = true;
	if (func_207(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_170(120000);
		return 1;
	}
	return 0;
}

int func_217(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x889D01384B54BCE3(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x889D01384B54BCE3(iParam4, 4))
	{
		bVar0 = func_232(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_223(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x889D01384B54BCE3(iParam4, 3))
		{
			func_222(1);
		}
		if (unk_0x889D01384B54BCE3(iParam4, 5))
		{
			func_221(1);
		}
		func_220();
		func_173();
		func_219();
		func_218();
		return 1;
	}
	return 0;
}

void func_218()
{
	Global_2453438 = 0;
}

void func_219()
{
	Global_1321250.f_57 = 1;
	Global_1321250.f_57.f_1 = 0;
}

void func_220()
{
	Global_1321250.f_40.f_9 = 1;
}

void func_221(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2266, 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2266, 0);
	}
}

void func_222(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 20);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 20);
	}
}

int func_223(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_231(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_224(sParam3, iParam4, bParam7);
}

int func_224(char* sParam0, int iParam1, bool bParam2)
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
					func_230();
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
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_229();
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
				func_188();
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
				if (func_228())
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
			if (func_227())
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
			func_226();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_225();
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
		func_230();
	}
	return 0;
}

void func_225()
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

void func_226()
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

int func_227()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
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

void func_229()
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

void func_230()
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

void func_231(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_231(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_224(sParam3, iParam4, bParam7);
}

int func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (func_235(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_234();
		func_220();
		func_173();
		func_219();
		func_218();
		return 1;
	}
	return 0;
}

void func_234()
{
	Global_16711 = 0;
}

bool func_235(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_231(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 1;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 1;
	Global_15747 = 0;
	StringCopy(&Global_15841, sParam5, 24);
	Global_2621441 = 0;
	return func_224(sParam3, iParam4, bParam8);
}

int func_236(var uParam0, char* sParam1, char* sParam2)
{
	if (func_238(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_237();
		func_173();
		func_219();
		return 1;
	}
	return 0;
}

void func_237()
{
	Global_1321250.f_40.f_9 = 2;
}

bool func_238(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_231(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_224(sParam2, iParam3, 0);
}

void func_239()
{
	Global_1321250.f_55 = Global_1321250.f_40.f_1;
	Global_1321250.f_55.f_1 = Global_1321250.f_40.f_10;
}

void func_240()
{
	Global_1321250.f_40 = 1;
}

bool func_241()
{
	return Global_1321250.f_40 == 1;
}

int func_242(int iParam0, int iParam1, int iParam2)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	if (Global_1321250.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321250.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_243(int iParam0)
{
	if (!func_244())
	{
		return 0;
	}
	if (!Global_1321250.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_244()
{
	if (Global_1321250.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_245(int iParam0)
{
	if (func_249())
	{
		return 0;
	}
	if (func_248())
	{
		return 0;
	}
	if (func_155(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1690013 || func_247())
	{
		return 0;
	}
	if (!unk_0x889D01384B54BCE3(uParam0, 6))
	{
		if (func_246())
		{
			return 0;
		}
	}
	return 1;
}

bool func_246()
{
	return unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1336115);
}

int func_247()
{
	if (Global_2533200.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_248()
{
	return Global_1321250.f_40 == 3;
}

bool func_249()
{
	return func_227();
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	if (!func_248())
	{
		return 0;
	}
	return func_242(iParam0, iParam1, iParam2);
}

int func_251(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xB793F1A0B6CC4AE1(&cVar0);
}

char* func_252()
{
	return "TXTMSG";
}

void func_253(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 28);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 28);
	}
}

bool func_254()
{
	return Global_1321250.f_57.f_1;
}

int func_255(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_161(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_256()
{
	return Global_2451624.f_1;
}

int func_257()
{
	if (Global_1321438.f_2)
	{
		return 1;
	}
	return func_258();
}

bool func_258()
{
	return func_249();
}

void func_259(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
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

void func_260(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_188();
		if (iParam1 == 4)
		{
			Global_97439.f_29795[iParam0 /*29*/].f_12[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[2] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68325)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_261();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_261();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
				func_261();
			}
		}
	}
}

void func_261()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x69C910B9EE514763(&(Global_97439.f_29795[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0xA6CE1BB0BF7AE715("");
		StringCopy(&cVar16, unk_0x69C910B9EE514763(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x69C910B9EE514763("CELL_253");
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CELL_255");
		unk_0x4498E0CBD76B2D72(&(Global_2874[1 /*6*/]));
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 0);
}

int func_262()
{
	if (func_94())
	{
		return 0;
	}
	if (unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
	{
		return 0;
	}
	if (!unk_0x83B393DE31BAC8F0())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_275(unk_0x1788E93557766241(), 1))
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_92())
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (func_246())
	{
		return 0;
	}
	if (func_264())
	{
		return 0;
	}
	if (func_263(unk_0x1788E93557766241(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_263(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

bool func_264()
{
	return Global_2429337.f_2841.f_41;
}

int func_265()
{
	if (Global_14394.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_266(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		Var2 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x42C0B50857BF923B(iVar0);
			if (func_283(iVar1, 1, 1))
			{
				if (iVar1 != unk_0x1788E93557766241())
				{
					if (func_267(iVar1))
					{
						if (unk_0xB7A628320EFF8E47(Var2, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iVar1), 1)) < (fParam0 * fParam0))
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_267(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 28);
}

bool func_268()
{
	return func_248();
}

void func_269()
{
	struct<2> Var0;
	
	Var0.f_0 = 214;
	Var0.f_1 = unk_0x1788E93557766241();
	unk_0xD311A006D41D0704(1, &Var0, 2, func_4(1, 1));
}

void func_270(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 3);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 3))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 3);
	}
}

void func_271(var uParam0)
{
	if (func_121("FM_HTUT_GOP"))
	{
		func_272("FM_HTUT_GOP");
	}
	if (func_121("FM_HTUT_GO"))
	{
		func_272("FM_HTUT_GO");
	}
	if (func_121("FM_HTUT_WAT"))
	{
		func_272("FM_HTUT_WAT");
	}
	if (func_121("FM_HTUT_HLD"))
	{
		func_272("FM_HTUT_HLD");
	}
	if (func_121("FM_HTUT_HLS"))
	{
		func_272("FM_HTUT_HLS");
	}
	if (unk_0x5660C8AFDD9C1721(uParam0->f_4))
	{
		unk_0xB6FB9702660D84F6(&(uParam0->f_4));
	}
}

void func_272(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_31())
	{
		if (Global_1312577 == 11)
		{
			if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
		}
		else
		{
			if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_26();
}

int func_273()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_174;
}

bool func_274()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

int func_275(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_276(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_276(int iParam0)
{
	return func_277(iParam0);
}

bool func_277(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

int func_278()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(121, -1);
}

int func_279()
{
	return Local_89.f_0;
}

int func_280(int iParam0)
{
	return iLocal_169[iParam0];
}

void func_281()
{
	unk_0xBFB6307D3CFD9B6C(0);
	func_25();
	func_24(8, 0);
	unk_0x5687AEB601657A7E(1);
	if (func_267(unk_0x1788E93557766241()))
	{
		func_253(0);
	}
	func_282();
}

void func_282()
{
	unk_0x82706E6C897B0FA1();
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_284()
{
	bool bVar0;
	
	func_290(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_289())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_287(157))
	{
		if (!func_286())
		{
			return 1;
		}
	}
	if (func_287(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_285() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_285()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_285()
{
	switch (func_40())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_286()
{
	return Global_2428577.f_572;
}

int func_287(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_288()
{
	return Global_2435556;
}

bool func_289()
{
	return Global_2428577.f_567;
}

void func_290(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_291(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_291(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_283(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(uVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(uVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_292(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_292(var uParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(uParam0))
		{
			if (unk_0xFD9706CAB35EA810(uParam0))
			{
				unk_0x7B9576B4E099FB1F(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(uParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_293()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_294(struct<20> Param0)
{
	func_298(func_299(Param0.f_0), Param0);
	func_296(0, -1, 0);
	unk_0x241F80BF72379478(&Local_89, 79);
	unk_0x51FC2B81A21C009A(&iLocal_169, 33);
	unk_0xFF9F94FD851C212A(0);
	if (!func_295())
	{
		func_281();
	}
	unk_0x29DB79DD4D939B38(&Global_1681282, 1);
	unk_0x29DB79DD4D939B38(&Global_1681282, 15);
	unk_0x29DB79DD4D939B38(&Global_1681282, 14);
	func_24(8, 1);
	if (!func_267(unk_0x1788E93557766241()))
	{
		func_253(1);
	}
}

int func_295()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_289())
		{
			return 0;
		}
		if (func_287(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_296(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_282();
			}
			else
			{
				return 0;
			}
		}
		if (!func_297())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_282();
					}
					else
					{
						return 0;
					}
				}
				if (func_289())
				{
					if (!bParam2)
					{
						func_282();
					}
					else
					{
						return 0;
					}
				}
				if (func_287(155))
				{
					if (!bParam2)
					{
						func_282();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_282();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_282();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_282();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_297()
{
	return Global_1315866;
}

void func_298(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_282();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}


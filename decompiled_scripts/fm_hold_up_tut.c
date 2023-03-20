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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_55 = 0;
	float fLocal_56 = 0f;
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
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	struct<6> Local_90 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 32;
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
	var uLocal_132 = 0;
	var uLocal_133 = 32;
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
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 16;
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
	var uLocal_392 = 0;
	int iLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_56 = ((0.05f + 0.275f) - 0.01f);
	iLocal_89 = 600000;
	iLocal_393 = -1;
	func_298(ScriptParam_0);
	while (true)
	{
		func_297();
		if (func_288() || !func_287(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			func_285();
		}
		switch (func_284(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (func_283() == 2)
				{
					iLocal_170[unk_0x490BA5FDD7EE47A9()] = 2;
				}
				else if (func_283() == 6)
				{
					iLocal_170[unk_0x490BA5FDD7EE47A9()] = 5;
				}
				break;
			
			case 2:
				if (func_283() == 2)
				{
					if (!func_282())
					{
						if (func_34(&uLocal_203))
						{
						}
					}
					else
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 4))
						{
							func_33(1);
							func_32(0);
							func_25();
						}
						func_24(8, 0);
					}
				}
				else if (func_283() == 6)
				{
					iLocal_170[unk_0x490BA5FDD7EE47A9()] = 5;
				}
				break;
			
			case 5:
				func_23(&(Local_90.f_3));
				if (func_22(&(Local_90.f_3)))
				{
					iLocal_170[unk_0x490BA5FDD7EE47A9()] = 6;
				}
				break;
			
			case 3:
				iLocal_170[unk_0x490BA5FDD7EE47A9()] = 6;
			
			case 6:
				func_285();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_283())
			{
				case 0:
					Local_90.f_0 = 2;
					break;
				
				case 2:
					func_21();
					func_2();
					if (func_1())
					{
						Local_90.f_0 = 6;
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
	if (unk_0x7DA173D4FD42F36B(Local_90.f_1, 0))
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
	if (unk_0x587E5997B76F47FE())
	{
		switch (Local_90.f_5.f_2)
		{
			case 0:
				if (!unk_0x7DA173D4FD42F36B(Local_90.f_5.f_3, 1))
				{
					iVar0 = 0;
					while (iVar0 <= 31)
					{
						Local_90.f_5.f_5[iVar0] = -1;
						Local_90.f_5.f_38[iVar0] = -1;
						iVar0++;
					}
					unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 1);
				}
				if (Global_2464975.f_1632)
				{
					unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 0);
					Global_2464975.f_1632 = 0;
				}
				if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_3, 1))
				{
					if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_3, 0))
					{
						if (!func_20(&(Local_90.f_5)) || func_19(&(Local_90.f_5), 5000, 0))
						{
							if (Local_90.f_5.f_4 == 0)
							{
								Local_90.f_5.f_72 = 0;
								unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 2);
								unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 3);
							}
							iVar0 = Local_90.f_5.f_4;
							iVar1 = iVar0;
							if (unk_0xA27C9E8196C79D22(iVar1))
							{
								if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 0))
								{
									unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_73), iVar1);
									Local_90.f_5.f_72++;
									if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 6))
									{
										Local_90.f_5.f_5[iVar0] = -1;
									}
								}
							}
							Local_90.f_5.f_4++;
							if (Local_90.f_5.f_4 == 32)
							{
								func_18(&(Local_90.f_5));
								func_17(&(Local_90.f_5), 0, 0);
								if (Local_90.f_5.f_72 >= 1)
								{
									Local_90.f_5.f_2 = 1;
									unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 2);
								}
								Local_90.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_90.f_5.f_4 == 0)
				{
					unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 2);
				}
				iVar0 = Local_90.f_5.f_4;
				if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_73, iVar0))
				{
					if (func_287(iVar0, 1, 1))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 8))
						{
							if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 0))
							{
								if (Local_90.f_5.f_5[iVar0] == -1)
								{
									if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 6))
									{
										Local_90.f_5.f_5[iVar0] = -1;
									}
									iVar2 = func_16(iVar0, &(Local_90.f_5.f_73));
									if (iVar2 > -1)
									{
										Local_90.f_5.f_5[iVar0] = iVar2;
										Local_90.f_5.f_5[iVar2] = iVar0;
										unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 2);
									}
								}
								else
								{
									unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_90.f_5.f_4++;
				if (Local_90.f_5.f_4 == 32)
				{
					if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_3, 2))
					{
					}
					Local_90.f_5.f_4 = 0;
					Local_90.f_5.f_2 = 2;
					unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 3);
					func_15();
				}
				break;
			
			case 2:
				if (Local_90.f_5.f_4 == 0)
				{
					unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 3);
				}
				iVar0 = Local_90.f_5.f_4;
				if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_73, iVar0))
				{
					if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 0))
					{
						if (func_287(iVar0, 1, 1))
						{
							if (Local_90.f_5.f_38[iVar0] == -1)
							{
								iVar3 = Local_90.f_5.f_5[iVar0];
								if (iVar3 > -1)
								{
									if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 0))
									{
										if (Local_90.f_5.f_38[iVar0] == -1)
										{
											iVar2 = func_9(iVar0, &(Local_90.f_5.f_71));
											if (iVar2 > -1)
											{
												Local_90.f_5.f_38[iVar0] = iVar2;
												Local_90.f_5.f_38[iVar3] = iVar2;
												unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 3);
												func_8(iVar2);
											}
										}
										else if (Local_90.f_5.f_38[iVar0] == Local_90.f_5.f_38[iVar3] || Local_90.f_5.f_38[iVar3] == -1)
										{
											unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 3);
										}
										else if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 3))
										{
											Local_90.f_5.f_38[iVar0] = Local_90.f_5.f_38[iVar3];
										}
										else if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 3))
										{
											Local_90.f_5.f_38[iVar3] = Local_90.f_5.f_38[iVar0];
										}
									}
									else
									{
										Local_90.f_5.f_5[iVar0] = -1;
										Local_90.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									iVar2 = func_9(iVar0, &(Local_90.f_5.f_71));
									if (iVar2 > -1)
									{
										unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 3);
										Local_90.f_5.f_38[iVar0] = iVar2;
										func_8(iVar2);
									}
								}
							}
							else
							{
								unk_0xE27C8E42A97895CF(&(Local_90.f_5.f_3), 3);
							}
						}
					}
				}
				Local_90.f_5.f_4++;
				if (Local_90.f_5.f_4 == 32)
				{
					if (unk_0x7DA173D4FD42F36B(Local_90.f_5.f_3, 3))
					{
						func_3();
						unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 0);
						Local_90.f_5.f_2 = 0;
					}
					else
					{
						unk_0x99BCB15F954AF579(&(Local_90.f_5.f_3), 0);
						Local_90.f_5.f_2 = 0;
					}
					Local_90.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()
{
	struct<2> Var0;
	
	Var0.f_0 = 255;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	unk_0xCCAB9843EFA5C08A(1, &Var0, 2, func_4(1, 1));
}

int func_4(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_287(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_6(-1, 0) == 8;
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

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()
{
	return Global_1312747;
}

void func_8(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Local_90.f_2), iParam0);
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
	iVar3 = Local_90.f_5.f_5[iParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = iParam0;
	uVar11 = unk_0x44A9253132E1DDE0(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != iParam0)
		{
			if (Local_90.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				uVar13 = unk_0x44A9253132E1DDE0(iVar12);
				iVar1 = 0;
				while (iVar1 <= 19)
				{
					if (!bVar0)
					{
						if (unk_0x7DA173D4FD42F36B(*uParam1, iVar1))
						{
							if (!func_13(iVar1))
							{
								unk_0x99BCB15F954AF579(uParam1, iVar1);
							}
						}
						if (func_12(iVar1))
						{
							iVar14 = func_11(iVar1);
							if (iVar14 != -1)
							{
								if (Global_2418358.f_87[iVar14] == 0)
								{
									if (!unk_0x7DA173D4FD42F36B(*uParam1, iVar1))
									{
										if (!unk_0xCFC04A38F256EE06(uVar11))
										{
											if (!unk_0xCFC04A38F256EE06(uVar13))
											{
												Var7 = { func_10(iVar1) };
												fVar4 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(uVar11, 1), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(uVar13, 1), Var7);
													if (fVar5 > fVar6)
													{
														iVar2 = iVar1;
														bVar0 = true;
														unk_0xE27C8E42A97895CF(uParam1, iVar1);
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
				iVar2 = Local_90.f_5.f_38[iVar3];
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
						if (Global_2418358.f_87[iVar14] == 0)
						{
							if (!unk_0x7DA173D4FD42F36B(*uParam1, iVar1))
							{
								if (!unk_0xCFC04A38F256EE06(uVar11))
								{
									Var7 = { func_10(iVar1) };
									fVar4 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(uVar11, 1), Var7);
									if (fVar4 > fVar6)
									{
										iVar2 = iVar1;
										bVar0 = true;
										unk_0xE27C8E42A97895CF(uParam1, iVar1);
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
		if (unk_0x7DA173D4FD42F36B(Global_2418358.f_64, iVar0))
		{
			if (!unk_0x7DA173D4FD42F36B(Global_2418358.f_62, iVar0))
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
		if (Local_90.f_5.f_38[iVar1] == iParam0)
		{
			if (func_287(iVar2, 0, 1))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 4))
				{
					if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 3))
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
	return unk_0x7DA173D4FD42F36B(Local_90.f_2, iParam0);
}

void func_15()
{
	Local_90.f_2 = 0;
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
				if (unk_0x7DA173D4FD42F36B(*uParam1, iVar0))
				{
					if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 0))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 3))
						{
							if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
							{
								if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 8))
								{
									if (Local_90.f_5.f_5[iVar0] == -1)
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
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
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
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
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
	
	if (unk_0x587E5997B76F47FE())
	{
		if (iLocal_169 == 0)
		{
			unk_0x99BCB15F954AF579(&iLocal_227, 0);
			unk_0xE27C8E42A97895CF(&iLocal_227, 1);
		}
		iVar1 = iLocal_169;
		iVar2 = Local_90.f_5.f_5[iLocal_169];
		if (func_287(iVar1, 0, 1))
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1587816[iLocal_169 /*444*/].f_135, 4))
			{
				unk_0x99BCB15F954AF579(&iLocal_227, 1);
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iLocal_169 /*444*/].f_135, 0))
		{
			if (func_287(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_287(iVar0, 0, 1))
					{
						Local_90.f_5.f_5[iLocal_169] = -1;
					}
				}
			}
			else
			{
				if (Local_90.f_5.f_5[iLocal_169] != -1)
				{
					Local_90.f_5.f_5[iLocal_169] = -1;
				}
				if (Local_90.f_5.f_38[iLocal_169] != -1)
				{
					Local_90.f_5.f_38[iLocal_169] = -1;
				}
			}
		}
		else if (func_287(iVar1, 0, 1))
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iLocal_169 /*444*/].f_135, 12))
			{
				if (Local_90.f_5.f_5[iLocal_169] != -1)
				{
					Local_90.f_5.f_5[iLocal_169] = -1;
				}
				if (Local_90.f_5.f_38[iLocal_169] != -1)
				{
					Local_90.f_5.f_38[iLocal_169] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_287(iVar0, 0, 1))
					{
						Local_90.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_169++;
		if (iLocal_169 == 32)
		{
			if (unk_0x7DA173D4FD42F36B(iLocal_227, 1))
			{
				unk_0xE27C8E42A97895CF(&(Local_90.f_1), 0);
			}
			unk_0xE27C8E42A97895CF(&iLocal_227, 0);
			iLocal_169 = 0;
		}
	}
}

int func_22(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
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
		if (unk_0x587E5997B76F47FE())
		{
			func_17(uParam0, 0, 0);
		}
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206, iParam0))
		{
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206), iParam0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206, iParam0))
	{
		unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_206), iParam0);
	}
}

void func_25()
{
	if (!func_31())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
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
	
	bVar0 = unk_0x17CC0D5008835470();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x201D90648B2AE3CE();
		Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
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
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_29();
		unk_0x50E6AB5DBF4F6633();
	}
}

void func_29()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			unk_0xD92C45283BCDA624(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_55);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
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
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_29();
	return unk_0xAB0007E3E71F28E1();
}

int func_31()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 0))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 0);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 0))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 0);
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 4))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 4);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 4))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 4);
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
	
	if (Global_2464975.f_1632)
	{
		if (!unk_0x587E5997B76F47FE())
		{
			Global_2464975.f_1632 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		unk_0xFC01730D781E8C65(unk_0xE0BDAFA1A39552D6());
		if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 2))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if ((func_279(unk_0xE0BDAFA1A39552D6(), 1) || func_278()) || func_277() != 0)
				{
					func_275(uParam0);
					unk_0xE27C8E42A97895CF(&(uParam0->f_1), 2);
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 12);
					unk_0x99BCB15F954AF579(&iLocal_227, 11);
				}
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
			{
				if (!func_279(unk_0xE0BDAFA1A39552D6(), 1))
				{
					if (!func_278())
					{
						if (func_277() == 0)
						{
							unk_0x99BCB15F954AF579(&(uParam0->f_1), 2);
							unk_0x99BCB15F954AF579(&(uParam0->f_1), 1);
							unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
							unk_0x99BCB15F954AF579(&(uParam0->f_1), 3);
							unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = unk_0xE0BDAFA1A39552D6();
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 5))
		{
			if (func_279(unk_0xE0BDAFA1A39552D6(), 1) || func_278())
			{
				unk_0xE27C8E42A97895CF(&(Global_1587816[iVar3 /*444*/].f_135), 5);
				*uParam0 = 0;
				func_32(0);
				func_274(0);
				func_24(8, 0);
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
				func_275(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_90.f_5.f_5[unk_0xE0BDAFA1A39552D6()] == -1)
			{
				if (func_19(&(uParam0->f_6), 15000, 0))
				{
					func_273();
					func_18(&(uParam0->f_6));
					func_17(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 9))
		{
			if (func_19(&(uParam0->f_6), 5000, 0))
			{
				func_273();
				func_18(&(uParam0->f_6));
				func_17(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = unk_0xE0BDAFA1A39552D6();
			if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 13))
			{
				if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1633, 6) || unk_0x7DA173D4FD42F36B(Global_2464975.f_1635, 31))
				{
					if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 0))
					{
						if (!func_272())
						{
							if (!func_279(unk_0xE0BDAFA1A39552D6(), 1))
							{
								if (!func_278())
								{
									if (func_277() == 0)
									{
										if (func_162())
										{
											if (func_145(uParam0))
											{
												Global_1714045.f_1 = -1;
												func_32(1);
												func_273();
												if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 5))
												{
													unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 0))
				{
					if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 13))
					{
						if (!unk_0x6146EFE5BC2DD8DC())
						{
							func_144("FM_IHELP_ACPI", -1);
							unk_0xE27C8E42A97895CF(&(uParam0->f_1), 13);
						}
					}
					if (unk_0x7DA173D4FD42F36B(Global_1714045, 1))
					{
						iVar3 = unk_0xE0BDAFA1A39552D6();
						iVar0 = Local_90.f_5.f_5[iVar3];
						iVar1 = Local_90.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_11(iVar1);
							if (iVar2 == 0)
							{
							}
							func_143(iVar2, 1, func_4(1, 1));
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
							func_274(1);
							func_24(8, 1);
							uVar18 = func_142(1183, -1, 0);
							unk_0x99BCB15F954AF579(&uVar18, 1);
							unk_0x99BCB15F954AF579(&uVar18, 2);
							unk_0x99BCB15F954AF579(&uVar18, 3);
							unk_0x99BCB15F954AF579(&uVar18, 5);
							unk_0x99BCB15F954AF579(&uVar18, 6);
							*uParam0 = 1;
							func_141(1183, uVar18, -1, 1);
							iLocal_393 = func_142(1160, -1, 0);
						}
						else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 5000, 0))
						{
							func_273();
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 30000, 0))
					{
						func_273();
						func_18(&(uParam0->f_6));
						func_17(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 0))
				{
					unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 0);
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
					unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 2);
					unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
					func_32(0);
				}
				if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 12))
				{
					if (Local_90.f_5.f_38[iVar3] == -1 && Local_90.f_5.f_5[iVar3] == -1)
					{
						unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 12);
					}
				}
				else if (!func_20(&(uParam0->f_12)))
				{
					func_17(&(uParam0->f_12), 0, 0);
				}
				else if (func_19(&(uParam0->f_12), 30000, 0))
				{
					unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 13);
					func_18(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = unk_0xE0BDAFA1A39552D6();
			iVar1 = Local_90.f_5.f_38[iVar3];
			iVar0 = Local_90.f_5.f_5[iVar3];
			func_140();
			if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
				{
					unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
				}
				if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 14))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 14);
				}
				if (!unk_0xCDB4C4200A9B478A(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = unk_0x1232EB8CC16E4E5F(func_10(iVar1));
						unk_0xEEF2AFCBBDD180D3(uParam0->f_4, 1);
						unk_0xA4E8F868373B09C0(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_139(iVar0, 1))
				{
					iVar4 = iVar0;
					if (unk_0xA27C9E8196C79D22(iVar4))
					{
						if (func_287(iVar4, 0, 1))
						{
							if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 4) && !unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 5))
							{
								func_138("FM_HTUT_GO", 0);
								unk_0xE27C8E42A97895CF(&(uParam0->f_1), 0);
							}
						}
					}
				}
				if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
				{
					func_138("FM_HTUT_GO", 0);
					unk_0xE27C8E42A97895CF(&(uParam0->f_1), 1);
				}
				else
				{
					func_18(&(uParam0->f_10));
					func_17(&(uParam0->f_10), 0, 0);
				}
				unk_0xE27C8E42A97895CF(&(uParam0->f_1), 0);
			}
			else
			{
				if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
				{
					unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
				}
				if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 14))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 14);
				}
				if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 2))
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if ((unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), func_10(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_137(25f))) || func_136(1101004800, 1117126656))
						{
							if (unk_0xCDB4C4200A9B478A(uParam0->f_4))
							{
								unk_0x2239ED27B231AE2E(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_139(iVar0, 1))
							{
								iVar4 = iVar0;
								if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
								{
									if (unk_0xA27C9E8196C79D22(iVar4))
									{
										if (func_287(iVar4, 1, 1))
										{
											if (!func_135())
											{
												Var5 = { func_134(iVar4) };
												if (unk_0xC1CBB5CA861EE944(&Var5))
												{
													func_128("FM_HTUT_FWAT", iVar4, 0, 0);
												}
												else
												{
													func_128("FM_HTUT_WAT", iVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							unk_0xE27C8E42A97895CF(&(Global_1587816[iVar3 /*444*/].f_135), 2);
						}
					}
				}
				else
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 2))
						{
							if ((!unk_0x7DA173D4FD42F36B(iLocal_227, 18) && unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), func_10(iVar1)) > (35f * 35f)) || (unk_0x7DA173D4FD42F36B(iLocal_227, 18) && unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), func_10(iVar1)) > (90f * 90f)))
							{
								unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
								unk_0x99BCB15F954AF579(&(Global_1587816[iVar3 /*444*/].f_135), 2);
								unk_0x99BCB15F954AF579(&iLocal_227, 18);
							}
						}
					}
					if (unk_0x7DA173D4FD42F36B(Global_1714045, 15))
					{
						if (func_125("FM_HTUT_WAT") || func_125("FM_HTUT_FWAT"))
						{
							func_25();
						}
					}
				}
			}
			if (iVar0 > -1 && func_139(iVar0, 1))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
				{
					if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 2))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 12))
						{
							if (func_20(&(uParam0->f_10)))
							{
								if (func_19(&(uParam0->f_10), iLocal_89, 0))
								{
									unk_0xE27C8E42A97895CF(&(Global_1587816[iVar3 /*444*/].f_135), 12);
									unk_0xE27C8E42A97895CF(&(Global_1587816[iVar3 /*444*/].f_135), 13);
									if (unk_0xCDB4C4200A9B478A(uParam0->f_4))
									{
										unk_0x2239ED27B231AE2E(&(uParam0->f_4));
									}
									func_25();
									*uParam0 = 0;
									unk_0x99BCB15F954AF579(&(uParam0->f_1), 12);
									unk_0x99BCB15F954AF579(&iLocal_227, 11);
								}
								else if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 2))
								{
									if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 12))
									{
										if (func_19(&(uParam0->f_10), (iLocal_89 - 60000), 0))
										{
											unk_0xE27C8E42A97895CF(&(uParam0->f_1), 12);
										}
										else if (!unk_0x7DA173D4FD42F36B(iLocal_227, 11))
										{
											if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
											{
												if (!func_19(&(uParam0->f_10), (iLocal_89 - 420000), 0))
												{
													func_18(&(uParam0->f_10));
													func_17(&(uParam0->f_10), 0, 0);
													unk_0xE27C8E42A97895CF(&iLocal_227, 11);
													iLocal_89 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 12))
				{
					if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 2) && unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
					{
						unk_0x99BCB15F954AF579(&(uParam0->f_1), 12);
						unk_0x99BCB15F954AF579(&iLocal_227, 11);
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_275(uParam0);
						func_17(&uLocal_221, 0, 0);
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 6);
						func_124(1);
						func_17(&uLocal_221, 0, 0);
						if (func_139(iVar0, 1))
						{
							if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 15))
							{
								if (func_123(iVar0, 0))
								{
									unk_0xE27C8E42A97895CF(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 2))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
						{
							func_115();
						}
					}
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar3 /*444*/].f_135, 2))
			{
				unk_0xE27C8E42A97895CF(&(uParam0->f_1), 4);
				unk_0xE27C8E42A97895CF(&(uParam0->f_1), 5);
				unk_0xE27C8E42A97895CF(&(uParam0->f_1), 6);
				func_275(uParam0);
				func_124(1);
				*uParam0 = 3;
			}
			if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 12))
			{
				func_111(iLocal_89, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_19(&uLocal_221, 1000, 0))
			{
				*uParam0 = 3;
				func_275(uParam0);
				func_124(1);
				func_17(&uLocal_221, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = unk_0xE0BDAFA1A39552D6();
			iVar0 = Local_90.f_5.f_5[iVar3];
			iVar1 = Local_90.f_5.f_38[iVar3];
			if (!unk_0x7DA173D4FD42F36B(iLocal_227, 8))
			{
				if (func_137(35f))
				{
					iVar2 = func_11(iVar1);
					if (iVar2 == 0)
					{
					}
					func_143(iVar2, 0, func_4(1, 1));
					unk_0xE27C8E42A97895CF(&iLocal_227, 8);
				}
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
			{
				unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
			}
			if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 3))
			{
				if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 14))
				{
					if (!func_110())
					{
						if (iVar0 > -1 && func_139(iVar0, 1))
						{
							iVar4 = iVar0;
							if (unk_0xA27C9E8196C79D22(iVar4))
							{
								if (func_287(iVar4, 1, 1))
								{
									if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 16))
									{
										Var5 = { func_134(iVar4) };
										if (unk_0xC1CBB5CA861EE944(&Var5))
										{
											func_128("FM_HTUT_FHLD", iVar4, 0, 0);
										}
										else
										{
											func_128("FM_HTUT_HLD", iVar4, 0, 0);
										}
										unk_0xE27C8E42A97895CF(&(uParam0->f_1), 3);
									}
									else if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 14))
									{
										unk_0xE27C8E42A97895CF(&(uParam0->f_1), 14);
										func_128("FM_HTUT_HLC", iVar4, 1, 0);
									}
								}
							}
						}
						if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 3) && !unk_0x7DA173D4FD42F36B(uParam0->f_1, 14))
						{
							func_138("FM_HTUT_HLS", 0);
							unk_0xE27C8E42A97895CF(&(uParam0->f_1), 3);
							unk_0xE27C8E42A97895CF(&(Global_1587816[iVar3 /*444*/].f_135), 8);
						}
					}
				}
				else
				{
					iVar3 = unk_0xE0BDAFA1A39552D6();
					iVar0 = Local_90.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_139(iVar0, 1))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 16))
						{
							unk_0x99BCB15F954AF579(&(uParam0->f_1), 14);
						}
					}
					else
					{
						unk_0x99BCB15F954AF579(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_110())
			{
				if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 3))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_139(iVar0, 1))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 16))
				{
					unk_0x99BCB15F954AF579(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_109(uParam0);
		func_101(uParam0);
		func_92(uParam0);
		func_89(uParam0);
		if (!func_282())
		{
			if (func_86(uParam0))
			{
				if (unk_0xCDB4C4200A9B478A(uParam0->f_4))
				{
					unk_0x2239ED27B231AE2E(&(uParam0->f_4));
				}
				if (unk_0xCDB4C4200A9B478A(uParam0->f_5))
				{
					unk_0x2239ED27B231AE2E(&(uParam0->f_5));
				}
				if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 15))
				{
					iVar0 = Local_90.f_5.f_5[unk_0xE0BDAFA1A39552D6()];
					if (func_123(iVar0, 1))
					{
					}
				}
				if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
				{
					func_85(1);
				}
				if (unk_0x7DA173D4FD42F36B(iLocal_227, 12))
				{
					unk_0x4C48684974B45ED5(1);
					unk_0x99BCB15F954AF579(&iLocal_227, 12);
				}
				func_25();
				func_33(1);
				func_274(0);
				func_32(0);
				func_24(8, 0);
				func_83(121, 1, -1, 1);
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
		if (!func_82())
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				Global_1573893[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_79(unk_0xE0BDAFA1A39552D6(), bParam0);
	iVar2 = func_77(iVar1, bParam0);
	if (!func_76(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			Global_1573893[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Global_1573893[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 184)
	{
		iVar3 = func_75(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_73(iVar4))
			{
				func_65(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_59(func_60(59, 0, 0), 0);
	func_54(func_60(135, 0, 0), 1);
	func_52(func_60(22, 0, 0), func_60(73, 0, 0));
	if (func_82())
	{
		if (func_50(77, -1))
		{
			func_49(1);
			func_48(1);
		}
	}
	if (func_47() || func_46())
	{
		func_83(77, 1, -1, 1);
		if (unk_0x17CC0D5008835470())
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
	if (func_60(21, 0, 0))
	{
		unk_0x458C1BE9B849104B(0);
	}
	Global_978177 = 0;
}

void func_36(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_91362.f_17[iParam0])
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
	Global_91362.f_156[iParam0] = 1;
	Global_91362.f_155 = 1;
}

void func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x99BCB15F954AF579(&(Global_91362.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_40() == 0)
		{
			iVar0 = func_142(func_39(iParam0), -1, 0);
			unk_0x99BCB15F954AF579(&iVar0, iParam1);
			func_141(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_101186.f_668[iParam0]), iParam1);
	}
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3879;
			break;
		
		default:
			break;
	}
	return 3976;
}

int func_40()
{
	return Global_25152;
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE27C8E42A97895CF(&(Global_91362.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_40() == 0)
		{
			iVar0 = func_142(func_39(iParam0), -1, 0);
			unk_0xE27C8E42A97895CF(&iVar0, iParam1);
			func_141(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Global_101186.f_668[iParam0]), iParam1);
	}
}

void func_42(int iParam0)
{
	if (Global_91362.f_17[iParam0])
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
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x7DA173D4FD42F36B(Global_91362.f_1300[iParam0], iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_40() == 0)
		{
			return unk_0x7DA173D4FD42F36B(func_142(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_668[iParam0], iParam1);
	}
	return 0;
}

bool func_46()
{
	return Global_1315901;
}

bool func_47()
{
	return Global_1315903;
}

void func_48(bool bParam0)
{
	if (!unk_0x17CC0D5008835470())
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
	if (!unk_0x17CC0D5008835470())
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
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
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
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

void func_52(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x17CC0D5008835470())
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
		Global_91362.f_9[iParam0] = 1;
	}
	else
	{
		Global_91362.f_9[iParam0] = 0;
	}
}

void func_54(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x17CC0D5008835470())
	{
		return;
	}
	uVar0 = func_58(0);
	if (Global_262145.f_63 == 1 && func_60(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_36(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_43(44))
		{
			func_42(44);
		}
	}
	if (bParam0)
	{
		if (func_55(0) > 1)
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1642), 10);
		}
	}
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (Global_1732275[iParam0 /*8*/] == -1)
	{
		iVar0 = func_142(func_57(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_56(iParam0, 0);
			iVar0 = 0;
		}
		Global_1732275[iParam0 /*8*/] = iVar0;
	}
	return Global_1732275[iParam0 /*8*/];
}

void func_56(int iParam0, int iParam1)
{
	Global_1732275[iParam0 /*8*/] = iParam1;
	func_141(func_57(iParam0), iParam1, -1, 1);
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3880;
		
		default:
	}
	return 3880;
}

int func_58(bool bParam0)
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
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1633, 26))
		{
			iVar0 = func_142(1184, -1, 0);
			if (!unk_0x7DA173D4FD42F36B(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_50(122, -1);
}

void func_59(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x17CC0D5008835470())
	{
		return;
	}
	uVar0 = func_58(0);
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

bool func_60(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6298 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_62(unk_0xE0BDAFA1A39552D6(), 85))
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
		if (Global_262145.f_4870 == 1)
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
			if (func_61())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x7DA173D4FD42F36B(Global_1573893[iVar1], iVar0);
}

int func_61()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1638, 23))
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
	iVar0 = Global_1347809[func_51(-1)];
	if (unk_0x7DA173D4FD42F36B(iVar0, 7))
	{
		unk_0xE27C8E42A97895CF(&(Global_2464975.f_1638), 23);
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_82())
	{
		return 0;
	}
	if (func_64())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_63(iParam1);
	iVar1 = uVar0;
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_345, iVar1);
}

int func_63(int iParam0)
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

bool func_64()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 3);
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_72(-1))
			{
				if (!func_82())
				{
					return;
				}
			}
			if (!func_72(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_282() && !func_71())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_70())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_72(-1))
				{
					if (!func_66())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xE27C8E42A97895CF(&(Global_1573893[iVar1]), iVar0);
	}
}

int func_66()
{
	int iVar0;
	
	if (func_69(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	iVar0 = Global_1347809[func_51(-1)];
	if (unk_0x7DA173D4FD42F36B(iVar0, 2))
	{
		func_67(1);
		return 1;
	}
	return 0;
}

void func_67(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_131, 25))
		{
			func_68(unk_0xE0BDAFA1A39552D6(), 12);
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_131), 25);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_131, 25))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_131), 25);
	}
}

void func_68(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_63(iParam1);
	iVar1 = uVar0;
	unk_0xE27C8E42A97895CF(&(Global_1587816[iParam0 /*444*/].f_345), iVar1);
}

bool func_69(int iParam0)
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 25);
}

int func_70()
{
	int iVar0;
	
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1638, 6))
	{
		return 1;
	}
	iVar0 = Global_1347809[func_51(-1)];
	if (unk_0x7DA173D4FD42F36B(iVar0, 0))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1638, 6))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1638), 6);
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

bool func_71()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 7);
}

bool func_72(int iParam0)
{
	return func_50(123, iParam0);
}

int func_73(int iParam0)
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
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_142(func_74(iParam0), -1, 0);
			if (unk_0x7DA173D4FD42F36B(iVar0, iVar1))
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

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1193;
		
		case 1:
			return 1194;
		
		case 2:
			return 1195;
		
		case 3:
			return 1196;
		
		case 4:
			return 1197;
		
		case 5:
			return 1199;
		
		default:
	}
	return 1193;
}

int func_75(int iParam0)
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
		case 148:
		case 135:
			if (!func_72(-1))
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
		case 156:
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
		case 130:
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

int func_76(int iParam0)
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

int func_77(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_78(iParam0, 0);
}

int func_78(int iParam0, int iParam1)
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
		if (Global_276766[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_276766[iVar3] < iParam0)
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

int func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_80(iParam0);
}

int func_80(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_51(-1)];
			}
			else if (func_81(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_51(-1)];
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_2428549.f_1, iParam0);
	}
	return 1;
}

int func_82()
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

void func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84())
	{
		iVar0 = Global_2494881[iParam0 /*5*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7E42158771F6AC55(iVar0, iParam1, iParam3);
		}
	}
}

int func_84()
{
	return 1;
	return 0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 17))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 17);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 17))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 17);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_90.f_5.f_5[unk_0xE0BDAFA1A39552D6()];
	if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0x490BA5FDD7EE47A9() /*444*/].f_135, 2))
	{
		if (func_142(1160, -1, 0) > iLocal_393)
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (unk_0xA27C9E8196C79D22(iVar1))
				{
					if (func_287(iVar1, 1, 1))
					{
						if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 2))
						{
							Global_1714045.f_1 = iVar0;
							unk_0xE27C8E42A97895CF(&Global_1714045, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_88())
		{
			if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					iVar1 = iVar0;
					if (unk_0xA27C9E8196C79D22(iVar1))
					{
						if (func_287(iVar1, 1, 1))
						{
							Global_1714045.f_1 = iVar0;
							unk_0xE27C8E42A97895CF(&Global_1714045, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_87())
		{
			if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((unk_0x7DA173D4FD42F36B(uParam0->f_1, 7) && !unk_0x7DA173D4FD42F36B(uParam0->f_1, 10)) && !unk_0x7DA173D4FD42F36B(uParam0->f_1, 9))
	{
		if (!func_20(&(uParam0->f_16)))
		{
			func_17(&(uParam0->f_16), 0, 0);
		}
		else if (func_19(&(uParam0->f_16), 3000, 0))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 11);
			return 1;
		}
	}
	return 0;
}

int func_87()
{
	int iVar0;
	
	iVar0 = Local_90.f_5.f_5[unk_0xE0BDAFA1A39552D6()];
	if (iVar0 > -1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = Local_90.f_5.f_5[unk_0xE0BDAFA1A39552D6()];
	if (iVar0 > -1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_135, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_89(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 6))
	{
		if (!unk_0xCDB4C4200A9B478A(uParam0->f_5))
		{
			if (!func_110())
			{
				iVar0 = Local_90.f_5.f_38[unk_0xE0BDAFA1A39552D6()];
				if (iVar0 > -1)
				{
					Var1 = { func_91(iVar0) };
					if (!func_90(Var1, 0f, 0f, 0f, 0))
					{
						if (!unk_0xCDB4C4200A9B478A(uParam0->f_5))
						{
							unk_0x78515A98B064C30B(1);
							uParam0->f_5 = unk_0x1232EB8CC16E4E5F(Var1);
							unk_0x3A46FF82408A2709(uParam0->f_5, 52);
							unk_0xC5B281EF0EBC2AA6(uParam0->f_5, 1f);
							unk_0xA4E8F868373B09C0(uParam0->f_5, 7);
							unk_0xEEF2AFCBBDD180D3(uParam0->f_5, 1);
						}
					}
				}
			}
		}
		else if (func_110())
		{
			if (unk_0xCDB4C4200A9B478A(uParam0->f_5))
			{
				unk_0x2239ED27B231AE2E(&(uParam0->f_5));
			}
		}
	}
}

bool func_90(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_91(int iParam0)
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

void func_92(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 4))
			{
				if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 5))
				{
					if (!unk_0x6146EFE5BC2DD8DC())
					{
						if (!unk_0x3DC360442A11BB38())
						{
							if (func_94())
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
			if (!unk_0x6146EFE5BC2DD8DC())
			{
				if (!unk_0x3DC360442A11BB38())
				{
					if (func_94())
					{
						func_144("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = func_142(1183, -1, 0);
						if (!unk_0x7DA173D4FD42F36B(iVar0, 1))
						{
							unk_0xE27C8E42A97895CF(&iVar0, 1);
							func_141(1183, iVar0, -1, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x6146EFE5BC2DD8DC())
			{
				if (!unk_0x3DC360442A11BB38())
				{
					if (func_94())
					{
						if (func_137(1089470464))
						{
							if (!func_93())
							{
								func_144("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!unk_0x7DA173D4FD42F36B(iLocal_227, 7) || unk_0x7A4571218C06A722(0, 37))
							{
								func_144("FM_PASS_DBL", -1);
								unk_0xE27C8E42A97895CF(&iLocal_227, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_93()
{
	return Global_1312416;
}

int func_94()
{
	if (((((((((((((((!func_287(unk_0xE0BDAFA1A39552D6(), 1, 1) || unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E())) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || func_100(8, -1)) || func_100(15, -1)) || func_99()) || func_100(3, -1)) || unk_0x6146EFE5BC2DD8DC()) || func_279(unk_0xE0BDAFA1A39552D6(), 1)) || func_278()) || func_98()) || func_97()) || func_96()) || unk_0x3DC360442A11BB38()) || unk_0x51857BE3D081B03F()) || func_95())
	{
		return 0;
	}
	return 1;
}

bool func_95()
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_1639, 12);
}

bool func_96()
{
	return Global_2428549.f_2482.f_585;
}

bool func_97()
{
	return Global_91362.f_297 > 0;
}

bool func_98()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

var func_99()
{
	return Global_2394757;
}

bool func_100(int iParam0, int iParam1)
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

void func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_88())
	{
		if (*uParam0 <= 1)
		{
			if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 8))
			{
				unk_0xE27C8E42A97895CF(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_64())
	{
		if (!func_20(&uLocal_396) || func_19(&uLocal_396, 5000, 0))
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 2))
			{
				if (iLocal_393 > -1)
				{
					iVar1 = func_142(1160, -1, 0);
					if (iLocal_393 != iVar1)
					{
						iLocal_393 = iVar1;
					}
					func_18(&uLocal_396);
					func_17(&uLocal_396, 0, 0);
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 7))
	{
		if (!func_108())
		{
			iVar0 = func_142(1160, -1, 0);
			if (iLocal_393 > -1 && iVar0 == iLocal_393)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 2) && ((unk_0x98934607F8D0FB03(joaat("am_hold_up")) == 0 && !unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16)) && !func_107()))
				{
					unk_0xE27C8E42A97895CF(&(uParam0->f_1), 9);
					unk_0xE27C8E42A97895CF(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_110() && !unk_0x7DA173D4FD42F36B(uParam0->f_1, 8)) && unk_0x98934607F8D0FB03(joaat("am_hold_up")) == 0)
					{
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 9);
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 7);
					}
					else
					{
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 10))
	{
		if (func_108())
		{
			if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 7))
			{
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 7);
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 9);
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 10);
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 9))
	{
		if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_137(10f))
				{
					iVar2 = unk_0x9EFA0F4073C51215("freemode", -1, 0);
					if (iVar2 != func_106())
					{
						unk_0x99BCB15F954AF579(&(uParam0->f_1), 9);
						unk_0xE27C8E42A97895CF(&(uParam0->f_1), 10);
						func_103();
					}
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_227, 12))
	{
		if (func_110())
		{
			unk_0x4C48684974B45ED5(0);
			unk_0xE27C8E42A97895CF(&iLocal_227, 12);
		}
	}
	else if (!func_110())
	{
		unk_0x4C48684974B45ED5(1);
		unk_0x99BCB15F954AF579(&iLocal_227, 12);
	}
	if (func_137(25f))
	{
		if (!func_107())
		{
			func_102(1);
		}
	}
	else if (func_107())
	{
		func_102(0);
	}
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1639, 21))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1639), 21);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1639, 21))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1639), 21);
	}
}

void func_103()
{
	int iVar0;
	
	if (Local_90.f_5.f_38[unk_0xE0BDAFA1A39552D6()] > -1)
	{
		iVar0 = func_11(Local_90.f_5.f_38[unk_0xE0BDAFA1A39552D6()]);
		func_104(iVar0, 1, func_105(unk_0x9EFA0F4073C51215("freemode", -1, 0)));
	}
}

void func_104(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 21;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 4, iParam2);
	}
}

int func_105(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_106()
{
	return -1;
}

bool func_107()
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_1639, 21);
}

int func_108()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_90.f_5.f_38[unk_0xE0BDAFA1A39552D6()];
	iVar1 = func_11(iVar0);
	if (unk_0x7DA173D4FD42F36B(Global_2418358.f_65, iVar1))
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

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xE0BDAFA1A39552D6();
	iVar0 = Local_90.f_5.f_5[iVar1];
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 1) && !unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 8))
	{
		if (iVar0 > -1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 6))
			{
				unk_0x99BCB15F954AF579(&(Global_1587816[iVar1 /*444*/].f_135), 6);
			}
			if (!func_139(iVar0, 1))
			{
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 6))
			{
				unk_0xE27C8E42A97895CF(&(Global_1587816[iVar1 /*444*/].f_135), 6);
			}
		}
		else if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar1 /*444*/].f_135, 6))
		{
			unk_0x99BCB15F954AF579(&(Global_1587816[iVar1 /*444*/].f_135), 6);
		}
		if (iVar0 > -1)
		{
			if (func_139(iVar0, 1))
			{
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 1);
				unk_0x99BCB15F954AF579(&(uParam0->f_1), 0);
				unk_0x99BCB15F954AF579(&(Global_1587816[iVar1 /*444*/].f_135), 6);
			}
		}
	}
}

int func_110()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_91(Local_90.f_5.f_38[unk_0xE0BDAFA1A39552D6()]) };
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (!func_90(Var1, 0f, 0f, 0f, 0))
		{
			iVar0 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
			if (iVar0 != 0)
			{
				if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Var1, 1) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_20(&uParam1))
	{
		iVar0 = (iParam0 - unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), uParam1));
		if (iVar0 >= 0)
		{
			func_112(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_112(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_114(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_113(7, iVar0);
		Global_1339962.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = iParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = iParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_113(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_114(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

void func_115()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7DA173D4FD42F36B(iLocal_227, 14))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_227, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = unk_0x801C03D92F1C6755(iVar0);
				if (func_287(iVar1, 1, 1))
				{
					if (iVar1 != unk_0xE0BDAFA1A39552D6())
					{
						if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
						{
							if (func_122(iVar1))
							{
								unk_0xE27C8E42A97895CF(&iLocal_227, 15);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (func_116(0, 1, 1, 1))
		{
			func_144("FM_IHELP_BLP", -1);
			unk_0xE27C8E42A97895CF(&iLocal_227, 14);
		}
	}
}

int func_116(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_98())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_279(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_120(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_96())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_117()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_118()
{
	return Global_2434839.f_568;
}

bool func_119()
{
	return Global_2434839.f_720;
}

int func_120(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_121()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

bool func_122(int iParam0)
{
	return unk_0xCDB4C4200A9B478A(Global_2412936[iParam0]);
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (unk_0xA27C9E8196C79D22(iVar0))
		{
			if (func_287(iVar0, 0, 1))
			{
				unk_0x657CAD7CE358D665(unk_0x06736567F820A39E(), iVar0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 7))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 7);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 7))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 7);
	}
}

int func_125(char* sParam0)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x2673375C0C31BF99(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	return func_126(sParam0);
}

bool func_126(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_127(sParam0);
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_127(char* sParam0)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

void func_128(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_129(sParam0, unk_0x3DB24415831CBC43(iParam1), bParam3, 1);
}

int func_129(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam1) > 63)
	{
		return 0;
	}
	if (func_133(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_26();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_132();
	func_131(bParam2);
	func_130();
	return 1;
}

void func_130()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_132()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

bool func_133(char* sParam0, char* sParam1)
{
	if (!func_31())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam1) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

struct<13> func_134(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = unk_0xE0BDAFA1A39552D6();
	iVar1 = Local_90.f_5.f_5[iVar0];
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			iVar2 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			if (iVar1 > -1 && func_139(iVar1, 1))
			{
				iVar3 = iVar1;
				if (unk_0xA27C9E8196C79D22(iVar3))
				{
					if (func_287(iVar3, 0, 1))
					{
						uVar4 = unk_0x44A9253132E1DDE0(iVar3);
						if (!unk_0xCFC04A38F256EE06(uVar4))
						{
							if (unk_0x7A6749CADAC50206(uVar4))
							{
								if (unk_0x34E1EF1E8BCD1BFC(uVar4, 0) == iVar2)
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

int func_136(float fParam0, float fParam1)
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			if (unk_0x137B8B7A1CAD742A(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)) > fParam0)
			{
				if (func_137(fParam1))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_227, 18))
					{
						unk_0xE27C8E42A97895CF(&iLocal_227, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_137(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = unk_0xE0BDAFA1A39552D6();
	if (iVar0 > -1)
	{
		Var1 = { func_91(Local_90.f_5.f_38[iVar0]) };
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			Var4 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
			if (unk_0xB7A628320EFF8E47(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_126(sParam0))
	{
		return;
	}
	func_26();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_132();
	func_131(bParam1);
	func_130();
}

int func_139(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_287(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_135, 4))
		{
			return 0;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_135, 8))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_135, 5))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_135, 12))
	{
		return 0;
	}
	return 1;
}

void func_140()
{
	if (!unk_0x7DA173D4FD42F36B(iLocal_227, 16))
	{
		if (func_116(0, 1, 1, 1))
		{
			func_144("FM_IHELP_INV", 10000);
			unk_0xE27C8E42A97895CF(&iLocal_227, 16);
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_227, 6))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_227, 13))
		{
			if (!func_20(&uLocal_225))
			{
				func_17(&uLocal_225, 0, 0);
			}
			else if (func_19(&uLocal_225, 15000, 0))
			{
				if (func_116(0, 1, 1, 1))
				{
					unk_0xE27C8E42A97895CF(&iLocal_227, 6);
				}
			}
		}
	}
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 22;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 4, iParam2);
	}
}

void func_144(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

int func_145(var uParam0)
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
				if (func_160())
				{
					if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
					{
						if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
						{
							unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
						}
						if (!func_159(0))
						{
							func_152(19, 30, "", 0);
							func_144("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
					{
						func_138("FM_IHELP_LCP", 0);
						unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
						if (func_151("FM_IHELP_INV2") || func_151("FM_IHELP_INV"))
						{
							unk_0x310F6B4E168A8F5D(1);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_146(19, 30))
			{
				unk_0x310F6B4E168A8F5D(1);
				uParam0->f_3++;
			}
			else if (func_160())
			{
				if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
				{
					if (func_125("FM_IHELP_LCP"))
					{
						func_25();
					}
					if ((!func_20(&uLocal_394) || func_19(&uLocal_394, 20000, 0)) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
					{
						if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
						{
							unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
						}
						if (!unk_0x7DA173D4FD42F36B(iLocal_227, 16))
						{
							if (!func_151("FM_IHELP_INV"))
							{
								if (!func_151("FM_IHELP_QNV"))
								{
									if (func_94())
									{
										func_144("FM_IHELP_INV", 10000);
										unk_0xE27C8E42A97895CF(&iLocal_227, 16);
									}
								}
							}
						}
						else if (!func_151("FM_IHELP_INV"))
						{
							if (!func_151("FM_IHELP_INV2"))
							{
								if (!unk_0x6146EFE5BC2DD8DC())
								{
									if (func_94())
									{
										func_144("FM_IHELP_INV2", -1);
										func_18(&uLocal_394);
										func_17(&uLocal_394, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 16))
				{
					func_138("FM_IHELP_LCP", 0);
					unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 16);
					if ((func_151("FM_IHELP_INV2") || func_151("FM_IHELP_INV")) || func_151("FM_IHELP_QNV"))
					{
						unk_0x310F6B4E168A8F5D(1);
					}
				}
			}
			else if ((func_151("FM_IHELP_INV2") || func_151("FM_IHELP_INV")) || func_151("FM_IHELP_QNV"))
			{
				unk_0x310F6B4E168A8F5D(1);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_150(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394153[iVar0 /*44*/].f_7)
	{
		return 0;
	}
	if (!Global_2394153[iVar0 /*44*/].f_1)
	{
		return 0;
	}
	func_147(iVar0);
	Global_2395292 = unk_0x1ADBAAC322D61F73() + 1500;
	return 1;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1347461)
	{
		return;
	}
	if (Global_2394153[iParam0 /*44*/].f_25 != -1)
	{
		unk_0x85AFD230C2980CFF(Global_2394153[iParam0 /*44*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1347461)
	{
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		Global_2394153[iVar0 /*44*/] = { Global_2394153[iVar1 /*44*/] };
		iVar0++;
		iVar1++;
	}
	func_149(iVar0);
	Global_1347461 = (Global_1347461 - 1);
	if (Global_1347432)
	{
		if (Global_1347430 > 0)
		{
			func_148();
		}
	}
}

void func_148()
{
	Global_1347432 = 0;
}

void func_149(int iParam0)
{
	Global_2394153[iParam0 /*44*/] = 0;
	Global_2394153[iParam0 /*44*/].f_1 = 0;
	Global_2394153[iParam0 /*44*/].f_2 = 0;
	Global_2394153[iParam0 /*44*/].f_3 = 0;
	Global_2394153[iParam0 /*44*/].f_4 = func_106();
	Global_2394153[iParam0 /*44*/].f_5 = 145;
	Global_2394153[iParam0 /*44*/].f_6 = 1;
	Global_2394153[iParam0 /*44*/].f_7 = -1;
	Global_2394153[iParam0 /*44*/].f_8 = -1;
	StringCopy(&(Global_2394153[iParam0 /*44*/].f_9), "", 64);
	Global_2394153[iParam0 /*44*/].f_25 = -1;
	StringCopy(&(Global_2394153[iParam0 /*44*/].f_26), "", 32);
	Global_2394153[iParam0 /*44*/].f_34 = -1;
	Global_2394153[iParam0 /*44*/].f_35 = -1;
	Global_2394153[iParam0 /*44*/].f_36 = 0;
	Global_2394153[iParam0 /*44*/].f_38 = 0;
	Global_2394153[iParam0 /*44*/].f_39 = -1;
	Global_2394153[iParam0 /*44*/].f_40 = 0;
	Global_2394153[iParam0 /*44*/].f_41 = 0;
	Global_2394153[iParam0 /*44*/].f_42 = 0;
	if (unk_0x17CC0D5008835470())
	{
		Global_2394153[iParam0 /*44*/].f_37 = unk_0x201D90648B2AE3CE();
	}
}

int func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1347461)
	{
		if (!Global_2394153[iVar0 /*44*/].f_6)
		{
			if (Global_2394153[iVar0 /*44*/].f_5 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_151(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_152(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_150(iParam0);
	if (iVar0 != -1)
	{
		func_147(iVar0);
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_153(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1);
}

void func_153(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar19;
	
	uVar0 = func_106();
	iVar1 = 145;
	if (bParam2)
	{
		uVar0 = unk_0x801C03D92F1C6755(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_158())
		{
			return;
		}
	}
	iVar2 = Global_1347461;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394153[iVar2 /*44*/] = { Global_2394153[iVar3 /*44*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1347461++;
	if (Global_1347461 > 12)
	{
		Global_1347461 = 12;
	}
	iVar4 = 0;
	Global_2394153[iVar4 /*44*/] = 0;
	Global_2394153[iVar4 /*44*/].f_1 = 0;
	Global_2394153[iVar4 /*44*/].f_2 = 0;
	Global_2394153[iVar4 /*44*/].f_3 = 0;
	Global_2394153[iVar4 /*44*/].f_4 = uVar0;
	Global_2394153[iVar4 /*44*/].f_5 = iVar1;
	Global_2394153[iVar4 /*44*/].f_6 = bParam2;
	Global_2394153[iVar4 /*44*/].f_7 = iParam0;
	Global_2394153[iVar4 /*44*/].f_8 = -1;
	StringCopy(&(Global_2394153[iVar4 /*44*/].f_9), sParam3, 64);
	Global_2394153[iVar4 /*44*/].f_25 = -1;
	StringCopy(&(Global_2394153[iVar4 /*44*/].f_26), sParam4, 32);
	Global_2394153[iVar4 /*44*/].f_34 = iParam6;
	Global_2394153[iVar4 /*44*/].f_35 = iParam7;
	Global_2394153[iVar4 /*44*/].f_36 = 0;
	Global_2394153[iVar4 /*44*/].f_37 = unk_0x201D90648B2AE3CE();
	Global_2394153[iVar4 /*44*/].f_38 = uParam5;
	Global_2394153[iVar4 /*44*/].f_39 = Global_2395291;
	Global_2394153[iVar4 /*44*/].f_43 = iParam8;
	if (iParam0 == 123)
	{
		Global_2394153[iVar4 /*44*/].f_8 = func_155();
	}
	Global_2395291++;
	func_154();
	Global_2394153[iVar4 /*44*/].f_40 = 0;
	Global_2394153[iVar4 /*44*/].f_41 = 0;
	Global_2394153[iVar4 /*44*/].f_42 = 0;
	if (unk_0xB6FEE919E18FF45B())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_134(uVar0) };
				iVar19 = unk_0x77F3B287A8ADC51B(&Var6);
				if (iVar19 != -1)
				{
					Global_2394153[iVar4 /*44*/].f_40 = iVar19;
					Global_2394153[iVar4 /*44*/].f_41 = 1;
					Global_2394153[iVar4 /*44*/].f_42 = 0;
				}
			}
		}
	}
}

void func_154()
{
	Global_1347434 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 30000);
}

int func_155()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_157() };
	if (unk_0x226FA58470A21AEF(&cVar0) || unk_0x2F6869889D97DFED(".", &cVar0))
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
				StringCopy(&cVar0, func_156(47, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_156(48, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_156(49, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_156(50, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_156(51, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_156(52, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_156(53, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x226FA58470A21AEF(&cVar0) && !unk_0x2F6869889D97DFED(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_142(3435, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!unk_0x7DA173D4FD42F36B(uVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_156(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2496312[iParam0 /*5*/][func_51(iParam1)];
	return unk_0x7C1B2EE3696F6433(uVar0, -1);
}

struct<6> func_157()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (unk_0x226FA58470A21AEF(&(Global_1728857.f_10)))
	{
		iVar7 = func_142(3436, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1118)
			{
				if ((Global_794608.f_4[iVar6 /*88*/].f_65 == 0 && Global_794608.f_4[iVar6 /*88*/].f_68 == 1) && unk_0x7DA173D4FD42F36B(Global_794608.f_4[iVar6 /*88*/].f_76, 13))
				{
					if (Global_794608.f_98389[iVar6 /*12*/].f_1 == iVar7)
					{
						Var0 = { Global_794608.f_111819[Global_794608.f_98389[iVar6 /*12*/].f_9 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (unk_0x226FA58470A21AEF(&Var0))
			{
			}
		}
		Global_1728857.f_10 = { Var0 };
		return Var0;
	}
	return Global_1728857.f_10;
}

bool func_158()
{
	return Global_1315871 == 10;
}

int func_159(int iParam0)
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

int func_160()
{
	if (func_161() == 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	return Global_1312466.f_18;
}

bool func_162()
{
	var uVar0;
	
	if (!unk_0x7DA173D4FD42F36B(iLocal_227, 2))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_227, 10))
		{
			if (func_270(1103626240))
			{
				unk_0xE27C8E42A97895CF(&iLocal_227, 9);
			}
			unk_0xE27C8E42A97895CF(&iLocal_227, 10);
		}
		else if (!unk_0x7DA173D4FD42F36B(iLocal_227, 9))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_227, 3))
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_227, 5) || (unk_0x7DA173D4FD42F36B(iLocal_227, 5) && func_19(&uLocal_223, 60000, 0)))
				{
					if (func_266())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_227, 4))
						{
							func_264(19, 3, 0);
							func_263(&uLocal_228, 1, 0, "Lamar", 0, 1);
							unk_0xE27C8E42A97895CF(&iLocal_227, 4);
						}
						else
						{
							unk_0xE27C8E42A97895CF(&uVar0, 4);
							unk_0xE27C8E42A97895CF(&uVar0, 7);
							if (func_259(&uLocal_228, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								unk_0xE27C8E42A97895CF(&iLocal_227, 3);
								unk_0x99BCB15F954AF579(&iLocal_227, 5);
							}
						}
					}
				}
			}
			else if (!func_272())
			{
				if (func_258())
				{
					unk_0xE27C8E42A97895CF(&iLocal_227, 2);
					func_257(0);
				}
				else
				{
					func_18(&uLocal_223);
					func_17(&uLocal_223, 0, 0);
					unk_0x99BCB15F954AF579(&iLocal_227, 3);
					unk_0xE27C8E42A97895CF(&iLocal_227, 5);
				}
			}
		}
		else if (func_266())
		{
			if (func_163(19, "CELL_HOLD", 0, 0))
			{
				unk_0xE27C8E42A97895CF(&iLocal_227, 2);
				func_257(0);
			}
		}
	}
	return unk_0x7DA173D4FD42F36B(iLocal_227, 2);
}

bool func_163(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_164(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_164(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_165(&uVar0, iParam0, func_256(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_165(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x226FA58470A21AEF(sParam2))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam3))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179());
	iVar1 = func_255(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		iVar2 = unk_0x9F7CDE7B20BCB675(sParam7);
	}
	if (func_254(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_249(uParam6))
	{
		return 0;
	}
	if (func_246(iVar0, iVar1, iVar2))
	{
		if (func_245())
		{
			return 0;
		}
		func_244();
		return func_172(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_171(iParam4))
	{
		return 0;
	}
	func_166(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1332285.f_40.f_1 = iParam0;
	Global_1332285.f_40.f_2 = iParam1;
	Global_1332285.f_40.f_3 = iParam2;
	StringCopy(&(Global_1332285.f_40.f_4), sParam3, 16);
	Global_1332285.f_40.f_8 = iParam4;
	Global_1332285.f_40.f_9 = iParam5;
	Global_1332285.f_40.f_14 = uParam6;
	func_167(iParam4);
	func_244();
	Global_1332285.f_40.f_13 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 7000);
}

void func_167(int iParam0)
{
	if (func_170(iParam0))
	{
		func_169();
		return;
	}
	func_168();
}

void func_168()
{
	Global_1332285.f_40.f_10 = 0;
}

void func_169()
{
	Global_1332285.f_40.f_10 = 1;
}

int func_170(int iParam0)
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

bool func_171(int iParam0)
{
	return iParam0 > Global_1332285.f_40.f_8;
}

int func_172(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_243();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_240(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_237(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_240(uParam0, sParam3, sParam4);
		}
		return func_221(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_220(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_210(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_209(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_173(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_173(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_208();
	bVar0 = true;
	if (func_175(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_174(120000);
		return 1;
	}
	return 0;
}

void func_174(int iParam0)
{
	Global_1332285.f_40.f_11 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam0);
	Global_1332285.f_40.f_12 = 1;
}

int func_175(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_106();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0x3DB24415831CBC43(iVar0);
		iVar1 = func_202(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1332285.f_40.f_13))
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
	sVar4 = func_201(sParam5, bParam6, &iVar3);
	uVar5 = func_199(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		iVar6++;
		if (!unk_0x226FA58470A21AEF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2F6869889D97DFED(sVar4, " "))
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
		if (unk_0x7DA173D4FD42F36B(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x226FA58470A21AEF(sVar2))
	{
		bVar12 = func_198(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_179(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 0))
	{
		func_178();
	}
	func_208();
	func_177();
	func_176();
	return 1;
}

void func_176()
{
	Global_1332285.f_57 = 0;
	Global_1332285.f_57.f_1 = 0;
}

void func_177()
{
	Global_1332285.f_40 = 3;
}

void func_178()
{
	unk_0xE27C8E42A97895CF(&Global_2283, 8);
}

int func_179(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_180(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			unk_0xE27C8E42A97895CF(&Global_2568055, 0);
		}
		return 1;
	}
	return 0;
}

int func_180(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_192();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_2568040 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_191() == 0)
	{
		func_189();
		return 0;
	}
	func_188(Global_2568039);
	StringCopy(&(Global_2566790[Global_2568039 /*104*/]), sParam1, 64);
	Global_2566790[Global_2568039 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2566790[Global_2568039 /*104*/].f_24 = iParam2;
	}
	Global_2566790[Global_2568039 /*104*/].f_25 = iParam7;
	Global_2566790[Global_2568039 /*104*/].f_26 = uParam8;
	Global_2566790[Global_2568039 /*104*/].f_29 = uParam9;
	Global_2566790[Global_2568039 /*104*/].f_30 = uParam12;
	Global_2566790[Global_2568039 /*104*/].f_31 = uParam11;
	Global_2566790[Global_2568039 /*104*/].f_28 = 0;
	Global_2566790[Global_2568039 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_33), sParam4, 64);
	Global_2566790[Global_2568039 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_50), sParam5, 64);
	Global_2566790[Global_2568039 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_83), sParam15, 64);
	func_192();
	switch (iParam16)
	{
		case 3:
			Global_2566790[Global_2568039 /*104*/].f_99[Global_14413] = 1;
			break;
		
		case 0:
			Global_2566790[Global_2568039 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2566790[Global_2568039 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2566790[Global_2568039 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14413)
		{
			case 0:
				func_187(0);
				break;
			
			case 1:
				func_187(1);
				break;
			
			case 2:
				func_187(2);
				break;
			
			case 3:
				func_187(3);
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
				Global_2568040 = 1;
				break;
			
			case 0:
				Global_2568040 = 1;
				break;
			
			case 2:
				Global_2568040 = 1;
				break;
			
			case 1:
				Global_2568040 = 1;
				break;
			}
	}
	Global_16781[Global_2568039] = 0;
	if (bParam10)
	{
		func_192();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_186())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_185(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_181(1);
			func_185(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_181(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_184(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
											break;
										
										default:
											break;
									}
									func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_183(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_182(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_182(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		func_183(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		func_183(sParam8);
	}
	if (!unk_0x226FA58470A21AEF(sParam9))
	{
		func_183(sParam9);
	}
	if (!unk_0x226FA58470A21AEF(sParam10))
	{
		func_183(sParam10);
	}
	if (!unk_0x226FA58470A21AEF(sParam11))
	{
		func_183(sParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_183(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

bool func_184(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_185(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

bool func_186()
{
	return Global_1315913;
}

void func_187(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_188(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_2566790[iParam0 /*104*/].f_18 = uVar0;
	Global_2566790[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2566790[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2566790[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2566790[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2566790[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_189()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2568039 = 11;
	Global_2566790[Global_2568039 /*104*/].f_18 = -1;
	Global_2566790[Global_2568039 /*104*/].f_18.f_1 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_2 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_3 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_190(Global_2566790[iVar2 /*104*/].f_18, Global_2566790[Global_2568039 /*104*/].f_18))
		{
			Global_2568039 = iVar2;
		}
		iVar2++;
	}
	Global_2566790[Global_2568039 /*104*/].f_24 = 1;
}

int func_190(struct<6> Param0, struct<6> Param6)
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

int func_191()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2566790[iVar2 /*104*/].f_24 == 0)
		{
			Global_2568039 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2568039 = 11;
	Global_2566790[Global_2568039 /*104*/].f_18 = -1;
	Global_2566790[Global_2568039 /*104*/].f_18.f_1 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_2 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_3 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2566790[iVar2 /*104*/].f_24 == 0 || Global_2566790[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_190(Global_2566790[iVar2 /*104*/].f_18, Global_2566790[Global_2568039 /*104*/].f_18))
			{
				Global_2568039 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2568039 == 11)
	{
		return 0;
	}
	Global_2566790[Global_2568039 /*104*/].f_99[0] = 0;
	Global_2566790[Global_2568039 /*104*/].f_99[1] = 0;
	Global_2566790[Global_2568039 /*104*/].f_99[2] = 0;
	return 1;
}

void func_192()
{
	if (func_184(14))
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
		Global_14413 = func_193();
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

var func_193()
{
	func_194();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_194()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_197(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_196(unk_0x06736567F820A39E());
			if (func_195(iVar0) && (!func_184(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_195(Global_101186.f_1902.f_539.f_3549))
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

bool func_195(int iParam0)
{
	return iParam0 < 3;
}

int func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_197(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_197(int iParam0)
{
	if (func_195(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_198(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_180(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2990 = iParam10;
			unk_0xE27C8E42A97895CF(&Global_2568055, 0);
		}
		return 1;
	}
	return 0;
}

int func_199(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_200(2, iParam1);
	return iParam0;
}

void func_200(int iParam0, var uParam1)
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

char* func_201(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x2F6869889D97DFED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_200(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x71DD68B05C4C8FA5(sParam0);
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = func_205(iParam0);
	if (iVar0 == -1)
	{
		func_203(iParam0, 1);
		return 0;
	}
	Global_1348612[iVar0 /*5*/].f_4 = 1;
	return Global_1348612[iVar0 /*5*/].f_2;
}

void func_203(int iParam0, bool bParam1)
{
	if (!func_287(iParam0, 0, 1))
	{
		return;
	}
	if (func_205(iParam0) != -1)
	{
		return;
	}
	if (Global_1348775)
	{
		if (iParam0 == Global_1348775.f_1)
		{
			return;
		}
	}
	if (func_204(iParam0))
	{
		return;
	}
	if (Global_1348813 >= 32)
	{
		return;
	}
	Global_1348780[Global_1348813] = iParam0;
	Global_1348813++;
	if (bParam1)
	{
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348813)
	{
		if (Global_1348780[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!func_287(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348773 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348773)
	{
		if (Global_1348612[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iVar0 /*5*/].f_2) && unk_0x512211B77C9DF624(Global_1348612[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_206(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_206(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348773)
	{
		return;
	}
	if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348612[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xA7ABBEE53A1DE38B(Global_1348612[iParam0 /*5*/].f_2), 64);
			unk_0xCB1D1677ABBD32DC(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x48F723C28E5556E7(Global_1348612[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348773)
	{
		Global_1348612[iVar32 /*5*/] = { Global_1348612[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_207(&(Global_1348612[iVar32 /*5*/]));
	Global_1348773 = (Global_1348773 - 1);
}

void func_207(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_106();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x17CC0D5008835470())
	{
		uParam0->f_3 = unk_0x201D90648B2AE3CE();
	}
}

void func_208()
{
	Global_1332285.f_40.f_9 = 4;
}

int func_209(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_208();
	bVar0 = false;
	return func_175(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_210(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_211(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_211(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_106();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0x3DB24415831CBC43(iVar0);
		iVar1 = func_202(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1332285.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16773 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_201(sParam5, bParam6, &iVar3);
	uVar5 = func_199(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		iVar6++;
		if (!unk_0x226FA58470A21AEF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2F6869889D97DFED(sVar4, " "))
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
		if (unk_0x7DA173D4FD42F36B(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x226FA58470A21AEF(sVar2))
	{
		bVar12 = func_219(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_213(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 0))
	{
		func_178();
	}
	func_212();
	func_177();
	func_176();
	return 1;
}

void func_212()
{
	Global_1332285.f_40.f_9 = 3;
}

int func_213(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_214(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_214(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_192();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_101186.f_12817[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_218() == 0)
	{
		func_216();
		return 0;
	}
	func_215(Global_16779);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/]), sParam1, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_25 = iParam7;
	Global_101186.f_12907[Global_16779 /*104*/].f_26 = uParam8;
	Global_101186.f_12907[Global_16779 /*104*/].f_29 = uParam9;
	Global_101186.f_12907[Global_16779 /*104*/].f_30 = uParam12;
	Global_101186.f_12907[Global_16779 /*104*/].f_31 = uParam11;
	Global_101186.f_12907[Global_16779 /*104*/].f_28 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_187(0);
		func_187(2);
		func_187(1);
	}
	else
	{
		func_192();
		switch (iParam16)
		{
			case 3:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_187(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_187(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_187(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_187(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
		{
			Global_101186.f_12817[0 /*20*/].f_17 = 1;
			Global_101186.f_12817[1 /*20*/].f_17 = 1;
			Global_101186.f_12817[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101186.f_12817[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101186.f_12817[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101186.f_12817[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101186.f_12817[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_192();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_186())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_185(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_181(1);
			func_185(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_215(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_101186.f_12907[iParam0 /*104*/].f_18 = uVar0;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_216()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_217(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
}

int func_217(struct<6> Param0, struct<6> Param6)
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

int func_218()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0 || Global_101186.f_12907[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_217(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

int func_219(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 3;
	if (func_214(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2990 = iParam10;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			StringCopy(&Global_2971, sParam5, 64);
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_220(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
	}
	if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	func_212();
	bVar0 = true;
	if (func_211(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_174(120000);
		return 1;
	}
	return 0;
}

int func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x7DA173D4FD42F36B(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 4))
	{
		bVar0 = func_236(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_227(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x7DA173D4FD42F36B(iParam4, 3))
		{
			func_226(1);
		}
		if (unk_0x7DA173D4FD42F36B(iParam4, 5))
		{
			func_225(1);
		}
		func_224();
		func_177();
		func_223();
		func_222();
		return 1;
	}
	return 0;
}

void func_222()
{
	Global_2471999 = 0;
}

void func_223()
{
	Global_1332285.f_57 = 1;
	Global_1332285.f_57.f_1 = 0;
}

void func_224()
{
	Global_1332285.f_40.f_9 = 1;
}

void func_225(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2285, 0);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2285, 0);
	}
}

void func_226(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 20);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 20);
	}
}

int func_227(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_235(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_228(sParam3, iParam4, bParam7);
}

int func_228(char* sParam0, int iParam1, bool bParam2)
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
					func_234();
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
		if (func_100(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_233();
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
				func_192();
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
				if (func_232())
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
			if (func_231())
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
			func_230();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_229();
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
		func_234();
	}
	return 0;
}

void func_229()
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

void func_230()
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

int func_231()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_232()
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

void func_233()
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

void func_234()
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

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_236(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_235(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_228(sParam3, iParam4, bParam7);
}

int func_237(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
	}
	if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (func_239(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_238();
		func_224();
		func_177();
		func_223();
		func_222();
		return 1;
	}
	return 0;
}

void func_238()
{
	Global_16730 = 0;
}

bool func_239(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_235(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 1;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 1;
	Global_15766 = 0;
	StringCopy(&Global_15860, sParam5, 24);
	Global_2621441 = 0;
	return func_228(sParam3, iParam4, bParam8);
}

int func_240(var uParam0, char* sParam1, char* sParam2)
{
	if (func_242(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_241();
		func_177();
		func_223();
		return 1;
	}
	return 0;
}

void func_241()
{
	Global_1332285.f_40.f_9 = 2;
}

bool func_242(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_235(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_228(sParam2, iParam3, 0);
}

void func_243()
{
	Global_1332285.f_55 = Global_1332285.f_40.f_1;
	Global_1332285.f_55.f_1 = Global_1332285.f_40.f_10;
}

void func_244()
{
	Global_1332285.f_40 = 1;
}

bool func_245()
{
	return Global_1332285.f_40 == 1;
}

int func_246(int iParam0, int iParam1, int iParam2)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	if (Global_1332285.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1332285.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_247(int iParam0)
{
	if (!func_248())
	{
		return 0;
	}
	if (!Global_1332285.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_248()
{
	if (Global_1332285.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0)
{
	if (func_253())
	{
		return 0;
	}
	if (func_252())
	{
		return 0;
	}
	if (func_159(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1722816 || func_251())
	{
		return 0;
	}
	if (!unk_0x7DA173D4FD42F36B(uParam0, 6))
	{
		if (func_250())
		{
			return 0;
		}
	}
	return 1;
}

bool func_250()
{
	return unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1347434);
}

int func_251()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_252()
{
	return Global_1332285.f_40 == 3;
}

bool func_253()
{
	return func_231();
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	if (!func_252())
	{
		return 0;
	}
	return func_246(iParam0, iParam1, iParam2);
}

int func_255(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x9F7CDE7B20BCB675(&cVar0);
}

char* func_256()
{
	return "TXTMSG";
}

void func_257(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 28);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 28);
	}
}

bool func_258()
{
	return Global_1332285.f_57.f_1;
}

int func_259(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_261())
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_165(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_260()
{
	return Global_2469986.f_1;
}

int func_261()
{
	if (Global_1332473.f_2)
	{
		return 1;
	}
	return func_262();
}

bool func_262()
{
	return func_253();
}

void func_263(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(iParam2))
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

void func_264(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_192();
		if (iParam1 == 4)
		{
			Global_101186.f_32651[iParam0 /*29*/].f_12[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[2] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69521)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_265();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_265();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_265();
			}
		}
	}
}

void func_265()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x71DD68B05C4C8FA5(&(Global_101186.f_32651[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x999E5F6D1B49D87B("");
		StringCopy(&cVar16, unk_0x71DD68B05C4C8FA5(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x71DD68B05C4C8FA5("CELL_253");
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x999E5F6D1B49D87B("CELL_255");
		unk_0x4C5D86B5B659C953(&(Global_2893[1 /*6*/]));
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x99BCB15F954AF579(&Global_2283, 0);
}

int func_266()
{
	if (func_98())
	{
		return 0;
	}
	if (unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_279(unk_0xE0BDAFA1A39552D6(), 1))
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (func_267(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_267(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

bool func_268()
{
	return Global_2435608.f_2842.f_41;
}

int func_269()
{
	if (Global_14413.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_270(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		Var2 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (func_287(iVar1, 1, 1))
			{
				if (iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_271(iVar1))
					{
						if (unk_0xB7A628320EFF8E47(Var2, unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar1), 1)) < (fParam0 * fParam0))
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

bool func_271(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_135, 28);
}

bool func_272()
{
	return func_252();
}

void func_273()
{
	struct<2> Var0;
	
	Var0.f_0 = 254;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	unk_0xCCAB9843EFA5C08A(1, &Var0, 2, func_4(1, 1));
}

void func_274(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 3))
		{
			unk_0xE27C8E42A97895CF(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 3);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 3))
	{
		unk_0x99BCB15F954AF579(&(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135), 3);
	}
}

void func_275(var uParam0)
{
	if (func_125("FM_HTUT_GOP"))
	{
		func_276("FM_HTUT_GOP");
	}
	if (func_125("FM_HTUT_GO"))
	{
		func_276("FM_HTUT_GO");
	}
	if (func_125("FM_HTUT_WAT"))
	{
		func_276("FM_HTUT_WAT");
	}
	if (func_125("FM_HTUT_HLD"))
	{
		func_276("FM_HTUT_HLD");
	}
	if (func_125("FM_HTUT_HLS"))
	{
		func_276("FM_HTUT_HLS");
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_4))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_4));
	}
}

void func_276(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_31())
	{
		if (Global_1312577 == 11)
		{
			if (unk_0x2673375C0C31BF99(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
		}
		else
		{
			if (unk_0x2673375C0C31BF99(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_26();
}

int func_277()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_181;
}

bool func_278()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_279(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_280(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_280(int iParam0)
{
	return func_281(iParam0);
}

bool func_281(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_282()
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

int func_283()
{
	return Local_90.f_0;
}

int func_284(int iParam0)
{
	return iLocal_170[iParam0];
}

void func_285()
{
	unk_0x78515A98B064C30B(0);
	func_25();
	func_24(8, 0);
	unk_0x4C48684974B45ED5(1);
	if (func_271(unk_0xE0BDAFA1A39552D6()))
	{
		func_257(0);
	}
	func_286();
}

void func_286()
{
	unk_0xF5DF8F3392CDD07B();
}

int func_287(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_288()
{
	bool bVar0;
	
	func_294(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_293())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_292())
	{
		return 1;
	}
	if (func_291(157))
	{
		if (!func_290())
		{
			return 1;
		}
	}
	if (func_291(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_289() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_289()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_289()
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

bool func_290()
{
	return Global_2434839.f_575;
}

int func_291(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_292()
{
	return Global_2444095;
}

bool func_293()
{
	return Global_2434839.f_570;
}

void func_294(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_295(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_295(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_287(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(uVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(uVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_296(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_296(var uParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(uParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(uParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(uParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_297()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_298(struct<20> Param0)
{
	func_302(func_303(Param0.f_0), Param0);
	func_300(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_90, 79);
	unk_0xE51AD091F27ECBFF(&iLocal_170, 33);
	unk_0x8AAE4CDF72BA829A(0);
	if (!func_299())
	{
		func_285();
	}
	unk_0x99BCB15F954AF579(&Global_1714045, 1);
	unk_0x99BCB15F954AF579(&Global_1714045, 15);
	unk_0x99BCB15F954AF579(&Global_1714045, 14);
	func_24(8, 1);
	if (!func_271(unk_0xE0BDAFA1A39552D6()))
	{
		func_257(1);
	}
}

int func_299()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_293())
		{
			return 0;
		}
		if (func_291(155))
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

int func_300(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_286();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
				if (func_293())
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
				if (func_291(155))
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_286();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_286();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_286();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_301()
{
	return Global_1315888;
}

void func_302(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_286();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_303(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}


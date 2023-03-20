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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	struct<3> Local_54[2];
	float fLocal_61[2] = { 0f, 0f };
	struct<3> Local_64[3];
	float fLocal_74[3] = { 0f, 0f, 0f };
	struct<3> Local_78[4];
	float fLocal_91[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	var uLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113[2] = { 0, 0 };
	int iLocal_116[3] = { 0, 0, 0 };
	int iLocal_120[4] = { 0, 0, 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140[2] = { 0, 0 };
	int iLocal_143[2] = { 0, 0 };
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167[2] = { 0, 0 };
	var uLocal_170 = 0;
	struct<3> Local_171 = { 0, 0, 0 } ;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	var uLocal_184[2] = { 0, 0 };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	struct<3> Local_193 = { 0, 0, 0 } ;
	float fLocal_196 = 0f;
	struct<3> Local_197 = { 0, 0, 0 } ;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	var uLocal_209 = 0;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	char* sLocal_214 = NULL;
	var uLocal_215 = 0;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 16;
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
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	Local_127 = { -824.1719f, -187.654f, 36.5707f };
	Local_130 = { -1202.94f, -779.74f, 17.33f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	func_235();
	if (unk_0x7547D7CF93115D6D(11))
	{
		func_233();
		func_221();
	}
	if (iLocal_48 == 1)
	{
		if (!func_220(0) || !func_219(0))
		{
			unk_0x883793591E631A3B();
		}
	}
	else if (iLocal_48 == 2)
	{
		if (!func_220(14) || !func_219(14))
		{
			unk_0x883793591E631A3B();
		}
	}
	if (func_189(Local_49, 5, iLocal_133, 0, 0))
	{
		func_186(5);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3BCCCFB165E15A65() || iLocal_163)
		{
			if (!func_185())
			{
				if (func_184())
				{
					func_221();
				}
			}
			unk_0xC0B91B09CAEBF5AE("RE_SR", 0);
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				switch (iLocal_47)
				{
					case 0:
						if (iLocal_52)
						{
							iLocal_222 = 1;
							iLocal_47 = 1;
						}
						else
						{
							if (func_172())
							{
								func_221();
							}
							if (!bLocal_53)
							{
								func_171();
							}
							if (bLocal_53)
							{
								func_170();
							}
						}
						break;
					
					case 1:
						switch (iLocal_45)
						{
							case 0:
								if (!iLocal_136)
								{
									func_169();
									if (unk_0xB5D4753FD7641AB7(iLocal_152))
									{
										func_163();
										iLocal_136 = 1;
									}
								}
								else
								{
									if (iLocal_48 == 1)
									{
										unk_0x9871B9F47D2318AE();
									}
									func_160();
									unk_0x8DCA7E3E525E5911(iLocal_152);
									if (func_159())
									{
										if (!iLocal_158)
										{
											if (iLocal_48 == 1)
											{
												if (func_158(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
											else if (iLocal_48 == 2)
											{
												if (func_158(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
										}
									}
									if (func_157())
									{
										if (unk_0xD361727124133DF3(uLocal_192))
										{
											unk_0xA0A65B537B1F11EC(&uLocal_192);
										}
										unk_0x35667994C79745D2(unk_0xAF65E5A58BE87D95());
										unk_0xA54C914AEB391F49(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_113)
										{
											if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
											{
												unk_0x247B2966C6C2A4C1(iLocal_113[iVar0], unk_0x507DA4994C3D8EBD(), 0, 16);
												unk_0xA1E4BA3B17C6D931(iLocal_113[iVar0], 1);
												if (!unk_0xD361727124133DF3(uLocal_184[iVar0]))
												{
													uLocal_184[iVar0] = func_156(iLocal_113[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_48 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_116)
											{
												if (!unk_0x9F94F2CFDCA78C55(iLocal_116[iVar0]))
												{
													unk_0x5FD5E7ABD766D498(iLocal_116[iVar0], -1);
													unk_0xA1E4BA3B17C6D931(iLocal_116[iVar0], 1);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_120)
											{
												if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar0]))
												{
													unk_0x5FD5E7ABD766D498(iLocal_120[iVar0], -1);
													unk_0xA1E4BA3B17C6D931(iLocal_120[iVar0], 1);
												}
												iVar0++;
											}
										}
										unk_0x4095FD029041DD48(&iLocal_166);
										bLocal_139 = true;
										iLocal_45 = 1;
										iLocal_46 = 3;
									}
									if (func_155())
									{
										func_148(1);
										unk_0xC1B1E9A034A63A62(0);
										unk_0x054FC3D63A1AF7A4(88, Local_193, 15000f);
										iLocal_45 = 1;
									}
								}
								break;
							
							case 1:
								unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
								func_160();
								iVar1 = 0;
								while (iVar1 < iLocal_116)
								{
									if (unk_0xFD68187442384158(iLocal_116[iVar1]))
									{
										if (unk_0x6255AE2591FE7603(iLocal_116[iVar1], unk_0x507DA4994C3D8EBD(), 1))
										{
											func_147();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_120)
								{
									if (unk_0xFD68187442384158(iLocal_120[iVar1]))
									{
										if (unk_0x6255AE2591FE7603(iLocal_120[iVar1], unk_0x507DA4994C3D8EBD(), 1))
										{
											func_147();
										}
									}
									iVar1++;
								}
								switch (iLocal_46)
								{
									case 0:
										if (func_155())
										{
											func_143();
											func_141();
										}
										break;
									
									case 1:
										func_140();
										func_141();
										break;
									
									case 2:
										func_139();
										func_138();
										func_137();
										if (unk_0xC9D9444186B5A374() > 500)
										{
											if (unk_0xFD68187442384158(iLocal_166))
											{
												if (!unk_0xDF75DAAACD32E49E(iLocal_166))
												{
													func_136();
													unk_0x0A000D03DB5B545F(iLocal_113[0], joaat("weapon_unarmed"), 1);
													unk_0x26030664C7D28388(iLocal_166, iLocal_113[0], unk_0xA8918EDB277FC51C(iLocal_113[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (unk_0xEE93FF4158B54B09(Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f), 0))
										{
											if (!unk_0x9F94F2CFDCA78C55(iLocal_116[1]))
											{
												unk_0xF60985E3F774849A(iLocal_116[1], Local_102, 150f, -1, 0, 0);
												unk_0x2DC5B31EBB810396(iLocal_116[1], 0);
												unk_0xCA4DD92F1F2931F3(&(iLocal_116[1]));
											}
											if (!unk_0x9F94F2CFDCA78C55(iLocal_116[2]))
											{
												unk_0xF60985E3F774849A(iLocal_116[2], Local_102, 150f, -1, 0, 0);
												unk_0x2DC5B31EBB810396(iLocal_116[2], 0);
												unk_0xCA4DD92F1F2931F3(&(iLocal_116[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_112 - 1))
											{
												if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar2]))
												{
													unk_0x3C2614E45AB2F499(iLocal_120[iVar2], 1);
													unk_0xB5DC017AFD430D1B(&uLocal_151);
													if (iLocal_48 == 1)
													{
														unk_0xEC0A546609840086(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_48 == 2)
													{
														unk_0x3F07E364A21EBC20(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													unk_0xF60985E3F774849A(0, Local_102, 150f, -1, 0, 0);
													unk_0x6EE8A5CF9AC75F12(uLocal_151);
													unk_0x8229311A391A4EC6(iLocal_120[iVar2], uLocal_151);
													unk_0x9F77DFFC61FCB68C(&uLocal_151);
													unk_0xA1E4BA3B17C6D931(iLocal_120[iVar2], 1);
													unk_0x2DC5B31EBB810396(iLocal_120[iVar2], 0);
													unk_0x6A750A31D18DA81A(iLocal_120[iVar2], 1);
													unk_0xCA4DD92F1F2931F3(&(iLocal_120[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_135() || unk_0x83666F9FB8FEBD4B() > 20000)
										{
											if (!iLocal_163)
											{
												if (!unk_0xE5D56342B0FF1D0D(iLocal_113[0]))
												{
													func_128(0, 1, 1, 0);
													func_123(0);
													unk_0x330ABD0F05E764BB(1);
													unk_0x255259988FBEFACC(1);
													unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
													unk_0xEC0A546609840086(unk_0x507DA4994C3D8EBD(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, 0, 0, 0);
													if (iLocal_48 == 1)
													{
														if (unk_0xFD68187442384158(iLocal_166))
														{
															unk_0x07E0AE075425AA06(iLocal_166, 0);
															unk_0xCC8C6873CFB069A4(iLocal_166, 0, 0);
														}
													}
													else if (iLocal_48 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_116)
													{
														if (!unk_0x9F94F2CFDCA78C55(iLocal_116[iVar1]))
														{
															unk_0x2DC5B31EBB810396(iLocal_116[iVar1], 0);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_120)
													{
														if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar1]))
														{
															unk_0x2DC5B31EBB810396(iLocal_120[iVar1], 0);
														}
														iVar1++;
													}
													if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
													{
														unk_0x2DC5B31EBB810396(iLocal_116[0], 1);
														unk_0xB5DC017AFD430D1B(&uLocal_151);
														unk_0xEC0A546609840086(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
														unk_0x6EE8A5CF9AC75F12(uLocal_151);
														unk_0x8229311A391A4EC6(iLocal_116[0], uLocal_151);
														unk_0x9F77DFFC61FCB68C(&uLocal_151);
														unk_0xA1E4BA3B17C6D931(iLocal_116[0], 1);
													}
													if (!func_122())
													{
														func_111(&uLocal_231, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_163 = 1;
												}
											}
										}
										if (!iLocal_138)
										{
											if (unk_0x22605DE2E6933CF2(unk_0x507DA4994C3D8EBD(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (unk_0x5132EC78980FBED7(unk_0x507DA4994C3D8EBD(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (unk_0x5132EC78980FBED7(unk_0x507DA4994C3D8EBD(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_110(64)))
												{
													unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
													iLocal_138 = 1;
												}
											}
										}
										if (iLocal_48 == 1)
										{
											if (!func_155())
											{
												if (!iLocal_179)
												{
													iLocal_179 = 1;
												}
											}
											if (!bLocal_160)
											{
												func_109();
											}
											if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && unk_0xCA8794CE207FC6D5(iLocal_174, 0))
											{
												if (unk_0x53170344050F2301(iLocal_113[0], iLocal_174, 0))
												{
													if (unk_0xFD68187442384158(iLocal_166))
													{
														unk_0x4095FD029041DD48(&iLocal_166);
														bLocal_160 = true;
													}
												}
											}
											if (func_108() && !iLocal_161)
											{
												if (unk_0xD361727124133DF3(uLocal_184[0]))
												{
													unk_0xA0A65B537B1F11EC(&(uLocal_184[0]));
												}
												if (unk_0xD361727124133DF3(uLocal_184[1]))
												{
													unk_0xA0A65B537B1F11EC(&(uLocal_184[1]));
												}
												if (!unk_0xD361727124133DF3(uLocal_190))
												{
													uLocal_190 = func_106(iLocal_174, 1, 0);
												}
												bLocal_160 = true;
												if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
												{
													unk_0x3A1E687904400847(iLocal_183, 17, 1);
													unk_0x3A1E687904400847(iLocal_183, 6, 1);
													unk_0x3A1E687904400847(iLocal_183, 1, 1);
													unk_0x9C373E78BA27BAA4(iLocal_183, iLocal_174, unk_0x507DA4994C3D8EBD(), 8, 16f, 786469, -1f, -1f, 1);
													unk_0xA1E4BA3B17C6D931(iLocal_183, 1);
													iLocal_161 = 1;
												}
											}
											if (iLocal_161 && !iLocal_223)
											{
												if (unk_0xCA8794CE207FC6D5(iLocal_174, 0) && !unk_0x9F94F2CFDCA78C55(iLocal_183))
												{
													if (!unk_0x594EB70937EC1486(iLocal_174, Local_54[0 /*3*/], 20f, 20f, 10f, 0, 1, 0))
													{
														unk_0x9C373E78BA27BAA4(iLocal_183, iLocal_174, unk_0x507DA4994C3D8EBD(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_223 = 1;
													}
												}
											}
											if (func_105())
											{
												if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
												{
													if (unk_0xCA8794CE207FC6D5(iLocal_174, 0))
													{
														if (!iLocal_162)
														{
															unk_0x3A1E687904400847(iLocal_183, 17, 1);
															unk_0x3A1E687904400847(iLocal_183, 6, 1);
															unk_0x3A1E687904400847(iLocal_183, 1, 1);
															unk_0x9C373E78BA27BAA4(iLocal_183, iLocal_174, unk_0x507DA4994C3D8EBD(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_162 = 1;
														}
														if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
														{
															if (unk_0x53170344050F2301(iLocal_113[0], iLocal_174, 0))
															{
																if (unk_0xD361727124133DF3(uLocal_184[0]))
																{
																	unk_0xA0A65B537B1F11EC(&(uLocal_184[0]));
																}
																if (unk_0xD361727124133DF3(uLocal_184[1]))
																{
																	unk_0xA0A65B537B1F11EC(&(uLocal_184[1]));
																}
																if (!unk_0xD361727124133DF3(uLocal_190))
																{
																	uLocal_190 = func_106(iLocal_174, 1, 0);
																}
																bLocal_160 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_110 - 1))
												{
													if (!iLocal_140[iVar3])
													{
														if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar3]))
														{
															if (unk_0x2A24448FF232F834(iLocal_113[iVar3], 0) && !unk_0x9F94F2CFDCA78C55(iLocal_183))
															{
																unk_0xE9A858D330662DC7(iLocal_113[iVar3], unk_0x507DA4994C3D8EBD(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_140[iVar3] = 1;
															}
															else if (!unk_0xD361727124133DF3(uLocal_191))
															{
																unk_0x247B2966C6C2A4C1(iLocal_113[iVar3], unk_0x507DA4994C3D8EBD(), 0, 16);
																unk_0xA1E4BA3B17C6D931(iLocal_113[iVar3], 1);
																if (unk_0xD361727124133DF3(uLocal_190))
																{
																	unk_0xA0A65B537B1F11EC(&uLocal_190);
																}
																if (!unk_0xD361727124133DF3(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = func_156(iLocal_113[iVar3], 1, 145);
																}
																iLocal_140[iVar3] = 1;
															}
														}
													}
													if (!iLocal_143[iVar3])
													{
														if (unk_0xCA8794CE207FC6D5(iLocal_174, 0))
														{
															if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar3]))
															{
																if ((unk_0x9F94F2CFDCA78C55(iLocal_183) || unk_0xC51FBEBD87CFD69C(iLocal_174, -1)) || unk_0xEF57771119A32DB2(iLocal_113[iVar3]))
																{
																	unk_0x3C2614E45AB2F499(iLocal_113[iVar3], 1);
																	unk_0xB5DC017AFD430D1B(&uLocal_151);
																	unk_0x48367A1F7C9A1041(0, 0, 0);
																	unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
																	unk_0x6EE8A5CF9AC75F12(uLocal_151);
																	unk_0x8229311A391A4EC6(iLocal_113[iVar3], uLocal_151);
																	unk_0x9F77DFFC61FCB68C(&uLocal_151);
																	unk_0xA1E4BA3B17C6D931(iLocal_113[iVar3], 1);
																	if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
																	{
																		unk_0x3C2614E45AB2F499(iLocal_183, 1);
																		unk_0xB5DC017AFD430D1B(&uLocal_151);
																		unk_0x48367A1F7C9A1041(0, 0, 0);
																		unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
																		unk_0x6EE8A5CF9AC75F12(uLocal_151);
																		unk_0x8229311A391A4EC6(iLocal_183, uLocal_151);
																		unk_0x9F77DFFC61FCB68C(&uLocal_151);
																		unk_0xA1E4BA3B17C6D931(iLocal_183, 1);
																	}
																	if (!unk_0xD361727124133DF3(uLocal_191))
																	{
																		if (unk_0xD361727124133DF3(uLocal_190))
																		{
																			unk_0xA0A65B537B1F11EC(&uLocal_190);
																		}
																		if (!unk_0xD361727124133DF3(uLocal_184[iVar3]))
																		{
																			uLocal_184[iVar3] = func_156(iLocal_113[iVar3], 1, 145);
																		}
																	}
																	iLocal_143[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar3]))
															{
																unk_0x3C2614E45AB2F499(iLocal_113[iVar3], 1);
																unk_0xB5DC017AFD430D1B(&uLocal_151);
																unk_0x48367A1F7C9A1041(0, 0, 0);
																unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
																unk_0x6EE8A5CF9AC75F12(uLocal_151);
																unk_0x8229311A391A4EC6(iLocal_113[iVar3], uLocal_151);
																unk_0x9F77DFFC61FCB68C(&uLocal_151);
																unk_0xA1E4BA3B17C6D931(iLocal_113[iVar3], 1);
															}
															if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
															{
																unk_0x3C2614E45AB2F499(iLocal_183, 1);
																unk_0xB5DC017AFD430D1B(&uLocal_151);
																unk_0x48367A1F7C9A1041(0, 0, 0);
																unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
																unk_0x6EE8A5CF9AC75F12(uLocal_151);
																unk_0x8229311A391A4EC6(iLocal_183, uLocal_151);
																unk_0x9F77DFFC61FCB68C(&uLocal_151);
																unk_0xA1E4BA3B17C6D931(iLocal_183, 1);
															}
															if (!unk_0xD361727124133DF3(uLocal_191))
															{
																if (unk_0xD361727124133DF3(uLocal_190))
																{
																	unk_0xA0A65B537B1F11EC(&uLocal_190);
																}
																if (!unk_0xD361727124133DF3(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = func_156(iLocal_113[iVar3], 1, 145);
																}
																iLocal_143[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_160)
											{
												if (func_104())
												{
													func_103();
													func_100();
													iLocal_46 = 9;
												}
											}
										}
										else if (iLocal_48 == 2)
										{
											if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
											{
												if (unk_0xD361727124133DF3(uLocal_184[0]))
												{
													func_99(&uLocal_231, 3);
													unk_0xA0A65B537B1F11EC(&(uLocal_184[0]));
												}
											}
											if (unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
											{
												if (unk_0xD361727124133DF3(uLocal_184[1]))
												{
													func_99(&uLocal_231, 4);
													unk_0xA0A65B537B1F11EC(&(uLocal_184[1]));
												}
											}
											if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
											{
												if (unk_0xFD68187442384158(iLocal_166))
												{
													if (unk_0xDF75DAAACD32E49E(iLocal_166))
													{
														unk_0x5B97F41A7BE54877(iLocal_166, 1, 1);
													}
													unk_0x4095FD029041DD48(&iLocal_166);
													func_103();
													func_100();
													iLocal_46 = 9;
												}
											}
											else if (unk_0x6255AE2591FE7603(iLocal_113[0], unk_0x507DA4994C3D8EBD(), 1))
											{
												if (unk_0xFD68187442384158(iLocal_166))
												{
													if (unk_0xDF75DAAACD32E49E(iLocal_166))
													{
														unk_0x5B97F41A7BE54877(iLocal_166, 1, 1);
													}
													unk_0x4095FD029041DD48(&iLocal_166);
													func_103();
													func_100();
													iLocal_46 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_140();
										break;
									
									case 9:
										func_139();
										func_97();
										break;
									
									case 10:
										func_94(2);
										func_93(uLocal_192, &uLocal_228);
										if (iLocal_48 == 1)
										{
											if (!iLocal_159)
											{
												unk_0x395C5D98343F0040("random@robbery");
												if (!unk_0xCE40391AB65FE305("random@robbery"))
												{
													unk_0x395C5D98343F0040("random@robbery");
												}
												else if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
												{
													unk_0xF85858E5CBF4D9F0(iLocal_116[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													unk_0x248DC16118AE5035(iLocal_116[0], 47.0582f);
													unk_0xEC0A546609840086(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0x9F94F2CFDCA78C55(iLocal_116[1]))
													{
														unk_0xF60985E3F774849A(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														unk_0x2DC5B31EBB810396(iLocal_116[1], 0);
														unk_0xCA4DD92F1F2931F3(&(iLocal_116[1]));
													}
													if (!unk_0x9F94F2CFDCA78C55(iLocal_116[2]))
													{
														unk_0xF60985E3F774849A(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														unk_0x2DC5B31EBB810396(iLocal_116[2], 0);
														unk_0xCA4DD92F1F2931F3(&(iLocal_116[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_112 - 1))
													{
														if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar4]))
														{
															unk_0xB5DC017AFD430D1B(&uLocal_151);
															unk_0xEC0A546609840086(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															unk_0xF60985E3F774849A(0, Local_102, 150f, -1, 0, 0);
															unk_0x6EE8A5CF9AC75F12(uLocal_151);
															unk_0x8229311A391A4EC6(iLocal_120[iVar4], uLocal_151);
															unk_0x9F77DFFC61FCB68C(&uLocal_151);
															unk_0xA1E4BA3B17C6D931(iLocal_120[iVar4], 1);
															unk_0x2DC5B31EBB810396(iLocal_120[iVar4], 0);
															unk_0x6A750A31D18DA81A(iLocal_120[iVar4], 1);
															unk_0xCA4DD92F1F2931F3(&(iLocal_120[iVar4]));
														}
														iVar4++;
													}
													iLocal_159 = 1;
												}
											}
											func_70(6, 3);
											func_70(7, 3);
										}
										else if (iLocal_48 == 2)
										{
											if (!iLocal_159)
											{
												unk_0x395C5D98343F0040("random@robbery");
												if (!unk_0xCE40391AB65FE305("random@robbery"))
												{
													unk_0x395C5D98343F0040("random@robbery");
												}
												else if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
												{
													unk_0xF85858E5CBF4D9F0(iLocal_116[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													unk_0x248DC16118AE5035(iLocal_116[0], 205.7753f);
													unk_0xEC0A546609840086(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0x9F94F2CFDCA78C55(iLocal_116[1]))
													{
														unk_0xF60985E3F774849A(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														unk_0x2DC5B31EBB810396(iLocal_116[1], 0);
														unk_0xCA4DD92F1F2931F3(&(iLocal_116[1]));
													}
													if (!unk_0x9F94F2CFDCA78C55(iLocal_116[2]))
													{
														unk_0xF60985E3F774849A(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														unk_0x2DC5B31EBB810396(iLocal_116[2], 0);
														unk_0xCA4DD92F1F2931F3(&(iLocal_116[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_112 - 1))
													{
														if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar5]))
														{
															unk_0xF60985E3F774849A(iLocal_120[iVar5], Local_102, 150f, -1, 0, 0);
															unk_0x2DC5B31EBB810396(iLocal_120[iVar5], 0);
															unk_0x6A750A31D18DA81A(iLocal_120[iVar5], 1);
															unk_0xCA4DD92F1F2931F3(&(iLocal_120[iVar5]));
														}
														iVar5++;
													}
													iLocal_159 = 1;
												}
											}
											if (unk_0x93EADDF7E52E1671(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												unk_0x460FF6F9E3EECC69(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_159())
										{
										}
										if ((func_155() && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && !unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_46 = 11;
										}
										if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), func_235()) > (fLocal_196 + 150f))
										{
											iLocal_46 = 12;
										}
										if (unk_0x83666F9FB8FEBD4B() > 120000)
										{
											iLocal_46 = 14;
										}
										if (unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
										{
											func_69(2);
											func_48();
										}
										else if (unk_0x6255AE2591FE7603(iLocal_116[0], unk_0x507DA4994C3D8EBD(), 1))
										{
											func_69(2);
											func_48();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_69(2);
										func_48();
										break;
									
									case 7:
										func_48();
										break;
									
									case 14:
										func_69(2);
										func_48();
										break;
									
									case 13:
										if (!iLocal_224)
										{
											if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
											{
												unk_0xAC57FBF981AB03F4(iLocal_116[0]);
												if (iLocal_48 == 1)
												{
													func_111(&uLocal_231, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_48 == 2)
												{
													func_111(&uLocal_231, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												unk_0xEBD837FADD98C7B2(iLocal_116[0], 20000);
												unk_0xA1E4BA3B17C6D931(iLocal_116[0], 1);
												unk_0x2DC5B31EBB810396(iLocal_116[0], 0);
												iLocal_224 = 1;
											}
										}
										if (!func_122())
										{
											iLocal_45 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_147();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_221();
		}
	}
}

void func_1()
{
	if (func_155())
	{
		if (unk_0xD361727124133DF3(uLocal_192))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_192);
		}
		if (!iLocal_181)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
			{
				func_128(1, 1, 1, 0);
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
				unk_0x4A4C1A1BC79EFE8F(1);
				unk_0x13196E39740F8C20(unk_0xBF1B13057E5119A4(iLocal_116[0], 1), 20f, 0);
				unk_0x330ABD0F05E764BB(0);
				unk_0x255259988FBEFACC(0);
				if (iLocal_48 == 1)
				{
					bLocal_180 = true;
				}
				else if (iLocal_48 == 2)
				{
				}
				iLocal_181 = 1;
			}
		}
	}
	if (!bLocal_180)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
		{
			bLocal_180 = true;
		}
	}
	if (bLocal_180)
	{
		if (!iLocal_182)
		{
			unk_0xB0CAF046D7045AFD(unk_0x507DA4994C3D8EBD(), 1);
			unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
			if (unk_0xD361727124133DF3(uLocal_192))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_192);
			}
			Local_197 = { unk_0xBF1B13057E5119A4(iLocal_116[0], 0) };
			if (iLocal_48 == 1)
			{
				Local_197 = { -820.77f, -186.514f, 36.569f };
				Local_203 = { 0f, 0f, -60f };
				fLocal_216 = 0.855f;
				sLocal_210 = "random@robbery";
				sLocal_211 = "return_bag_stand_b";
				sLocal_212 = "return_bag_stand_b_female";
				sLocal_213 = "return_bag_stand_b_bag";
				sLocal_214 = "return_bag_stand_b_cam";
			}
			else if (iLocal_48 == 2)
			{
				Local_197 = { -1198.295f, -776.533f, 16.326f };
				Local_203 = { 0f, 0f, -60.25f };
				fLocal_216 = 0.785f;
				sLocal_210 = "random@robbery";
				sLocal_211 = "return_bag_stand_c_rt";
				sLocal_212 = "return_bag_stand_c_rt_female";
				sLocal_213 = "return_bag_stand_c_rt_bag";
				sLocal_214 = "return_bag_stand_c_rt_cam";
			}
			uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_197, Local_203, 2);
			uLocal_209 = unk_0x07A7435490ED9AAB("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0xB754DFF4436CE5FF(uLocal_209, uLocal_215, sLocal_214, sLocal_210);
			unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
			unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), uLocal_215, sLocal_210, sLocal_211, 1000f, -2f, 5, 0, 1148846080, 0);
			unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
			unk_0xCEBD1B99CF343672(iLocal_116[0]);
			unk_0x206610E40EE4D7D9(iLocal_116[0], uLocal_215, sLocal_210, sLocal_212, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x243553B40CC46CFE(iLocal_116[0], 0, 0);
			iLocal_166 = unk_0xCEC985247737A30E(joaat("prop_cs_duffel_01"), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 1, 1, 0);
			unk_0x763BBCB2253879B8(iLocal_166, uLocal_215, sLocal_213, sLocal_210, 1000f, 1090519040, 0, 1148846080);
			if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
			{
				func_47();
				unk_0x6F430D0F1783A56E(uLocal_209, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_182 = 1;
			}
		}
	}
	if ((unk_0x83666F9FB8FEBD4B() > 1500 && iLocal_182) && !iLocal_157)
	{
		func_45();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_48 == 1)
		{
			func_111(&uLocal_231, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_48 == 2)
		{
			func_111(&uLocal_231, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_157 = 1;
	}
	if (unk_0x6385FE4ECBDF05D2(uLocal_215) > fLocal_216 && iLocal_182)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
		{
			unk_0xFBF796BC19E6FC23(iLocal_116[0], iLocal_188);
			unk_0xAC57FBF981AB03F4(iLocal_116[0]);
			unk_0xB5DC017AFD430D1B(&uLocal_151);
			unk_0xEC0A546609840086(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_151);
			unk_0x8229311A391A4EC6(iLocal_116[0], uLocal_151);
			unk_0x9F77DFFC61FCB68C(&uLocal_151);
			unk_0xA1E4BA3B17C6D931(iLocal_116[0], 1);
		}
		if (unk_0xFD68187442384158(iLocal_166))
		{
			unk_0x4095FD029041DD48(&iLocal_166);
		}
		unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
		unk_0x832DBDBEA29906F5(unk_0x507DA4994C3D8EBD(), joaat("MotionState_Walk"), 0, 0, 0);
		unk_0x2D7FE4B6E3F31F41(unk_0xAF65E5A58BE87D95(), 1f, 650, 0, 1, 0);
		func_128(0, 1, 1, 0);
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 4);
		unk_0x330ABD0F05E764BB(1);
		unk_0x255259988FBEFACC(1);
		unk_0xB0CAF046D7045AFD(unk_0x507DA4994C3D8EBD(), 0);
		unk_0xBE5E0E5A454F4D6A(0f);
		unk_0x28D21A983751927B(0, 0, 3, 0);
		unk_0x44151B6071157DDD(uLocal_209, 0);
		func_44();
		func_43(joaat("rc_wallets_returned"), 1);
		if (iLocal_48 == 1)
		{
			func_12(func_37(), 1, iLocal_188);
			func_2(0, func_37(), 1);
		}
		else if (iLocal_48 == 2)
		{
			func_12(func_37(), 1, iLocal_188);
			func_2(14, func_37(), 1);
		}
		func_69(3);
		func_48();
	}
}

void func_2(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!func_11(iParam0, iVar0, 0))
		{
			func_10(iParam0, iVar0, 0);
		}
	}
	else if (func_11(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312736;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

int func_9()
{
	return Global_24444;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_9() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_13(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_36();
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
					func_35(99, 1);
					func_43(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_43(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_43(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_21(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_20(5))
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
							func_43(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_43(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_43(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_20(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_43(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_43(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_43(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_43(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_43(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_43(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_43(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_43(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_43(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x00ADB26EA48763F7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_43(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_43(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_43(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_43(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_43(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_43(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_20(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_43(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_43(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_43(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_43(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_43(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_43(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_19(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_35(95, iParam3);
					break;
				
				case 1:
					func_35(97, iParam3);
					break;
				
				case 2:
					func_35(96, iParam3);
					break;
			}
			func_35(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_43(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_43(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_43(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_15(iParam0);
	if (Global_34909 == 15)
	{
		func_14(0);
	}
	return 1;
}

void func_14(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_16(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_18() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_18() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_17(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(int iParam0)
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

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_19(int iParam0)
{
	func_35(93, iParam0);
	func_35(29, iParam0);
	func_35(30, iParam0);
}

bool func_20(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_18() /*8053*/].f_5756.f_10, iParam0);
}

int func_21(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_34(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_22(27, 1);
	return 1;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_23(iParam0, iParam1);
}

int func_23(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_33(&Global_2543759))
	{
		if (func_31(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_24(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_31(uParam0, iParam1))
	{
		return 0;
	}
	func_27(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_25(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_25(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_31(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_26(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_26(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_27(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_30(uParam0, iVar0);
		iVar0++;
	}
	func_28(&(uParam0->f_62), (8f - 0.5f));
}

void func_28(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_29()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

void func_30(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_31(var uParam0, int iParam1)
{
	return func_32(uParam0, iParam1) != -1;
}

int func_32(var uParam0, int iParam1)
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

bool func_33(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_34(int iParam0, int iParam1)
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
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

void func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_36()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_37()
{
	func_38();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_42(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_41(unk_0x507DA4994C3D8EBD());
			if (func_40(iVar0) && (!func_39(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_40(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_39(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_44()
{
	if (iLocal_48 == 1)
	{
		if (unk_0xFD68187442384158(iLocal_116[0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
			{
				unk_0x2DC5B31EBB810396(iLocal_116[0], 0);
				unk_0xCA4DD92F1F2931F3(&(iLocal_116[0]));
			}
		}
		if (unk_0xFD68187442384158(iLocal_116[1]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_116[1]))
			{
				unk_0x2DC5B31EBB810396(iLocal_116[1], 0);
				unk_0xCA4DD92F1F2931F3(&(iLocal_116[1]));
			}
		}
		if (unk_0xFD68187442384158(iLocal_120[0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_120[0]))
			{
				unk_0x2DC5B31EBB810396(iLocal_120[0], 0);
				unk_0xCA4DD92F1F2931F3(&(iLocal_120[0]));
			}
		}
		if (unk_0xFD68187442384158(iLocal_120[1]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_120[1]))
			{
				unk_0x2DC5B31EBB810396(iLocal_120[1], 0);
				unk_0xCA4DD92F1F2931F3(&(iLocal_120[1]));
			}
		}
		if (unk_0xFD68187442384158(iLocal_120[2]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_120[2]))
			{
				unk_0xF85858E5CBF4D9F0(iLocal_120[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(iLocal_120[2], 167.7909f);
				unk_0x2DC5B31EBB810396(iLocal_120[2], 0);
				unk_0xCA4DD92F1F2931F3(&(iLocal_120[2]));
			}
		}
	}
}

void func_45()
{
	Global_14558 = 0;
	func_46();
}

void func_46()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

void func_47()
{
	if (iLocal_48 == 1)
	{
		if (unk_0xCA8794CE207FC6D5(unk_0xF6EA6ED8FFB5B505(), 0))
		{
			if (unk_0x594EB70937EC1486(unk_0xF6EA6ED8FFB5B505(), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0xF6EA6ED8FFB5B505(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xF85858E5CBF4D9F0(unk_0xF6EA6ED8FFB5B505(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				unk_0xD90C30D269B19096(unk_0xF6EA6ED8FFB5B505());
			}
		}
		unk_0x4BCBC9058A5CECE1(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		if (unk_0xCA8794CE207FC6D5(unk_0xF6EA6ED8FFB5B505(), 0))
		{
			if (unk_0x594EB70937EC1486(unk_0xF6EA6ED8FFB5B505(), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0xF6EA6ED8FFB5B505(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xF85858E5CBF4D9F0(unk_0xF6EA6ED8FFB5B505(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				unk_0xD90C30D269B19096(unk_0xF6EA6ED8FFB5B505());
			}
		}
		unk_0x4BCBC9058A5CECE1(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, 0);
	}
}

void func_48()
{
	while (!func_68())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC2AE0675A3BC6FEE(unk_0xAF65E5A58BE87D95(), 1);
	func_52(5, iLocal_133);
	func_49();
	func_221();
}

void func_49()
{
	func_50();
}

int func_50()
{
	if (func_51(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_51(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_52(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_65(iParam0))
	{
		func_64(iParam0, iParam1);
		if (!func_63(51))
		{
			func_59("RE_REWARD", 1, 0, 4000, 10000, func_62(), 0, 138, 0);
			func_58(51);
		}
		if (func_57(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_56(iParam0, iParam1) != 322)
		{
			func_53(func_56(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_69(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_69(7);
			}
			else
			{
				func_69(1);
			}
		}
	}
}

void func_53(int iParam0, var uParam1, var uParam2)
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
		func_55((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_54();
	}
}

void func_54()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_34(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_9() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_50();
				}
			}
		}
	}
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_56(int iParam0, int iParam1)
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

int func_57(int iParam0)
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

void func_58(int iParam0)
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_60(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_60(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_61();
	}
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_62()
{
	func_38();
	switch (Global_97173.f_1729.f_539.f_3213)
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

int func_63(int iParam0)
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_64(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_65(int iParam0)
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

int func_66()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_67(Var0);
	return uVar16;
}

int func_67(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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

int func_68()
{
	return 1;
}

void func_69(int iParam0)
{
	Global_97159 = iParam0;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68067)
		{
			iVar0 = Global_2421967.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_97173.f_5518[iParam0];
		}
		if (iVar0 != iParam1 || unk_0x61D8FEAF64881CDA(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
				Global_31254[iParam0] = iParam1;
			}
			else if (Global_68067)
			{
				Global_2421967.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_97173.f_5518[iParam0] = iParam1;
			}
			unk_0x3DBE2A7AF9E71C82(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
			func_72(iParam0);
			if (unk_0x61D8FEAF64881CDA(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_71(iParam0);
			}
		}
	}
}

void func_71(int iParam0)
{
	if (!unk_0x61D8FEAF64881CDA(Global_31723.f_227[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_31723.f_227[(iParam0 / 32)]), (iParam0 % 23));
		Global_31723[Global_31723.f_226] = iParam0;
		Global_31723.f_226++;
	}
}

void func_72(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_92())
	{
		return;
	}
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		return;
	}
	Var0 = { func_91(iParam0) };
	if (unk_0x61D8FEAF64881CDA(Var0.f_4, 2))
	{
		func_77(iParam0, &Var0);
	}
	if (!unk_0x0494E5E4C0E87278(Var0.f_5))
	{
		if (unk_0x3574DD38C5FAC832())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x8FE221761D524CFE(Var0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 1);
	if ((unk_0x61D8FEAF64881CDA(Global_30793[(iParam0 / 32)], (iParam0 % 32)) && Global_31254[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0xCD27BF29FB9012E2(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
		Global_30802[iParam0] = 0;
	}
	if (unk_0x25531002BCF0D968(joaat("startup_positioning")) == 0)
	{
		if (unk_0x61D8FEAF64881CDA(Global_31028[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_89836.f_288 == 0)
				{
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
					{
						Global_89836.f_288 = unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD());
					}
				}
				iVar11 = Global_89836.f_288;
				iVar12 = unk_0x9C1CBD99573D4312(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x3DBE2A7AF9E71C82(&(Global_30793[(iParam0 / 32)]), (iParam0 % 32));
					Global_31254[iParam0] = 3;
					unk_0x3DBE2A7AF9E71C82(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xCD27BF29FB9012E2(&(Global_31028[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_30793[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31254[iParam0];
	}
	else if (unk_0x61D8FEAF64881CDA(Var0.f_4, 0))
	{
		if (Global_97173.f_7311)
		{
			iVar9 = func_74(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Var0.f_4, 1) && unk_0x25531002BCF0D968(joaat("ambient_solomon")) == 0)
	{
		if (func_73())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_97173.f_5518[iParam0];
	}
	if (Global_31480[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0x61D8FEAF64881CDA(Global_30784[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0x61D8FEAF64881CDA(Global_30793[(iParam0 / 32)], (iParam0 % 32)) || (Global_30802[iParam0] == 0 && Global_31254[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30783)
		{
		}
		else
		{
			if (!unk_0x0494E5E4C0E87278(Var0.f_5))
			{
				unk_0x047AAC79564A8EB7(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0x61D8FEAF64881CDA(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x75E01E8585722F89(unk_0x1F0F9203A3EBA8B9(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD());
						iVar15 = unk_0x9C1CBD99573D4312(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x9CDA01A72E31F0FA(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x9D9DF796E80DD27E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0xCD27BF29FB9012E2(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
			Global_31480[iParam0] = iVar9;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_30793[(iParam0 / 32)], (iParam0 % 32)) && Global_31254[iParam0] != 2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_30784[(iParam0 / 32)]), (iParam0 % 32));
		func_71(iParam0);
		if (Global_30802[iParam0] < 2)
		{
			Global_30802[iParam0]++;
		}
	}
}

int func_73()
{
	if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
	{
		return 0;
	}
	switch (func_37())
	{
		case 0:
			if (Global_97173.f_7311.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_97173.f_7311.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_97173.f_7311.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_37();
	if (func_75(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[5], 0) || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[6], 0))
			{
				return 0;
			}
		}
		if (func_40(iVar0))
		{
			if (unk_0x61D8FEAF64881CDA(Global_85216[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[0], 0))
				{
					return 0;
				}
			}
			if (func_40(iVar0))
			{
				if (unk_0x61D8FEAF64881CDA(Global_85216[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[5], 0))
				{
					return 0;
				}
			}
			if (func_40(iVar0))
			{
				if (unk_0x61D8FEAF64881CDA(Global_85216[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[6], 0))
				{
					return 0;
				}
			}
			if (func_40(iVar0))
			{
				if (unk_0x61D8FEAF64881CDA(Global_85216[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[2], 0))
				{
					return 0;
				}
				if (func_40(iVar0))
				{
					if (unk_0x61D8FEAF64881CDA(Global_85216[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[1], 0))
				{
					return 0;
				}
				if (func_40(iVar0))
				{
					if (unk_0x61D8FEAF64881CDA(Global_85216[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_5486[3], 0))
				{
					return 0;
				}
			}
			if (func_40(iVar0))
			{
				if (unk_0x61D8FEAF64881CDA(Global_85216[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				iVar0 = unk_0x26EA758C2A691D06(func_76(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_76(var uParam0)
{
	return uParam0;
}

void func_77(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x61D8FEAF64881CDA(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_80();
	iVar1 = func_79(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_78(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_78(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 12f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_78(iParam0))
			{
				if ((unk_0x25531002BCF0D968(joaat("jewelry_heist")) == 0 && unk_0x25531002BCF0D968(joaat("jewelry_setup1")) == 0) && !Global_97173.f_7311.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_97173.f_5518[iParam0] = 0;
							unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_97173.f_7311.f_99.f_58[4])
				{
					Global_97173.f_5518[iParam0] = 0;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else if (Global_97173.f_7311.f_99.f_58[4])
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			else if (unk_0x25531002BCF0D968(joaat("jewelry_heist")) == 0 && unk_0x25531002BCF0D968(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 18f)
					{
						Global_97173.f_5518[iParam0] = 1;
						unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 18f)
					{
						Global_97173.f_5518[iParam0] = 1;
						unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_78(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_97173.f_5518[iParam0] = 0;
						unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 40f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), *uParam1) >= 40f)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_78(iParam0))
			{
				if (unk_0x25531002BCF0D968(joaat("assassin_valet")) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else if (unk_0x25531002BCF0D968(joaat("assassin_valet")) > 0)
			{
				Global_97173.f_5518[iParam0] = 0;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x25531002BCF0D968(Global_80977[70 /*34*/].f_6) == 0)
			{
				if (!func_78(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x25531002BCF0D968(joaat("omega2")) == 0)
			{
				if (!func_78(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_78(iParam0) && unk_0x25531002BCF0D968(Global_80977[26 /*34*/].f_6) == 0)
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_78(iParam0))
			{
				if (unk_0x25531002BCF0D968(Global_80977[43 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_78(iParam0))
			{
				if (unk_0x25531002BCF0D968(Global_80977[93 /*34*/].f_6) > 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_78(iParam0))
			{
				if (unk_0x25531002BCF0D968(Global_80977[8 /*34*/].f_6) == 0 && unk_0x25531002BCF0D968(Global_80977[10 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_78(iParam0))
			{
				if (unk_0x25531002BCF0D968(Global_80977[47 /*34*/].f_6) == 0)
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x25531002BCF0D968(Global_80977[70 /*34*/].f_6) == 0)
			{
				if (!func_78(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x25531002BCF0D968(Global_80977[48 /*34*/].f_6) == 0)
			{
				if (!func_78(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x25531002BCF0D968(Global_80977[39 /*34*/].f_6) == 0)
			{
				if (!func_78(iParam0))
				{
					Global_97173.f_5518[iParam0] = 1;
					unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 1;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_78(iParam0))
			{
				Global_97173.f_5518[iParam0] = 0;
				unk_0x9D9DF796E80DD27E(uParam1->f_5, Global_97173.f_5518[iParam0], 1, 1);
			}
			break;
	}
}

bool func_78(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_91(iParam0) };
	iVar7 = unk_0xE1750C23202FC256(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_79(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_80()
{
	var uVar0;
	
	func_90(&uVar0, unk_0x2784A8234E9B4202());
	func_89(&uVar0, unk_0x06F66CEDC24218A4());
	func_88(&uVar0, unk_0xE76C684D1C903A71());
	func_83(&uVar0, unk_0xA277D6C04B4B44C8());
	func_82(&uVar0, unk_0x1285C2DD1E4945FF());
	func_81(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_85(*uParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_86(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_86(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(int iParam0)
{
	return iParam0 & 15;
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

struct<7> func_91(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_92()
{
	if (func_9() == -1 || func_9() == 999)
	{
		return 1;
	}
	return 0;
}

void func_93(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xF976C624234A4AA8();
	}
	if (unk_0xD361727124133DF3(uParam0))
	{
		iVar0 = (unk_0xF976C624234A4AA8() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x714F1BB644001893(uParam0) != 255)
				{
					unk_0x80882386D3DF8627(uParam0, 255);
				}
			}
			else if (unk_0x714F1BB644001893(uParam0) != 0)
			{
				unk_0x80882386D3DF8627(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x714F1BB644001893(uParam0) != 255)
			{
				unk_0x80882386D3DF8627(uParam0, 255);
			}
		}
	}
}

void func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_95(func_96(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_95(func_96(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_95(func_96(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

char* func_96(int iParam0)
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

void func_97()
{
	if (unk_0x0561B9096FB80229(uLocal_109))
	{
		func_43(joaat("rc_wallets_recovered"), 1);
		if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
		{
			uLocal_192 = func_156(iLocal_116[0], 0, 145);
		}
		func_98(&uLocal_228);
		fLocal_196 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), func_235());
		unk_0xC1B1E9A034A63A62(0);
		iLocal_46 = 10;
	}
	if (unk_0xBAE26BE2046B39E0(uLocal_109))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xC615E5E6E1D987A1(uLocal_109)) > 200f)
		{
			func_147();
		}
	}
}

void func_98(var uParam0)
{
	*uParam0 = -99;
}

void func_99(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_100()
{
	int iVar0;
	
	if (!unk_0xBAE26BE2046B39E0(uLocal_109))
	{
		unk_0x3DBE2A7AF9E71C82(&uLocal_105, 3);
		unk_0x3DBE2A7AF9E71C82(&uLocal_105, 4);
		unk_0x3DBE2A7AF9E71C82(&uLocal_105, 1);
		if (!bLocal_160)
		{
			if (unk_0xE5D56342B0FF1D0D(iLocal_113[0]))
			{
				if (unk_0xFD68187442384158(iLocal_113[0]))
				{
					Local_106 = { unk_0x019FA4BF61837E14(iLocal_113[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				Local_106 = { unk_0xFF447C6CF8EB3D23(unk_0xBF1B13057E5119A4(iLocal_113[0], 1), 1067030938, 1069547520) };
			}
		}
		else if (unk_0xFD68187442384158(iLocal_174))
		{
			Local_106 = { unk_0xFF447C6CF8EB3D23(unk_0xBF1B13057E5119A4(iLocal_174, 0), 1067030938, 1069547520) };
		}
		Local_106 = { Local_106.f_0, Local_106.f_1, (Local_106.f_2 + 0.25f) };
		uLocal_109 = unk_0x134AE1EC4D58EAE4(joaat("pickup_money_med_bag"), Local_106, uLocal_105, iLocal_188, 1, joaat("prop_cs_duffel_01"));
		uLocal_191 = func_101(uLocal_109);
		if (iLocal_48 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_110 - 1))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
				{
					unk_0x3C2614E45AB2F499(iLocal_113[iVar0], 1);
					unk_0xAC57FBF981AB03F4(iLocal_113[iVar0]);
					unk_0xB5DC017AFD430D1B(&uLocal_151);
					unk_0x48367A1F7C9A1041(0, 0, 0);
					unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_151);
					unk_0x8229311A391A4EC6(iLocal_113[iVar0], uLocal_151);
					unk_0x9F77DFFC61FCB68C(&uLocal_151);
					unk_0xA1E4BA3B17C6D931(iLocal_113[iVar0], 1);
				}
				iVar0++;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
			{
				unk_0x1E61DAA6A0EEC652(iLocal_113[0]);
				if (!unk_0x43F230A2EC7A2B4C(iLocal_113[0]))
				{
					func_45();
					unk_0x4EDE34FBADD967A6(0);
					func_111(&uLocal_231, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_101(var uParam0)
{
	var uVar0;
	
	if (!unk_0xBAE26BE2046B39E0(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x200CF8FFC0E56B0C(uParam0);
	unk_0x1D8833C0F155BFE7(uVar0, func_102(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	return uVar0;
}

float func_102(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_103()
{
	if (unk_0xD361727124133DF3(uLocal_191))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_191);
	}
	if (unk_0xD361727124133DF3(uLocal_192))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_192);
	}
	if (unk_0xD361727124133DF3(uLocal_190))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_190);
	}
	if (unk_0xD361727124133DF3(uLocal_184[0]))
	{
		unk_0xA0A65B537B1F11EC(&(uLocal_184[0]));
	}
	if (unk_0xD361727124133DF3(uLocal_184[1]))
	{
		unk_0xA0A65B537B1F11EC(&(uLocal_184[1]));
	}
}

int func_104()
{
	if (!unk_0xFD68187442384158(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	else if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	if (!bLocal_160)
	{
		if (!unk_0xFD68187442384158(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
		else if (unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
	}
	else
	{
		iLocal_149 = 1;
	}
	if (!unk_0xFD68187442384158(iLocal_183))
	{
		iLocal_150 = 1;
	}
	else if (unk_0x9F94F2CFDCA78C55(iLocal_183) || !unk_0x2A24448FF232F834(iLocal_183, 0))
	{
		iLocal_150 = 1;
	}
	if ((iLocal_148 && iLocal_149) || iLocal_150)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (unk_0xFD68187442384158(iLocal_113[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]) || unk_0xE5D56342B0FF1D0D(iLocal_113[iVar0]))
			{
				if (unk_0x6255AE2591FE7603(iLocal_113[iVar0], unk_0x507DA4994C3D8EBD(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (unk_0xFD68187442384158(iLocal_113[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
			{
				if (unk_0x88253E28293B8BFD(iLocal_113[iVar0]))
				{
					if (unk_0x1F2BCCC99110BB36(iLocal_113[iVar0]) == unk_0x507DA4994C3D8EBD())
					{
						unk_0x3C2614E45AB2F499(iLocal_113[iVar0], 1);
						unk_0xA859D289EEB2D72A(iLocal_113[iVar0], unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_113[iVar0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0xCA4DD92F1F2931F3(&(iLocal_113[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0xFD68187442384158(iLocal_183))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_183) || unk_0xE5D56342B0FF1D0D(iLocal_183))
		{
			if (unk_0x6255AE2591FE7603(iLocal_183, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
		{
			if (unk_0x0ED64F67EF8D1EFB(unk_0x507DA4994C3D8EBD(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (unk_0xFD68187442384158(iLocal_183))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_183))
		{
			if (unk_0x88253E28293B8BFD(iLocal_183))
			{
				if (unk_0x1F2BCCC99110BB36(iLocal_183) == unk_0x507DA4994C3D8EBD())
				{
					unk_0x3C2614E45AB2F499(iLocal_183, 1);
					unk_0xA859D289EEB2D72A(iLocal_183, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_183, 1);
					unk_0x4EDE34FBADD967A6(0);
					unk_0xCA4DD92F1F2931F3(&iLocal_183);
					return 1;
				}
			}
		}
	}
	if (unk_0xFD68187442384158(iLocal_174))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_174) || unk_0xE5D56342B0FF1D0D(iLocal_174))
		{
			if (unk_0x6255AE2591FE7603(iLocal_174, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	return func_107(iParam0, !bParam1, bParam2);
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_102(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_102(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_102(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_108()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_174, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
		{
			if (unk_0x53170344050F2301(iLocal_113[0], iLocal_174, 0))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
				{
					if (unk_0x53170344050F2301(iLocal_113[1], iLocal_174, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_109()
{
	if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
	{
		if (unk_0xFD68187442384158(iLocal_166))
		{
			if (unk_0xDF75DAAACD32E49E(iLocal_166))
			{
				unk_0x5B97F41A7BE54877(iLocal_166, 1, 1);
			}
			unk_0x4095FD029041DD48(&iLocal_166);
			func_103();
			func_100();
			iLocal_46 = 9;
		}
	}
	else if (unk_0x6255AE2591FE7603(iLocal_113[0], unk_0x507DA4994C3D8EBD(), 1))
	{
		if (unk_0xFD68187442384158(iLocal_166))
		{
			if (unk_0xDF75DAAACD32E49E(iLocal_166))
			{
				unk_0x5B97F41A7BE54877(iLocal_166, 1, 1);
			}
			unk_0x4095FD029041DD48(&iLocal_166);
			func_103();
			func_100();
			iLocal_46 = 9;
		}
	}
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x995E5B5A14F2E170(2, 195) - 128);
	iVar1 = (unk_0x995E5B5A14F2E170(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_121(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_120();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_119(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_118();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_117();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_116())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_115())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_114();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_113();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_120();
	}
	return 0;
}

void func_113()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_114()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_115()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_117()
{
	if (func_39(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_37();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_120()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_121(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_122()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		func_127();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_126(0))
		{
			func_124(0);
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

void func_124(int iParam0)
{
	if (Global_14551)
	{
		func_125(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_115())
	{
		Global_14393.f_1 = 3;
	}
}

void func_125(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_126(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_126(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_127()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_128(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_134(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_115())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_133(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_134(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_133(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_129(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_129(int iParam0)
{
	if (func_131(iParam0, 0))
	{
		return 1;
	}
	if (func_130())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_131(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_132(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_133(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_135()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
	{
		if (iLocal_48 == 1)
		{
			if (!iLocal_164)
			{
				if (!unk_0x9EC075F0DABF6298(iLocal_113[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if (!unk_0x9EC075F0DABF6298(iLocal_113[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_165 = 1;
				}
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!iLocal_164)
			{
				if ((!unk_0x9EC075F0DABF6298(iLocal_113[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0x9EC075F0DABF6298(iLocal_113[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0x9EC075F0DABF6298(iLocal_113[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0xA859D289EEB2D72A(iLocal_113[0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if ((!unk_0x9EC075F0DABF6298(iLocal_113[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0x9EC075F0DABF6298(iLocal_113[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0x9EC075F0DABF6298(iLocal_113[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0xA859D289EEB2D72A(iLocal_113[1], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
					iLocal_165 = 1;
				}
			}
		}
	}
	if (iLocal_164 && iLocal_165)
	{
		return 1;
	}
	return 0;
}

void func_136()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xBF1B13057E5119A4(iLocal_166, 1) };
	Var3 = { unk_0xAD9A5677421290F3(iLocal_166, 2) };
	unk_0x4095FD029041DD48(&iLocal_166);
	iLocal_166 = unk_0xCEC985247737A30E(joaat("prop_cs_duffel_01"), Var0, 1, 1, 0);
	unk_0xC1619F9F00BCB470(iLocal_166, Var3, 2, 1);
}

void func_137()
{
	if (unk_0xFD68187442384158(iLocal_113[0]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_113[0], 0)) > 200f && unk_0x19F2D2C58150C825(iLocal_113[0]))
		{
			if (unk_0xD361727124133DF3(uLocal_184[0]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_184[0]));
			}
			unk_0xCA4DD92F1F2931F3(&(iLocal_113[0]));
			bLocal_146 = true;
		}
	}
	else
	{
		bLocal_146 = true;
	}
	if (unk_0xFD68187442384158(iLocal_174))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_174, 0)) > 200f && unk_0x19F2D2C58150C825(iLocal_174))
		{
			if (unk_0xD361727124133DF3(uLocal_190))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_190);
			}
			unk_0xB67623A401171555(&iLocal_174);
			bLocal_147 = true;
		}
	}
	else
	{
		bLocal_147 = true;
	}
	if (bLocal_160)
	{
		if (bLocal_147)
		{
			if (func_155())
			{
				iLocal_46 = 13;
			}
			else
			{
				unk_0x4EDE34FBADD967A6(0);
				iLocal_45 = 2;
			}
		}
	}
	else if (bLocal_146)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_155())
		{
			iLocal_46 = 13;
		}
		else
		{
			iLocal_45 = 2;
		}
	}
}

void func_138()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_174))
	{
		if (unk_0x5D422B4764FA2ACA(iLocal_174) < 800)
		{
			unk_0x3E16CE93BAE616EE(iLocal_174, 0);
			unk_0x240BBFD908B5DA09(iLocal_174, 10f);
		}
	}
}

void func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (unk_0xFD68187442384158(iLocal_113[iVar0]))
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
			{
				if (unk_0xD361727124133DF3(uLocal_184[iVar0]))
				{
					unk_0xA0A65B537B1F11EC(&(uLocal_184[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_48 == 1)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_113)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
		{
			if (unk_0xD361727124133DF3(uLocal_184[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
	{
		if (!bLocal_139)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_110 - 1))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar1]))
				{
					unk_0x247B2966C6C2A4C1(iLocal_113[iVar1], unk_0x507DA4994C3D8EBD(), 0, 16);
				}
				iVar1++;
			}
			bLocal_139 = true;
			if (unk_0xDF75DAAACD32E49E(iLocal_166))
			{
				iLocal_46 = 5;
			}
		}
	}
	if (!iLocal_153 && !bLocal_139)
	{
		unk_0xF74C93D9036BCC1E("RE51A_SHOP");
		func_45();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_48 == 1)
		{
			if (func_111(&uLocal_231, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (func_111(&uLocal_231, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
	}
	if ((iLocal_153 && !iLocal_154) && !bLocal_139)
	{
		if (!func_122())
		{
			if (func_37() == 0)
			{
				func_111(&uLocal_231, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_37() == 1)
			{
				func_111(&uLocal_231, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_37() == 2)
			{
				func_111(&uLocal_231, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_154 = 1;
		}
	}
	if (!bLocal_139)
	{
		if (!func_122())
		{
			if (iLocal_154 && !iLocal_155)
			{
				if (iLocal_48 == 1)
				{
					if (func_158(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
				else if (iLocal_48 == 2)
				{
					if (func_158(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
			}
		}
		if (iLocal_48 == 1)
		{
			if (!func_122())
			{
				if (!iLocal_156)
				{
					if (iLocal_48 == 1)
					{
						func_111(&uLocal_231, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_48 == 2)
					{
						func_111(&uLocal_231, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_156 = 1;
				}
			}
		}
		else if (iLocal_48 == 2)
		{
			if (unk_0x83666F9FB8FEBD4B() > 4000)
			{
				if (!iLocal_156)
				{
					if (unk_0xFD68187442384158(iLocal_166))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
						{
							iLocal_156 = 1;
						}
					}
				}
			}
			if (unk_0xFD68187442384158(iLocal_166) && !unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
			{
				if (!iLocal_177)
				{
					iLocal_177 = 1;
				}
			}
		}
		if (!iLocal_137)
		{
			if (iLocal_48 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 14100)
				{
					unk_0x4095FD029041DD48(&(uLocal_167[0]));
					unk_0x4095FD029041DD48(&(uLocal_167[1]));
					if (unk_0xCA8794CE207FC6D5(iLocal_174, 0))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
						{
							unk_0xAC57FBF981AB03F4(iLocal_113[0]);
							unk_0xB5DC017AFD430D1B(&uLocal_151);
							unk_0xCBA47B699F417E4D(0);
							unk_0x36B42DB2912118E2(0, iLocal_174, -1, 0, 2f, 1, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_151);
							unk_0x8229311A391A4EC6(iLocal_113[0], uLocal_151);
							unk_0x9F77DFFC61FCB68C(&uLocal_151);
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
						{
							unk_0x832DBDBEA29906F5(iLocal_113[1], joaat("MotionState_Run"), 1, 0, 0);
							unk_0xB5DC017AFD430D1B(&uLocal_151);
							unk_0xCBA47B699F417E4D(0);
							unk_0x36B42DB2912118E2(0, iLocal_174, -1, 1, 2f, 1, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_151);
							unk_0x8229311A391A4EC6(iLocal_113[1], uLocal_151);
							unk_0x9F77DFFC61FCB68C(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
					else
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
						{
							unk_0x3C2614E45AB2F499(iLocal_113[0], 1);
							unk_0xCEBD1B99CF343672(iLocal_113[0]);
							unk_0xB5DC017AFD430D1B(&uLocal_151);
							unk_0xCBA47B699F417E4D(0);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_151);
							unk_0x8229311A391A4EC6(iLocal_113[0], uLocal_151);
							unk_0x9F77DFFC61FCB68C(&uLocal_151);
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
						{
							unk_0x3C2614E45AB2F499(iLocal_113[1], 1);
							unk_0xCEBD1B99CF343672(iLocal_113[1]);
							unk_0xB5DC017AFD430D1B(&uLocal_151);
							unk_0xCBA47B699F417E4D(0);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_151);
							unk_0x8229311A391A4EC6(iLocal_113[1], uLocal_151);
							unk_0x9F77DFFC61FCB68C(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
				}
			}
			else if (iLocal_48 == 2)
			{
				if (unk_0x6385FE4ECBDF05D2(uLocal_215) > 0.453f)
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
					{
						unk_0x2DC5B31EBB810396(iLocal_116[0], 1);
						unk_0xB5DC017AFD430D1B(&uLocal_151);
						unk_0xEC0A546609840086(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uLocal_151);
						unk_0x8229311A391A4EC6(iLocal_116[0], uLocal_151);
						unk_0x9F77DFFC61FCB68C(&uLocal_151);
						unk_0xA1E4BA3B17C6D931(iLocal_116[0], 1);
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]))
					{
						unk_0xAC57FBF981AB03F4(iLocal_113[0]);
						unk_0xB2B080B88A4144B7(iLocal_113[0], 128, 1);
						unk_0xB2B080B88A4144B7(iLocal_113[0], 1, 1);
						unk_0x3A1E687904400847(iLocal_113[0], 17, 1);
						unk_0xD156A7AA30AC555A(iLocal_113[0], 1.6f);
						unk_0x3C2614E45AB2F499(iLocal_113[0], 1);
						unk_0xB5DC017AFD430D1B(&uLocal_151);
						unk_0xEC0A546609840086(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, 0, 0, 0);
						unk_0xD8BA6491440C0DA6(0, "re_shoprobbery", 0, 0, 16);
						unk_0xCBA47B699F417E4D(0);
						unk_0x6EE8A5CF9AC75F12(uLocal_151);
						unk_0x8229311A391A4EC6(iLocal_113[0], uLocal_151);
						unk_0x9F77DFFC61FCB68C(&uLocal_151);
						unk_0xA1E4BA3B17C6D931(iLocal_113[0], 1);
						unk_0x5AE11BC36633DE4E(0);
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
					{
						unk_0xB2B080B88A4144B7(iLocal_113[1], 128, 1);
						unk_0xB2B080B88A4144B7(iLocal_113[1], 1, 1);
						unk_0x3A1E687904400847(iLocal_113[1], 17, 1);
						unk_0xD156A7AA30AC555A(iLocal_113[1], 1.6f);
						unk_0x3C2614E45AB2F499(iLocal_113[1], 1);
						unk_0xB5DC017AFD430D1B(&uLocal_151);
						unk_0xCBA47B699F417E4D(0);
						unk_0xD8BA6491440C0DA6(0, "re_shoprobbery2", 0, 0, 17);
						unk_0x6EE8A5CF9AC75F12(uLocal_151);
						unk_0x8229311A391A4EC6(iLocal_113[1], uLocal_151);
						unk_0x9F77DFFC61FCB68C(&uLocal_151);
						unk_0xA1E4BA3B17C6D931(iLocal_113[1], 1);
					}
					iLocal_46 = 2;
					iLocal_137 = 1;
				}
			}
			unk_0xA54C914AEB391F49(0f);
		}
	}
}

void func_141()
{
	switch (iLocal_226)
	{
		case 0:
			func_128(1, 1, 1, 0);
			unk_0xAB97C8EA78D4E7DF(func_142(unk_0xAF65E5A58BE87D95()), 10f, 0);
			uLocal_225 = unk_0x07A7435490ED9AAB("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0x6F430D0F1783A56E(uLocal_225, 1);
			unk_0xB754DFF4436CE5FF(uLocal_225, uLocal_215, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_48 == 1)
			{
				unk_0x61E61086CE1663DB("Hair_room");
			}
			unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
			iLocal_227 = unk_0xF976C624234A4AA8() + 3500;
			iLocal_226++;
			break;
		
		case 1:
			if (iLocal_227 < unk_0xF976C624234A4AA8())
			{
				if (iLocal_48 == 1)
				{
					unk_0xBE5E0E5A454F4D6A(115f);
					unk_0x77CB1AAAF31275BE(-9.1222f, 1065353216);
				}
				else if (iLocal_48 == 2)
				{
					unk_0xBE5E0E5A454F4D6A(44.5236f);
					unk_0x77CB1AAAF31275BE(-18.1582f, 1065353216);
				}
				unk_0x5DE91777B624B339();
				unk_0x6F430D0F1783A56E(uLocal_225, 0);
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				func_47();
				func_128(0, 1, 1, 0);
				iLocal_226++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_142(int iParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

void func_143()
{
	int iVar0;
	
	if (!iLocal_135 && func_146(1, 0, 1))
	{
		if (unk_0xD361727124133DF3(uLocal_192))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_192);
		}
		func_128(1, 1, 1, 0);
		unk_0x4A4C1A1BC79EFE8F(1);
		unk_0x330ABD0F05E764BB(0);
		unk_0x255259988FBEFACC(0);
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 256);
		unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
		if (iLocal_48 == 1)
		{
			if (!iLocal_176)
			{
				uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_200, Local_206, 2);
				unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
				unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), uLocal_215, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 1, 0);
				if (((!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_113[1])) && !unk_0x9F94F2CFDCA78C55(iLocal_116[0])) && unk_0xFD68187442384158(iLocal_166))
				{
					unk_0x206610E40EE4D7D9(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x206610E40EE4D7D9(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x206610E40EE4D7D9(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					unk_0x763BBCB2253879B8(iLocal_166, uLocal_215, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				unk_0x39ABDEE52B08CBD2(uLocal_215, 0.06f);
				iLocal_176 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_116[0]))
			{
				unk_0xAC57FBF981AB03F4(iLocal_116[0]);
				unk_0xEC0A546609840086(iLocal_116[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, 0, 0, 0);
			}
			unk_0xE24944560D6F19ED(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_200, Local_206, 2);
			if (((!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_113[1])) && !unk_0x9F94F2CFDCA78C55(iLocal_116[0])) && unk_0xFD68187442384158(iLocal_166))
			{
				unk_0x206610E40EE4D7D9(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x206610E40EE4D7D9(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (unk_0xFD68187442384158(uLocal_167[0]) && unk_0xFD68187442384158(uLocal_167[1]))
				{
					unk_0x26030664C7D28388(uLocal_167[0], iLocal_116[0], unk_0xA8918EDB277FC51C(iLocal_116[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					unk_0x26030664C7D28388(uLocal_167[1], iLocal_116[0], unk_0xA8918EDB277FC51C(iLocal_116[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			unk_0x39ABDEE52B08CBD2(uLocal_215, 0.05f);
			Local_200 = { -1199.369f, -776.1991f, 16.3235f };
			Local_206 = { 0f, 0f, -60f };
			uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_200, Local_206, 2);
			if (!unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
			{
				unk_0x206610E40EE4D7D9(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			unk_0x39ABDEE52B08CBD2(uLocal_215, 0.06f);
			unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 305.3806f);
			unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
			unk_0xB5DC017AFD430D1B(&uLocal_151);
			unk_0xEC0A546609840086(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			unk_0xEC0A546609840086(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_151);
			unk_0x8229311A391A4EC6(unk_0x507DA4994C3D8EBD(), uLocal_151);
			unk_0x9F77DFFC61FCB68C(&uLocal_151);
			unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
		}
		iLocal_135 = 1;
	}
	if (!iLocal_175)
	{
		func_144();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (!unk_0xD361727124133DF3(uLocal_184[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]))
			{
				uLocal_184[iVar0] = func_156(iLocal_113[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_48 == 1 && unk_0xFD68187442384158(iLocal_174)) || iLocal_48 == 2)
	{
		unk_0xC1B1E9A034A63A62(0);
		iLocal_46 = 1;
	}
}

void func_144()
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_178)
	{
		unk_0xCBE6AC5010E5CE5C(iVar0);
		if (unk_0xD291857D0C9C7FEC(iVar0))
		{
			iLocal_178 = 1;
		}
		else
		{
			unk_0xCBE6AC5010E5CE5C(iVar0);
		}
	}
	else if (unk_0xD291857D0C9C7FEC(iVar0))
	{
		if (func_145())
		{
			if (unk_0x9EC075F0DABF6298(uLocal_170, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, 1, 0))
			{
				Local_171 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				Local_171 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			Local_171 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_174 = unk_0x546974B676313326(iVar0, Local_171, 31.9252f, 1, 1);
		unk_0x3C2614E45AB2F499(iLocal_174, 1);
		unk_0xD90C30D269B19096(iLocal_174);
		unk_0xE0E038A4E5C7727B(iLocal_174, 1, 1);
		iLocal_183 = unk_0xC68FBD37098CE438(iLocal_174, 26, joaat("g_m_y_korean_01"), -1, 1, 1);
		unk_0x7FEDD088E489CE41(iLocal_183, 134, 1);
		unk_0x2DC5B31EBB810396(iLocal_183, 1);
		unk_0xE440546F94B26235(iLocal_183, iLocal_189);
		unk_0x3A1E687904400847(iLocal_183, 8, 0);
		unk_0x0E53A759D522CA83(iLocal_183, 0);
		unk_0xE7962295F4C99484(iLocal_183, 13);
		unk_0x3F9EDC2D18464273(iLocal_183, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x7AB733311E18F96E(iLocal_183, 1, 0);
		unk_0x7FEDD088E489CE41(iLocal_183, 42, 1);
		iLocal_175 = 1;
	}
}

int func_145()
{
	var uVar0;
	
	uVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xCA8794CE207FC6D5(uVar0, 0))
	{
		if (unk_0x594EB70937EC1486(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, 0, 1, 0))
		{
			uLocal_170 = iVar0;
			if (!unk_0x73E2404DC70203CD(uLocal_170))
			{
				unk_0xBAE5DF507EEC53C8(uLocal_170, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	return 1;
}

void func_147()
{
	func_221();
}

int func_148(int iParam0)
{
	if (func_149())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_57(Global_97162))
		{
			func_94(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_57(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

int func_149()
{
	switch (func_150(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_150(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_154(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_152(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_151(uParam0, iParam4);
		}
	}
	return 2;
}

void func_151(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_152(int iParam0)
{
	return func_153(iParam0, Global_34909);
}

int func_153(int iParam0, int iParam1)
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

int func_154(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_152(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_155()
{
	if (iLocal_48 == 1)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (((unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, 1, 0)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_156(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_107(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_157()
{
	int iVar0;
	
	if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, 0, 1, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
		{
			if (unk_0x6255AE2591FE7603(iLocal_113[0], unk_0x507DA4994C3D8EBD(), 1) || unk_0x6255AE2591FE7603(iLocal_113[1], unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
			if (unk_0x2A71687AF0AE817B(iLocal_113[0], unk_0x507DA4994C3D8EBD()) || unk_0x2A71687AF0AE817B(iLocal_113[1], unk_0x507DA4994C3D8EBD()))
			{
				if (((unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_113[0]) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_113[0])) || unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_113[1])) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_113[1]))
				{
					if (iLocal_125 == -1)
					{
						iLocal_125 = unk_0xF976C624234A4AA8();
					}
				}
				else
				{
					iLocal_125 = -1;
				}
				if (iLocal_125 != -1 && unk_0xF976C624234A4AA8() > iLocal_125 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x656425C603F673C9(-1, Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (unk_0xE5D56342B0FF1D0D(iLocal_113[0]) || unk_0xE5D56342B0FF1D0D(iLocal_113[1]))
	{
		return 1;
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && func_155())
	{
		return 1;
	}
	if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) && func_155())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_113[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_113[1]))
	{
		if (((unk_0x0EE9A290405B6083(unk_0x507DA4994C3D8EBD(), unk_0xBF1B13057E5119A4(iLocal_113[1], 1) - Vector(12f, 12f, 12f), unk_0xBF1B13057E5119A4(iLocal_113[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD())) || unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iLocal_113[0], 1), 3f, 1)) || unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iLocal_113[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_116)
	{
		if (unk_0xFD68187442384158(iLocal_116[iVar0]))
		{
			if (unk_0x6255AE2591FE7603(iLocal_116[iVar0], unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		if (unk_0xFD68187442384158(iLocal_120[iVar0]))
		{
			if (unk_0x6255AE2591FE7603(iLocal_120[iVar0], unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_158(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_121(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_112(sParam2, iParam4, 0);
}

int func_159()
{
	if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, 0, 1, 0))
	{
		unk_0x500F4CA776CEBD0A(0, 22, 1);
		unk_0xD156A7AA30AC555A(unk_0x507DA4994C3D8EBD(), 1f);
		unk_0x6C2B8C9CB6B5CDE4(unk_0x507DA4994C3D8EBD(), 0, 1, 0);
		return 1;
	}
	return 0;
}

void func_160()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_116[1]))
	{
		if (unk_0xB9DC6B81F29B0CA8(iLocal_116[1]))
		{
			func_161(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_161(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		unk_0x6204CDD58E47662C(iLocal_116[1], 26, 0, 0);
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_120[1]))
	{
		func_161(iLocal_120[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		unk_0x6204CDD58E47662C(iLocal_120[1], 3, 0, 0);
	}
}

void func_161(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD5197208E9370D3D(uParam0, sParam1, sParam2, func_162(iParam3), 0);
}

int func_162(int iParam0)
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

void func_163()
{
	int iVar0;
	
	unk_0xF83CD415BF55C455(0);
	unk_0x46B6351EE89452C8("ROBBERS", &iLocal_189);
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		iLocal_113[iVar0] = unk_0x7B88529CAE3B7F15(26, iLocal_221, Local_54[iVar0 /*3*/], fLocal_61[iVar0], 1, 1);
		unk_0x2DC5B31EBB810396(iLocal_113[iVar0], 1);
		unk_0xE440546F94B26235(iLocal_113[iVar0], iLocal_189);
		unk_0x3A1E687904400847(iLocal_113[iVar0], 8, 0);
		unk_0x0E53A759D522CA83(iLocal_113[iVar0], 0);
		unk_0xE7962295F4C99484(iLocal_113[iVar0], 13);
		unk_0x3F9EDC2D18464273(iLocal_113[iVar0], joaat("weapon_pistol"), -1, 1, 1);
		unk_0x7AB733311E18F96E(iLocal_113[iVar0], 1, 0);
		unk_0x7FEDD088E489CE41(iLocal_113[iVar0], 42, 1);
		unk_0x7FEDD088E489CE41(iLocal_113[iVar0], 269, 1);
		unk_0x7FEDD088E489CE41(iLocal_113[iVar0], 188, 1);
		unk_0xA769A4326FC5BBEA(iLocal_113[iVar0], 0);
		unk_0xB2B080B88A4144B7(iLocal_113[iVar0], 128, 1);
		unk_0xB2B080B88A4144B7(iLocal_113[iVar0], 8, 1);
		iVar0++;
	}
	unk_0x3F671607BC1804B5(iLocal_113[0], "pedRobber[0]");
	unk_0x3F671607BC1804B5(iLocal_113[1], "pedRobber[1]");
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_189, joaat("player"));
	unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), iLocal_189);
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_189, joaat("COP"));
	unk_0xCA4EA7D4F6DCCD43(5, joaat("COP"), iLocal_189);
	if (func_37() == 0)
	{
		func_168(&uLocal_231, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
	}
	else if (func_37() == 1)
	{
		func_168(&uLocal_231, 0, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
	}
	else if (func_37() == 2)
	{
		func_168(&uLocal_231, 0, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
	}
	iLocal_166 = unk_0xCEC985247737A30E(iLocal_187, Local_96, 1, 1, 0);
	if (iLocal_48 == 1)
	{
		unk_0x92832F671263F8E0(Local_127 - Vector(20f, 20f, 20f), Local_127 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x941F924D5E9C2140(joaat("baller"), 1);
		uLocal_167[0] = unk_0xCEC985247737A30E(joaat("prop_anim_cash_pile_01"), Local_96, 1, 1, 0);
		uLocal_167[1] = unk_0xCEC985247737A30E(joaat("prop_anim_cash_pile_01"), Local_96 - Vector(0.1f, 0f, 0f), 1, 1, 0);
		unk_0x454E090239AFF6E8(iLocal_113[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		unk_0x454E090239AFF6E8(iLocal_113[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_200 = { -821.565f, -186.467f, 36.6f };
		Local_206 = { 0f, 0f, -59.96f };
		uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_200, Local_206, 2);
		unk_0x15B365C4645F79B8(uLocal_215, 1);
		unk_0x206610E40EE4D7D9(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0x763BBCB2253879B8(iLocal_166, uLocal_215, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			iLocal_116[iVar0] = unk_0x7B88529CAE3B7F15(26, iLocal_218, Local_64[iVar0 /*3*/], fLocal_74[iVar0], 1, 1);
			unk_0x3A1E687904400847(iLocal_116[iVar0], 17, 1);
			unk_0x2DC5B31EBB810396(iLocal_116[iVar0], 1);
			unk_0x6A750A31D18DA81A(iLocal_116[iVar0], 0);
			unk_0x7FEDD088E489CE41(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x3F671607BC1804B5(iLocal_116[0], "pedWorker[0]");
		unk_0x3F671607BC1804B5(iLocal_116[1], "pedWorker[1]");
		unk_0x3F671607BC1804B5(iLocal_116[2], "pedWorker[2]");
		iLocal_120[0] = unk_0x7B88529CAE3B7F15(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		unk_0x3A1E687904400847(iLocal_120[0], 17, 1);
		unk_0x2DC5B31EBB810396(iLocal_120[0], 1);
		unk_0x6A750A31D18DA81A(iLocal_120[0], 0);
		unk_0x7FEDD088E489CE41(iLocal_120[0], 269, 1);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_120[iVar0] = unk_0x7B88529CAE3B7F15(26, iLocal_220, Local_78[iVar0 /*3*/], fLocal_91[iVar0], 1, 1);
			unk_0x3A1E687904400847(iLocal_120[iVar0], 17, 1);
			unk_0x2DC5B31EBB810396(iLocal_120[iVar0], 1);
			unk_0x6A750A31D18DA81A(iLocal_120[iVar0], 0);
			unk_0x7FEDD088E489CE41(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x3F671607BC1804B5(iLocal_120[0], "pedShopper[0]");
		unk_0x3F671607BC1804B5(iLocal_120[1], "pedShopper[1]");
		unk_0x3F671607BC1804B5(iLocal_120[2], "pedShopper[2]");
		unk_0xF2685765B7BEBCB0(iLocal_116[0], 0, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[0], 2, 1, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[0], 3, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[0], 4, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[0], 5, 0, 0, 0);
		unk_0x206610E40EE4D7D9(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0x454E090239AFF6E8(iLocal_116[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_168(&uLocal_231, 5, iLocal_116[0], "REROBShopworker", 0, 1);
		unk_0xF2685765B7BEBCB0(iLocal_116[1], 0, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[1], 2, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[1], 3, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[1], 4, 1, 2, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[1], 5, 0, 0, 0);
		unk_0x5FD5E7ABD766D498(iLocal_116[1], -1);
		unk_0xA1E4BA3B17C6D931(iLocal_116[1], 1);
		unk_0xF2685765B7BEBCB0(iLocal_116[2], 0, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[2], 2, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[2], 3, 0, 2, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[2], 4, 1, 2, 0);
		unk_0xF2685765B7BEBCB0(iLocal_116[2], 5, 0, 0, 0);
		unk_0x5FD5E7ABD766D498(iLocal_116[2], -1);
		unk_0xA1E4BA3B17C6D931(iLocal_116[2], 1);
		uLocal_215 = unk_0x1BEDF9ACAEAB15F8(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		unk_0x15B365C4645F79B8(uLocal_215, 1);
		unk_0xF2685765B7BEBCB0(iLocal_120[0], 0, 0, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[0], 2, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[0], 3, 0, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[0], 4, 0, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[0], 8, 0, 0, 0);
		unk_0x206610E40EE4D7D9(iLocal_120[0], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_120[0], 1);
		uLocal_215 = unk_0x1BEDF9ACAEAB15F8(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		unk_0x15B365C4645F79B8(uLocal_215, 1);
		unk_0xF2685765B7BEBCB0(iLocal_120[1], 0, 0, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[1], 2, 0, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[1], 3, 1, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[1], 4, 1, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[1], 8, 0, 0, 0);
		unk_0x206610E40EE4D7D9(iLocal_120[1], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_120[1], 1);
		uLocal_215 = unk_0x1BEDF9ACAEAB15F8(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		unk_0x15B365C4645F79B8(uLocal_215, 1);
		unk_0xF2685765B7BEBCB0(iLocal_120[2], 0, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[2], 2, 0, 2, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[2], 3, 0, 1, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[2], 4, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_120[2], 8, 0, 0, 0);
		unk_0x206610E40EE4D7D9(iLocal_120[2], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_120[2], 1);
		unk_0xCDBB862D670BA90E(iLocal_113[0], iLocal_116[0], -1, 0);
		unk_0xE0988F7BD7BD3889(-871f, -246f, 0f, -798f, -163f, 50f, 0, 1);
		unk_0x97C897799D58CEBD("Hairdresser1");
		func_167(0, 1);
		func_166(0);
		unk_0x4EDE34FBADD967A6(500);
		func_164(0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		unk_0x92832F671263F8E0(Local_130 - Vector(20f, 20f, 20f), Local_130 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0xC1619F9F00BCB470(iLocal_166, Local_99, 2, 1);
		iLocal_116[0] = unk_0x7B88529CAE3B7F15(26, iLocal_218, Local_64[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0x3F671607BC1804B5(iLocal_116[0], "pedWorker[0]");
		unk_0x454E090239AFF6E8(iLocal_116[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_168(&uLocal_231, 6, iLocal_116[0], "REROBShopworker2", 0, 1);
		iLocal_116[1] = unk_0x7B88529CAE3B7F15(26, iLocal_217, Local_64[1 /*3*/], fLocal_74[1], 1, 1);
		unk_0x3F671607BC1804B5(iLocal_116[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			unk_0x3A1E687904400847(iLocal_116[iVar0], 17, 1);
			unk_0x2DC5B31EBB810396(iLocal_116[iVar0], 1);
			unk_0x6A750A31D18DA81A(iLocal_116[iVar0], 0);
			unk_0x7FEDD088E489CE41(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		iLocal_120[0] = unk_0x7B88529CAE3B7F15(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		unk_0x3F671607BC1804B5(iLocal_120[0], "pedShopper[0]");
		iLocal_120[1] = unk_0x7B88529CAE3B7F15(26, iLocal_220, Local_78[1 /*3*/], fLocal_91[1], 1, 1);
		unk_0x3F671607BC1804B5(iLocal_120[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			unk_0x3A1E687904400847(iLocal_120[iVar0], 17, 1);
			unk_0x2DC5B31EBB810396(iLocal_120[iVar0], 1);
			unk_0x6A750A31D18DA81A(iLocal_120[iVar0], 0);
			unk_0x7FEDD088E489CE41(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		unk_0xEC0A546609840086(iLocal_116[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_116[0], 1);
		unk_0xEC0A546609840086(iLocal_116[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_116[1], 1);
		unk_0x5FD5E7ABD766D498(iLocal_120[0], -1);
		unk_0xA1E4BA3B17C6D931(iLocal_120[0], 1);
		unk_0xEC0A546609840086(iLocal_120[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_120[1], 1);
		Local_200 = { -1192.01f, -768.929f, 16.358f };
		Local_206 = { 0f, 0f, -59.5f };
		uLocal_215 = unk_0x1BEDF9ACAEAB15F8(Local_200, Local_206, 2);
		unk_0x15B365C4645F79B8(uLocal_215, 1);
		unk_0x206610E40EE4D7D9(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x206610E40EE4D7D9(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0xEC0A546609840086(iLocal_113[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, 0, 0, 0);
		func_167(14, 1);
		func_166(14);
		unk_0x4EDE34FBADD967A6(500);
		func_164(14, 0, 0);
	}
	func_168(&uLocal_231, 3, iLocal_113[0], "REROBRobber1", 0, 1);
	func_168(&uLocal_231, 4, iLocal_113[1], "REROBRobber2", 0, 1);
	unk_0xFF467904A8A12BBE(joaat("a_f_y_bevhills_02"));
	unk_0xFF467904A8A12BBE(joaat("a_m_y_bevhills_02"));
	unk_0xFF467904A8A12BBE(joaat("a_m_y_hipster_01"));
	unk_0xFF467904A8A12BBE(joaat("a_f_y_hipster_04"));
	unk_0xFF467904A8A12BBE(joaat("g_m_y_korean_01"));
}

void func_164(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_165(iParam0, 0);
	if (iVar1 != 225)
	{
		func_70(iVar1, iVar0);
	}
	iVar1 = func_165(iParam0, 1);
	if (iVar1 != 225)
	{
		func_70(iVar1, iVar0);
	}
}

int func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 225;
}

void func_166(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_167(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_35(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_169()
{
	if (!iLocal_134)
	{
		iLocal_152 = unk_0x9C1CBD99573D4312(Local_54[0 /*3*/]);
		unk_0x336B61FFB9019E71(iLocal_152);
		iLocal_134 = 1;
	}
}

void func_170()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_218);
	unk_0xCBE6AC5010E5CE5C(iLocal_219);
	unk_0xCBE6AC5010E5CE5C(iLocal_220);
	unk_0xCBE6AC5010E5CE5C(iLocal_221);
	unk_0xCBE6AC5010E5CE5C(joaat("prop_anim_cash_pile_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("prop_cs_duffel_01"));
	unk_0x909E9D811F9F1AAE("re_shoprobbery");
	unk_0x909E9D811F9F1AAE("re_shoprobbery2");
	unk_0x395C5D98343F0040("random@robbery");
	unk_0x395C5D98343F0040("random@shop_robbery");
	unk_0x6DBAEBEF2111B0C1("RE51A_SHOP");
	if ((((((((((unk_0xD291857D0C9C7FEC(iLocal_218) && unk_0xD291857D0C9C7FEC(iLocal_219)) && unk_0xD291857D0C9C7FEC(iLocal_220)) && unk_0xD291857D0C9C7FEC(iLocal_221)) && unk_0xD291857D0C9C7FEC(joaat("prop_anim_cash_pile_01"))) && unk_0xD291857D0C9C7FEC(joaat("prop_cs_duffel_01"))) && unk_0xB16E5DBDEC4BBDEB("re_shoprobbery")) && unk_0xB16E5DBDEC4BBDEB("re_shoprobbery2")) && unk_0xCE40391AB65FE305("random@robbery")) && unk_0xCE40391AB65FE305("random@shop_robbery")) && unk_0x6DBAEBEF2111B0C1("RE51A_SHOP"))
	{
		iLocal_52 = 1;
	}
	else
	{
		unk_0xCBE6AC5010E5CE5C(iLocal_218);
		unk_0xCBE6AC5010E5CE5C(iLocal_219);
		unk_0xCBE6AC5010E5CE5C(iLocal_220);
		unk_0xCBE6AC5010E5CE5C(iLocal_221);
		unk_0xCBE6AC5010E5CE5C(joaat("prop_anim_cash_pile_01"));
		unk_0xCBE6AC5010E5CE5C(joaat("prop_cs_duffel_01"));
		unk_0x395C5D98343F0040("random@robbery");
		unk_0x395C5D98343F0040("random@shop_robbery");
		unk_0x6DBAEBEF2111B0C1("RE51A_SHOP");
	}
}

void func_171()
{
	iLocal_140[0] = 0;
	iLocal_140[1] = 0;
	if (iLocal_48 == 1)
	{
		iLocal_218 = joaat("a_f_y_bevhills_02");
		iLocal_219 = joaat("a_m_y_bevhills_02");
		iLocal_220 = joaat("a_f_y_bevhills_02");
		iLocal_221 = joaat("g_m_y_korean_01");
		iLocal_110 = 2;
		iLocal_111 = 3;
		iLocal_112 = 3;
		Local_54[0 /*3*/] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_61[0] = 252.381f;
		Local_54[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_61[1] = -153.9562f;
		Local_64[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_74[0] = 203.3684f;
		Local_64[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_74[1] = 90.1761f;
		Local_64[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_74[2] = 192.7338f;
		Local_78[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_91[0] = 337.68f;
		Local_78[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_91[1] = 25.8399f;
		Local_78[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_91[2] = 30f;
		Local_96 = { -822.2148f, -184.0822f, 37.7027f };
		Local_99 = { -1.8236f, 0.6172f, 75.8024f };
		Local_102 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_187 = joaat("prop_cs_duffel_01");
		iLocal_188 = 2000;
		Local_193 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_48 == 2)
	{
		iLocal_217 = joaat("a_m_y_hipster_01");
		iLocal_218 = joaat("a_f_y_hipster_04");
		iLocal_219 = joaat("a_m_y_hipster_01");
		iLocal_220 = joaat("a_f_y_hipster_04");
		iLocal_221 = joaat("g_m_y_strpunk_02");
		iLocal_110 = 2;
		iLocal_111 = 2;
		iLocal_112 = 2;
		Local_54[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_61[0] = -85.5f;
		Local_54[1 /*3*/] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_61[1] = 329.1899f;
		Local_64[0 /*3*/] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_74[0] = 221.3152f;
		Local_64[1 /*3*/] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_74[1] = 247.1149f;
		Local_78[0 /*3*/] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_91[0] = 103.3015f;
		Local_78[1 /*3*/] = { -1185.932f, -770.624f, 16.344f };
		fLocal_91[1] = 43.215f;
		Local_96 = { -1192.968f, -767.0651f, 17.2968f };
		Local_99 = { 0f, 0f, -128.52f };
		Local_102 = { -1180.457f, -763.9163f, 16.3267f };
		iLocal_187 = joaat("prop_cs_duffel_01");
		iLocal_188 = 2000;
		Local_193 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_53 = true;
}

int func_172()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_179())
	{
		return 1;
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_173(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_40(func_37()))
		{
			iVar36 = func_62();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_174(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_174(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_175(uParam1, "Abigail1", func_177(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 1:
			func_175(uParam1, "Abigail2", func_177(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 2:
			func_175(uParam1, "Barry1", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 3:
			func_175(uParam1, "Barry2", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 4:
			func_175(uParam1, "Barry3", func_177(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 5:
			func_175(uParam1, "Barry3A", func_177(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 6:
			func_175(uParam1, "Barry3C", func_177(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 7:
			func_175(uParam1, "Barry4", func_177(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_176(iParam0), 0, 0);
			break;
		
		case 8:
			func_175(uParam1, "Dreyfuss1", func_177(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 9:
			func_175(uParam1, "Epsilon1", func_177(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 10:
			func_175(uParam1, "Epsilon2", func_177(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 11:
			func_175(uParam1, "Epsilon3", func_177(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 12:
			func_175(uParam1, "Epsilon4", func_177(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 13:
			func_175(uParam1, "Epsilon5", func_177(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 14:
			func_175(uParam1, "Epsilon6", func_177(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 15:
			func_175(uParam1, "Epsilon7", func_177(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 16:
			func_175(uParam1, "Epsilon8", func_177(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 17:
			func_175(uParam1, "Extreme1", func_177(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 18:
			func_175(uParam1, "Extreme2", func_177(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 19:
			func_175(uParam1, "Extreme3", func_177(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 20:
			func_175(uParam1, "Extreme4", func_177(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 21:
			func_175(uParam1, "Fanatic1", func_177(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 22:
			func_175(uParam1, "Fanatic2", func_177(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 23:
			func_175(uParam1, "Fanatic3", func_177(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_176(iParam0), 0, 1);
			break;
		
		case 24:
			func_175(uParam1, "Hao1", func_177(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_176(iParam0), 0, 1);
			break;
		
		case 25:
			func_175(uParam1, "Hunting1", func_177(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 26:
			func_175(uParam1, "Hunting2", func_177(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 27:
			func_175(uParam1, "Josh1", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 28:
			func_175(uParam1, "Josh2", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 29:
			func_175(uParam1, "Josh3", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 30:
			func_175(uParam1, "Josh4", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 31:
			func_175(uParam1, "Maude1", func_177(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 32:
			func_175(uParam1, "Minute1", func_177(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 33:
			func_175(uParam1, "Minute2", func_177(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 34:
			func_175(uParam1, "Minute3", func_177(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 35:
			func_175(uParam1, "MrsPhilips1", func_177(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 36:
			func_175(uParam1, "MrsPhilips2", func_177(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 37:
			func_175(uParam1, "Nigel1", func_177(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 38:
			func_175(uParam1, "Nigel1A", func_177(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 39:
			func_175(uParam1, "Nigel1B", func_177(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 40:
			func_175(uParam1, "Nigel1C", func_177(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 41:
			func_175(uParam1, "Nigel1D", func_177(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 42:
			func_175(uParam1, "Nigel2", func_177(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 43:
			func_175(uParam1, "Nigel3", func_177(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 44:
			func_175(uParam1, "Omega1", func_177(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 45:
			func_175(uParam1, "Omega2", func_177(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 46:
			func_175(uParam1, "Paparazzo1", func_177(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 47:
			func_175(uParam1, "Paparazzo2", func_177(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 48:
			func_175(uParam1, "Paparazzo3", func_177(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 49:
			func_175(uParam1, "Paparazzo3A", func_177(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 50:
			func_175(uParam1, "Paparazzo3B", func_177(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 51:
			func_175(uParam1, "Paparazzo4", func_177(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 52:
			func_175(uParam1, "Rampage1", func_177(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 54:
			func_175(uParam1, "Rampage3", func_177(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 55:
			func_175(uParam1, "Rampage4", func_177(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 56:
			func_175(uParam1, "Rampage5", func_177(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 53:
			func_175(uParam1, "Rampage2", func_177(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 57:
			func_175(uParam1, "TheLastOne", func_177(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 58:
			func_175(uParam1, "Tonya1", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 59:
			func_175(uParam1, "Tonya2", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 60:
			func_175(uParam1, "Tonya3", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 61:
			func_175(uParam1, "Tonya4", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 62:
			func_175(uParam1, "Tonya5", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_175(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_176(int iParam0)
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

struct<2> func_177(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_178(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_178(int iParam0)
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

int func_179()
{
	if (func_182() && !func_183())
	{
		return 1;
	}
	if (func_181() && func_180())
	{
		return 1;
	}
	return 0;
}

bool func_180()
{
	return Global_96891 > 0;
}

int func_181()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_183()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	if (!func_152(5))
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if ((Global_97162 == func_66() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_188(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_187();
}

void func_187()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_188(int iParam0)
{
	Global_97162 = iParam0;
}

int func_189(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_66();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_183())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_51(0))
		{
			return 0;
		}
		if (func_179())
		{
			return 0;
		}
		if (func_217())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_40(func_37()))
		{
			if (func_173(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_216(iParam3))
		{
			return 0;
		}
		if (func_40(func_37()))
		{
			if (func_215(func_37()) == 4 || func_215(func_37()) == 5)
			{
				return 0;
			}
		}
		if (func_40(func_37()))
		{
			if (!func_214(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_213(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_212())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_203(4))
		{
			return 0;
		}
		if (!func_152(5))
		{
			return 0;
		}
		if (func_202(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_202(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_216(30) && !func_202(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_40(func_37()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_201(iVar8))
				{
					if (func_191(iVar4))
					{
						if (!func_190(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
							{
								if (func_37() != iVar4)
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

bool func_190(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_192(iVar0);
}

int func_192(int iParam0)
{
	return func_193(iParam0, 1);
}

int func_193(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_201(iParam0))
	{
		return 0;
	}
	func_194(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_195(func_80(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_195(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(iParam0, iParam1))
	{
		iVar0 = func_87(iParam1);
		iVar1 = func_85(iParam0);
		iVar2 = (func_85(iParam0) - func_85(iParam1));
		iVar3 = (func_87(iParam0) - func_87(iParam1));
		iVar4 = (func_199(iParam0) - func_199(iParam1));
		iVar5 = (func_79(iParam0) - func_79(iParam1));
		iVar6 = (func_198(iParam0) - func_198(iParam1));
		iVar7 = (func_197(iParam0) - func_197(iParam1));
	}
	else
	{
		iVar0 = func_87(iParam0);
		iVar1 = func_85(iParam1);
		iVar2 = (func_85(iParam1) - func_85(iParam0));
		iVar3 = (func_87(iParam1) - func_87(iParam0));
		iVar4 = (func_199(iParam1) - func_199(iParam0));
		iVar5 = (func_79(iParam1) - func_79(iParam0));
		iVar6 = (func_198(iParam1) - func_198(iParam0));
		iVar7 = (func_197(iParam1) - func_197(iParam0));
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
		iVar4 = (iVar4 + func_84(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_196(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_196(float fParam0, float fParam1, float fParam2)
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

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_201(iParam1) || !func_201(iParam0))
	{
		return 1;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_85(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	iVar1 = func_87(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_79(iParam0);
	iVar1 = func_79(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
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
	iVar0 = func_197(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_198(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_79(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_85(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_87(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_199(iParam0);
	if (iVar5 < 1 || iVar5 > func_84(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iVar0 = func_37();
				if (!func_40(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_211()) || Global_96220) || Global_24446) || func_210()) || func_119(8, -1)) || func_209()) || func_208()) || func_207()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_211()) || Global_24446) || func_210()) || func_119(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_211()) || Global_96220) || Global_24446) || func_210()) || func_119(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_211()) || Global_96220) || Global_24446) || func_210()) || func_119(8, -1)) || func_209()) || func_208()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_211() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_119(8, -1)) || func_206()) || func_205()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_119(8, -1) || func_209()) || func_208()) || func_205()) || func_204())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_211()) || Global_24446) || func_210()) || func_119(8, -1)) || func_208()) || func_207()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_211()) || func_208()) || Global_96220) || Global_24446) || func_210()) || Global_35953) || func_119(8, -1)) || func_207()) || func_205()) || func_206()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_211()) || Global_96220) || Global_24446) || func_210()) || func_119(8, -1)) || func_207()) || func_205()) || func_209()) || func_208()) || func_206())
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

var func_204()
{
	return Global_89823.f_1;
}

int func_205()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_206()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_208()
{
	return Global_89836.f_291 > 0;
}

bool func_209()
{
	return Global_89836.f_290 > 0;
}

var func_210()
{
	return Global_1315898;
}

int func_211()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_212()
{
	func_117();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_213(int iParam0)
{
	return func_200(func_80(), iParam0);
}

int func_214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_37();
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

int func_215(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_216(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_217()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_219(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

bool func_220(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_221()
{
	int iVar0;
	
	if (iLocal_222)
	{
		func_123(0);
		unk_0x12B3DEDD1DB99EFA("RE51A_SHOP");
		unk_0x8473059B7180712A();
		unk_0x9A76FCB3181D8AAB(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		unk_0x932057F38C942D3B("re_shoprobbery");
		unk_0x932057F38C942D3B("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			if (unk_0xFD68187442384158(iLocal_113[iVar0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_113[iVar0]) && !unk_0x2A24448FF232F834(iLocal_113[iVar0], 0))
				{
					unk_0xF60985E3F774849A(iLocal_113[iVar0], Local_102, 150f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_113[iVar0], 1);
				}
				unk_0xCA4DD92F1F2931F3(&(iLocal_113[iVar0]));
			}
			if (unk_0xD361727124133DF3(uLocal_184[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_184[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xD361727124133DF3(uLocal_191))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_191);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (unk_0xFD68187442384158(iLocal_120[iVar0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_120[iVar0]))
				{
					unk_0x3C2614E45AB2F499(iLocal_120[iVar0], 1);
					unk_0xB5DC017AFD430D1B(&uLocal_151);
					if (iLocal_48 == 1)
					{
						unk_0xEC0A546609840086(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_48 == 2)
					{
						unk_0xAC57FBF981AB03F4(iLocal_120[iVar0]);
						unk_0x3F07E364A21EBC20(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					unk_0xF60985E3F774849A(0, Local_102, 150f, -1, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_151);
					unk_0x8229311A391A4EC6(iLocal_120[iVar0], uLocal_151);
					unk_0x9F77DFFC61FCB68C(&uLocal_151);
					unk_0xA1E4BA3B17C6D931(iLocal_120[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (unk_0xFD68187442384158(iLocal_116[iVar0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_116[iVar0]))
				{
					unk_0x7FEDD088E489CE41(iLocal_116[iVar0], 317, 1);
					unk_0x3C2614E45AB2F499(iLocal_116[iVar0], 1);
					if (iVar0 == 0)
					{
						if (!iLocal_182)
						{
							unk_0xAC57FBF981AB03F4(iLocal_116[iVar0]);
							unk_0xF60985E3F774849A(iLocal_116[iVar0], Local_102, 150f, -1, 0, 0);
						}
						else
						{
							unk_0x2DC5B31EBB810396(iLocal_116[iVar0], 0);
						}
					}
					else
					{
						unk_0xB5DC017AFD430D1B(&uLocal_151);
						if (iLocal_48 == 2)
						{
							unk_0xAC57FBF981AB03F4(iLocal_116[iVar0]);
							unk_0x3F07E364A21EBC20(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						unk_0xF60985E3F774849A(0, Local_102, 150f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uLocal_151);
						unk_0x8229311A391A4EC6(iLocal_116[iVar0], uLocal_151);
						unk_0x9F77DFFC61FCB68C(&uLocal_151);
					}
					unk_0x2DC5B31EBB810396(iLocal_116[iVar0], 0);
					unk_0x6A750A31D18DA81A(iLocal_116[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (unk_0xFD68187442384158(iLocal_183))
		{
			unk_0xCA4DD92F1F2931F3(&iLocal_183);
		}
		if (unk_0xFD68187442384158(iLocal_166))
		{
			if (unk_0xDF75DAAACD32E49E(iLocal_166))
			{
				unk_0x5B97F41A7BE54877(iLocal_166, 1, 1);
			}
			unk_0x05DADA1340CBB893(&iLocal_166);
		}
		if (unk_0xFD68187442384158(iLocal_174))
		{
			unk_0xB67623A401171555(&iLocal_174);
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			}
		}
		unk_0x330ABD0F05E764BB(1);
		unk_0x255259988FBEFACC(1);
		unk_0xA54C914AEB391F49(1f);
		unk_0x53C0659721DC11EC(5);
		unk_0xF83CD415BF55C455(1);
		if (iLocal_48 == 1)
		{
			func_167(0, 0);
			func_164(0, 1, 0);
		}
		else if (iLocal_48 == 2)
		{
			func_167(14, 0);
			func_164(14, 1, 0);
		}
	}
	func_222(-1);
	unk_0x883793591E631A3B();
}

void func_222(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_185())
	{
		func_226(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_225(30000);
		StringCopy(&cVar0, func_224(Global_97162, 1), 64);
		if (func_65(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_223(&Global_24503);
	Global_97163 = 0;
	func_188(-1);
}

void func_223(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_224(int iParam0, bool bParam1)
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

void func_225(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_226(int iParam0)
{
	func_227(iParam0, 0, func_232(iParam0));
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_80();
	func_230(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_229(iParam0, &uVar0);
	Var1 = { func_228(&uVar0) };
}

struct<16> func_228(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_79(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_87(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_85(*uParam0), 64);
	return Var0;
}

void func_229(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_85(*uParam0);
	iVar1 = func_87(*uParam0);
	iVar2 = func_199(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_198(*uParam0);
	iVar5 = func_197(*uParam0);
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
	iVar6 = func_84(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_84(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_231(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, iParam1);
	func_89(uParam0, iParam2);
	func_88(uParam0, iParam3);
	func_83(uParam0, iParam4);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam6);
}

int func_232(int iParam0)
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

void func_233()
{
	Global_14558 = 0;
	func_234();
}

void func_234()
{
	if (unk_0xF611D1BB58990143())
	{
		unk_0xA2A4AD85BA2F7ADD();
		Global_16703 = 0;
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

Vector3 func_235()
{
	float fVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		fVar0 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_127, 1);
		iLocal_126 = 1;
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_130, 1) < fVar0)
		{
			fVar0 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_130, 1);
			iLocal_126 = 2;
		}
		if (iLocal_126 == 1)
		{
			iLocal_133 = 1;
			iLocal_48 = 1;
			return Local_127;
		}
		else if (iLocal_126 == 2)
		{
			iLocal_133 = 2;
			iLocal_48 = 2;
			return Local_130;
		}
	}
	return 0f, 0f, 0f;
}


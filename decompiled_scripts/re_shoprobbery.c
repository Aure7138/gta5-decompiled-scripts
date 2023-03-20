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
	func_237();
	if (unk_0x8D841F1DD3FA555F(11))
	{
		func_235();
		func_223();
	}
	if (iLocal_48 == 1)
	{
		if (!func_222(0) || !func_221(0))
		{
			unk_0xC23A229F78DAD92A();
		}
	}
	else if (iLocal_48 == 2)
	{
		if (!func_222(14) || !func_221(14))
		{
			unk_0xC23A229F78DAD92A();
		}
	}
	if (func_191(Local_49, 5, iLocal_133, 0, 0))
	{
		func_188(5);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x52AB115D3D6A8417() || iLocal_163)
		{
			if (!func_187())
			{
				if (func_186())
				{
					func_223();
				}
			}
			unk_0x36137B7A77318822("RE_SR", 0);
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
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
							if (func_174())
							{
								func_223();
							}
							if (!bLocal_53)
							{
								func_173();
							}
							if (bLocal_53)
							{
								func_172();
							}
						}
						break;
					
					case 1:
						switch (iLocal_45)
						{
							case 0:
								if (!iLocal_136)
								{
									func_171();
									if (unk_0x9B710BA2688DD221(iLocal_152))
									{
										func_165();
										iLocal_136 = 1;
									}
								}
								else
								{
									if (iLocal_48 == 1)
									{
										unk_0x37B8363C1453E921();
									}
									func_162();
									unk_0x2912C2F5F69CF538(iLocal_152);
									if (func_161())
									{
										if (!iLocal_158)
										{
											if (iLocal_48 == 1)
											{
												if (func_160(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
											else if (iLocal_48 == 2)
											{
												if (func_160(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
										}
									}
									if (func_159())
									{
										if (unk_0xFBACB273AA628CC5(uLocal_192))
										{
											unk_0x0A8175F24237A3D4(&uLocal_192);
										}
										unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
										unk_0x5B6D37392F5991C3(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_113)
										{
											if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
											{
												unk_0x633A554EB6BC4E71(iLocal_113[iVar0], unk_0x81873881071CD9FE(), 0, 16);
												unk_0x6CB332CB31E9FA96(iLocal_113[iVar0], 1);
												if (!unk_0xFBACB273AA628CC5(uLocal_184[iVar0]))
												{
													uLocal_184[iVar0] = func_158(iLocal_113[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_48 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_116)
											{
												if (!unk_0x5FEB513A4402FD59(iLocal_116[iVar0]))
												{
													unk_0x492E306B5A7C779A(iLocal_116[iVar0], -1);
													unk_0x6CB332CB31E9FA96(iLocal_116[iVar0], 1);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_120)
											{
												if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar0]))
												{
													unk_0x492E306B5A7C779A(iLocal_120[iVar0], -1);
													unk_0x6CB332CB31E9FA96(iLocal_120[iVar0], 1);
												}
												iVar0++;
											}
										}
										unk_0xAB6AFD52AD641D70(&iLocal_166);
										bLocal_139 = true;
										iLocal_45 = 1;
										iLocal_46 = 3;
									}
									if (func_157())
									{
										func_150(1);
										unk_0xC1B1E9A034A63A62(0);
										unk_0x8532947B41197C8B(88, Local_193, 15000f);
										iLocal_45 = 1;
									}
								}
								break;
							
							case 1:
								unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
								func_162();
								iVar1 = 0;
								while (iVar1 < iLocal_116)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_116[iVar1]))
									{
										if (unk_0xBBEF8270CE27C0EE(iLocal_116[iVar1], unk_0x81873881071CD9FE(), 1))
										{
											func_149();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_120)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_120[iVar1]))
									{
										if (unk_0xBBEF8270CE27C0EE(iLocal_120[iVar1], unk_0x81873881071CD9FE(), 1))
										{
											func_149();
										}
									}
									iVar1++;
								}
								switch (iLocal_46)
								{
									case 0:
										if (func_157())
										{
											func_145();
											func_143();
										}
										break;
									
									case 1:
										func_142();
										func_143();
										break;
									
									case 2:
										func_141();
										func_140();
										func_139();
										if (unk_0xC9D9444186B5A374() > 500)
										{
											if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
											{
												if (!unk_0xCB8B9E751036ECB2(iLocal_166))
												{
													func_138();
													unk_0x649CF94A4282A7FD(iLocal_113[0], joaat("weapon_unarmed"), 1);
													unk_0x75F9EE7629363312(iLocal_166, iLocal_113[0], unk_0xDED1B3B1138F742B(iLocal_113[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (unk_0x6DF2A27FBC647AEC(Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f), 0))
										{
											if (!unk_0x5FEB513A4402FD59(iLocal_116[1]))
											{
												unk_0x06189C52198B2264(iLocal_116[1], Local_102, 150f, -1, 0, 0);
												unk_0x1D15D99A10A15334(iLocal_116[1], 0);
												unk_0x71A8BCA218722FA1(&(iLocal_116[1]));
											}
											if (!unk_0x5FEB513A4402FD59(iLocal_116[2]))
											{
												unk_0x06189C52198B2264(iLocal_116[2], Local_102, 150f, -1, 0, 0);
												unk_0x1D15D99A10A15334(iLocal_116[2], 0);
												unk_0x71A8BCA218722FA1(&(iLocal_116[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_112 - 1))
											{
												if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar2]))
												{
													unk_0x3B7AFF7DCE22C1CF(iLocal_120[iVar2], 1);
													unk_0xEAD984C2869B8B7C(&uLocal_151);
													if (iLocal_48 == 1)
													{
														unk_0x31C1393E4ACFD794(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_48 == 2)
													{
														unk_0xD91194CE3D1E1D77(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													unk_0x06189C52198B2264(0, Local_102, 150f, -1, 0, 0);
													unk_0x56D9ED1541046AF6(uLocal_151);
													unk_0xC65002CAA1212AF9(iLocal_120[iVar2], uLocal_151);
													unk_0xA3561415EB3DA3A3(&uLocal_151);
													unk_0x6CB332CB31E9FA96(iLocal_120[iVar2], 1);
													unk_0x1D15D99A10A15334(iLocal_120[iVar2], 0);
													unk_0x33B1E568CEF14B0D(iLocal_120[iVar2], 1);
													unk_0x71A8BCA218722FA1(&(iLocal_120[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_137() || unk_0x83666F9FB8FEBD4B() > 20000)
										{
											if (!iLocal_163)
											{
												if (!unk_0x930F8FBB8E9537CC(iLocal_113[0]))
												{
													func_130(0, 1, 1, 0);
													func_125(0);
													unk_0xF1BC58601CA4A5C7(1);
													unk_0x3BF4F473786B0150(1);
													unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
													unk_0x31C1393E4ACFD794(unk_0x81873881071CD9FE(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, 0, 0, 0);
													if (iLocal_48 == 1)
													{
														if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
														{
															unk_0xABA9860C0161F3CD(iLocal_166, 0);
															unk_0x5CEA5F12775261F2(iLocal_166, 0, 0);
														}
													}
													else if (iLocal_48 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_116)
													{
														if (!unk_0x5FEB513A4402FD59(iLocal_116[iVar1]))
														{
															unk_0x1D15D99A10A15334(iLocal_116[iVar1], 0);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_120)
													{
														if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar1]))
														{
															unk_0x1D15D99A10A15334(iLocal_120[iVar1], 0);
														}
														iVar1++;
													}
													if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
													{
														unk_0x1D15D99A10A15334(iLocal_116[0], 1);
														unk_0xEAD984C2869B8B7C(&uLocal_151);
														unk_0x31C1393E4ACFD794(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
														unk_0x56D9ED1541046AF6(uLocal_151);
														unk_0xC65002CAA1212AF9(iLocal_116[0], uLocal_151);
														unk_0xA3561415EB3DA3A3(&uLocal_151);
														unk_0x6CB332CB31E9FA96(iLocal_116[0], 1);
													}
													if (!func_124())
													{
														func_113(&uLocal_231, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_163 = 1;
												}
											}
										}
										if (!iLocal_138)
										{
											if (unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (unk_0xC00796CF40447CA8(unk_0x81873881071CD9FE(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (unk_0xC00796CF40447CA8(unk_0x81873881071CD9FE(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_112(64)))
												{
													unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
													iLocal_138 = 1;
												}
											}
										}
										if (iLocal_48 == 1)
										{
											if (!func_157())
											{
												if (!iLocal_179)
												{
													iLocal_179 = 1;
												}
											}
											if (!bLocal_160)
											{
												func_111();
											}
											if (!unk_0x5FEB513A4402FD59(iLocal_113[0]) && unk_0x7404950238A154C2(iLocal_174, 0))
											{
												if (unk_0x04C377C10639B842(iLocal_113[0], iLocal_174, 0))
												{
													if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
													{
														unk_0xAB6AFD52AD641D70(&iLocal_166);
														bLocal_160 = true;
													}
												}
											}
											if (func_110() && !iLocal_161)
											{
												if (unk_0xFBACB273AA628CC5(uLocal_184[0]))
												{
													unk_0x0A8175F24237A3D4(&(uLocal_184[0]));
												}
												if (unk_0xFBACB273AA628CC5(uLocal_184[1]))
												{
													unk_0x0A8175F24237A3D4(&(uLocal_184[1]));
												}
												if (!unk_0xFBACB273AA628CC5(uLocal_190))
												{
													uLocal_190 = func_108(iLocal_174, 1, 0);
												}
												bLocal_160 = true;
												if (!unk_0x5FEB513A4402FD59(iLocal_183))
												{
													unk_0x4B9FA68A3AC8C29D(iLocal_183, 17, 1);
													unk_0x4B9FA68A3AC8C29D(iLocal_183, 6, 1);
													unk_0x4B9FA68A3AC8C29D(iLocal_183, 1, 1);
													unk_0xEFACB1875068FA30(iLocal_183, iLocal_174, unk_0x81873881071CD9FE(), 8, 16f, 786469, -1f, -1f, 1);
													unk_0x6CB332CB31E9FA96(iLocal_183, 1);
													iLocal_161 = 1;
												}
											}
											if (iLocal_161 && !iLocal_223)
											{
												if (unk_0x7404950238A154C2(iLocal_174, 0) && !unk_0x5FEB513A4402FD59(iLocal_183))
												{
													if (!unk_0x515B65C19A5CA9B1(iLocal_174, Local_54[0 /*3*/], 20f, 20f, 10f, 0, 1, 0))
													{
														unk_0xEFACB1875068FA30(iLocal_183, iLocal_174, unk_0x81873881071CD9FE(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_223 = 1;
													}
												}
											}
											if (func_107())
											{
												if (!unk_0x5FEB513A4402FD59(iLocal_183))
												{
													if (unk_0x7404950238A154C2(iLocal_174, 0))
													{
														if (!iLocal_162)
														{
															unk_0x4B9FA68A3AC8C29D(iLocal_183, 17, 1);
															unk_0x4B9FA68A3AC8C29D(iLocal_183, 6, 1);
															unk_0x4B9FA68A3AC8C29D(iLocal_183, 1, 1);
															unk_0xEFACB1875068FA30(iLocal_183, iLocal_174, unk_0x81873881071CD9FE(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_162 = 1;
														}
														if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
														{
															if (unk_0x04C377C10639B842(iLocal_113[0], iLocal_174, 0))
															{
																if (unk_0xFBACB273AA628CC5(uLocal_184[0]))
																{
																	unk_0x0A8175F24237A3D4(&(uLocal_184[0]));
																}
																if (unk_0xFBACB273AA628CC5(uLocal_184[1]))
																{
																	unk_0x0A8175F24237A3D4(&(uLocal_184[1]));
																}
																if (!unk_0xFBACB273AA628CC5(uLocal_190))
																{
																	uLocal_190 = func_108(iLocal_174, 1, 0);
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
														if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar3]))
														{
															if (unk_0xE5AB05962FA1FF3F(iLocal_113[iVar3], 0) && !unk_0x5FEB513A4402FD59(iLocal_183))
															{
																unk_0x8A0CA59A6D4D119B(iLocal_113[iVar3], unk_0x81873881071CD9FE(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_140[iVar3] = 1;
															}
															else if (!unk_0xFBACB273AA628CC5(uLocal_191))
															{
																unk_0x633A554EB6BC4E71(iLocal_113[iVar3], unk_0x81873881071CD9FE(), 0, 16);
																unk_0x6CB332CB31E9FA96(iLocal_113[iVar3], 1);
																if (unk_0xFBACB273AA628CC5(uLocal_190))
																{
																	unk_0x0A8175F24237A3D4(&uLocal_190);
																}
																if (!unk_0xFBACB273AA628CC5(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = func_158(iLocal_113[iVar3], 1, 145);
																}
																iLocal_140[iVar3] = 1;
															}
														}
													}
													if (!iLocal_143[iVar3])
													{
														if (unk_0x7404950238A154C2(iLocal_174, 0))
														{
															if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar3]))
															{
																if ((unk_0x5FEB513A4402FD59(iLocal_183) || unk_0xBEB00EB4ADDC2A33(iLocal_174, -1)) || unk_0x2D2289DC6C760F31(iLocal_113[iVar3]))
																{
																	unk_0x3B7AFF7DCE22C1CF(iLocal_113[iVar3], 1);
																	unk_0xEAD984C2869B8B7C(&uLocal_151);
																	unk_0x98046F3D16B9CF76(0, 0, 0);
																	unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
																	unk_0x56D9ED1541046AF6(uLocal_151);
																	unk_0xC65002CAA1212AF9(iLocal_113[iVar3], uLocal_151);
																	unk_0xA3561415EB3DA3A3(&uLocal_151);
																	unk_0x6CB332CB31E9FA96(iLocal_113[iVar3], 1);
																	if (!unk_0x5FEB513A4402FD59(iLocal_183))
																	{
																		unk_0x3B7AFF7DCE22C1CF(iLocal_183, 1);
																		unk_0xEAD984C2869B8B7C(&uLocal_151);
																		unk_0x98046F3D16B9CF76(0, 0, 0);
																		unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
																		unk_0x56D9ED1541046AF6(uLocal_151);
																		unk_0xC65002CAA1212AF9(iLocal_183, uLocal_151);
																		unk_0xA3561415EB3DA3A3(&uLocal_151);
																		unk_0x6CB332CB31E9FA96(iLocal_183, 1);
																	}
																	if (!unk_0xFBACB273AA628CC5(uLocal_191))
																	{
																		if (unk_0xFBACB273AA628CC5(uLocal_190))
																		{
																			unk_0x0A8175F24237A3D4(&uLocal_190);
																		}
																		if (!unk_0xFBACB273AA628CC5(uLocal_184[iVar3]))
																		{
																			uLocal_184[iVar3] = func_158(iLocal_113[iVar3], 1, 145);
																		}
																	}
																	iLocal_143[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar3]))
															{
																unk_0x3B7AFF7DCE22C1CF(iLocal_113[iVar3], 1);
																unk_0xEAD984C2869B8B7C(&uLocal_151);
																unk_0x98046F3D16B9CF76(0, 0, 0);
																unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
																unk_0x56D9ED1541046AF6(uLocal_151);
																unk_0xC65002CAA1212AF9(iLocal_113[iVar3], uLocal_151);
																unk_0xA3561415EB3DA3A3(&uLocal_151);
																unk_0x6CB332CB31E9FA96(iLocal_113[iVar3], 1);
															}
															if (!unk_0x5FEB513A4402FD59(iLocal_183))
															{
																unk_0x3B7AFF7DCE22C1CF(iLocal_183, 1);
																unk_0xEAD984C2869B8B7C(&uLocal_151);
																unk_0x98046F3D16B9CF76(0, 0, 0);
																unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
																unk_0x56D9ED1541046AF6(uLocal_151);
																unk_0xC65002CAA1212AF9(iLocal_183, uLocal_151);
																unk_0xA3561415EB3DA3A3(&uLocal_151);
																unk_0x6CB332CB31E9FA96(iLocal_183, 1);
															}
															if (!unk_0xFBACB273AA628CC5(uLocal_191))
															{
																if (unk_0xFBACB273AA628CC5(uLocal_190))
																{
																	unk_0x0A8175F24237A3D4(&uLocal_190);
																}
																if (!unk_0xFBACB273AA628CC5(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = func_158(iLocal_113[iVar3], 1, 145);
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
												if (func_106())
												{
													func_105();
													func_102();
													iLocal_46 = 9;
												}
											}
										}
										else if (iLocal_48 == 2)
										{
											if (unk_0x5FEB513A4402FD59(iLocal_113[0]))
											{
												if (unk_0xFBACB273AA628CC5(uLocal_184[0]))
												{
													func_101(&uLocal_231, 3);
													unk_0x0A8175F24237A3D4(&(uLocal_184[0]));
												}
											}
											if (unk_0x5FEB513A4402FD59(iLocal_113[1]))
											{
												if (unk_0xFBACB273AA628CC5(uLocal_184[1]))
												{
													func_101(&uLocal_231, 4);
													unk_0x0A8175F24237A3D4(&(uLocal_184[1]));
												}
											}
											if (unk_0x5FEB513A4402FD59(iLocal_113[0]))
											{
												if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
												{
													if (unk_0xCB8B9E751036ECB2(iLocal_166))
													{
														unk_0xD88DD5B581458979(iLocal_166, 1, 1);
													}
													unk_0xAB6AFD52AD641D70(&iLocal_166);
													func_105();
													func_102();
													iLocal_46 = 9;
												}
											}
											else if (unk_0xBBEF8270CE27C0EE(iLocal_113[0], unk_0x81873881071CD9FE(), 1))
											{
												if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
												{
													if (unk_0xCB8B9E751036ECB2(iLocal_166))
													{
														unk_0xD88DD5B581458979(iLocal_166, 1, 1);
													}
													unk_0xAB6AFD52AD641D70(&iLocal_166);
													func_105();
													func_102();
													iLocal_46 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_142();
										break;
									
									case 9:
										func_141();
										func_99();
										break;
									
									case 10:
										func_96(2);
										func_95(uLocal_192, &uLocal_228);
										if (iLocal_48 == 1)
										{
											if (!iLocal_159)
											{
												unk_0x295DC04FC13E025B("random@robbery");
												if (!unk_0x8E8B546E1A81D27F("random@robbery"))
												{
													unk_0x295DC04FC13E025B("random@robbery");
												}
												else if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
												{
													unk_0xB067093BBAF0A747(iLocal_116[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													unk_0xC24172029826A66F(iLocal_116[0], 47.0582f);
													unk_0x31C1393E4ACFD794(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0x5FEB513A4402FD59(iLocal_116[1]))
													{
														unk_0x06189C52198B2264(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														unk_0x1D15D99A10A15334(iLocal_116[1], 0);
														unk_0x71A8BCA218722FA1(&(iLocal_116[1]));
													}
													if (!unk_0x5FEB513A4402FD59(iLocal_116[2]))
													{
														unk_0x06189C52198B2264(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														unk_0x1D15D99A10A15334(iLocal_116[2], 0);
														unk_0x71A8BCA218722FA1(&(iLocal_116[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_112 - 1))
													{
														if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar4]))
														{
															unk_0xEAD984C2869B8B7C(&uLocal_151);
															unk_0x31C1393E4ACFD794(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															unk_0x06189C52198B2264(0, Local_102, 150f, -1, 0, 0);
															unk_0x56D9ED1541046AF6(uLocal_151);
															unk_0xC65002CAA1212AF9(iLocal_120[iVar4], uLocal_151);
															unk_0xA3561415EB3DA3A3(&uLocal_151);
															unk_0x6CB332CB31E9FA96(iLocal_120[iVar4], 1);
															unk_0x1D15D99A10A15334(iLocal_120[iVar4], 0);
															unk_0x33B1E568CEF14B0D(iLocal_120[iVar4], 1);
															unk_0x71A8BCA218722FA1(&(iLocal_120[iVar4]));
														}
														iVar4++;
													}
													iLocal_159 = 1;
												}
											}
											func_71(6, 3);
											func_71(7, 3);
										}
										else if (iLocal_48 == 2)
										{
											if (!iLocal_159)
											{
												unk_0x295DC04FC13E025B("random@robbery");
												if (!unk_0x8E8B546E1A81D27F("random@robbery"))
												{
													unk_0x295DC04FC13E025B("random@robbery");
												}
												else if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
												{
													unk_0xB067093BBAF0A747(iLocal_116[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													unk_0xC24172029826A66F(iLocal_116[0], 205.7753f);
													unk_0x31C1393E4ACFD794(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0x5FEB513A4402FD59(iLocal_116[1]))
													{
														unk_0x06189C52198B2264(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														unk_0x1D15D99A10A15334(iLocal_116[1], 0);
														unk_0x71A8BCA218722FA1(&(iLocal_116[1]));
													}
													if (!unk_0x5FEB513A4402FD59(iLocal_116[2]))
													{
														unk_0x06189C52198B2264(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														unk_0x1D15D99A10A15334(iLocal_116[2], 0);
														unk_0x71A8BCA218722FA1(&(iLocal_116[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_112 - 1))
													{
														if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar5]))
														{
															unk_0x06189C52198B2264(iLocal_120[iVar5], Local_102, 150f, -1, 0, 0);
															unk_0x1D15D99A10A15334(iLocal_120[iVar5], 0);
															unk_0x33B1E568CEF14B0D(iLocal_120[iVar5], 1);
															unk_0x71A8BCA218722FA1(&(iLocal_120[iVar5]));
														}
														iVar5++;
													}
													iLocal_159 = 1;
												}
											}
											if (unk_0x667A6FB4A24C8B47(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												unk_0xBF4F29C80C79D83C(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_161())
										{
										}
										if ((func_157() && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && !unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_46 = 11;
										}
										if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), func_237()) > (fLocal_196 + 150f))
										{
											iLocal_46 = 12;
										}
										if (unk_0x83666F9FB8FEBD4B() > 120000)
										{
											iLocal_46 = 14;
										}
										if (unk_0x5FEB513A4402FD59(iLocal_116[0]))
										{
											func_70(2);
											func_49();
										}
										else if (unk_0xBBEF8270CE27C0EE(iLocal_116[0], unk_0x81873881071CD9FE(), 1))
										{
											func_70(2);
											func_49();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_70(2);
										func_49();
										break;
									
									case 7:
										func_49();
										break;
									
									case 14:
										func_70(2);
										func_49();
										break;
									
									case 13:
										if (!iLocal_224)
										{
											if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
											{
												unk_0x27CC98B7C879C320(iLocal_116[0]);
												if (iLocal_48 == 1)
												{
													func_113(&uLocal_231, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_48 == 2)
												{
													func_113(&uLocal_231, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												unk_0xEFCD4942377423D3(iLocal_116[0], 20000);
												unk_0x6CB332CB31E9FA96(iLocal_116[0], 1);
												unk_0x1D15D99A10A15334(iLocal_116[0], 0);
												iLocal_224 = 1;
											}
										}
										if (!func_124())
										{
											iLocal_45 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_149();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_223();
		}
	}
}

void func_1()
{
	if (func_157())
	{
		if (unk_0xFBACB273AA628CC5(uLocal_192))
		{
			unk_0x0A8175F24237A3D4(&uLocal_192);
		}
		if (!iLocal_181)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
			{
				func_130(1, 1, 1, 0);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				unk_0xB8BB626315D394F5(1);
				unk_0x82695E55A5428216(unk_0xB6AE0DAE06D56288(iLocal_116[0], 1), 20f, 0);
				unk_0xF1BC58601CA4A5C7(0);
				unk_0x3BF4F473786B0150(0);
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
		if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
		{
			bLocal_180 = true;
		}
	}
	if (bLocal_180)
	{
		if (!iLocal_182)
		{
			unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 1);
			unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
			if (unk_0xFBACB273AA628CC5(uLocal_192))
			{
				unk_0x0A8175F24237A3D4(&uLocal_192);
			}
			Local_197 = { unk_0xB6AE0DAE06D56288(iLocal_116[0], 0) };
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
			uLocal_215 = unk_0x59C061A719024602(Local_197, Local_203, 2);
			uLocal_209 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0xC813152833B59518(uLocal_209, uLocal_215, sLocal_214, sLocal_210);
			unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
			unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uLocal_215, sLocal_210, sLocal_211, 1000f, -2f, 5, 0, 1148846080, 0);
			unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
			unk_0x1E2B48EE3EC55DCF(iLocal_116[0]);
			unk_0x58BEA8B2364F8C48(iLocal_116[0], uLocal_215, sLocal_210, sLocal_212, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x95BE9BA77CA91710(iLocal_116[0], 0, 0);
			iLocal_166 = unk_0xF364195A57BB7AE3(joaat("prop_cs_duffel_01"), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1, 1, 0);
			unk_0x0F5BEB6747CF25B4(iLocal_166, uLocal_215, sLocal_213, sLocal_210, 1000f, 1090519040, 0, 1148846080);
			if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
			{
				func_48();
				unk_0xDD0B0D77CB8995B1(uLocal_209, 1);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_182 = 1;
			}
		}
	}
	if ((unk_0x83666F9FB8FEBD4B() > 1500 && iLocal_182) && !iLocal_157)
	{
		func_46();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_48 == 1)
		{
			func_113(&uLocal_231, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_48 == 2)
		{
			func_113(&uLocal_231, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_157 = 1;
	}
	if (unk_0xF855C83E3A17514B(uLocal_215) > fLocal_216 && iLocal_182)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
		{
			unk_0x0CD6B65135C8C3FE(iLocal_116[0], iLocal_188);
			unk_0x27CC98B7C879C320(iLocal_116[0]);
			unk_0xEAD984C2869B8B7C(&uLocal_151);
			unk_0x31C1393E4ACFD794(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_151);
			unk_0xC65002CAA1212AF9(iLocal_116[0], uLocal_151);
			unk_0xA3561415EB3DA3A3(&uLocal_151);
			unk_0x6CB332CB31E9FA96(iLocal_116[0], 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_166);
		}
		unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
		unk_0x03EB8112BA30917C(unk_0x81873881071CD9FE(), joaat("MotionState_Walk"), 0, 0, 0);
		unk_0x4C6646EAFB3AD914(unk_0x1329891157A54C63(), 1f, 650, 0, 1, 0);
		func_130(0, 1, 1, 0);
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 4);
		unk_0xF1BC58601CA4A5C7(1);
		unk_0x3BF4F473786B0150(1);
		unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 0);
		unk_0x270066FDBAF3A458(0f);
		unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
		unk_0x35B958B469415A23(uLocal_209, 0);
		func_45();
		func_44(joaat("rc_wallets_returned"), 1);
		if (iLocal_48 == 1)
		{
			func_12(func_39(), 1, iLocal_188);
			func_2(0, func_39(), 1);
		}
		else if (iLocal_48 == 2)
		{
			func_12(func_39(), 1, iLocal_188);
			func_2(14, func_39(), 1);
		}
		func_70(3);
		func_49();
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
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312729;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_5(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_9()
{
	return Global_24946;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_9() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_13(Global_98931.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_38();
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
					func_37(99, 1);
					func_44(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_44(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_44(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_21(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
							func_44(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_44(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_44(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_44(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_44(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_44(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_44(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_44(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_44(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_44(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_37(95, iParam3);
					break;
				
				case 1:
					func_37(97, iParam3);
					break;
				
				case 2:
					func_37(96, iParam3);
					break;
			}
			func_37(98, iParam3);
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
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_44(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_44(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_44(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_15(iParam0);
	if (Global_35443 == 15)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_16(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_18() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_18() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_17(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_37(93, iParam0);
	func_37(29, iParam0);
	func_37(30, iParam0);
}

bool func_20(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_18() /*9662*/].f_7252.f_10, iParam0);
}

int func_21(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_36(27, iVar1);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_23(iParam0, iParam1);
}

int func_23(int iParam0, int iParam1)
{
	if (func_35(14) && !func_34(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_33(&Global_2550589))
	{
		if (func_31(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_24(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
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
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_35(14) && !func_34(iParam1))
	{
		return 0;
	}
	if (func_31(uParam0, iParam1))
	{
		return 0;
	}
	if (func_30(uParam0) < 0f)
	{
		func_29(uParam0, 0);
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_35(14) && !func_34(iParam1))
	{
		return 0;
	}
	if (func_31(uParam0, iParam1))
	{
		return 0;
	}
	if (func_30(uParam0) < 0f)
	{
		func_29(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
}

void func_27(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_28(uParam0, iVar0);
		iVar0++;
	}
	func_29(uParam0, (Global_2550588 - 0.5f));
}

void func_28(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_29(var uParam0, float fParam1)
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

float func_30(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
}

int func_34(int iParam0)
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

bool func_35(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_36(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_38()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_39()
{
	func_40();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_40()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_43(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_42(unk_0x81873881071CD9FE());
			if (func_41(iVar0) && (!func_35(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_41(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_45()
{
	if (iLocal_48 == 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_116[0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
			{
				unk_0x1D15D99A10A15334(iLocal_116[0], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_116[0]));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_116[1]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_116[1]))
			{
				unk_0x1D15D99A10A15334(iLocal_116[1], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_116[1]));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_120[0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_120[0]))
			{
				unk_0x1D15D99A10A15334(iLocal_120[0], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_120[0]));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_120[1]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_120[1]))
			{
				unk_0x1D15D99A10A15334(iLocal_120[1], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_120[1]));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_120[2]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_120[2]))
			{
				unk_0xB067093BBAF0A747(iLocal_120[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(iLocal_120[2], 167.7909f);
				unk_0x1D15D99A10A15334(iLocal_120[2], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_120[2]));
			}
		}
	}
}

void func_46()
{
	Global_14559 = 0;
	func_47();
}

void func_47()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_48()
{
	if (iLocal_48 == 1)
	{
		if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x2ADE2CEED2637E95(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x2ADE2CEED2637E95(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xB067093BBAF0A747(unk_0x2ADE2CEED2637E95(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				unk_0x5CC9D6711FE01F0D(unk_0x2ADE2CEED2637E95());
			}
		}
		unk_0x7C6BF0CD5D7454C9(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x2ADE2CEED2637E95(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x2ADE2CEED2637E95(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xB067093BBAF0A747(unk_0x2ADE2CEED2637E95(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				unk_0x5CC9D6711FE01F0D(unk_0x2ADE2CEED2637E95());
			}
		}
		unk_0x7C6BF0CD5D7454C9(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, 0);
	}
}

void func_49()
{
	while (!func_69())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xD74A10556CE1D361(unk_0x1329891157A54C63(), 1);
	func_53(5, iLocal_133);
	func_50();
	func_223();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_66(iParam0))
	{
		func_65(iParam0, iParam1);
		if (!func_64(51))
		{
			func_60("RE_REWARD", 1, 0, 4000, 10000, func_63(), 0, 138, 0);
			func_59(51);
		}
		if (func_58(iParam0))
		{
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_54(func_57(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_70(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
			{
				func_70(7);
			}
			else
			{
				func_70(1);
			}
		}
	}
}

void func_54(int iParam0, var uParam1, var uParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_55();
	}
}

void func_55()
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_36(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_9() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_51();
				}
			}
		}
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_57(int iParam0, int iParam1)
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

int func_58(int iParam0)
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

void func_59(int iParam0)
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_62();
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_63()
{
	func_40();
	switch (Global_98931.f_1750.f_539.f_3549)
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

int func_64(int iParam0)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_65(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

int func_66(int iParam0)
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

int func_67()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_68(Var0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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

int func_69()
{
	return 1;
}

void func_70(int iParam0)
{
	Global_98917 = iParam0;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69020)
		{
			iVar0 = Global_2422670.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_98931.f_5875[iParam0];
		}
		if (iVar0 != iParam1 || unk_0x236D8AD7EE179F46(Global_31312[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_31321[(iParam0 / 32)]), (iParam0 % 32));
				Global_31784[iParam0] = iParam1;
			}
			else if (Global_69020)
			{
				Global_2422670.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_98931.f_5875[iParam0] = iParam1;
			}
			unk_0xF3148AAF69AF9CBC(&(Global_31312[(iParam0 / 32)]), (iParam0 % 32));
			func_73(iParam0);
			if (unk_0x236D8AD7EE179F46(Global_31312[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_72(iParam0);
			}
		}
	}
}

void func_72(int iParam0)
{
	if (!unk_0x236D8AD7EE179F46(Global_32255.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_32255.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32255[Global_32255.f_227] = iParam0;
		Global_32255.f_227++;
	}
}

void func_73(int iParam0)
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
	
	if (!func_93())
	{
		return;
	}
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return;
	}
	Var0 = { func_92(iParam0) };
	if (unk_0x236D8AD7EE179F46(Var0.f_4, 2))
	{
		func_78(iParam0, &Var0);
	}
	if (!unk_0x0017826B6757A11F(Var0.f_5))
	{
		if (unk_0x521385D8214D27C4())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x0D6E79537424BACE(Var0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1);
	if ((unk_0x236D8AD7EE179F46(Global_31321[(iParam0 / 32)], (iParam0 % 32)) && Global_31784[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0xC69E84EBBD7166E6(&(Global_31321[(iParam0 / 32)]), (iParam0 % 32));
		Global_31330[iParam0] = 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("startup_positioning")) == 0)
	{
		if (unk_0x236D8AD7EE179F46(Global_31557[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90861.f_294 == 0)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						Global_90861.f_294 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
					}
				}
				iVar11 = Global_90861.f_294;
				iVar12 = unk_0xB3202EEA6EFADBA8(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_31321[(iParam0 / 32)]), (iParam0 % 32));
					Global_31784[iParam0] = 3;
					unk_0xF3148AAF69AF9CBC(&(Global_31312[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xC69E84EBBD7166E6(&(Global_31557[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_31321[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31784[iParam0];
	}
	else if (unk_0x236D8AD7EE179F46(Var0.f_4, 0))
	{
		if (Global_98931.f_7699)
		{
			iVar9 = func_75(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_35(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0x236D8AD7EE179F46(Var0.f_4, 1) && unk_0x968BF1C2C695B61A(joaat("ambient_solomon")) == 0)
	{
		if (func_74())
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
		iVar9 = Global_98931.f_5875[iParam0];
	}
	if (Global_32011[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0x236D8AD7EE179F46(Global_31312[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0x236D8AD7EE179F46(Global_31321[(iParam0 / 32)], (iParam0 % 32)) || (Global_31330[iParam0] == 0 && Global_31784[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_31311)
		{
		}
		else
		{
			if (!unk_0x0017826B6757A11F(Var0.f_5))
			{
				unk_0x5DFB58C2BA8EB905(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0x236D8AD7EE179F46(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0xB9AA84B14E04BC20(unk_0xED1E147D0EA455D7(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
						iVar15 = unk_0xB3202EEA6EFADBA8(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xBAFD147A064DBD31(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xFF3E86C4D581F64B(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0xC69E84EBBD7166E6(&(Global_31312[(iParam0 / 32)]), (iParam0 % 32));
			Global_32011[iParam0] = iVar9;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_31321[(iParam0 / 32)], (iParam0 % 32)) && Global_31784[iParam0] != 2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_31312[(iParam0 / 32)]), (iParam0 % 32));
		func_72(iParam0);
		if (Global_31330[iParam0] < 2)
		{
			Global_31330[iParam0]++;
		}
	}
}

int func_74()
{
	if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
		return 0;
	}
	switch (func_39())
	{
		case 0:
			if (Global_98931.f_7699.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_98931.f_7699.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_98931.f_7699.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39();
	if (func_76(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[5], 0) || unk_0x236D8AD7EE179F46(Global_98931.f_5843[6], 0))
			{
				return 0;
			}
		}
		if (func_41(iVar0))
		{
			if (unk_0x236D8AD7EE179F46(Global_86169[5], iVar0))
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
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[0], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Global_86169[0], iVar0))
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
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[5], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Global_86169[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[6], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Global_86169[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[2], 0))
				{
					return 0;
				}
				if (func_41(iVar0))
				{
					if (unk_0x236D8AD7EE179F46(Global_86169[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[1], 0))
				{
					return 0;
				}
				if (func_41(iVar0))
				{
					if (unk_0x236D8AD7EE179F46(Global_86169[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0x236D8AD7EE179F46(Global_98931.f_5843[3], 0))
				{
					return 0;
				}
			}
			if (func_41(iVar0))
			{
				if (unk_0x236D8AD7EE179F46(Global_86169[3], iVar0))
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

int func_76(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				iVar0 = unk_0x14B7103DBD149FFE(func_77(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1)));
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

var func_77(var uParam0)
{
	return uParam0;
}

void func_78(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x236D8AD7EE179F46(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_81();
	iVar1 = func_80(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_79(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_98931.f_5875[iParam0] = 0;
						unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 12f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 12f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_79(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_98931.f_5875[iParam0] = 0;
						unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 12f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 12f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_79(iParam0))
			{
				if ((unk_0x968BF1C2C695B61A(joaat("jewelry_heist")) == 0 && unk_0x968BF1C2C695B61A(joaat("jewelry_setup1")) == 0) && !Global_98931.f_7699.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_98931.f_5875[iParam0] = 0;
							unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_98931.f_7699.f_99.f_58[4])
				{
					Global_98931.f_5875[iParam0] = 0;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else if (Global_98931.f_7699.f_99.f_58[4])
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			else if (unk_0x968BF1C2C695B61A(joaat("jewelry_heist")) == 0 && unk_0x968BF1C2C695B61A(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 18f)
					{
						Global_98931.f_5875[iParam0] = 1;
						unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 18f)
					{
						Global_98931.f_5875[iParam0] = 1;
						unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_79(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_98931.f_5875[iParam0] = 0;
						unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 40f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), *uParam1) >= 40f)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_79(iParam0))
			{
				if (unk_0x968BF1C2C695B61A(joaat("assassin_valet")) == 0)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else if (unk_0x968BF1C2C695B61A(joaat("assassin_valet")) > 0)
			{
				Global_98931.f_5875[iParam0] = 0;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x968BF1C2C695B61A(Global_81930[70 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x968BF1C2C695B61A(joaat("omega2")) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_79(iParam0) && unk_0x968BF1C2C695B61A(Global_81930[26 /*34*/].f_6) == 0)
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
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
			if (!func_79(iParam0))
			{
				if (unk_0x968BF1C2C695B61A(Global_81930[43 /*34*/].f_6) == 0)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_79(iParam0))
			{
				if (unk_0x968BF1C2C695B61A(Global_81930[93 /*34*/].f_6) > 0)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_79(iParam0))
			{
				if (unk_0x968BF1C2C695B61A(Global_81930[8 /*34*/].f_6) == 0 && unk_0x968BF1C2C695B61A(Global_81930[10 /*34*/].f_6) == 0)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_79(iParam0))
			{
				if (unk_0x968BF1C2C695B61A(Global_81930[47 /*34*/].f_6) == 0)
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x968BF1C2C695B61A(Global_81930[70 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
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
			if (unk_0x968BF1C2C695B61A(Global_81930[48 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x968BF1C2C695B61A(Global_81930[39 /*34*/].f_6) == 0)
			{
				if (!func_79(iParam0))
				{
					Global_98931.f_5875[iParam0] = 1;
					unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 1;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_79(iParam0))
			{
				Global_98931.f_5875[iParam0] = 0;
				unk_0xFF3E86C4D581F64B(uParam1->f_5, Global_98931.f_5875[iParam0], 1, 1);
			}
			break;
	}
}

bool func_79(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_92(iParam0) };
	iVar7 = unk_0x6EE19172D0F7CB48(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_80(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_81()
{
	var uVar0;
	
	func_91(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_90(&uVar0, unk_0x25B31B877207A3A9());
	func_89(&uVar0, unk_0x0C937048CF6952B5());
	func_84(&uVar0, unk_0x8B6B3DD84CE74978());
	func_83(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_82(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

int func_86(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_87(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(int iParam0)
{
	return iParam0 & 15;
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

struct<7> func_92(int iParam0)
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 0);
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
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 3);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 1);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 3);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
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
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xF3148AAF69AF9CBC(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_93()
{
	if ((func_9() == -1 || func_9() == 999) && !func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_24947;
}

void func_95(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x48E480685981C7D4();
	}
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		iVar0 = (unk_0x48E480685981C7D4() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x8849D149F1DEE8C1(uParam0) != 255)
				{
					unk_0x9DA87A96BDB876EC(uParam0, 255);
				}
			}
			else if (unk_0x8849D149F1DEE8C1(uParam0) != 0)
			{
				unk_0x9DA87A96BDB876EC(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x8849D149F1DEE8C1(uParam0) != 255)
			{
				unk_0x9DA87A96BDB876EC(uParam0, 255);
			}
		}
	}
}

void func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_97(func_98(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_97(func_98(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_97(func_98(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

char* func_98(int iParam0)
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

void func_99()
{
	if (unk_0x0AEC8EB3EC414C02(uLocal_109))
	{
		func_44(joaat("rc_wallets_recovered"), 1);
		if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
		{
			uLocal_192 = func_158(iLocal_116[0], 0, 145);
		}
		func_100(&uLocal_228);
		fLocal_196 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), func_237());
		unk_0xC1B1E9A034A63A62(0);
		iLocal_46 = 10;
	}
	if (unk_0x7423A8514A6F26DA(uLocal_109))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uLocal_109)) > 200f)
		{
			func_149();
		}
	}
}

void func_100(var uParam0)
{
	*uParam0 = -99;
}

void func_101(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_102()
{
	int iVar0;
	
	if (!unk_0x7423A8514A6F26DA(uLocal_109))
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_105, 3);
		unk_0xF3148AAF69AF9CBC(&uLocal_105, 4);
		unk_0xF3148AAF69AF9CBC(&uLocal_105, 1);
		if (!bLocal_160)
		{
			if (unk_0x930F8FBB8E9537CC(iLocal_113[0]))
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_113[0]))
				{
					Local_106 = { unk_0x59F4099AA66DA409(iLocal_113[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				Local_106 = { unk_0xC1B6FBB7681A920C(unk_0xB6AE0DAE06D56288(iLocal_113[0], 1), 1067030938, 1069547520) };
			}
		}
		else if (unk_0x86CCCD2FAE9D5E65(iLocal_174))
		{
			Local_106 = { unk_0xC1B6FBB7681A920C(unk_0xB6AE0DAE06D56288(iLocal_174, 0), 1067030938, 1069547520) };
		}
		Local_106 = { Local_106.f_0, Local_106.f_1, (Local_106.f_2 + 0.25f) };
		uLocal_109 = unk_0xB2486A72F6F99B4C(joaat("pickup_money_med_bag"), Local_106, uLocal_105, iLocal_188, 1, joaat("prop_cs_duffel_01"));
		uLocal_191 = func_103(uLocal_109);
		if (iLocal_48 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_110 - 1))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
				{
					unk_0x3B7AFF7DCE22C1CF(iLocal_113[iVar0], 1);
					unk_0x27CC98B7C879C320(iLocal_113[iVar0]);
					unk_0xEAD984C2869B8B7C(&uLocal_151);
					unk_0x98046F3D16B9CF76(0, 0, 0);
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_151);
					unk_0xC65002CAA1212AF9(iLocal_113[iVar0], uLocal_151);
					unk_0xA3561415EB3DA3A3(&uLocal_151);
					unk_0x6CB332CB31E9FA96(iLocal_113[iVar0], 1);
				}
				iVar0++;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
			{
				unk_0x4191220706130B86(iLocal_113[0]);
				if (!unk_0x53E9C577B4074D3A(iLocal_113[0]))
				{
					func_46();
					unk_0x4EDE34FBADD967A6(0);
					func_113(&uLocal_231, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_103(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7423A8514A6F26DA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x8D0412562F2DBA20(uParam0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_104(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	return uVar0;
}

float func_104(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_105()
{
	if (unk_0xFBACB273AA628CC5(uLocal_191))
	{
		unk_0x0A8175F24237A3D4(&uLocal_191);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_192))
	{
		unk_0x0A8175F24237A3D4(&uLocal_192);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_190))
	{
		unk_0x0A8175F24237A3D4(&uLocal_190);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_184[0]))
	{
		unk_0x0A8175F24237A3D4(&(uLocal_184[0]));
	}
	if (unk_0xFBACB273AA628CC5(uLocal_184[1]))
	{
		unk_0x0A8175F24237A3D4(&(uLocal_184[1]));
	}
}

int func_106()
{
	if (!unk_0x86CCCD2FAE9D5E65(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	else if (unk_0x5FEB513A4402FD59(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	if (!bLocal_160)
	{
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
		else if (unk_0x5FEB513A4402FD59(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
	}
	else
	{
		iLocal_149 = 1;
	}
	if (!unk_0x86CCCD2FAE9D5E65(iLocal_183))
	{
		iLocal_150 = 1;
	}
	else if (unk_0x5FEB513A4402FD59(iLocal_183) || !unk_0xE5AB05962FA1FF3F(iLocal_183, 0))
	{
		iLocal_150 = 1;
	}
	if ((iLocal_148 && iLocal_149) || iLocal_150)
	{
		return 1;
	}
	return 0;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_113[iVar0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]) || unk_0x930F8FBB8E9537CC(iLocal_113[iVar0]))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_113[iVar0], unk_0x81873881071CD9FE(), 1))
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
		if (unk_0x86CCCD2FAE9D5E65(iLocal_113[iVar0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
			{
				if (unk_0x70847137E3B37A59(iLocal_113[iVar0]))
				{
					if (unk_0x5470663D3086F340(iLocal_113[iVar0]) == unk_0x81873881071CD9FE())
					{
						unk_0x3B7AFF7DCE22C1CF(iLocal_113[iVar0], 1);
						unk_0x754376E2234CBB4A(iLocal_113[iVar0], unk_0x81873881071CD9FE(), 250f, -1, 0, 0);
						unk_0x6CB332CB31E9FA96(iLocal_113[iVar0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x71A8BCA218722FA1(&(iLocal_113[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_183))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_183) || unk_0x930F8FBB8E9537CC(iLocal_183))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_183, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_183))
		{
			if (unk_0x3A5BA67B2C97F000(unk_0x81873881071CD9FE(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_183))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_183))
		{
			if (unk_0x70847137E3B37A59(iLocal_183))
			{
				if (unk_0x5470663D3086F340(iLocal_183) == unk_0x81873881071CD9FE())
				{
					unk_0x3B7AFF7DCE22C1CF(iLocal_183, 1);
					unk_0x754376E2234CBB4A(iLocal_183, unk_0x81873881071CD9FE(), 250f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_183, 1);
					unk_0x4EDE34FBADD967A6(0);
					unk_0x71A8BCA218722FA1(&iLocal_183);
					return 1;
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_174))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_174) || unk_0x930F8FBB8E9537CC(iLocal_174))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_174, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, bool bParam2)
{
	return func_109(iParam0, !bParam1, bParam2);
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_104(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_104(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_104(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_110()
{
	if (unk_0x7404950238A154C2(iLocal_174, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
		{
			if (unk_0x04C377C10639B842(iLocal_113[0], iLocal_174, 0))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_113[1]))
				{
					if (unk_0x04C377C10639B842(iLocal_113[1], iLocal_174, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_111()
{
	if (unk_0x5FEB513A4402FD59(iLocal_113[0]))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
		{
			if (unk_0xCB8B9E751036ECB2(iLocal_166))
			{
				unk_0xD88DD5B581458979(iLocal_166, 1, 1);
			}
			unk_0xAB6AFD52AD641D70(&iLocal_166);
			func_105();
			func_102();
			iLocal_46 = 9;
		}
	}
	else if (unk_0xBBEF8270CE27C0EE(iLocal_113[0], unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
		{
			if (unk_0xCB8B9E751036ECB2(iLocal_166))
			{
				unk_0xD88DD5B581458979(iLocal_166, 1, 1);
			}
			unk_0xAB6AFD52AD641D70(&iLocal_166);
			func_105();
			func_102();
			iLocal_46 = 9;
		}
	}
}

int func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x0D349187279381B8(2, 195) - 128);
	iVar1 = (unk_0x0D349187279381B8(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x9E95048D8C96C1EA(0);
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
					func_122();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_121(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_120();
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_119();
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_118())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_117())
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_116();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_115();
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
		func_122();
	}
	return 0;
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_116()
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_117()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_119()
{
	if (func_35(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		Global_14394 = func_39();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_120()
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

bool func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_122()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_123(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_124()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		func_129();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_128(0))
		{
			func_126(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_126(int iParam0)
{
	if (Global_14552)
	{
		func_127(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_117())
	{
		Global_14394.f_1 = 3;
	}
}

void func_127(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_128(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_128(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_130(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_136(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_117())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_135(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_136(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_135(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_131(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_131(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_132())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_134(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1315870[iVar1] == 1)
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

int func_135(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_136(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_137()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_113[0]) && !unk_0x5FEB513A4402FD59(iLocal_113[1]))
	{
		if (iLocal_48 == 1)
		{
			if (!iLocal_164)
			{
				if (!unk_0xD1FFD959917D4ED8(iLocal_113[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if (!unk_0xD1FFD959917D4ED8(iLocal_113[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_165 = 1;
				}
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!iLocal_164)
			{
				if ((!unk_0xD1FFD959917D4ED8(iLocal_113[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(iLocal_113[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(iLocal_113[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0x754376E2234CBB4A(iLocal_113[0], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if ((!unk_0xD1FFD959917D4ED8(iLocal_113[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(iLocal_113[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(iLocal_113[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0x754376E2234CBB4A(iLocal_113[1], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
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

void func_138()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xB6AE0DAE06D56288(iLocal_166, 1) };
	Var3 = { unk_0x1FC13B3C61DF24B9(iLocal_166, 2) };
	unk_0xAB6AFD52AD641D70(&iLocal_166);
	iLocal_166 = unk_0xF364195A57BB7AE3(joaat("prop_cs_duffel_01"), Var0, 1, 1, 0);
	unk_0x3A45EB0810EBE71C(iLocal_166, Var3, 2, 1);
}

void func_139()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_113[0]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_113[0], 0)) > 200f && unk_0x895C275673BCEAB0(iLocal_113[0]))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_184[0]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_184[0]));
			}
			unk_0x71A8BCA218722FA1(&(iLocal_113[0]));
			bLocal_146 = true;
		}
	}
	else
	{
		bLocal_146 = true;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_174))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_174, 0)) > 200f && unk_0x895C275673BCEAB0(iLocal_174))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_190))
			{
				unk_0x0A8175F24237A3D4(&uLocal_190);
			}
			unk_0xE0913C01F5C0CC3D(&iLocal_174);
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
			if (func_157())
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
		if (func_157())
		{
			iLocal_46 = 13;
		}
		else
		{
			iLocal_45 = 2;
		}
	}
}

void func_140()
{
	if (!unk_0x930F8FBB8E9537CC(iLocal_174))
	{
		if (unk_0x4DC6EF945236C0F7(iLocal_174) < 800)
		{
			unk_0x9765BF567DB87B5F(iLocal_174, 0);
			unk_0xE61FF1947C0507EB(iLocal_174, 10f);
		}
	}
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_113[iVar0]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_184[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_184[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_48 == 1)
	{
		if (unk_0x5FEB513A4402FD59(iLocal_113[0]) && unk_0x5FEB513A4402FD59(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (unk_0x5FEB513A4402FD59(iLocal_113[0]) && unk_0x5FEB513A4402FD59(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_113)
	{
		if (unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_184[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
	{
		if (!bLocal_139)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_110 - 1))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar1]))
				{
					unk_0x633A554EB6BC4E71(iLocal_113[iVar1], unk_0x81873881071CD9FE(), 0, 16);
				}
				iVar1++;
			}
			bLocal_139 = true;
			if (unk_0xCB8B9E751036ECB2(iLocal_166))
			{
				iLocal_46 = 5;
			}
		}
	}
	if (!iLocal_153 && !bLocal_139)
	{
		unk_0x80650551CC58C784("RE51A_SHOP");
		func_46();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_48 == 1)
		{
			if (func_113(&uLocal_231, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (func_113(&uLocal_231, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
	}
	if ((iLocal_153 && !iLocal_154) && !bLocal_139)
	{
		if (!func_124())
		{
			if (func_39() == 0)
			{
				func_113(&uLocal_231, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_39() == 1)
			{
				func_113(&uLocal_231, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_39() == 2)
			{
				func_113(&uLocal_231, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_154 = 1;
		}
	}
	if (!bLocal_139)
	{
		if (!func_124())
		{
			if (iLocal_154 && !iLocal_155)
			{
				if (iLocal_48 == 1)
				{
					if (func_160(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
				else if (iLocal_48 == 2)
				{
					if (func_160(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
			}
		}
		if (iLocal_48 == 1)
		{
			if (!func_124())
			{
				if (!iLocal_156)
				{
					if (iLocal_48 == 1)
					{
						func_113(&uLocal_231, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_48 == 2)
					{
						func_113(&uLocal_231, "REROBAU", "REROB_LV", 4, 0, 0, 0);
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
					if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
						{
							iLocal_156 = 1;
						}
					}
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_166) && !unk_0x5FEB513A4402FD59(iLocal_113[0]))
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
					unk_0xAB6AFD52AD641D70(&(uLocal_167[0]));
					unk_0xAB6AFD52AD641D70(&(uLocal_167[1]));
					if (unk_0x7404950238A154C2(iLocal_174, 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
						{
							unk_0x27CC98B7C879C320(iLocal_113[0]);
							unk_0xEAD984C2869B8B7C(&uLocal_151);
							unk_0xF64D185C5B88AF31(0);
							unk_0x3C3A95141D01773E(0, iLocal_174, -1, 0, 2f, 1, 0);
							unk_0x56D9ED1541046AF6(uLocal_151);
							unk_0xC65002CAA1212AF9(iLocal_113[0], uLocal_151);
							unk_0xA3561415EB3DA3A3(&uLocal_151);
						}
						if (!unk_0x5FEB513A4402FD59(iLocal_113[1]))
						{
							unk_0x03EB8112BA30917C(iLocal_113[1], joaat("MotionState_Run"), 1, 0, 0);
							unk_0xEAD984C2869B8B7C(&uLocal_151);
							unk_0xF64D185C5B88AF31(0);
							unk_0x3C3A95141D01773E(0, iLocal_174, -1, 1, 2f, 1, 0);
							unk_0x56D9ED1541046AF6(uLocal_151);
							unk_0xC65002CAA1212AF9(iLocal_113[1], uLocal_151);
							unk_0xA3561415EB3DA3A3(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
					else
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
						{
							unk_0x3B7AFF7DCE22C1CF(iLocal_113[0], 1);
							unk_0x1E2B48EE3EC55DCF(iLocal_113[0]);
							unk_0xEAD984C2869B8B7C(&uLocal_151);
							unk_0xF64D185C5B88AF31(0);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_151);
							unk_0xC65002CAA1212AF9(iLocal_113[0], uLocal_151);
							unk_0xA3561415EB3DA3A3(&uLocal_151);
						}
						if (!unk_0x5FEB513A4402FD59(iLocal_113[1]))
						{
							unk_0x3B7AFF7DCE22C1CF(iLocal_113[1], 1);
							unk_0x1E2B48EE3EC55DCF(iLocal_113[1]);
							unk_0xEAD984C2869B8B7C(&uLocal_151);
							unk_0xF64D185C5B88AF31(0);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_151);
							unk_0xC65002CAA1212AF9(iLocal_113[1], uLocal_151);
							unk_0xA3561415EB3DA3A3(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
				}
			}
			else if (iLocal_48 == 2)
			{
				if (unk_0xF855C83E3A17514B(uLocal_215) > 0.453f)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
					{
						unk_0x1D15D99A10A15334(iLocal_116[0], 1);
						unk_0xEAD984C2869B8B7C(&uLocal_151);
						unk_0x31C1393E4ACFD794(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_151);
						unk_0xC65002CAA1212AF9(iLocal_116[0], uLocal_151);
						unk_0xA3561415EB3DA3A3(&uLocal_151);
						unk_0x6CB332CB31E9FA96(iLocal_116[0], 1);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_113[0]))
					{
						unk_0x27CC98B7C879C320(iLocal_113[0]);
						unk_0x7F5F0D37173E518C(iLocal_113[0], 128, 1);
						unk_0x7F5F0D37173E518C(iLocal_113[0], 1, 1);
						unk_0x4B9FA68A3AC8C29D(iLocal_113[0], 17, 1);
						unk_0x99E525B7A12DCDBE(iLocal_113[0], 1.6f);
						unk_0x3B7AFF7DCE22C1CF(iLocal_113[0], 1);
						unk_0xEAD984C2869B8B7C(&uLocal_151);
						unk_0x31C1393E4ACFD794(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, 0, 0, 0);
						unk_0xDA3EE2B44E12D00C(0, "re_shoprobbery", 0, 0, 16);
						unk_0xF64D185C5B88AF31(0);
						unk_0x56D9ED1541046AF6(uLocal_151);
						unk_0xC65002CAA1212AF9(iLocal_113[0], uLocal_151);
						unk_0xA3561415EB3DA3A3(&uLocal_151);
						unk_0x6CB332CB31E9FA96(iLocal_113[0], 1);
						unk_0x5AE11BC36633DE4E(0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_113[1]))
					{
						unk_0x7F5F0D37173E518C(iLocal_113[1], 128, 1);
						unk_0x7F5F0D37173E518C(iLocal_113[1], 1, 1);
						unk_0x4B9FA68A3AC8C29D(iLocal_113[1], 17, 1);
						unk_0x99E525B7A12DCDBE(iLocal_113[1], 1.6f);
						unk_0x3B7AFF7DCE22C1CF(iLocal_113[1], 1);
						unk_0xEAD984C2869B8B7C(&uLocal_151);
						unk_0xF64D185C5B88AF31(0);
						unk_0xDA3EE2B44E12D00C(0, "re_shoprobbery2", 0, 0, 17);
						unk_0x56D9ED1541046AF6(uLocal_151);
						unk_0xC65002CAA1212AF9(iLocal_113[1], uLocal_151);
						unk_0xA3561415EB3DA3A3(&uLocal_151);
						unk_0x6CB332CB31E9FA96(iLocal_113[1], 1);
					}
					iLocal_46 = 2;
					iLocal_137 = 1;
				}
			}
			unk_0x5B6D37392F5991C3(0f);
		}
	}
}

void func_143()
{
	switch (iLocal_226)
	{
		case 0:
			func_130(1, 1, 1, 0);
			unk_0x984F8E3A66FFFEE5(func_144(unk_0x1329891157A54C63()), 10f, 0);
			uLocal_225 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0xDD0B0D77CB8995B1(uLocal_225, 1);
			unk_0xC813152833B59518(uLocal_225, uLocal_215, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_48 == 1)
			{
				unk_0x9A7465274D411DCE("Hair_room");
			}
			unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
			iLocal_227 = unk_0x48E480685981C7D4() + 3500;
			iLocal_226++;
			break;
		
		case 1:
			if (iLocal_227 < unk_0x48E480685981C7D4())
			{
				if (iLocal_48 == 1)
				{
					unk_0x270066FDBAF3A458(115f);
					unk_0xEAB527164AD92BF3(-9.1222f, 1065353216);
				}
				else if (iLocal_48 == 2)
				{
					unk_0x270066FDBAF3A458(44.5236f);
					unk_0xEAB527164AD92BF3(-18.1582f, 1065353216);
				}
				unk_0x5AD73EF670D05F7D();
				unk_0xDD0B0D77CB8995B1(uLocal_225, 0);
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				func_48();
				func_130(0, 1, 1, 0);
				iLocal_226++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_144(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

void func_145()
{
	int iVar0;
	
	if (!iLocal_135 && func_148(1, 0, 1))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_192))
		{
			unk_0x0A8175F24237A3D4(&uLocal_192);
		}
		func_130(1, 1, 1, 0);
		unk_0xB8BB626315D394F5(1);
		unk_0xF1BC58601CA4A5C7(0);
		unk_0x3BF4F473786B0150(0);
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 256);
		unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
		if (iLocal_48 == 1)
		{
			if (!iLocal_176)
			{
				uLocal_215 = unk_0x59C061A719024602(Local_200, Local_206, 2);
				unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
				unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uLocal_215, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 1, 0);
				if (((!unk_0x5FEB513A4402FD59(iLocal_113[0]) && !unk_0x5FEB513A4402FD59(iLocal_113[1])) && !unk_0x5FEB513A4402FD59(iLocal_116[0])) && unk_0x86CCCD2FAE9D5E65(iLocal_166))
				{
					unk_0x58BEA8B2364F8C48(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x58BEA8B2364F8C48(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x58BEA8B2364F8C48(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					unk_0x0F5BEB6747CF25B4(iLocal_166, uLocal_215, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				unk_0x176AAFA85E979842(uLocal_215, 0.06f);
				iLocal_176 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_116[0]))
			{
				unk_0x27CC98B7C879C320(iLocal_116[0]);
				unk_0x31C1393E4ACFD794(iLocal_116[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, 0, 0, 0);
			}
			unk_0x3DEBEEC5B1D7D4C5(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			uLocal_215 = unk_0x59C061A719024602(Local_200, Local_206, 2);
			if (((!unk_0x5FEB513A4402FD59(iLocal_113[0]) && !unk_0x5FEB513A4402FD59(iLocal_113[1])) && !unk_0x5FEB513A4402FD59(iLocal_116[0])) && unk_0x86CCCD2FAE9D5E65(iLocal_166))
			{
				unk_0x58BEA8B2364F8C48(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x58BEA8B2364F8C48(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (unk_0x86CCCD2FAE9D5E65(uLocal_167[0]) && unk_0x86CCCD2FAE9D5E65(uLocal_167[1]))
				{
					unk_0x75F9EE7629363312(uLocal_167[0], iLocal_116[0], unk_0xDED1B3B1138F742B(iLocal_116[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					unk_0x75F9EE7629363312(uLocal_167[1], iLocal_116[0], unk_0xDED1B3B1138F742B(iLocal_116[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			unk_0x176AAFA85E979842(uLocal_215, 0.05f);
			Local_200 = { -1199.369f, -776.1991f, 16.3235f };
			Local_206 = { 0f, 0f, -60f };
			uLocal_215 = unk_0x59C061A719024602(Local_200, Local_206, 2);
			if (!unk_0x5FEB513A4402FD59(iLocal_113[1]))
			{
				unk_0x58BEA8B2364F8C48(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			unk_0x176AAFA85E979842(uLocal_215, 0.06f);
			unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 305.3806f);
			unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
			unk_0xEAD984C2869B8B7C(&uLocal_151);
			unk_0x31C1393E4ACFD794(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_151);
			unk_0xC65002CAA1212AF9(unk_0x81873881071CD9FE(), uLocal_151);
			unk_0xA3561415EB3DA3A3(&uLocal_151);
			unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
		}
		iLocal_135 = 1;
	}
	if (!iLocal_175)
	{
		func_146();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_184[iVar0]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]))
			{
				uLocal_184[iVar0] = func_158(iLocal_113[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_48 == 1 && unk_0x86CCCD2FAE9D5E65(iLocal_174)) || iLocal_48 == 2)
	{
		unk_0xC1B1E9A034A63A62(0);
		iLocal_46 = 1;
	}
}

void func_146()
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_178)
	{
		unk_0x32A12757CBF48A33(iVar0);
		if (unk_0x33ACB874CECA2D4B(iVar0))
		{
			iLocal_178 = 1;
		}
		else
		{
			unk_0x32A12757CBF48A33(iVar0);
		}
	}
	else if (unk_0x33ACB874CECA2D4B(iVar0))
	{
		if (func_147())
		{
			if (unk_0xD1FFD959917D4ED8(uLocal_170, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, 1, 0))
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
		iLocal_174 = unk_0xE00F8DEA9778FC87(iVar0, Local_171, 31.9252f, 1, 1);
		unk_0x3B7AFF7DCE22C1CF(iLocal_174, 1);
		unk_0x5CC9D6711FE01F0D(iLocal_174);
		unk_0x686D6CDC14C4BA6C(iLocal_174, 1, 1);
		iLocal_183 = unk_0x4D135F3066A9BF9C(iLocal_174, 26, joaat("g_m_y_korean_01"), -1, 1, 1);
		unk_0xCE566DBDCACD245E(iLocal_183, 134, 1);
		unk_0x1D15D99A10A15334(iLocal_183, 1);
		unk_0x506A601663C5417C(iLocal_183, iLocal_189);
		unk_0x4B9FA68A3AC8C29D(iLocal_183, 8, 0);
		unk_0xA161142D1C595060(iLocal_183, 0);
		unk_0xD31C3826B16CD027(iLocal_183, 13);
		unk_0x8E4A427F5C43E416(iLocal_183, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xA0E2C72EEFBD5858(iLocal_183, 1, 0);
		unk_0xCE566DBDCACD245E(iLocal_183, 42, 1);
		iLocal_175 = 1;
	}
}

int func_147()
{
	var uVar0;
	
	uVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x7404950238A154C2(uVar0, 0))
	{
		if (unk_0x515B65C19A5CA9B1(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, 0, 1, 0))
		{
			uLocal_170 = iVar0;
			if (!unk_0xE86442941AE40E75(uLocal_170))
			{
				unk_0xD768713E73165208(uLocal_170, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

void func_149()
{
	func_223();
}

int func_150(int iParam0)
{
	if (func_151())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_58(Global_98920))
		{
			func_96(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_58(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

int func_151()
{
	switch (func_152(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_152(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_156(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_154(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_153(uParam0, iParam4);
		}
	}
	return 2;
}

void func_153(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_154(int iParam0)
{
	return func_155(iParam0, Global_35443);
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_154(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_157()
{
	if (iLocal_48 == 1)
	{
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, 1, 0)) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_158(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_109(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_159()
{
	int iVar0;
	
	if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, 0, 1, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_113[0]) && !unk_0x5FEB513A4402FD59(iLocal_113[1]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_113[0], unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(iLocal_113[1], unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
			if (unk_0x76C5D372647A62A7(iLocal_113[0], unk_0x81873881071CD9FE()) || unk_0x76C5D372647A62A7(iLocal_113[1], unk_0x81873881071CD9FE()))
			{
				if (((unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_113[0]) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_113[0])) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_113[1])) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_113[1]))
				{
					if (iLocal_125 == -1)
					{
						iLocal_125 = unk_0x48E480685981C7D4();
					}
				}
				else
				{
					iLocal_125 = -1;
				}
				if (iLocal_125 != -1 && unk_0x48E480685981C7D4() > iLocal_125 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x6BB52CE7AD47544C(-1, Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (unk_0x930F8FBB8E9537CC(iLocal_113[0]) || unk_0x930F8FBB8E9537CC(iLocal_113[1]))
	{
		return 1;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_157())
	{
		return 1;
	}
	if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) && func_157())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_113[0]) && !unk_0x5FEB513A4402FD59(iLocal_113[1]))
	{
		if (((unk_0x8121EBA1C6EF7984(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(iLocal_113[1], 1) - Vector(12f, 12f, 12f), unk_0xB6AE0DAE06D56288(iLocal_113[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE())) || unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_113[0], 1), 3f, 1)) || unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_113[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_116)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_116[iVar0]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_116[iVar0], unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_120[iVar0]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_120[iVar0], unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_160(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_114(sParam2, iParam4, 0);
}

int func_161()
{
	if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, 0, 1, 0))
	{
		unk_0xDE1125A413AF241C(0, 22, 1);
		unk_0x99E525B7A12DCDBE(unk_0x81873881071CD9FE(), 1f);
		unk_0xB0388221F47D2A80(unk_0x81873881071CD9FE(), 0, 1, 0);
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_116[1]))
	{
		if (unk_0xBFC4295E811860E5(iLocal_116[1]))
		{
			func_163(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_163(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		unk_0x832B749856D487BE(iLocal_116[1], 26, 0, 0);
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_120[1]))
	{
		func_163(iLocal_120[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		unk_0x832B749856D487BE(iLocal_120[1], 3, 0, 0);
	}
}

void func_163(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, sParam1, sParam2, func_164(iParam3), 0);
}

int func_164(int iParam0)
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

void func_165()
{
	int iVar0;
	
	unk_0xA9DF4B73BBB06CE5(0);
	unk_0x4865E80F793024CE("ROBBERS", &iLocal_189);
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		iLocal_113[iVar0] = unk_0x206897C6DBC12488(26, iLocal_221, Local_54[iVar0 /*3*/], fLocal_61[iVar0], 1, 1);
		unk_0x1D15D99A10A15334(iLocal_113[iVar0], 1);
		unk_0x506A601663C5417C(iLocal_113[iVar0], iLocal_189);
		unk_0x4B9FA68A3AC8C29D(iLocal_113[iVar0], 8, 0);
		unk_0xA161142D1C595060(iLocal_113[iVar0], 0);
		unk_0xD31C3826B16CD027(iLocal_113[iVar0], 13);
		unk_0x8E4A427F5C43E416(iLocal_113[iVar0], joaat("weapon_pistol"), -1, 1, 1);
		unk_0xA0E2C72EEFBD5858(iLocal_113[iVar0], 1, 0);
		unk_0xCE566DBDCACD245E(iLocal_113[iVar0], 42, 1);
		unk_0xCE566DBDCACD245E(iLocal_113[iVar0], 269, 1);
		unk_0xCE566DBDCACD245E(iLocal_113[iVar0], 188, 1);
		unk_0x2644F84BE1F3524B(iLocal_113[iVar0], 0);
		unk_0x7F5F0D37173E518C(iLocal_113[iVar0], 128, 1);
		unk_0x7F5F0D37173E518C(iLocal_113[iVar0], 8, 1);
		iVar0++;
	}
	unk_0x96B56AFFC92EEC6D(iLocal_113[0], "pedRobber[0]");
	unk_0x96B56AFFC92EEC6D(iLocal_113[1], "pedRobber[1]");
	unk_0xF8E77F310A5B6EAB(5, iLocal_189, joaat("player"));
	unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_189);
	unk_0xF8E77F310A5B6EAB(5, iLocal_189, joaat("COP"));
	unk_0xF8E77F310A5B6EAB(5, joaat("COP"), iLocal_189);
	if (func_39() == 0)
	{
		func_170(&uLocal_231, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (func_39() == 1)
	{
		func_170(&uLocal_231, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	else if (func_39() == 2)
	{
		func_170(&uLocal_231, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	iLocal_166 = unk_0xF364195A57BB7AE3(iLocal_187, Local_96, 1, 1, 0);
	if (iLocal_48 == 1)
	{
		unk_0x13705C66F125D98D(Local_127 - Vector(20f, 20f, 20f), Local_127 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0xB5A91586385F755B(joaat("baller"), 1);
		uLocal_167[0] = unk_0xF364195A57BB7AE3(joaat("prop_anim_cash_pile_01"), Local_96, 1, 1, 0);
		uLocal_167[1] = unk_0xF364195A57BB7AE3(joaat("prop_anim_cash_pile_01"), Local_96 - Vector(0.1f, 0f, 0f), 1, 1, 0);
		unk_0xEF1A2C5B3EE83E3E(iLocal_113[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		unk_0xEF1A2C5B3EE83E3E(iLocal_113[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_200 = { -821.565f, -186.467f, 36.6f };
		Local_206 = { 0f, 0f, -59.96f };
		uLocal_215 = unk_0x59C061A719024602(Local_200, Local_206, 2);
		unk_0xFD9AE4CEB0ED9DDF(uLocal_215, 1);
		unk_0x58BEA8B2364F8C48(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0x0F5BEB6747CF25B4(iLocal_166, uLocal_215, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			iLocal_116[iVar0] = unk_0x206897C6DBC12488(26, iLocal_218, Local_64[iVar0 /*3*/], fLocal_74[iVar0], 1, 1);
			unk_0x4B9FA68A3AC8C29D(iLocal_116[iVar0], 17, 1);
			unk_0x1D15D99A10A15334(iLocal_116[iVar0], 1);
			unk_0x33B1E568CEF14B0D(iLocal_116[iVar0], 0);
			unk_0xCE566DBDCACD245E(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x96B56AFFC92EEC6D(iLocal_116[0], "pedWorker[0]");
		unk_0x96B56AFFC92EEC6D(iLocal_116[1], "pedWorker[1]");
		unk_0x96B56AFFC92EEC6D(iLocal_116[2], "pedWorker[2]");
		iLocal_120[0] = unk_0x206897C6DBC12488(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_120[0], 17, 1);
		unk_0x1D15D99A10A15334(iLocal_120[0], 1);
		unk_0x33B1E568CEF14B0D(iLocal_120[0], 0);
		unk_0xCE566DBDCACD245E(iLocal_120[0], 269, 1);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_120[iVar0] = unk_0x206897C6DBC12488(26, iLocal_220, Local_78[iVar0 /*3*/], fLocal_91[iVar0], 1, 1);
			unk_0x4B9FA68A3AC8C29D(iLocal_120[iVar0], 17, 1);
			unk_0x1D15D99A10A15334(iLocal_120[iVar0], 1);
			unk_0x33B1E568CEF14B0D(iLocal_120[iVar0], 0);
			unk_0xCE566DBDCACD245E(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x96B56AFFC92EEC6D(iLocal_120[0], "pedShopper[0]");
		unk_0x96B56AFFC92EEC6D(iLocal_120[1], "pedShopper[1]");
		unk_0x96B56AFFC92EEC6D(iLocal_120[2], "pedShopper[2]");
		unk_0x03F73D35E5AC583A(iLocal_116[0], 0, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[0], 2, 1, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[0], 3, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[0], 4, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[0], 5, 0, 0, 0);
		unk_0x58BEA8B2364F8C48(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0xEF1A2C5B3EE83E3E(iLocal_116[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_170(&uLocal_231, 5, iLocal_116[0], "REROBShopworker", 0, 1);
		unk_0x03F73D35E5AC583A(iLocal_116[1], 0, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[1], 2, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[1], 3, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[1], 4, 1, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[1], 5, 0, 0, 0);
		unk_0x492E306B5A7C779A(iLocal_116[1], -1);
		unk_0x6CB332CB31E9FA96(iLocal_116[1], 1);
		unk_0x03F73D35E5AC583A(iLocal_116[2], 0, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[2], 2, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[2], 3, 0, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[2], 4, 1, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_116[2], 5, 0, 0, 0);
		unk_0x492E306B5A7C779A(iLocal_116[2], -1);
		unk_0x6CB332CB31E9FA96(iLocal_116[2], 1);
		uLocal_215 = unk_0x59C061A719024602(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		unk_0xFD9AE4CEB0ED9DDF(uLocal_215, 1);
		unk_0x03F73D35E5AC583A(iLocal_120[0], 0, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[0], 2, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[0], 3, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[0], 4, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[0], 8, 0, 0, 0);
		unk_0x58BEA8B2364F8C48(iLocal_120[0], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6CB332CB31E9FA96(iLocal_120[0], 1);
		uLocal_215 = unk_0x59C061A719024602(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		unk_0xFD9AE4CEB0ED9DDF(uLocal_215, 1);
		unk_0x03F73D35E5AC583A(iLocal_120[1], 0, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[1], 2, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[1], 3, 1, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[1], 4, 1, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[1], 8, 0, 0, 0);
		unk_0x58BEA8B2364F8C48(iLocal_120[1], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6CB332CB31E9FA96(iLocal_120[1], 1);
		uLocal_215 = unk_0x59C061A719024602(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		unk_0xFD9AE4CEB0ED9DDF(uLocal_215, 1);
		unk_0x03F73D35E5AC583A(iLocal_120[2], 0, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[2], 2, 0, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[2], 3, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[2], 4, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_120[2], 8, 0, 0, 0);
		unk_0x58BEA8B2364F8C48(iLocal_120[2], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6CB332CB31E9FA96(iLocal_120[2], 1);
		unk_0xE7D69AA8A129E7D3(iLocal_113[0], iLocal_116[0], -1, 0);
		unk_0xEB1F3AEB071C6A9E(-871f, -246f, 0f, -798f, -163f, 50f, 0, 1);
		unk_0x4C3631ADC50FC70D("Hairdresser1");
		func_169(0, 1);
		func_168(0);
		unk_0x4EDE34FBADD967A6(500);
		func_166(0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		unk_0x13705C66F125D98D(Local_130 - Vector(20f, 20f, 20f), Local_130 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x3A45EB0810EBE71C(iLocal_166, Local_99, 2, 1);
		iLocal_116[0] = unk_0x206897C6DBC12488(26, iLocal_218, Local_64[0 /*3*/], fLocal_74[0], 1, 1);
		unk_0x96B56AFFC92EEC6D(iLocal_116[0], "pedWorker[0]");
		unk_0xEF1A2C5B3EE83E3E(iLocal_116[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_170(&uLocal_231, 6, iLocal_116[0], "REROBShopworker2", 0, 1);
		iLocal_116[1] = unk_0x206897C6DBC12488(26, iLocal_217, Local_64[1 /*3*/], fLocal_74[1], 1, 1);
		unk_0x96B56AFFC92EEC6D(iLocal_116[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			unk_0x4B9FA68A3AC8C29D(iLocal_116[iVar0], 17, 1);
			unk_0x1D15D99A10A15334(iLocal_116[iVar0], 1);
			unk_0x33B1E568CEF14B0D(iLocal_116[iVar0], 0);
			unk_0xCE566DBDCACD245E(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		iLocal_120[0] = unk_0x206897C6DBC12488(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		unk_0x96B56AFFC92EEC6D(iLocal_120[0], "pedShopper[0]");
		iLocal_120[1] = unk_0x206897C6DBC12488(26, iLocal_220, Local_78[1 /*3*/], fLocal_91[1], 1, 1);
		unk_0x96B56AFFC92EEC6D(iLocal_120[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			unk_0x4B9FA68A3AC8C29D(iLocal_120[iVar0], 17, 1);
			unk_0x1D15D99A10A15334(iLocal_120[iVar0], 1);
			unk_0x33B1E568CEF14B0D(iLocal_120[iVar0], 0);
			unk_0xCE566DBDCACD245E(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x31C1393E4ACFD794(iLocal_116[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0x6CB332CB31E9FA96(iLocal_116[0], 1);
		unk_0x31C1393E4ACFD794(iLocal_116[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0x6CB332CB31E9FA96(iLocal_116[1], 1);
		unk_0x492E306B5A7C779A(iLocal_120[0], -1);
		unk_0x6CB332CB31E9FA96(iLocal_120[0], 1);
		unk_0x31C1393E4ACFD794(iLocal_120[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0x6CB332CB31E9FA96(iLocal_120[1], 1);
		Local_200 = { -1192.01f, -768.929f, 16.358f };
		Local_206 = { 0f, 0f, -59.5f };
		uLocal_215 = unk_0x59C061A719024602(Local_200, Local_206, 2);
		unk_0xFD9AE4CEB0ED9DDF(uLocal_215, 1);
		unk_0x58BEA8B2364F8C48(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x58BEA8B2364F8C48(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x31C1393E4ACFD794(iLocal_113[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, 0, 0, 0);
		func_169(14, 1);
		func_168(14);
		unk_0x4EDE34FBADD967A6(500);
		func_166(14, 0, 0);
	}
	func_170(&uLocal_231, 3, iLocal_113[0], "REROBRobber1", 0, 1);
	func_170(&uLocal_231, 4, iLocal_113[1], "REROBRobber2", 0, 1);
	unk_0x887F4488DA99FD21(joaat("a_f_y_bevhills_02"));
	unk_0x887F4488DA99FD21(joaat("a_m_y_bevhills_02"));
	unk_0x887F4488DA99FD21(joaat("a_m_y_hipster_01"));
	unk_0x887F4488DA99FD21(joaat("a_f_y_hipster_04"));
	unk_0x887F4488DA99FD21(joaat("g_m_y_korean_01"));
}

void func_166(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C6DF6AD69BE853E())
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
	iVar1 = func_167(iParam0, 0);
	if (iVar1 != 226)
	{
		func_71(iVar1, iVar0);
	}
	iVar1 = func_167(iParam0, 1);
	if (iVar1 != 226)
	{
		func_71(iVar1, iVar0);
	}
}

int func_167(int iParam0, int iParam1)
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
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
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
	return 226;
}

void func_168(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_37(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_170(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_171()
{
	if (!iLocal_134)
	{
		iLocal_152 = unk_0xB3202EEA6EFADBA8(Local_54[0 /*3*/]);
		unk_0xC9C56731782E64CD(iLocal_152);
		iLocal_134 = 1;
	}
}

void func_172()
{
	unk_0x32A12757CBF48A33(iLocal_218);
	unk_0x32A12757CBF48A33(iLocal_219);
	unk_0x32A12757CBF48A33(iLocal_220);
	unk_0x32A12757CBF48A33(iLocal_221);
	unk_0x32A12757CBF48A33(joaat("prop_anim_cash_pile_01"));
	unk_0x32A12757CBF48A33(joaat("prop_cs_duffel_01"));
	unk_0x2D148CBB17A2B0C7("re_shoprobbery");
	unk_0x2D148CBB17A2B0C7("re_shoprobbery2");
	unk_0x295DC04FC13E025B("random@robbery");
	unk_0x295DC04FC13E025B("random@shop_robbery");
	unk_0xA3BC6AA446F03669("RE51A_SHOP");
	if ((((((((((unk_0x33ACB874CECA2D4B(iLocal_218) && unk_0x33ACB874CECA2D4B(iLocal_219)) && unk_0x33ACB874CECA2D4B(iLocal_220)) && unk_0x33ACB874CECA2D4B(iLocal_221)) && unk_0x33ACB874CECA2D4B(joaat("prop_anim_cash_pile_01"))) && unk_0x33ACB874CECA2D4B(joaat("prop_cs_duffel_01"))) && unk_0x0F7866B4F5BE7CD4("re_shoprobbery")) && unk_0x0F7866B4F5BE7CD4("re_shoprobbery2")) && unk_0x8E8B546E1A81D27F("random@robbery")) && unk_0x8E8B546E1A81D27F("random@shop_robbery")) && unk_0xA3BC6AA446F03669("RE51A_SHOP"))
	{
		iLocal_52 = 1;
	}
	else
	{
		unk_0x32A12757CBF48A33(iLocal_218);
		unk_0x32A12757CBF48A33(iLocal_219);
		unk_0x32A12757CBF48A33(iLocal_220);
		unk_0x32A12757CBF48A33(iLocal_221);
		unk_0x32A12757CBF48A33(joaat("prop_anim_cash_pile_01"));
		unk_0x32A12757CBF48A33(joaat("prop_cs_duffel_01"));
		unk_0x295DC04FC13E025B("random@robbery");
		unk_0x295DC04FC13E025B("random@shop_robbery");
		unk_0xA3BC6AA446F03669("RE51A_SHOP");
	}
}

void func_173()
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

int func_174()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_185())
		{
			return 0;
		}
	}
	if (func_181())
	{
		return 1;
	}
	if (func_175(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_175(float fParam0, bool bParam1)
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_41(func_39()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_176(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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

void func_176(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_177(uParam1, "Abigail1", func_179(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 1:
			func_177(uParam1, "Abigail2", func_179(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 2:
			func_177(uParam1, "Barry1", func_179(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 3:
			func_177(uParam1, "Barry2", func_179(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 4:
			func_177(uParam1, "Barry3", func_179(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 5:
			func_177(uParam1, "Barry3A", func_179(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 6:
			func_177(uParam1, "Barry3C", func_179(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 7:
			func_177(uParam1, "Barry4", func_179(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_178(iParam0), 0, 0);
			break;
		
		case 8:
			func_177(uParam1, "Dreyfuss1", func_179(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 9:
			func_177(uParam1, "Epsilon1", func_179(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 10:
			func_177(uParam1, "Epsilon2", func_179(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 11:
			func_177(uParam1, "Epsilon3", func_179(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 12:
			func_177(uParam1, "Epsilon4", func_179(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 13:
			func_177(uParam1, "Epsilon5", func_179(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 14:
			func_177(uParam1, "Epsilon6", func_179(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 15:
			func_177(uParam1, "Epsilon7", func_179(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 16:
			func_177(uParam1, "Epsilon8", func_179(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 17:
			func_177(uParam1, "Extreme1", func_179(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 18:
			func_177(uParam1, "Extreme2", func_179(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 19:
			func_177(uParam1, "Extreme3", func_179(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 20:
			func_177(uParam1, "Extreme4", func_179(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 21:
			func_177(uParam1, "Fanatic1", func_179(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_178(iParam0), 1, 0);
			break;
		
		case 22:
			func_177(uParam1, "Fanatic2", func_179(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_178(iParam0), 1, 0);
			break;
		
		case 23:
			func_177(uParam1, "Fanatic3", func_179(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_178(iParam0), 0, 1);
			break;
		
		case 24:
			func_177(uParam1, "Hao1", func_179(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_178(iParam0), 0, 1);
			break;
		
		case 25:
			func_177(uParam1, "Hunting1", func_179(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 26:
			func_177(uParam1, "Hunting2", func_179(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 27:
			func_177(uParam1, "Josh1", func_179(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 28:
			func_177(uParam1, "Josh2", func_179(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 29:
			func_177(uParam1, "Josh3", func_179(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 30:
			func_177(uParam1, "Josh4", func_179(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 31:
			func_177(uParam1, "Maude1", func_179(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 32:
			func_177(uParam1, "Minute1", func_179(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 33:
			func_177(uParam1, "Minute2", func_179(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 34:
			func_177(uParam1, "Minute3", func_179(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 35:
			func_177(uParam1, "MrsPhilips1", func_179(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 36:
			func_177(uParam1, "MrsPhilips2", func_179(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 37:
			func_177(uParam1, "Nigel1", func_179(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 38:
			func_177(uParam1, "Nigel1A", func_179(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 39:
			func_177(uParam1, "Nigel1B", func_179(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 40:
			func_177(uParam1, "Nigel1C", func_179(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 41:
			func_177(uParam1, "Nigel1D", func_179(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 42:
			func_177(uParam1, "Nigel2", func_179(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 43:
			func_177(uParam1, "Nigel3", func_179(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 44:
			func_177(uParam1, "Omega1", func_179(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 45:
			func_177(uParam1, "Omega2", func_179(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 46:
			func_177(uParam1, "Paparazzo1", func_179(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 47:
			func_177(uParam1, "Paparazzo2", func_179(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 48:
			func_177(uParam1, "Paparazzo3", func_179(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 49:
			func_177(uParam1, "Paparazzo3A", func_179(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 50:
			func_177(uParam1, "Paparazzo3B", func_179(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 51:
			func_177(uParam1, "Paparazzo4", func_179(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 52:
			func_177(uParam1, "Rampage1", func_179(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 54:
			func_177(uParam1, "Rampage3", func_179(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 55:
			func_177(uParam1, "Rampage4", func_179(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 56:
			func_177(uParam1, "Rampage5", func_179(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 53:
			func_177(uParam1, "Rampage2", func_179(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 57:
			func_177(uParam1, "TheLastOne", func_179(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 58:
			func_177(uParam1, "Tonya1", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 59:
			func_177(uParam1, "Tonya2", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 60:
			func_177(uParam1, "Tonya3", func_179(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 61:
			func_177(uParam1, "Tonya4", func_179(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 62:
			func_177(uParam1, "Tonya5", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_177(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_178(int iParam0)
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

struct<2> func_179(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_180(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_180(int iParam0)
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

int func_181()
{
	if (func_184() && !func_185())
	{
		return 1;
	}
	if (func_183() && func_182())
	{
		return 1;
	}
	return 0;
}

bool func_182()
{
	return Global_98649 > 0;
}

int func_183()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_185()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_186()
{
	if (!func_154(5))
	{
		return 1;
	}
	if (func_181())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_185())
		{
			return 0;
		}
	}
	if (func_175(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if ((Global_98920 == func_67() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_189();
}

void func_189()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_190(int iParam0)
{
	Global_98920 = iParam0;
}

int func_191(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_67();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_220())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_185())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_52(0))
		{
			return 0;
		}
		if (func_181())
		{
			return 0;
		}
		if (func_219())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_175(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_218(iParam3))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_217(func_39()) == 4 || func_217(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_216(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_215(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_214())
		{
			return 0;
		}
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
		{
			return 0;
		}
		if (!func_205(4))
		{
			return 0;
		}
		if (!func_154(5))
		{
			return 0;
		}
		if (func_204(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_204(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_218(30) && !func_204(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_203(iVar8))
				{
					if (func_193(iVar4))
					{
						if (!func_192(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
							{
								if (func_39() != iVar4)
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

bool func_192(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_194(iVar0);
}

int func_194(int iParam0)
{
	return func_195(iParam0, 1);
}

int func_195(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_203(iParam0))
	{
		return 0;
	}
	func_196(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_197(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_197(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_88(iParam1);
		iVar1 = func_86(iParam0);
		iVar2 = (func_86(iParam0) - func_86(iParam1));
		iVar3 = (func_88(iParam0) - func_88(iParam1));
		iVar4 = (func_201(iParam0) - func_201(iParam1));
		iVar5 = (func_80(iParam0) - func_80(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_88(iParam0);
		iVar1 = func_86(iParam1);
		iVar2 = (func_86(iParam1) - func_86(iParam0));
		iVar3 = (func_88(iParam1) - func_88(iParam0));
		iVar4 = (func_201(iParam1) - func_201(iParam0));
		iVar5 = (func_80(iParam1) - func_80(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_85(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_198(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_198(float fParam0, float fParam1, float fParam2)
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

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_203(iParam1) || !func_203(iParam0))
	{
		return 1;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_80(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
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
	return 0;
}

int func_203(int iParam0)
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_80(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_86(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_201(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_204(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_213()) || Global_97978) || Global_24948) || func_212()) || func_121(8, -1)) || func_211()) || func_210()) || func_209()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_213()) || Global_24948) || func_212()) || func_121(8, -1)) || func_209()) || func_211()) || func_210()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_213()) || Global_97978) || Global_24948) || func_212()) || func_121(8, -1)) || func_209()) || func_211()) || func_210()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_213()) || Global_97978) || Global_24948) || func_212()) || func_121(8, -1)) || func_211()) || func_210()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_213() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_121(8, -1)) || func_208()) || func_207()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_121(8, -1) || func_211()) || func_210()) || func_207()) || func_206())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_213()) || Global_24948) || func_212()) || func_121(8, -1)) || func_210()) || func_209()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_213()) || func_210()) || Global_97978) || Global_24948) || func_212()) || Global_36493) || func_121(8, -1)) || func_209()) || func_207()) || func_208()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_213()) || Global_97978) || Global_24948) || func_212()) || func_121(8, -1)) || func_209()) || func_207()) || func_211()) || func_210()) || func_208())
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

var func_206()
{
	return Global_90848.f_1;
}

int func_207()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_208()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_90861.f_297 > 0;
}

bool func_211()
{
	return Global_90861.f_296 > 0;
}

var func_212()
{
	return Global_1315892;
}

int func_213()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_214()
{
	func_119();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return func_202(func_81(), iParam0);
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_217(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_218(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_220())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_219()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_220()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF3148AAF69AF9CBC(&iVar0, 2);
				unk_0xF3148AAF69AF9CBC(&iVar0, 4);
				unk_0xF3148AAF69AF9CBC(&iVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_221(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

bool func_222(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_223()
{
	int iVar0;
	
	if (iLocal_222)
	{
		func_125(0);
		unk_0x9CEDFD70C55A7F8F("RE51A_SHOP");
		unk_0x3C936873011FA97B();
		unk_0xFEA6E2B6E5CAFC2E(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		unk_0x010ACF5A865CA942("re_shoprobbery");
		unk_0x010ACF5A865CA942("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_113[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_113[iVar0]) && !unk_0xE5AB05962FA1FF3F(iLocal_113[iVar0], 0))
				{
					unk_0x06189C52198B2264(iLocal_113[iVar0], Local_102, 150f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_113[iVar0], 1);
				}
				unk_0x71A8BCA218722FA1(&(iLocal_113[iVar0]));
			}
			if (unk_0xFBACB273AA628CC5(uLocal_184[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_184[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xFBACB273AA628CC5(uLocal_191))
		{
			unk_0x0A8175F24237A3D4(&uLocal_191);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_120[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_120[iVar0]))
				{
					unk_0x3B7AFF7DCE22C1CF(iLocal_120[iVar0], 1);
					unk_0xEAD984C2869B8B7C(&uLocal_151);
					if (iLocal_48 == 1)
					{
						unk_0x31C1393E4ACFD794(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_48 == 2)
					{
						unk_0x27CC98B7C879C320(iLocal_120[iVar0]);
						unk_0xD91194CE3D1E1D77(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					unk_0x06189C52198B2264(0, Local_102, 150f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_151);
					unk_0xC65002CAA1212AF9(iLocal_120[iVar0], uLocal_151);
					unk_0xA3561415EB3DA3A3(&uLocal_151);
					unk_0x6CB332CB31E9FA96(iLocal_120[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_116[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_116[iVar0]))
				{
					unk_0xCE566DBDCACD245E(iLocal_116[iVar0], 317, 1);
					unk_0x3B7AFF7DCE22C1CF(iLocal_116[iVar0], 1);
					if (iVar0 == 0)
					{
						if (!iLocal_182)
						{
							unk_0x27CC98B7C879C320(iLocal_116[iVar0]);
							unk_0x06189C52198B2264(iLocal_116[iVar0], Local_102, 150f, -1, 0, 0);
						}
						else
						{
							unk_0x1D15D99A10A15334(iLocal_116[iVar0], 0);
						}
					}
					else
					{
						unk_0xEAD984C2869B8B7C(&uLocal_151);
						if (iLocal_48 == 2)
						{
							unk_0x27CC98B7C879C320(iLocal_116[iVar0]);
							unk_0xD91194CE3D1E1D77(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						unk_0x06189C52198B2264(0, Local_102, 150f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_151);
						unk_0xC65002CAA1212AF9(iLocal_116[iVar0], uLocal_151);
						unk_0xA3561415EB3DA3A3(&uLocal_151);
					}
					unk_0x1D15D99A10A15334(iLocal_116[iVar0], 0);
					unk_0x33B1E568CEF14B0D(iLocal_116[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_183))
		{
			unk_0x71A8BCA218722FA1(&iLocal_183);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_166))
		{
			if (unk_0xCB8B9E751036ECB2(iLocal_166))
			{
				unk_0xD88DD5B581458979(iLocal_166, 1, 1);
			}
			unk_0xB5713813CBD9E79F(&iLocal_166);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_174))
		{
			unk_0xE0913C01F5C0CC3D(&iLocal_174);
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
		}
		unk_0xF1BC58601CA4A5C7(1);
		unk_0x3BF4F473786B0150(1);
		unk_0x5B6D37392F5991C3(1f);
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0xA9DF4B73BBB06CE5(1);
		if (iLocal_48 == 1)
		{
			func_169(0, 0);
			func_166(0, 1, 0);
		}
		else if (iLocal_48 == 2)
		{
			func_169(14, 0);
			func_166(14, 1, 0);
		}
	}
	func_224(-1);
	unk_0xC23A229F78DAD92A();
}

void func_224(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_228(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_227(30000);
		StringCopy(&cVar0, func_226(Global_98920, 1), 64);
		if (func_66(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_225(&Global_25005);
	Global_98921 = 0;
	func_190(-1);
}

void func_225(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

char* func_226(int iParam0, bool bParam1)
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

void func_227(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_228(int iParam0)
{
	func_229(iParam0, 0, func_234(iParam0));
}

void func_229(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_81();
	func_232(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_231(iParam0, &uVar0);
	Var1 = { func_230(&uVar0) };
}

struct<16> func_230(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_80(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_88(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_86(*uParam0), 64);
	return Var0;
}

void func_231(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_201(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_233(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_233(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

int func_234(int iParam0)
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

void func_235()
{
	Global_14559 = 0;
	func_236();
}

void func_236()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

Vector3 func_237()
{
	float fVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_127, 1);
		iLocal_126 = 1;
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_130, 1) < fVar0)
		{
			fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_130, 1);
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


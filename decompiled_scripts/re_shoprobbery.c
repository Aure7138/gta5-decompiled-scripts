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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	struct<3> Local_55[2];
	float fLocal_62[2] = { 0f, 0f };
	struct<3> Local_65[3];
	float fLocal_75[3] = { 0f, 0f, 0f };
	struct<3> Local_79[4];
	float fLocal_92[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	var uLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[2] = { 0, 0 };
	int iLocal_117[3] = { 0, 0, 0 };
	int iLocal_121[4] = { 0, 0, 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	bool bLocal_140 = 0;
	int iLocal_141[2] = { 0, 0 };
	int iLocal_144[2] = { 0, 0 };
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168[2] = { 0, 0 };
	var uLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	bool bLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185[2] = { 0, 0 };
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	struct<3> Local_194 = { 0, 0, 0 } ;
	float fLocal_197 = 0f;
	struct<3> Local_198 = { 0, 0, 0 } ;
	struct<3> Local_201 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	var uLocal_210 = 0;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	char* sLocal_214 = NULL;
	char* sLocal_215 = NULL;
	var uLocal_216 = 0;
	float fLocal_217 = 0f;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	var uLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 16;
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
	var uLocal_396 = 0;
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
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_128 = { -824.1719f, -187.654f, 36.5707f };
	Local_131 = { -1202.94f, -779.74f, 17.33f };
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	func_248();
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_246();
		func_234();
	}
	if (iLocal_49 == 1)
	{
		if (!func_233(0) || !func_232(0))
		{
			unk_0xAFBDF6A5E54114C1();
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!func_233(14) || !func_232(14))
		{
			unk_0xAFBDF6A5E54114C1();
		}
	}
	if (func_202(Local_50, 5, bLocal_134, 0, 0))
	{
		func_199(5);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC92F9F18E020B461() || iLocal_164)
		{
			if (!func_198())
			{
				if (func_197())
				{
					func_234();
				}
			}
			unk_0x6D3F703013ED87D3("RE_SR", 0);
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (iLocal_53)
						{
							iLocal_223 = 1;
							iLocal_48 = 1;
						}
						else
						{
							if (func_185())
							{
								func_234();
							}
							if (!bLocal_54)
							{
								func_184();
							}
							if (bLocal_54)
							{
								func_183();
							}
						}
						break;
					
					case 1:
						switch (iLocal_46)
						{
							case 0:
								if (!iLocal_137)
								{
									func_182();
									if (unk_0xEA02B859DE237081(iLocal_153))
									{
										func_176();
										iLocal_137 = 1;
									}
								}
								else
								{
									if (iLocal_49 == 1)
									{
										unk_0x584B286572B48431();
									}
									func_173();
									unk_0xAED5221F05DAE55E(iLocal_153);
									if (func_172())
									{
										if (!iLocal_159)
										{
											if (iLocal_49 == 1)
											{
												if (func_171(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
											else if (iLocal_49 == 2)
											{
												if (func_171(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
										}
									}
									if (func_170())
									{
										if (unk_0x12DD4A0B247D9B4D(uLocal_193))
										{
											unk_0xFFD8EB5462B07B59(&uLocal_193);
										}
										unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
										unk_0x8576657A629C4B0A(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_114)
										{
											if (!unk_0xF68107C40359970C(iLocal_114[iVar0]))
											{
												unk_0xC1A74225341AA9FB(iLocal_114[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
												unk_0xABC2CA6F28903308(iLocal_114[iVar0], 1);
												if (!unk_0x12DD4A0B247D9B4D(uLocal_185[iVar0]))
												{
													uLocal_185[iVar0] = func_169(iLocal_114[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_49 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_117)
											{
												if (!unk_0xF68107C40359970C(iLocal_117[iVar0]))
												{
													unk_0x402A537158A551BD(iLocal_117[iVar0], -1);
													unk_0xABC2CA6F28903308(iLocal_117[iVar0], 1);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_121)
											{
												if (!unk_0xF68107C40359970C(iLocal_121[iVar0]))
												{
													unk_0x402A537158A551BD(iLocal_121[iVar0], -1);
													unk_0xABC2CA6F28903308(iLocal_121[iVar0], 1);
												}
												iVar0++;
											}
										}
										unk_0x4BDA5AFD88C085EB(&iLocal_167);
										bLocal_140 = true;
										iLocal_46 = 1;
										iLocal_47 = 3;
									}
									if (func_168())
									{
										func_161(1);
										unk_0xC1B1E9A034A63A62(0);
										unk_0xAA8EA67D77D37C61(90, Local_194, 15000f);
										iLocal_46 = 1;
									}
								}
								break;
							
							case 1:
								unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
								func_173();
								iVar1 = 0;
								while (iVar1 < iLocal_117)
								{
									if (unk_0xE5965CDF24F93A9F(iLocal_117[iVar1]))
									{
										if (unk_0x0747E45CFF1F74AA(iLocal_117[iVar1], unk_0xE2D3D51028F0428A(), 1))
										{
											func_160();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_121)
								{
									if (unk_0xE5965CDF24F93A9F(iLocal_121[iVar1]))
									{
										if (unk_0x0747E45CFF1F74AA(iLocal_121[iVar1], unk_0xE2D3D51028F0428A(), 1))
										{
											func_160();
										}
									}
									iVar1++;
								}
								switch (iLocal_47)
								{
									case 0:
										if (func_168())
										{
											func_156();
											func_154();
										}
										break;
									
									case 1:
										func_153();
										func_154();
										break;
									
									case 2:
										func_152();
										func_151();
										func_150();
										if (unk_0xC9D9444186B5A374() > 500)
										{
											if (unk_0xE5965CDF24F93A9F(iLocal_167))
											{
												if (!unk_0xE85F749F6D5C809E(iLocal_167))
												{
													func_149();
													unk_0x202B28FEABEC4034(iLocal_114[0], joaat("weapon_unarmed"), 1);
													unk_0x9A97DC6DBC7B223D(iLocal_167, iLocal_114[0], unk_0xB897FCFCFA664B38(iLocal_114[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (unk_0x863026E0C5C2E52B(Local_194 - Vector(20f, 20f, 20f), Local_194 + Vector(20f, 20f, 20f), 0))
										{
											if (!unk_0xF68107C40359970C(iLocal_117[1]))
											{
												unk_0x84918839A90C954C(iLocal_117[1], Local_103, 150f, -1, 0, 0);
												unk_0x50274A7EACA3133A(iLocal_117[1], 0);
												unk_0xB3822DB3D538C8F3(&(iLocal_117[1]));
											}
											if (!unk_0xF68107C40359970C(iLocal_117[2]))
											{
												unk_0x84918839A90C954C(iLocal_117[2], Local_103, 150f, -1, 0, 0);
												unk_0x50274A7EACA3133A(iLocal_117[2], 0);
												unk_0xB3822DB3D538C8F3(&(iLocal_117[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_113 - 1))
											{
												if (!unk_0xF68107C40359970C(iLocal_121[iVar2]))
												{
													unk_0x006574E87E6F1942(iLocal_121[iVar2], 1, 1);
													unk_0xA888F8CC04F25CC8(&uLocal_152);
													if (iLocal_49 == 1)
													{
														unk_0x49D97B076E3590AC(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_49 == 2)
													{
														unk_0x7D1424753688EE7A(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													unk_0x84918839A90C954C(0, Local_103, 150f, -1, 0, 0);
													unk_0xC963A45B50851768(uLocal_152);
													unk_0x8ACADA903FCAA42F(iLocal_121[iVar2], uLocal_152);
													unk_0x7461D7C5BA953BC7(&uLocal_152);
													unk_0xABC2CA6F28903308(iLocal_121[iVar2], 1);
													unk_0x50274A7EACA3133A(iLocal_121[iVar2], 0);
													unk_0xA7266A50941DBAEA(iLocal_121[iVar2], 1);
													unk_0xB3822DB3D538C8F3(&(iLocal_121[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_148() || unk_0x83666F9FB8FEBD4B() > 20000)
										{
											if (!iLocal_164)
											{
												if (!unk_0x55B23FE400FCEA6B(iLocal_114[0], 0))
												{
													func_140(0, 1, 1, 0, 0, 0, 0);
													func_133(0);
													unk_0x72DB022C36FCEA24(1);
													unk_0xB60709BD0E075903(1);
													unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
													unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, 0, 0, 0);
													if (iLocal_49 == 1)
													{
														if (unk_0xE5965CDF24F93A9F(iLocal_167))
														{
															unk_0x1C2ED929474DC6FE(iLocal_167, 0, 0);
															unk_0x959E1626CBC7D38A(iLocal_167, 0, 0);
														}
													}
													else if (iLocal_49 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_117)
													{
														if (!unk_0xF68107C40359970C(iLocal_117[iVar1]))
														{
															unk_0x50274A7EACA3133A(iLocal_117[iVar1], 0);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_121)
													{
														if (!unk_0xF68107C40359970C(iLocal_121[iVar1]))
														{
															unk_0x50274A7EACA3133A(iLocal_121[iVar1], 0);
														}
														iVar1++;
													}
													if (!unk_0xF68107C40359970C(iLocal_117[0]))
													{
														unk_0x50274A7EACA3133A(iLocal_117[0], 1);
														unk_0xA888F8CC04F25CC8(&uLocal_152);
														unk_0x49D97B076E3590AC(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
														unk_0xC963A45B50851768(uLocal_152);
														unk_0x8ACADA903FCAA42F(iLocal_117[0], uLocal_152);
														unk_0x7461D7C5BA953BC7(&uLocal_152);
														unk_0xABC2CA6F28903308(iLocal_117[0], 1);
													}
													if (!func_132())
													{
														func_116(&uLocal_232, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_164 = 1;
												}
											}
										}
										if (!iLocal_139)
										{
											if (unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (unk_0xD01FAFCE275C94F3(unk_0xE2D3D51028F0428A(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (unk_0xD01FAFCE275C94F3(unk_0xE2D3D51028F0428A(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_115(64)))
												{
													unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
													iLocal_139 = 1;
												}
											}
										}
										if (iLocal_49 == 1)
										{
											if (!func_168())
											{
												if (!iLocal_180)
												{
													iLocal_180 = 1;
												}
											}
											if (!bLocal_161)
											{
												func_114();
											}
											if (!unk_0xF68107C40359970C(iLocal_114[0]) && unk_0x55A0C756C4A8220C(iLocal_175, 0))
											{
												if (unk_0xF6F5D18EF8EAB859(iLocal_114[0], iLocal_175, 0))
												{
													if (unk_0xE5965CDF24F93A9F(iLocal_167))
													{
														unk_0x4BDA5AFD88C085EB(&iLocal_167);
														bLocal_161 = true;
													}
												}
											}
											if (func_113() && !iLocal_162)
											{
												if (unk_0x12DD4A0B247D9B4D(uLocal_185[0]))
												{
													unk_0xFFD8EB5462B07B59(&(uLocal_185[0]));
												}
												if (unk_0x12DD4A0B247D9B4D(uLocal_185[1]))
												{
													unk_0xFFD8EB5462B07B59(&(uLocal_185[1]));
												}
												if (!unk_0x12DD4A0B247D9B4D(uLocal_191))
												{
													uLocal_191 = func_111(iLocal_175, 1, 0);
												}
												bLocal_161 = true;
												if (!unk_0xF68107C40359970C(iLocal_184))
												{
													unk_0xBC12D08EE7559CCD(iLocal_184, 17, 1);
													unk_0xBC12D08EE7559CCD(iLocal_184, 6, 1);
													unk_0xBC12D08EE7559CCD(iLocal_184, 1, 1);
													unk_0xB69D13E19147910F(iLocal_184, iLocal_175, unk_0xE2D3D51028F0428A(), 8, 16f, 786469, -1f, -1f, 1);
													unk_0xABC2CA6F28903308(iLocal_184, 1);
													iLocal_162 = 1;
												}
											}
											if (iLocal_162 && !iLocal_224)
											{
												if (unk_0x55A0C756C4A8220C(iLocal_175, 0) && !unk_0xF68107C40359970C(iLocal_184))
												{
													if (!unk_0x8F41785F110B0DA0(iLocal_175, Local_55[0 /*3*/], 20f, 20f, 10f, 0, 1, 0))
													{
														unk_0xB69D13E19147910F(iLocal_184, iLocal_175, unk_0xE2D3D51028F0428A(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_224 = 1;
													}
												}
											}
											if (func_110())
											{
												if (!unk_0xF68107C40359970C(iLocal_184))
												{
													if (unk_0x55A0C756C4A8220C(iLocal_175, 0))
													{
														if (!iLocal_163)
														{
															unk_0xBC12D08EE7559CCD(iLocal_184, 17, 1);
															unk_0xBC12D08EE7559CCD(iLocal_184, 6, 1);
															unk_0xBC12D08EE7559CCD(iLocal_184, 1, 1);
															unk_0xB69D13E19147910F(iLocal_184, iLocal_175, unk_0xE2D3D51028F0428A(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_163 = 1;
														}
														if (!unk_0xF68107C40359970C(iLocal_114[0]))
														{
															if (unk_0xF6F5D18EF8EAB859(iLocal_114[0], iLocal_175, 0))
															{
																if (unk_0x12DD4A0B247D9B4D(uLocal_185[0]))
																{
																	unk_0xFFD8EB5462B07B59(&(uLocal_185[0]));
																}
																if (unk_0x12DD4A0B247D9B4D(uLocal_185[1]))
																{
																	unk_0xFFD8EB5462B07B59(&(uLocal_185[1]));
																}
																if (!unk_0x12DD4A0B247D9B4D(uLocal_191))
																{
																	uLocal_191 = func_111(iLocal_175, 1, 0);
																}
																bLocal_161 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_111 - 1))
												{
													if (!iLocal_141[iVar3])
													{
														if (!unk_0xF68107C40359970C(iLocal_114[iVar3]))
														{
															if (unk_0xD5C6B5E3B93A5EDC(iLocal_114[iVar3], 0) && !unk_0xF68107C40359970C(iLocal_184))
															{
																unk_0x0E6C3A4EFA9D9D35(iLocal_114[iVar3], unk_0xE2D3D51028F0428A(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_141[iVar3] = 1;
															}
															else if (!unk_0x12DD4A0B247D9B4D(uLocal_192))
															{
																unk_0xC1A74225341AA9FB(iLocal_114[iVar3], unk_0xE2D3D51028F0428A(), 0, 16);
																unk_0xABC2CA6F28903308(iLocal_114[iVar3], 1);
																if (unk_0x12DD4A0B247D9B4D(uLocal_191))
																{
																	unk_0xFFD8EB5462B07B59(&uLocal_191);
																}
																if (!unk_0x12DD4A0B247D9B4D(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_169(iLocal_114[iVar3], 1, 145);
																}
																iLocal_141[iVar3] = 1;
															}
														}
													}
													if (!iLocal_144[iVar3])
													{
														if (unk_0x55A0C756C4A8220C(iLocal_175, 0))
														{
															if (!unk_0xF68107C40359970C(iLocal_114[iVar3]))
															{
																if ((unk_0xF68107C40359970C(iLocal_184) || unk_0x7158135695FAE89D(iLocal_175, -1, 0)) || unk_0xEF9410C312F2B117(iLocal_114[iVar3]))
																{
																	unk_0x006574E87E6F1942(iLocal_114[iVar3], 1, 1);
																	unk_0xA888F8CC04F25CC8(&uLocal_152);
																	unk_0xAB7639D658BBCCEE(0, 0, 0);
																	unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
																	unk_0xC963A45B50851768(uLocal_152);
																	unk_0x8ACADA903FCAA42F(iLocal_114[iVar3], uLocal_152);
																	unk_0x7461D7C5BA953BC7(&uLocal_152);
																	unk_0xABC2CA6F28903308(iLocal_114[iVar3], 1);
																	if (!unk_0xF68107C40359970C(iLocal_184))
																	{
																		unk_0x006574E87E6F1942(iLocal_184, 1, 1);
																		unk_0xA888F8CC04F25CC8(&uLocal_152);
																		unk_0xAB7639D658BBCCEE(0, 0, 0);
																		unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
																		unk_0xC963A45B50851768(uLocal_152);
																		unk_0x8ACADA903FCAA42F(iLocal_184, uLocal_152);
																		unk_0x7461D7C5BA953BC7(&uLocal_152);
																		unk_0xABC2CA6F28903308(iLocal_184, 1);
																	}
																	if (!unk_0x12DD4A0B247D9B4D(uLocal_192))
																	{
																		if (unk_0x12DD4A0B247D9B4D(uLocal_191))
																		{
																			unk_0xFFD8EB5462B07B59(&uLocal_191);
																		}
																		if (!unk_0x12DD4A0B247D9B4D(uLocal_185[iVar3]))
																		{
																			uLocal_185[iVar3] = func_169(iLocal_114[iVar3], 1, 145);
																		}
																	}
																	iLocal_144[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!unk_0xF68107C40359970C(iLocal_114[iVar3]))
															{
																unk_0x006574E87E6F1942(iLocal_114[iVar3], 1, 1);
																unk_0xA888F8CC04F25CC8(&uLocal_152);
																unk_0xAB7639D658BBCCEE(0, 0, 0);
																unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
																unk_0xC963A45B50851768(uLocal_152);
																unk_0x8ACADA903FCAA42F(iLocal_114[iVar3], uLocal_152);
																unk_0x7461D7C5BA953BC7(&uLocal_152);
																unk_0xABC2CA6F28903308(iLocal_114[iVar3], 1);
															}
															if (!unk_0xF68107C40359970C(iLocal_184))
															{
																unk_0x006574E87E6F1942(iLocal_184, 1, 1);
																unk_0xA888F8CC04F25CC8(&uLocal_152);
																unk_0xAB7639D658BBCCEE(0, 0, 0);
																unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
																unk_0xC963A45B50851768(uLocal_152);
																unk_0x8ACADA903FCAA42F(iLocal_184, uLocal_152);
																unk_0x7461D7C5BA953BC7(&uLocal_152);
																unk_0xABC2CA6F28903308(iLocal_184, 1);
															}
															if (!unk_0x12DD4A0B247D9B4D(uLocal_192))
															{
																if (unk_0x12DD4A0B247D9B4D(uLocal_191))
																{
																	unk_0xFFD8EB5462B07B59(&uLocal_191);
																}
																if (!unk_0x12DD4A0B247D9B4D(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_169(iLocal_114[iVar3], 1, 145);
																}
																iLocal_144[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_161)
											{
												if (func_109())
												{
													func_108();
													func_105();
													iLocal_47 = 9;
												}
											}
										}
										else if (iLocal_49 == 2)
										{
											if (unk_0xF68107C40359970C(iLocal_114[0]))
											{
												if (unk_0x12DD4A0B247D9B4D(uLocal_185[0]))
												{
													func_104(&uLocal_232, 3);
													unk_0xFFD8EB5462B07B59(&(uLocal_185[0]));
												}
											}
											if (unk_0xF68107C40359970C(iLocal_114[1]))
											{
												if (unk_0x12DD4A0B247D9B4D(uLocal_185[1]))
												{
													func_104(&uLocal_232, 4);
													unk_0xFFD8EB5462B07B59(&(uLocal_185[1]));
												}
											}
											if (unk_0xF68107C40359970C(iLocal_114[0]))
											{
												if (unk_0xE5965CDF24F93A9F(iLocal_167))
												{
													if (unk_0xE85F749F6D5C809E(iLocal_167))
													{
														unk_0xE6451C2F193342C7(iLocal_167, 1, 1);
													}
													unk_0x4BDA5AFD88C085EB(&iLocal_167);
													func_108();
													func_105();
													iLocal_47 = 9;
												}
											}
											else if (unk_0x0747E45CFF1F74AA(iLocal_114[0], unk_0xE2D3D51028F0428A(), 1))
											{
												if (unk_0xE5965CDF24F93A9F(iLocal_167))
												{
													if (unk_0xE85F749F6D5C809E(iLocal_167))
													{
														unk_0xE6451C2F193342C7(iLocal_167, 1, 1);
													}
													unk_0x4BDA5AFD88C085EB(&iLocal_167);
													func_108();
													func_105();
													iLocal_47 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_153();
										break;
									
									case 9:
										func_152();
										func_102();
										break;
									
									case 10:
										func_99(2);
										func_98(uLocal_193, &uLocal_229);
										if (iLocal_49 == 1)
										{
											if (!iLocal_160)
											{
												unk_0x8FB472886552D737("random@robbery");
												if (!unk_0x6F940C2636C076AD("random@robbery"))
												{
													unk_0x8FB472886552D737("random@robbery");
												}
												else if (!unk_0xF68107C40359970C(iLocal_117[0]))
												{
													unk_0xC64B6E13A6A7F517(iLocal_117[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													unk_0xBBF86885619695CE(iLocal_117[0], 47.0582f);
													unk_0x49D97B076E3590AC(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0xF68107C40359970C(iLocal_117[1]))
													{
														unk_0x84918839A90C954C(iLocal_117[1], Local_103, 150f, -1, 0, 0);
														unk_0x50274A7EACA3133A(iLocal_117[1], 0);
														unk_0xB3822DB3D538C8F3(&(iLocal_117[1]));
													}
													if (!unk_0xF68107C40359970C(iLocal_117[2]))
													{
														unk_0x84918839A90C954C(iLocal_117[2], Local_103, 150f, -1, 0, 0);
														unk_0x50274A7EACA3133A(iLocal_117[2], 0);
														unk_0xB3822DB3D538C8F3(&(iLocal_117[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_113 - 1))
													{
														if (!unk_0xF68107C40359970C(iLocal_121[iVar4]))
														{
															unk_0xA888F8CC04F25CC8(&uLocal_152);
															unk_0x49D97B076E3590AC(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															unk_0x84918839A90C954C(0, Local_103, 150f, -1, 0, 0);
															unk_0xC963A45B50851768(uLocal_152);
															unk_0x8ACADA903FCAA42F(iLocal_121[iVar4], uLocal_152);
															unk_0x7461D7C5BA953BC7(&uLocal_152);
															unk_0xABC2CA6F28903308(iLocal_121[iVar4], 1);
															unk_0x50274A7EACA3133A(iLocal_121[iVar4], 0);
															unk_0xA7266A50941DBAEA(iLocal_121[iVar4], 1);
															unk_0xB3822DB3D538C8F3(&(iLocal_121[iVar4]));
														}
														iVar4++;
													}
													iLocal_160 = 1;
												}
											}
											func_74(6, 3);
											func_74(7, 3);
										}
										else if (iLocal_49 == 2)
										{
											if (!iLocal_160)
											{
												unk_0x8FB472886552D737("random@robbery");
												if (!unk_0x6F940C2636C076AD("random@robbery"))
												{
													unk_0x8FB472886552D737("random@robbery");
												}
												else if (!unk_0xF68107C40359970C(iLocal_117[0]))
												{
													unk_0xC64B6E13A6A7F517(iLocal_117[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													unk_0xBBF86885619695CE(iLocal_117[0], 205.7753f);
													unk_0x49D97B076E3590AC(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!unk_0xF68107C40359970C(iLocal_117[1]))
													{
														unk_0x84918839A90C954C(iLocal_117[1], Local_103, 150f, -1, 0, 0);
														unk_0x50274A7EACA3133A(iLocal_117[1], 0);
														unk_0xB3822DB3D538C8F3(&(iLocal_117[1]));
													}
													if (!unk_0xF68107C40359970C(iLocal_117[2]))
													{
														unk_0x84918839A90C954C(iLocal_117[2], Local_103, 150f, -1, 0, 0);
														unk_0x50274A7EACA3133A(iLocal_117[2], 0);
														unk_0xB3822DB3D538C8F3(&(iLocal_117[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_113 - 1))
													{
														if (!unk_0xF68107C40359970C(iLocal_121[iVar5]))
														{
															unk_0x84918839A90C954C(iLocal_121[iVar5], Local_103, 150f, -1, 0, 0);
															unk_0x50274A7EACA3133A(iLocal_121[iVar5], 0);
															unk_0xA7266A50941DBAEA(iLocal_121[iVar5], 1);
															unk_0xB3822DB3D538C8F3(&(iLocal_121[iVar5]));
														}
														iVar5++;
													}
													iLocal_160 = 1;
												}
											}
											if (unk_0x574E2A23F0F76E35(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												unk_0x798E4BBA7A3C56AE(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_172())
										{
										}
										if ((func_168() && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_47 = 11;
										}
										if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_248()) > (fLocal_197 + 150f))
										{
											iLocal_47 = 12;
										}
										if (unk_0x83666F9FB8FEBD4B() > 120000)
										{
											iLocal_47 = 14;
										}
										if (unk_0xF68107C40359970C(iLocal_117[0]))
										{
											func_73(2);
											func_53();
										}
										else if (unk_0x0747E45CFF1F74AA(iLocal_117[0], unk_0xE2D3D51028F0428A(), 1))
										{
											func_73(2);
											func_53();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_73(2);
										func_53();
										break;
									
									case 7:
										func_53();
										break;
									
									case 14:
										func_73(2);
										func_53();
										break;
									
									case 13:
										if (!iLocal_225)
										{
											if (!unk_0xF68107C40359970C(iLocal_117[0]))
											{
												unk_0x03A927199A2DFE46(iLocal_117[0]);
												if (iLocal_49 == 1)
												{
													func_116(&uLocal_232, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_49 == 2)
												{
													func_116(&uLocal_232, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												unk_0x9BD5D84C8C3F0B2C(iLocal_117[0], 20000);
												unk_0xABC2CA6F28903308(iLocal_117[0], 1);
												unk_0x50274A7EACA3133A(iLocal_117[0], 0);
												iLocal_225 = 1;
											}
										}
										if (!func_132())
										{
											iLocal_46 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_160();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_234();
		}
	}
}

void func_1()
{
	if (func_168())
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_193))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_193);
		}
		if (!iLocal_182)
		{
			if (!unk_0xF68107C40359970C(iLocal_117[0]))
			{
				func_140(1, 1, 1, 0, 0, 0, 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0x3410421C60BF7143(1);
				unk_0x917F631782A9CB32(unk_0x6B62510F212526DC(iLocal_117[0], 1), 20f, 0);
				unk_0x72DB022C36FCEA24(0);
				unk_0xB60709BD0E075903(0);
				if (iLocal_49 == 1)
				{
					bLocal_181 = true;
				}
				else if (iLocal_49 == 2)
				{
				}
				iLocal_182 = 1;
			}
		}
	}
	if (!bLocal_181)
	{
		if (!unk_0xF68107C40359970C(iLocal_117[0]))
		{
			bLocal_181 = true;
		}
	}
	if (bLocal_181)
	{
		if (!iLocal_183)
		{
			unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 1);
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
			if (unk_0x12DD4A0B247D9B4D(uLocal_193))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_193);
			}
			Local_198 = { unk_0x6B62510F212526DC(iLocal_117[0], 0) };
			if (iLocal_49 == 1)
			{
				Local_198 = { -820.77f, -186.514f, 36.569f };
				Local_204 = { 0f, 0f, -60f };
				fLocal_217 = 0.855f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_b";
				sLocal_213 = "return_bag_stand_b_female";
				sLocal_214 = "return_bag_stand_b_bag";
				sLocal_215 = "return_bag_stand_b_cam";
			}
			else if (iLocal_49 == 2)
			{
				Local_198 = { -1198.295f, -776.533f, 16.326f };
				Local_204 = { 0f, 0f, -60.25f };
				fLocal_217 = 0.785f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_c_rt";
				sLocal_213 = "return_bag_stand_c_rt_female";
				sLocal_214 = "return_bag_stand_c_rt_bag";
				sLocal_215 = "return_bag_stand_c_rt_cam";
			}
			uLocal_216 = unk_0x8F5F4164BF5FB513(Local_198, Local_204, 2);
			uLocal_210 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0x7B8CE3A05613F41C(uLocal_210, uLocal_216, sLocal_215, sLocal_211);
			unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
			unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_216, sLocal_211, sLocal_212, 1000f, -2f, 5, 0, 1148846080, 0);
			unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
			unk_0x51BB443B279E4104(iLocal_117[0]);
			unk_0x950B26F4C891073F(iLocal_117[0], uLocal_216, sLocal_211, sLocal_213, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xEB087B19F63AB053(iLocal_117[0], 0, 0);
			iLocal_167 = unk_0x0E536D72AB30F4C8(joaat("prop_cs_duffel_01"), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
			unk_0xAA8557AFE4A4A184(iLocal_167, uLocal_216, sLocal_214, sLocal_211, 1000f, 1090519040, 0, 1148846080);
			if (!unk_0xF68107C40359970C(iLocal_117[0]))
			{
				func_52();
				unk_0xDD786B89B15AA63F(uLocal_210, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_183 = 1;
			}
		}
	}
	if ((unk_0x83666F9FB8FEBD4B() > 1500 && iLocal_183) && !iLocal_158)
	{
		func_50();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_49 == 1)
		{
			func_116(&uLocal_232, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_116(&uLocal_232, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_158 = 1;
	}
	if (unk_0x54DE1614490C2A83(uLocal_216) > fLocal_217 && iLocal_183)
	{
		if (!unk_0xF68107C40359970C(iLocal_117[0]))
		{
			unk_0x62BDDA84CCCF90A9(iLocal_117[0], iLocal_189);
			unk_0x03A927199A2DFE46(iLocal_117[0]);
			unk_0xA888F8CC04F25CC8(&uLocal_152);
			unk_0x49D97B076E3590AC(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			unk_0xC963A45B50851768(uLocal_152);
			unk_0x8ACADA903FCAA42F(iLocal_117[0], uLocal_152);
			unk_0x7461D7C5BA953BC7(&uLocal_152);
			unk_0xABC2CA6F28903308(iLocal_117[0], 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_167))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_167);
		}
		unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
		unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), joaat("MotionState_Walk"), 0, 0, 0);
		unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 650, 0, 1, 0);
		func_140(0, 1, 1, 0, 0, 0, 0);
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 4);
		unk_0x72DB022C36FCEA24(1);
		unk_0xB60709BD0E075903(1);
		unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 0);
		unk_0x94953C3FF0664F66(0f);
		unk_0xBAEA2321313356D0(0, 0, 3, 0);
		unk_0x588DDCB644C6486A(uLocal_210, 0);
		func_49();
		func_48(joaat("rc_wallets_returned"), 1);
		if (iLocal_49 == 1)
		{
			func_12(func_42(), 1, iLocal_189);
			func_2(0, func_42(), 1);
		}
		else if (iLocal_49 == 2)
		{
			func_12(func_42(), 1, iLocal_189);
			func_2(14, func_42(), 1);
		}
		func_73(3);
		func_53();
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	switch (bParam1)
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

void func_3(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB0550BC91B0159D6(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, bParam1);
			func_4(func_8(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
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
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1574915;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2822371[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10835;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12581;
}

int func_9()
{
	return Global_31511;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_112922.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100032.f_1392[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_9() == 0)
		{
			return BitTest(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_112922.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_12(bool bParam0, int iParam1, int iParam2)
{
	if (func_41(bParam0) == 3)
	{
		return 0;
	}
	if (func_41(bParam0) == 4)
	{
		return 0;
	}
	return func_13(func_41(bParam0), 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_40();
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
					func_39(99, 1);
					func_48(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_23(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_21(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
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
							func_48(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(bVar1);
	}
	iVar5 = (Global_59870[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59870[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59870[iVar2] = 2147483647;
				}
				else
				{
					Global_59870[iVar2] = (Global_59870[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_48(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59870[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59870[iVar2];
			Global_59870[iVar2] = (Global_59870[iVar2] - iParam3);
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
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112922.f_20564.f_233[iVar2 /*69*/]++;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_15(iParam0);
	if (Global_42602 == 15)
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
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59878[iVar0 /*3*/][0] = Global_112922.f_20564[iVar0];
		Global_59878.f_31[iVar0 /*3*/][0] = Global_112922.f_20564.f_11[iVar0];
		Global_59878.f_62[iVar0 /*3*/][0] = Global_112922.f_20564.f_22[iVar0];
		Global_59878.f_93[iVar0 /*3*/][0] = Global_112922.f_20564.f_33[iVar0];
		Global_59878.f_124[iVar0 /*3*/][0] = Global_112922.f_20564.f_44[iVar0];
		Global_59878.f_155[iVar0 /*3*/][0] = Global_112922.f_20564.f_55[iVar0];
		Global_59878.f_186[iVar0 /*3*/][0] = Global_112922.f_20564.f_66[iVar0];
		Global_59878.f_217[iVar0 /*3*/][0] = Global_112922.f_20564.f_77[iVar0];
		Global_59878.f_248[iVar0 /*3*/][0] = Global_112922.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_59878[iVar0 /*3*/][1] = Global_112922.f_20564[iVar0];
			Global_59878.f_31[iVar0 /*3*/][1] = Global_112922.f_20564.f_11[iVar0];
			Global_59878.f_62[iVar0 /*3*/][1] = Global_112922.f_20564.f_22[iVar0];
			Global_59878.f_93[iVar0 /*3*/][1] = Global_112922.f_20564.f_33[iVar0];
			Global_59878.f_124[iVar0 /*3*/][1] = Global_112922.f_20564.f_44[iVar0];
			Global_59878.f_155[iVar0 /*3*/][1] = Global_112922.f_20564.f_55[iVar0];
			Global_59878.f_186[iVar0 /*3*/][1] = Global_112922.f_20564.f_66[iVar0];
			Global_59878.f_217[iVar0 /*3*/][1] = Global_112922.f_20564.f_77[iVar0];
			Global_59878.f_248[iVar0 /*3*/][1] = Global_112922.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59870[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_16(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_19(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_19(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_19(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_19(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_4(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_4(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_4(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_4(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_4(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_4(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_112922.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_112922.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_112922.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_18() /*5559*/].f_675.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_112922.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_18() /*5559*/].f_675.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_17(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(bool bParam0)
{
	switch (bParam0)
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
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_19(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_20(int iParam0)
{
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

int func_21(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_22(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_22(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_22(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_22(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_7(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_7(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_7(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_7(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_7(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_7(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return BitTest(Global_112922.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_18() /*5559*/].f_675.f_10, iParam0);
}

bool func_22(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_23(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_38(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_24(27, 1);
	return 1;
}

int func_24(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_25(iParam0, iParam1);
}

int func_25(int iParam0, int iParam1)
{
	if (func_37(14) && !func_36(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31761 != 0 && !Global_77858)
	{
		return 0;
	}
	if (func_35(&Global_4535627))
	{
		if (func_33(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_26(&Global_4535627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_37(14) && !func_36(iParam1))
	{
		return 0;
	}
	if (func_33(uParam0, iParam1))
	{
		return 0;
	}
	if (func_32(uParam0) < 0f)
	{
		func_31(uParam0, 0);
	}
	func_29(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_27(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_37(14) && !func_36(iParam1))
	{
		return 0;
	}
	if (func_33(uParam0, iParam1))
	{
		return 0;
	}
	if (func_32(uParam0) < 0f)
	{
		func_31(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_28(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_29(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_30(uParam0, iVar0);
		iVar0++;
	}
	func_31(uParam0, (Global_4535626 - 0.5f));
}

void func_30(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_31(var uParam0, float fParam1)
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

float func_32(var uParam0)
{
	return uParam0->f_80;
}

bool func_33(var uParam0, int iParam1)
{
	return func_34(uParam0, iParam1) != -1;
}

int func_34(var uParam0, int iParam1)
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

bool func_35(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_36(int iParam0)
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

bool func_37(int iParam0)
{
	return Global_42602 == iParam0;
}

int func_38(int iParam0, int iParam1)
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58438[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58438[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_40()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59870[0] == iVar0)
		{
			Global_59870[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59870[1] == iVar0)
		{
			Global_59870[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59870[2] == iVar0)
		{
			Global_59870[2] = iVar0;
		}
	}
}

int func_41(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

bool func_42()
{
	func_43();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_43()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_46(Global_112922.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_45(unk_0xE2D3D51028F0428A());
			if (func_44(iVar0) && (!func_37(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_44(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_44(bool bParam0)
{
	return bParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_49()
{
	if (iLocal_49 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_117[0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_117[0]))
			{
				unk_0x50274A7EACA3133A(iLocal_117[0], 0);
				unk_0xB3822DB3D538C8F3(&(iLocal_117[0]));
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_117[1]))
		{
			if (!unk_0xF68107C40359970C(iLocal_117[1]))
			{
				unk_0x50274A7EACA3133A(iLocal_117[1], 0);
				unk_0xB3822DB3D538C8F3(&(iLocal_117[1]));
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_121[0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_121[0]))
			{
				unk_0x50274A7EACA3133A(iLocal_121[0], 0);
				unk_0xB3822DB3D538C8F3(&(iLocal_121[0]));
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_121[1]))
		{
			if (!unk_0xF68107C40359970C(iLocal_121[1]))
			{
				unk_0x50274A7EACA3133A(iLocal_121[1], 0);
				unk_0xB3822DB3D538C8F3(&(iLocal_121[1]));
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_121[2]))
		{
			if (!unk_0xF68107C40359970C(iLocal_121[2]))
			{
				unk_0xC64B6E13A6A7F517(iLocal_121[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(iLocal_121[2], 167.7909f);
				unk_0x50274A7EACA3133A(iLocal_121[2], 0);
				unk_0xB3822DB3D538C8F3(&(iLocal_121[2]));
			}
		}
	}
}

void func_50()
{
	Global_20151 = 0;
	func_51();
}

void func_51()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

void func_52()
{
	if (iLocal_49 == 1)
	{
		if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xC64B6E13A6A7F517(unk_0x9993EF7FDBCDB632(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				unk_0x9F65B3BAFA302A65(unk_0x9993EF7FDBCDB632(), 1084227584);
			}
		}
		unk_0x7A997A0A971D305F(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
		{
			if (unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 8f, 8f, 8f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xC64B6E13A6A7F517(unk_0x9993EF7FDBCDB632(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				unk_0x9F65B3BAFA302A65(unk_0x9993EF7FDBCDB632(), 1084227584);
			}
		}
		unk_0x7A997A0A971D305F(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, 0);
	}
}

void func_53()
{
	while (!func_72())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x6DD7EC85B970FFF8(unk_0x9E2D6C50374FCFA9(), 1, 0);
	func_57(5, bLocal_134);
	func_54();
	func_234();
}

void func_54()
{
	func_55();
}

int func_55()
{
	if (func_56(0))
	{
		return 0;
	}
	if (Global_100019.f_8)
	{
		if (Global_100019.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100019.f_10 > 1)
	{
		return 0;
	}
	Global_100019.f_10++;
	return 1;
}

int func_56(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_57(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_69(iParam0))
	{
		func_68(iParam0, bParam1);
		if (!func_67(51))
		{
			func_63("RE_REWARD", 1, 0, 4000, 10000, func_66(), 0, 138, 0);
			func_62(51);
		}
		if (func_61(iParam0))
		{
			Global_112922.f_24995.f_2 = 3;
		}
		if (func_60(iParam0, bParam1) != 322)
		{
			func_58(func_60(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_112910 = bParam1;
		if (Global_112908 == 0)
		{
			if (((Global_112911 == 1 || Global_112911 == 5) || Global_112911 == 11) || Global_112911 == 25)
			{
				func_73(2);
			}
			else if ((Global_112911 == 26 || Global_112911 == 8) || Global_112911 == 17)
			{
				func_73(7);
			}
			else
			{
				func_73(1);
			}
		}
	}
}

void func_58(int iParam0, var uParam1, var uParam2)
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
		func_19((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112922.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112922.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112922.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112922.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112922.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112922.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_59();
	}
}

void func_59()
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
	Global_112658 = 0;
	Global_112659 = 0;
	Global_112660 = 0;
	Global_112661 = 0;
	Global_112662 = 0;
	Global_112663 = 0;
	Global_112664 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112922.f_10194.f_3853;
	Global_112922.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112922.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112922.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112658++;
					fVar1 = (fVar1 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112659++;
					fVar2 = (fVar2 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112660++;
					fVar3 = (fVar3 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112661++;
					fVar4 = (fVar4 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112662++;
					fVar5 = (fVar5 + (Global_112922.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112663++;
					fVar6 = (fVar6 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112664++;
					fVar7 = (fVar7 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112641 > 0)
	{
		if (Global_112658 == Global_112641)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112642 > 0)
	{
		if (Global_112659 == Global_112642)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112643 > 0)
	{
		if (Global_112660 == Global_112643)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112644 > 0)
	{
		if (Global_112661 == Global_112644)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112645 > 0)
	{
		if (((Global_112662 == Global_112645 || (Global_112645 * 10 / Global_112662) < 41) || Global_112662 > Global_112648) || Global_112662 == Global_112648)
		{
			if (!BitTest(Global_112922.f_10194.f_3856, 14))
			{
				if (Global_112662 == Global_112645)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_112645, 0);
					unk_0xCED9E32812D6C7C7(&(Global_112922.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112646 > 0)
	{
		if (Global_112663 == Global_112646)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112647 > 0)
	{
		if (Global_112664 == Global_112647)
		{
			fVar7 = 5f;
		}
	}
	Global_112922.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112662 > Global_112648 || Global_112662 == Global_112648)
	{
		iVar9 = Global_112648;
	}
	else
	{
		iVar9 = Global_112662;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_112658, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_112641, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_112659, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_112642, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_112660, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_112643, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_112661, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_112644, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_112648, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_112664 + Global_112663), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_112647 + Global_112646), 1);
	Global_112665 = (Global_112658 * 100 / Global_112641);
	Global_112667 = ((Global_112660 + Global_112659) * 100 / (Global_112643 + Global_112642));
	Global_112666 = ((Global_112661 + iVar9) * 100 / (Global_112644 + Global_112648));
	Global_112668 = ((Global_112663 + Global_112664) * 100 / (Global_112646 + Global_112647));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_112922.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_112665, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_112666, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_112667, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_112922.f_10194.f_3853))
	{
		func_38(13, unk_0xF34EE736CF047844(Global_112922.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77858)
		{
			if (func_9() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112656 = 0;
				}
				if (!Global_62696)
				{
					func_55();
				}
			}
		}
	}
}

int func_60(int iParam0, int iParam1)
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

int func_61(int iParam0)
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

void func_62(int iParam0)
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
		unk_0xCED9E32812D6C7C7(&(Global_112922.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_63(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_64(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_64(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112922.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112922.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112922.f_20410.f_145++;
		func_65();
	}
}

void func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112922.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[0])
			{
				Global_112922.f_20410.f_146[0] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[1])
			{
				Global_112922.f_20410.f_146[1] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[2])
			{
				Global_112922.f_20410.f_146[2] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_66()
{
	func_43();
	switch (Global_112922.f_2363.f_539.f_4321)
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

int func_67(int iParam0)
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
		return BitTest(Global_112922.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_68(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112922.f_24995.f_8[iParam0]), iParam1);
}

int func_69(int iParam0)
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

int func_70()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_71(Var0);
	return uVar16;
}

int func_71(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
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

int func_72()
{
	return 1;
}

void func_73(int iParam0)
{
	Global_112908 = iParam0;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_77858)
		{
			iVar0 = Global_42136[iParam0];
		}
		else
		{
			iVar0 = Global_112922.f_7261[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_37962[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_37971[(iParam0 / 32)]), (iParam0 % 32));
				Global_38434[iParam0] = iParam1;
			}
			else if (Global_77858)
			{
				Global_42136[iParam0] = iParam1;
			}
			else
			{
				Global_112922.f_7261[iParam0] = iParam1;
			}
			unk_0xCED9E32812D6C7C7(&(Global_37962[(iParam0 / 32)]), (iParam0 % 32));
			func_76(iParam0);
			if (BitTest(Global_37962[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_75(iParam0);
			}
		}
	}
}

void func_75(int iParam0)
{
	if (!BitTest(Global_38905.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xCED9E32812D6C7C7(&(Global_38905.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38905[Global_38905.f_227] = iParam0;
		Global_38905.f_227++;
	}
}

void func_76(int iParam0)
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
	
	if (!func_96())
	{
		return;
	}
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	Var0 = { func_95(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_81(iParam0, &Var0);
	}
	if (!unk_0xEC32121F2E3875C8(Var0.f_5))
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x987A5F1E1A67E3C0(Var0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1);
	if ((BitTest(Global_37971[(iParam0 / 32)], (iParam0 % 32)) && Global_38434[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0xB0550BC91B0159D6(&(Global_37971[(iParam0 / 32)]), (iParam0 % 32));
		Global_37980[iParam0] = 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38207[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_100032.f_373 == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						Global_100032.f_373 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
					}
				}
				iVar11 = Global_100032.f_373;
				iVar12 = unk_0xA0F62C1038208492(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0xCED9E32812D6C7C7(&(Global_37971[(iParam0 / 32)]), (iParam0 % 32));
					Global_38434[iParam0] = 3;
					unk_0xCED9E32812D6C7C7(&(Global_37962[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xB0550BC91B0159D6(&(Global_38207[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_37971[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_38434[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_112922.f_9085)
		{
			iVar9 = func_78(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_37(14))
		{
			iVar9 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && unk_0xB4C854DD86E40FDA(joaat("ambient_solomon")) == 0)
	{
		if (func_77())
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
		iVar9 = Global_112922.f_7261[iParam0];
	}
	if (Global_38661[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (BitTest(Global_37962[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_37971[(iParam0 / 32)], (iParam0 % 32)) || (Global_37980[iParam0] == 0 && Global_38434[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37961)
		{
		}
		else
		{
			if (!unk_0xEC32121F2E3875C8(Var0.f_5))
			{
				unk_0x5DD86AC785D8E188(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x48053974ED6F63CE(unk_0xC4336736B30C9DF5(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
						iVar15 = unk_0xA0F62C1038208492(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x32DBCEB580393767(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x7E15597AA5F53F9A(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0xB0550BC91B0159D6(&(Global_37962[(iParam0 / 32)]), (iParam0 % 32));
			Global_38661[iParam0] = iVar9;
		}
	}
	if (BitTest(Global_37971[(iParam0 / 32)], (iParam0 % 32)) && Global_38434[iParam0] != 2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_37962[(iParam0 / 32)]), (iParam0 % 32));
		func_75(iParam0);
		if (Global_37980[iParam0] < 2)
		{
			Global_37980[iParam0]++;
		}
	}
}

int func_77()
{
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 0;
	}
	switch (func_42())
	{
		case 0:
			if (Global_112922.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_112922.f_9085.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_112922.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_42();
	if (func_79(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_112922.f_7229[5], 0) || BitTest(Global_112922.f_7229[6], 0))
			{
				return 0;
			}
		}
		if (func_44(bVar0))
		{
			if (BitTest(Global_95007[5], bVar0))
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
			if (bVar0 == 0)
			{
				if (BitTest(Global_112922.f_7229[0], 0))
				{
					return 0;
				}
			}
			if (func_44(bVar0))
			{
				if (BitTest(Global_95007[0], bVar0))
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
			if (bVar0 == 1)
			{
				if (BitTest(Global_112922.f_7229[5], 0))
				{
					return 0;
				}
			}
			if (func_44(bVar0))
			{
				if (BitTest(Global_95007[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_112922.f_7229[6], 0))
				{
					return 0;
				}
			}
			if (func_44(bVar0))
			{
				if (BitTest(Global_95007[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_112922.f_7229[2], 0))
				{
					return 0;
				}
				if (func_44(bVar0))
				{
					if (BitTest(Global_95007[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_112922.f_7229[1], 0))
				{
					return 0;
				}
				if (func_44(bVar0))
				{
					if (BitTest(Global_95007[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_112922.f_7229[3], 0))
				{
					return 0;
				}
			}
			if (func_44(bVar0))
			{
				if (BitTest(Global_95007[3], bVar0))
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

int func_79(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				iVar0 = unk_0x15CAA6D7B11F1A7C(func_80(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1)));
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

var func_80(var uParam0)
{
	return uParam0;
}

void func_81(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_84();
	iVar1 = func_83(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_82(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_112922.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_82(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_112922.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 12f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_82(iParam0))
			{
				if ((unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0) && !Global_112922.f_9085.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_112922.f_7261[iParam0] = 0;
							unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_112922.f_9085.f_99.f_58[4])
				{
					Global_112922.f_7261[iParam0] = 0;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else if (Global_112922.f_9085.f_99.f_58[4])
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("jewelry_heist")) == 0 && unk_0xB4C854DD86E40FDA(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112922.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 18f)
					{
						Global_112922.f_7261[iParam0] = 1;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_82(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_112922.f_7261[iParam0] = 0;
						unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), *uParam1) >= 40f)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_82(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) == 0)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) > 0)
			{
				Global_112922.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0xB4C854DD86E40FDA(Global_90768[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0xB4C854DD86E40FDA(joaat("omega2")) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_82(iParam0) && unk_0xB4C854DD86E40FDA(Global_90768[26 /*34*/].f_6) == 0)
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
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
			if (!func_82(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90768[43 /*34*/].f_6) == 0)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_82(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90768[93 /*34*/].f_6) > 0)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_82(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90768[8 /*34*/].f_6) == 0 && unk_0xB4C854DD86E40FDA(Global_90768[10 /*34*/].f_6) == 0)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_82(iParam0))
			{
				if (unk_0xB4C854DD86E40FDA(Global_90768[47 /*34*/].f_6) == 0)
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0xB4C854DD86E40FDA(Global_90768[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
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
			if (unk_0xB4C854DD86E40FDA(Global_90768[48 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0xB4C854DD86E40FDA(Global_90768[39 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_112922.f_7261[iParam0] = 1;
					unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 1;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_82(iParam0))
			{
				Global_112922.f_7261[iParam0] = 0;
				unk_0x7E15597AA5F53F9A(uParam1->f_5, Global_112922.f_7261[iParam0], 1, 1);
			}
			break;
	}
}

bool func_82(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_95(iParam0) };
	iVar7 = unk_0xA570D693C4A2B421(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_83(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_84()
{
	var uVar0;
	
	func_94(&uVar0, unk_0xAA2844CAD88768B5());
	func_93(&uVar0, unk_0x80F97D7D29800A1A());
	func_92(&uVar0, unk_0x09FC827691DACE59());
	func_87(&uVar0, unk_0xD52BD97E61483713());
	func_86(&uVar0, unk_0x771485043FDC55DE());
	func_85(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_85(var uParam0, int iParam1)
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

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_87(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(*uParam0);
	iVar1 = func_89(*uParam0);
	if (iParam1 < 1 || iParam1 > func_88(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_88(int iParam0, int iParam1)
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

int func_89(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_90(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_90(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_91(int iParam0)
{
	return iParam0 & 15;
}

void func_92(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_93(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

struct<7> func_95(int iParam0)
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 0);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 1);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 3);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
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
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xCED9E32812D6C7C7(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_96()
{
	if ((func_9() == -1 || func_9() == 999) && !func_97() == 0)
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	return Global_31512;
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x320D1840B6DAA1CC();
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		iVar0 = (unk_0x320D1840B6DAA1CC() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x6BABDF7A460158CE(uParam0) != 255)
				{
					unk_0xFBBD8F124403B0F5(uParam0, 255);
				}
			}
			else if (unk_0x6BABDF7A460158CE(uParam0) != 0)
			{
				unk_0xFBBD8F124403B0F5(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x6BABDF7A460158CE(uParam0) != 255)
			{
				unk_0xFBBD8F124403B0F5(uParam0, 255);
			}
		}
	}
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112922.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_100(func_101(iParam0), -1);
					Global_112922.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_112918, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_112918, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_100(func_101(iParam0), -1);
					Global_112922.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_112918, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_112918, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_100(func_101(iParam0), -1);
					Global_112922.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112918, 2);
				}
			}
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_101(int iParam0)
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

void func_102()
{
	if (unk_0x803592456AE579B3(uLocal_110))
	{
		func_48(joaat("rc_wallets_recovered"), 1);
		if (!unk_0xF68107C40359970C(iLocal_117[0]))
		{
			uLocal_193 = func_169(iLocal_117[0], 0, 145);
		}
		func_103(&uLocal_229);
		fLocal_197 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_248());
		unk_0xC1B1E9A034A63A62(0);
		iLocal_47 = 10;
	}
	if (unk_0x2791155FB0769FE5(uLocal_110))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uLocal_110)) > 200f)
		{
			func_160();
		}
	}
}

void func_103(var uParam0)
{
	*uParam0 = -99;
}

void func_104(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_105()
{
	int iVar0;
	
	if (!unk_0x2791155FB0769FE5(uLocal_110))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_106, 3);
		unk_0xCED9E32812D6C7C7(&uLocal_106, 4);
		unk_0xCED9E32812D6C7C7(&uLocal_106, 1);
		if (!bLocal_161)
		{
			if (unk_0x55B23FE400FCEA6B(iLocal_114[0], 0))
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_114[0]))
				{
					Local_107 = { unk_0x9B2F53F9CB82F448(iLocal_114[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				Local_107 = { unk_0x7F65C587E17DEF5D(unk_0x6B62510F212526DC(iLocal_114[0], 1), 1067030938, 1069547520) };
			}
		}
		else if (unk_0xE5965CDF24F93A9F(iLocal_175))
		{
			Local_107 = { unk_0x7F65C587E17DEF5D(unk_0x6B62510F212526DC(iLocal_175, 0), 1067030938, 1069547520) };
		}
		Local_107 = { Local_107.f_0, Local_107.f_1, (Local_107.f_2 + 0.25f) };
		uLocal_110 = unk_0x1CD347D2BD906560(joaat("pickup_money_med_bag"), Local_107, uLocal_106, iLocal_189, 1, joaat("prop_cs_duffel_01"));
		uLocal_192 = func_106(uLocal_110);
		if (iLocal_49 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_111 - 1))
			{
				if (!unk_0xF68107C40359970C(iLocal_114[iVar0]))
				{
					unk_0x006574E87E6F1942(iLocal_114[iVar0], 1, 1);
					unk_0x03A927199A2DFE46(iLocal_114[iVar0]);
					unk_0xA888F8CC04F25CC8(&uLocal_152);
					unk_0xAB7639D658BBCCEE(0, 0, 0);
					unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
					unk_0xC963A45B50851768(uLocal_152);
					unk_0x8ACADA903FCAA42F(iLocal_114[iVar0], uLocal_152);
					unk_0x7461D7C5BA953BC7(&uLocal_152);
					unk_0xABC2CA6F28903308(iLocal_114[iVar0], 1);
				}
				iVar0++;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!unk_0xF68107C40359970C(iLocal_114[0]))
			{
				unk_0xCA2872F050840231(iLocal_114[0]);
				if (!unk_0x645F244ECDDEF6CF(iLocal_114[0]))
				{
					func_50();
					unk_0x4EDE34FBADD967A6(0);
					func_116(&uLocal_232, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_107(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return uVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_108()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_192))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_192);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_193))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_193);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_191))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_191);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_185[0]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_185[0]));
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_185[1]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_185[1]));
	}
}

int func_109()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	else if (unk_0xF68107C40359970C(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	if (!bLocal_161)
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
		else if (unk_0xF68107C40359970C(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
	}
	else
	{
		iLocal_150 = 1;
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_184))
	{
		iLocal_151 = 1;
	}
	else if (unk_0xF68107C40359970C(iLocal_184) || !unk_0xD5C6B5E3B93A5EDC(iLocal_184, 0))
	{
		iLocal_151 = 1;
	}
	if ((iLocal_149 && iLocal_150) || iLocal_151)
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_114[iVar0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_114[iVar0]) || unk_0x55B23FE400FCEA6B(iLocal_114[iVar0], 0))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_114[iVar0], unk_0xE2D3D51028F0428A(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_114[iVar0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_114[iVar0]))
			{
				if (unk_0x177106D5E97D1958(iLocal_114[iVar0]))
				{
					if (unk_0xBA67EB7A53262B5B(iLocal_114[iVar0]) == unk_0xE2D3D51028F0428A())
					{
						unk_0x006574E87E6F1942(iLocal_114[iVar0], 1, 1);
						unk_0x7734082B0EDB0BE0(iLocal_114[iVar0], unk_0xE2D3D51028F0428A(), 250f, -1, 0, 0);
						unk_0xABC2CA6F28903308(iLocal_114[iVar0], 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0xB3822DB3D538C8F3(&(iLocal_114[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_184))
	{
		if (!unk_0xF68107C40359970C(iLocal_184) || unk_0x55B23FE400FCEA6B(iLocal_184, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_184, unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_184))
		{
			if (unk_0x7114C4D8AC9360FE(unk_0xE2D3D51028F0428A(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_184))
	{
		if (!unk_0xF68107C40359970C(iLocal_184))
		{
			if (unk_0x177106D5E97D1958(iLocal_184))
			{
				if (unk_0xBA67EB7A53262B5B(iLocal_184) == unk_0xE2D3D51028F0428A())
				{
					unk_0x006574E87E6F1942(iLocal_184, 1, 1);
					unk_0x7734082B0EDB0BE0(iLocal_184, unk_0xE2D3D51028F0428A(), 250f, -1, 0, 0);
					unk_0xABC2CA6F28903308(iLocal_184, 1);
					unk_0x4EDE34FBADD967A6(0);
					unk_0xB3822DB3D538C8F3(&iLocal_184);
					return 1;
				}
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_175))
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_175, 0) || unk_0x55B23FE400FCEA6B(iLocal_175, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_175, unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0, bool bParam1, bool bParam2)
{
	return func_112(iParam0, !bParam1, bParam2);
}

int func_112(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_107(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_107(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_107(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_113()
{
	if (unk_0x55A0C756C4A8220C(iLocal_175, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_114[0]))
		{
			if (unk_0xF6F5D18EF8EAB859(iLocal_114[0], iLocal_175, 0))
			{
				if (!unk_0xF68107C40359970C(iLocal_114[1]))
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_114[1], iLocal_175, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_114()
{
	if (unk_0xF68107C40359970C(iLocal_114[0]))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_167))
		{
			if (unk_0xE85F749F6D5C809E(iLocal_167))
			{
				unk_0xE6451C2F193342C7(iLocal_167, 1, 1);
			}
			unk_0x4BDA5AFD88C085EB(&iLocal_167);
			func_108();
			func_105();
			iLocal_47 = 9;
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iLocal_114[0], unk_0xE2D3D51028F0428A(), 1))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_167))
		{
			if (unk_0xE85F749F6D5C809E(iLocal_167))
			{
				unk_0xE6451C2F193342C7(iLocal_167, 1, 1);
			}
			unk_0x4BDA5AFD88C085EB(&iLocal_167);
			func_108();
			func_105();
			iLocal_47 = 9;
		}
	}
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0xF439FF1991626CB9(2, 195) - 128);
	iVar1 = (unk_0xF439FF1991626CB9(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_117(sParam2, iParam3, 0);
}

int func_117(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_130();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_129(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_128();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, false);
			if (bParam2)
			{
				func_127();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_126())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_125())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_124();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_123();
		func_118();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_130();
	}
	return 0;
}

void func_118()
{
	if (!func_119())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_119()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_122())
	{
		return 0;
	}
	if (func_120(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_120(int iParam0)
{
	return func_121(iParam0, 20);
}

var func_121(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_122()
{
	return -1;
}

void func_123()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21285 = 1;
}

void func_124()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	unk_0xB0550BC91B0159D6(&Global_7825, 16);
}

int func_125()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_127()
{
	if (func_37(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_42();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_130()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_132()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		func_139();
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_7825, 16);
		}
		Global_19954.f_1 = 1;
		if (func_138(0))
		{
			func_134(0);
		}
	}
	else if (Global_19954.f_1 == 1)
	{
		if (!Global_19954.f_1 == 0)
		{
			Global_19954.f_1 = 3;
		}
	}
}

void func_134(int iParam0)
{
	if (func_137())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_136())
		{
			func_135(1, 1);
		}
		else
		{
			func_135(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_125())
	{
		Global_19954.f_1 = 3;
	}
}

void func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_138(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_136()
{
	return BitTest(Global_1958928, 5);
}

bool func_137()
{
	return BitTest(Global_1958928, 19);
}

int func_138(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_139()
{
	if (Global_19954.f_1 == 9 || Global_19954.f_1 == 10)
	{
		Global_21338 = 0;
		Global_21334 = 1;
	}
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_147(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_125())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_146(1, iParam3, iParam2, 0);
		Global_62702 = 1;
		Global_75030 = 1;
		Global_77856 = 1;
	}
	else
	{
		func_147(0);
		unk_0x45227777D3EBECE5();
		Global_62702 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_146(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_144(unk_0x9E2D6C50374FCFA9())) && !func_142(unk_0x9E2D6C50374FCFA9(), 0)) && !func_141()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_144(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77856 = 0;
	}
}

bool func_141()
{
	return BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_143(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_144(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return 1;
	}
	if (func_145())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_145()
{
	return BitTest(Global_2621446, 3);
}

int func_146(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 13);
	}
}

int func_148()
{
	if (!unk_0xF68107C40359970C(iLocal_114[0]) && !unk_0xF68107C40359970C(iLocal_114[1]))
	{
		if (iLocal_49 == 1)
		{
			if (!iLocal_165)
			{
				if (!unk_0xD132EDDA78FF4A51(iLocal_114[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if (!unk_0xD132EDDA78FF4A51(iLocal_114[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_166 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!iLocal_165)
			{
				if ((!unk_0xD132EDDA78FF4A51(iLocal_114[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iLocal_114[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iLocal_114[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0x7734082B0EDB0BE0(iLocal_114[0], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if ((!unk_0xD132EDDA78FF4A51(iLocal_114[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iLocal_114[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iLocal_114[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					unk_0x7734082B0EDB0BE0(iLocal_114[1], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
					iLocal_166 = 1;
				}
			}
		}
	}
	if (iLocal_165 && iLocal_166)
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x6B62510F212526DC(iLocal_167, 1) };
	Var3 = { unk_0x63A8BF5E6C2BF85C(iLocal_167, 2) };
	unk_0x4BDA5AFD88C085EB(&iLocal_167);
	iLocal_167 = unk_0x0E536D72AB30F4C8(joaat("prop_cs_duffel_01"), Var0, 1, 1, 0);
	unk_0x8CE3D365F064F69E(iLocal_167, Var3, 2, 1);
}

void func_150()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_114[0]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_114[0], 0)) > 200f && unk_0x4D21C9FB671ED18F(iLocal_114[0]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_185[0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_185[0]));
			}
			unk_0xB3822DB3D538C8F3(&(iLocal_114[0]));
			bLocal_147 = true;
		}
	}
	else
	{
		bLocal_147 = true;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_175))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_175, 0)) > 200f && unk_0x4D21C9FB671ED18F(iLocal_175))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_191))
			{
				unk_0xFFD8EB5462B07B59(&uLocal_191);
			}
			unk_0x3D81769BEC61BFF8(&iLocal_175);
			bLocal_148 = true;
		}
	}
	else
	{
		bLocal_148 = true;
	}
	if (bLocal_161)
	{
		if (bLocal_148)
		{
			if (func_168())
			{
				iLocal_47 = 13;
			}
			else
			{
				unk_0x4EDE34FBADD967A6(0);
				iLocal_46 = 2;
			}
		}
	}
	else if (bLocal_147)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_168())
		{
			iLocal_47 = 13;
		}
		else
		{
			iLocal_46 = 2;
		}
	}
}

void func_151()
{
	if (!unk_0x55B23FE400FCEA6B(iLocal_175, 0))
	{
		if (unk_0x0CF63873D754B965(iLocal_175) < 800)
		{
			unk_0xF160248D9083ED0C(iLocal_175, 0, 0);
			unk_0x2EE80CD0EAEB9B5B(iLocal_175, 10f);
		}
	}
}

void func_152()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_114[iVar0]))
		{
			if (unk_0xF68107C40359970C(iLocal_114[iVar0]))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_185[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_185[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_153()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_49 == 1)
	{
		if (unk_0xF68107C40359970C(iLocal_114[0]) && unk_0xF68107C40359970C(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (unk_0xF68107C40359970C(iLocal_114[0]) && unk_0xF68107C40359970C(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_114)
	{
		if (unk_0xF68107C40359970C(iLocal_114[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_185[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_185[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
	{
		if (!bLocal_140)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_111 - 1))
			{
				if (!unk_0xF68107C40359970C(iLocal_114[iVar1]))
				{
					unk_0xC1A74225341AA9FB(iLocal_114[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
				}
				iVar1++;
			}
			bLocal_140 = true;
			if (unk_0xE85F749F6D5C809E(iLocal_167))
			{
				iLocal_47 = 5;
			}
		}
	}
	if (!iLocal_154 && !bLocal_140)
	{
		unk_0x1CF3F44FC2EB9F99("RE51A_SHOP");
		func_50();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_49 == 1)
		{
			if (func_116(&uLocal_232, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (func_116(&uLocal_232, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
	}
	if ((iLocal_154 && !iLocal_155) && !bLocal_140)
	{
		if (!func_132())
		{
			if (func_42() == 0)
			{
				func_116(&uLocal_232, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_42() == 1)
			{
				func_116(&uLocal_232, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_42() == 2)
			{
				func_116(&uLocal_232, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_155 = 1;
		}
	}
	if (!bLocal_140)
	{
		if (!func_132())
		{
			if (iLocal_155 && !iLocal_156)
			{
				if (iLocal_49 == 1)
				{
					if (func_171(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
				else if (iLocal_49 == 2)
				{
					if (func_171(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
			}
		}
		if (iLocal_49 == 1)
		{
			if (!func_132())
			{
				if (!iLocal_157)
				{
					if (iLocal_49 == 1)
					{
						func_116(&uLocal_232, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_49 == 2)
					{
						func_116(&uLocal_232, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_157 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (unk_0x83666F9FB8FEBD4B() > 4000)
			{
				if (!iLocal_157)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_167))
					{
						if (!unk_0xF68107C40359970C(iLocal_117[0]))
						{
							iLocal_157 = 1;
						}
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_167) && !unk_0xF68107C40359970C(iLocal_114[0]))
			{
				if (!iLocal_178)
				{
					iLocal_178 = 1;
				}
			}
		}
		if (!iLocal_138)
		{
			if (iLocal_49 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 14100)
				{
					unk_0x4BDA5AFD88C085EB(&(uLocal_168[0]));
					unk_0x4BDA5AFD88C085EB(&(uLocal_168[1]));
					if (unk_0x55A0C756C4A8220C(iLocal_175, 0))
					{
						if (!unk_0xF68107C40359970C(iLocal_114[0]))
						{
							unk_0x03A927199A2DFE46(iLocal_114[0]);
							unk_0xA888F8CC04F25CC8(&uLocal_152);
							unk_0xC89EA639A6F338A6(0);
							unk_0xB486640392EC50BB(0, iLocal_175, -1, 0, 2f, 1, 0);
							unk_0xC963A45B50851768(uLocal_152);
							unk_0x8ACADA903FCAA42F(iLocal_114[0], uLocal_152);
							unk_0x7461D7C5BA953BC7(&uLocal_152);
						}
						if (!unk_0xF68107C40359970C(iLocal_114[1]))
						{
							unk_0xA8685678DDA27FC3(iLocal_114[1], joaat("MotionState_Run"), 1, 0, 0);
							unk_0xA888F8CC04F25CC8(&uLocal_152);
							unk_0xC89EA639A6F338A6(0);
							unk_0xB486640392EC50BB(0, iLocal_175, -1, 1, 2f, 1, 0);
							unk_0xC963A45B50851768(uLocal_152);
							unk_0x8ACADA903FCAA42F(iLocal_114[1], uLocal_152);
							unk_0x7461D7C5BA953BC7(&uLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
					else
					{
						if (!unk_0xF68107C40359970C(iLocal_114[0]))
						{
							unk_0x006574E87E6F1942(iLocal_114[0], 1, 1);
							unk_0x51BB443B279E4104(iLocal_114[0]);
							unk_0xA888F8CC04F25CC8(&uLocal_152);
							unk_0xC89EA639A6F338A6(0);
							unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
							unk_0xC963A45B50851768(uLocal_152);
							unk_0x8ACADA903FCAA42F(iLocal_114[0], uLocal_152);
							unk_0x7461D7C5BA953BC7(&uLocal_152);
						}
						if (!unk_0xF68107C40359970C(iLocal_114[1]))
						{
							unk_0x006574E87E6F1942(iLocal_114[1], 1, 1);
							unk_0x51BB443B279E4104(iLocal_114[1]);
							unk_0xA888F8CC04F25CC8(&uLocal_152);
							unk_0xC89EA639A6F338A6(0);
							unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
							unk_0xC963A45B50851768(uLocal_152);
							unk_0x8ACADA903FCAA42F(iLocal_114[1], uLocal_152);
							unk_0x7461D7C5BA953BC7(&uLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
				}
			}
			else if (iLocal_49 == 2)
			{
				if (unk_0x54DE1614490C2A83(uLocal_216) > 0.453f)
				{
					if (!unk_0xF68107C40359970C(iLocal_117[0]))
					{
						unk_0x50274A7EACA3133A(iLocal_117[0], 1);
						unk_0xA888F8CC04F25CC8(&uLocal_152);
						unk_0x49D97B076E3590AC(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
						unk_0xC963A45B50851768(uLocal_152);
						unk_0x8ACADA903FCAA42F(iLocal_117[0], uLocal_152);
						unk_0x7461D7C5BA953BC7(&uLocal_152);
						unk_0xABC2CA6F28903308(iLocal_117[0], 1);
					}
					if (!unk_0xF68107C40359970C(iLocal_114[0]))
					{
						unk_0x03A927199A2DFE46(iLocal_114[0]);
						unk_0xDC6110E0F8FF9DA0(iLocal_114[0], 128, 1);
						unk_0xDC6110E0F8FF9DA0(iLocal_114[0], 1, 1);
						unk_0xBC12D08EE7559CCD(iLocal_114[0], 17, 1);
						unk_0xCAC4D1050F2E6899(iLocal_114[0], 1.6f);
						unk_0x006574E87E6F1942(iLocal_114[0], 1, 1);
						unk_0xA888F8CC04F25CC8(&uLocal_152);
						unk_0x49D97B076E3590AC(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, 0, 0, 0);
						unk_0x4218764824F31173(0, "re_shoprobbery", 0, 0, 16);
						unk_0xC89EA639A6F338A6(0);
						unk_0xC963A45B50851768(uLocal_152);
						unk_0x8ACADA903FCAA42F(iLocal_114[0], uLocal_152);
						unk_0x7461D7C5BA953BC7(&uLocal_152);
						unk_0xABC2CA6F28903308(iLocal_114[0], 1);
						unk_0x5AE11BC36633DE4E(0);
					}
					if (!unk_0xF68107C40359970C(iLocal_114[1]))
					{
						unk_0xDC6110E0F8FF9DA0(iLocal_114[1], 128, 1);
						unk_0xDC6110E0F8FF9DA0(iLocal_114[1], 1, 1);
						unk_0xBC12D08EE7559CCD(iLocal_114[1], 17, 1);
						unk_0xCAC4D1050F2E6899(iLocal_114[1], 1.6f);
						unk_0x006574E87E6F1942(iLocal_114[1], 1, 1);
						unk_0xA888F8CC04F25CC8(&uLocal_152);
						unk_0xC89EA639A6F338A6(0);
						unk_0x4218764824F31173(0, "re_shoprobbery2", 0, 0, 17);
						unk_0xC963A45B50851768(uLocal_152);
						unk_0x8ACADA903FCAA42F(iLocal_114[1], uLocal_152);
						unk_0x7461D7C5BA953BC7(&uLocal_152);
						unk_0xABC2CA6F28903308(iLocal_114[1], 1);
					}
					iLocal_47 = 2;
					iLocal_138 = 1;
				}
			}
			unk_0x8576657A629C4B0A(0f);
		}
	}
}

void func_154()
{
	switch (iLocal_227)
	{
		case 0:
			func_140(1, 1, 1, 0, 0, 0, 0);
			unk_0xF96094A43D443C41(func_155(unk_0x9E2D6C50374FCFA9()), 10f, 0);
			uLocal_226 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
			unk_0xDD786B89B15AA63F(uLocal_226, 1);
			unk_0x7B8CE3A05613F41C(uLocal_226, uLocal_216, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_49 == 1)
			{
				unk_0x8D3DA8896D24C6EA("Hair_room");
			}
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			iLocal_228 = unk_0x320D1840B6DAA1CC() + 3500;
			iLocal_227++;
			break;
		
		case 1:
			if (iLocal_228 < unk_0x320D1840B6DAA1CC())
			{
				if (iLocal_49 == 1)
				{
					unk_0x94953C3FF0664F66(115f);
					unk_0x080C97B891E2F3AA(-9.1222f, 1065353216);
				}
				else if (iLocal_49 == 2)
				{
					unk_0x94953C3FF0664F66(44.5236f);
					unk_0x080C97B891E2F3AA(-18.1582f, 1065353216);
				}
				unk_0xEE3A19A84A10F8B9();
				unk_0xDD786B89B15AA63F(uLocal_226, 0);
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				func_52();
				func_140(0, 1, 1, 0, 0, 0, 0);
				iLocal_227++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_155(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_156()
{
	int iVar0;
	
	if (!iLocal_136 && func_159(1, 0, 1))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_193))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_193);
		}
		func_140(1, 1, 1, 0, 0, 0, 0);
		unk_0x3410421C60BF7143(1);
		unk_0x72DB022C36FCEA24(0);
		unk_0xB60709BD0E075903(0);
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 256);
		unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
		if (iLocal_49 == 1)
		{
			if (!iLocal_177)
			{
				uLocal_216 = unk_0x8F5F4164BF5FB513(Local_201, Local_207, 2);
				unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_216, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 1, 0);
				if (((!unk_0xF68107C40359970C(iLocal_114[0]) && !unk_0xF68107C40359970C(iLocal_114[1])) && !unk_0xF68107C40359970C(iLocal_117[0])) && unk_0xE5965CDF24F93A9F(iLocal_167))
				{
					unk_0x950B26F4C891073F(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x950B26F4C891073F(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x950B26F4C891073F(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					unk_0xAA8557AFE4A4A184(iLocal_167, uLocal_216, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				unk_0xE0F81EAEB49D39EF(uLocal_216, 0.06f);
				iLocal_177 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!unk_0xF68107C40359970C(iLocal_117[0]))
			{
				unk_0x03A927199A2DFE46(iLocal_117[0]);
				unk_0x49D97B076E3590AC(iLocal_117[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, 0, 0, 0);
			}
			unk_0xCA60DF1D01DBD440(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			uLocal_216 = unk_0x8F5F4164BF5FB513(Local_201, Local_207, 2);
			if (((!unk_0xF68107C40359970C(iLocal_114[0]) && !unk_0xF68107C40359970C(iLocal_114[1])) && !unk_0xF68107C40359970C(iLocal_117[0])) && unk_0xE5965CDF24F93A9F(iLocal_167))
			{
				unk_0x950B26F4C891073F(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x950B26F4C891073F(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (unk_0xE5965CDF24F93A9F(uLocal_168[0]) && unk_0xE5965CDF24F93A9F(uLocal_168[1]))
				{
					unk_0x9A97DC6DBC7B223D(uLocal_168[0], iLocal_117[0], unk_0xB897FCFCFA664B38(iLocal_117[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					unk_0x9A97DC6DBC7B223D(uLocal_168[1], iLocal_117[0], unk_0xB897FCFCFA664B38(iLocal_117[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			unk_0xE0F81EAEB49D39EF(uLocal_216, 0.05f);
			Local_201 = { -1199.369f, -776.1991f, 16.3235f };
			Local_207 = { 0f, 0f, -60f };
			uLocal_216 = unk_0x8F5F4164BF5FB513(Local_201, Local_207, 2);
			if (!unk_0xF68107C40359970C(iLocal_114[1]))
			{
				unk_0x950B26F4C891073F(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			unk_0xE0F81EAEB49D39EF(uLocal_216, 0.06f);
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 305.3806f);
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			unk_0xA888F8CC04F25CC8(&uLocal_152);
			unk_0x49D97B076E3590AC(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			unk_0x49D97B076E3590AC(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, 0, 0, 0);
			unk_0xC963A45B50851768(uLocal_152);
			unk_0x8ACADA903FCAA42F(unk_0xE2D3D51028F0428A(), uLocal_152);
			unk_0x7461D7C5BA953BC7(&uLocal_152);
			unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
		}
		iLocal_136 = 1;
	}
	if (!iLocal_176)
	{
		func_157();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_185[iVar0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_114[iVar0]))
			{
				uLocal_185[iVar0] = func_169(iLocal_114[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_49 == 1 && unk_0xE5965CDF24F93A9F(iLocal_175)) || iLocal_49 == 2)
	{
		unk_0xC1B1E9A034A63A62(0);
		iLocal_47 = 1;
	}
}

void func_157()
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_179)
	{
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			iLocal_179 = 1;
		}
		else
		{
			unk_0xD69A0C3662175E68(iVar0);
		}
	}
	else if (unk_0x0152AA00FA3130F1(iVar0))
	{
		if (func_158())
		{
			if (unk_0xD132EDDA78FF4A51(uLocal_171, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, 1, 0))
			{
				Local_172 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				Local_172 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			Local_172 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_175 = unk_0xBA715A7BEBA5A1F9(iVar0, Local_172, 31.9252f, 1, 1, 0);
		unk_0x006574E87E6F1942(iLocal_175, 1, 1);
		unk_0x9F65B3BAFA302A65(iLocal_175, 1084227584);
		unk_0x371D594409A68A18(iLocal_175, 1, 1, 0);
		iLocal_184 = unk_0x487C17B41938052C(iLocal_175, 26, joaat("g_m_y_korean_01"), -1, 1, 1);
		unk_0xD6A76BAB45A4B460(iLocal_184, 134, 1);
		unk_0x50274A7EACA3133A(iLocal_184, 1);
		unk_0xFF4BEB6CFF55A013(iLocal_184, iLocal_190);
		unk_0xBC12D08EE7559CCD(iLocal_184, 8, 0);
		unk_0x395228F7A14C6543(iLocal_184, 0);
		unk_0x348A212511C78DBF(iLocal_184, 13);
		unk_0x9521FB98DB6DDF50(iLocal_184, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x06AF73D7E3DF7782(iLocal_184, 1, 0);
		unk_0xD6A76BAB45A4B460(iLocal_184, 42, 1);
		iLocal_176 = 1;
	}
}

int func_158()
{
	var uVar0;
	
	uVar0 = unk_0x9993EF7FDBCDB632();
	if (unk_0x55A0C756C4A8220C(uVar0, 0))
	{
		if (unk_0x8F41785F110B0DA0(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, 0, 1, 0))
		{
			uLocal_171 = iVar0;
			if (!unk_0xA6A089369417736E(uLocal_171))
			{
				unk_0x2D58A6131679D82C(uLocal_171, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x410D46B709324B0F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (bParam0)
		{
			if (unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A())
				{
					return 0;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x90544F2E01A178CD(iVar0) < 0.95f || unk_0x90544F2E01A178CD(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

void func_160()
{
	func_234();
}

int func_161(int iParam0)
{
	if (func_162())
	{
		Global_112912 = 1;
		Global_112909 = unk_0x320D1840B6DAA1CC();
		if (func_61(Global_112911))
		{
			func_99(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_61(Global_112911))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

int func_162()
{
	switch (func_163(&Global_31571, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_163(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97458.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_167(0))
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_42602 = iParam2;
		Global_42564 = *uParam0;
		Global_42565 = iParam4;
		Global_42563 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42563 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42563)
			{
				if (Global_42569[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42564 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_165(iParam2))
		{
			return 0;
		}
		if (Global_42563 == 8)
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		Global_42569[Global_42563 /*4*/] = Global_42566;
		Global_42569[Global_42563 /*4*/].f_1 = iParam1;
		Global_42569[Global_42563 /*4*/].f_2 = iParam2;
		Global_42569[Global_42563 /*4*/].f_3 = 0;
		Global_42563++;
		if (iParam4 != 0)
		{
			func_164(uParam0, iParam4);
		}
	}
	return 2;
}

void func_164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42563 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42563)
	{
		if (Global_42569[iVar0 /*4*/] == *uParam0)
		{
			Global_42569[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_165(int iParam0)
{
	return func_166(iParam0, Global_42602);
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0)
{
	if (Global_42602 == 15)
	{
		return 0;
	}
	if (func_165(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_168()
{
	if (iLocal_49 == 1)
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_169(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_112(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_170()
{
	int iVar0;
	
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, 0, 1, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_114[0]) && !unk_0xF68107C40359970C(iLocal_114[1]))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_114[0], unk_0xE2D3D51028F0428A(), 1) || unk_0x0747E45CFF1F74AA(iLocal_114[1], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
			if (unk_0x7E006F2E24F03BB4(iLocal_114[0], unk_0xE2D3D51028F0428A()) || unk_0x7E006F2E24F03BB4(iLocal_114[1], unk_0xE2D3D51028F0428A()))
			{
				if (((unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_114[0]) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_114[0])) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_114[1])) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_114[1]))
				{
					if (iLocal_126 == -1)
					{
						iLocal_126 = unk_0x320D1840B6DAA1CC();
					}
				}
				else
				{
					iLocal_126 = -1;
				}
				if (iLocal_126 != -1 && unk_0x320D1840B6DAA1CC() > iLocal_126 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x8FE34BF4165F5104(-1, Local_194 - Vector(20f, 20f, 20f), Local_194 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (unk_0x55B23FE400FCEA6B(iLocal_114[0], 0) || unk_0x55B23FE400FCEA6B(iLocal_114[1], 0))
	{
		return 1;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_168())
	{
		return 1;
	}
	if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) && func_168())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(iLocal_114[0]) && !unk_0xF68107C40359970C(iLocal_114[1]))
	{
		if (((unk_0x955815B1A675A225(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(iLocal_114[1], 1) - Vector(12f, 12f, 12f), unk_0x6B62510F212526DC(iLocal_114[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !unk_0x807D601FA146717A(unk_0xE2D3D51028F0428A())) || unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_114[0], 1), 3f, 1)) || unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_114[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_117)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_117[iVar0]))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_117[iVar0], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_121[iVar0]))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_121[iVar0], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 1;
	Global_22278 = 0;
	Global_22282 = 0;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_117(sParam2, iParam4, 0);
}

int func_172()
{
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, 0, 1, 0))
	{
		unk_0x7653D561C9574763(0, 22, 1);
		unk_0xCAC4D1050F2E6899(unk_0xE2D3D51028F0428A(), 1f);
		unk_0xA091C233F9D0AB04(unk_0xE2D3D51028F0428A(), 0, 1, 0);
		return 1;
	}
	return 0;
}

void func_173()
{
	if (!unk_0xF68107C40359970C(iLocal_117[1]))
	{
		if (unk_0xECF091D7E67FF7F2(iLocal_117[1]))
		{
			func_174(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_174(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		unk_0x35083F820751423C(iLocal_117[1], 26, 0, 0);
	}
	if (!unk_0xF68107C40359970C(iLocal_121[1]))
	{
		func_174(iLocal_121[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		unk_0x35083F820751423C(iLocal_121[1], 3, 0, 0);
	}
}

void func_174(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(uParam0, sParam1, sParam2, func_175(iParam3), 0);
}

int func_175(int iParam0)
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

void func_176()
{
	int iVar0;
	
	unk_0x3B8C20EF19A49C3E(0);
	unk_0xD642E010A287ADFD("ROBBERS", &iLocal_190);
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		iLocal_114[iVar0] = unk_0xA8D58C3AADA2C41C(26, iLocal_222, Local_55[iVar0 /*3*/], fLocal_62[iVar0], 1, 1);
		unk_0x50274A7EACA3133A(iLocal_114[iVar0], 1);
		unk_0xFF4BEB6CFF55A013(iLocal_114[iVar0], iLocal_190);
		unk_0xBC12D08EE7559CCD(iLocal_114[iVar0], 8, 0);
		unk_0x395228F7A14C6543(iLocal_114[iVar0], 0);
		unk_0x348A212511C78DBF(iLocal_114[iVar0], 13);
		unk_0x9521FB98DB6DDF50(iLocal_114[iVar0], joaat("weapon_pistol"), -1, 1, 1);
		unk_0x06AF73D7E3DF7782(iLocal_114[iVar0], 1, 0);
		unk_0xD6A76BAB45A4B460(iLocal_114[iVar0], 42, 1);
		unk_0xD6A76BAB45A4B460(iLocal_114[iVar0], 269, 1);
		unk_0xD6A76BAB45A4B460(iLocal_114[iVar0], 188, 1);
		unk_0x3F990964E4A5669A(iLocal_114[iVar0], 0);
		unk_0xDC6110E0F8FF9DA0(iLocal_114[iVar0], 128, 1);
		unk_0xDC6110E0F8FF9DA0(iLocal_114[iVar0], 8, 1);
		iVar0++;
	}
	unk_0xD8B630F464FE1D6D(iLocal_114[0], "pedRobber[0]");
	unk_0xD8B630F464FE1D6D(iLocal_114[1], "pedRobber[1]");
	unk_0x9972EFADA7A2A47D(5, iLocal_190, joaat("player"));
	unk_0x9972EFADA7A2A47D(5, joaat("player"), iLocal_190);
	unk_0x9972EFADA7A2A47D(5, iLocal_190, joaat("COP"));
	unk_0x9972EFADA7A2A47D(5, joaat("COP"), iLocal_190);
	if (func_42() == 0)
	{
		func_181(&uLocal_232, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
	}
	else if (func_42() == 1)
	{
		func_181(&uLocal_232, 0, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
	}
	else if (func_42() == 2)
	{
		func_181(&uLocal_232, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
	}
	iLocal_167 = unk_0x0E536D72AB30F4C8(iLocal_188, Local_97, 1, 1, 0);
	if (iLocal_49 == 1)
	{
		unk_0x2915D98110F23A29(Local_128 - Vector(20f, 20f, 20f), Local_128 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x7CD708DEB04F8474(joaat("baller"), 1);
		uLocal_168[0] = unk_0x0E536D72AB30F4C8(joaat("prop_anim_cash_pile_01"), Local_97, 1, 1, 0);
		uLocal_168[1] = unk_0x0E536D72AB30F4C8(joaat("prop_anim_cash_pile_01"), Local_97 - Vector(0.1f, 0f, 0f), 1, 1, 0);
		unk_0xEEBC95A38CBDED42(iLocal_114[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		unk_0xEEBC95A38CBDED42(iLocal_114[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_201 = { -821.565f, -186.467f, 36.6f };
		Local_207 = { 0f, 0f, -59.96f };
		uLocal_216 = unk_0x8F5F4164BF5FB513(Local_201, Local_207, 2);
		unk_0xFE1CD80C2F7CBCFB(uLocal_216, 1);
		unk_0x950B26F4C891073F(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0xAA8557AFE4A4A184(iLocal_167, uLocal_216, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			iLocal_117[iVar0] = unk_0xA8D58C3AADA2C41C(26, iLocal_219, Local_65[iVar0 /*3*/], fLocal_75[iVar0], 1, 1);
			unk_0xBC12D08EE7559CCD(iLocal_117[iVar0], 17, 1);
			unk_0x50274A7EACA3133A(iLocal_117[iVar0], 1);
			unk_0xA7266A50941DBAEA(iLocal_117[iVar0], 0);
			unk_0xD6A76BAB45A4B460(iLocal_117[iVar0], 269, 1);
			iVar0++;
		}
		unk_0xD8B630F464FE1D6D(iLocal_117[0], "pedWorker[0]");
		unk_0xD8B630F464FE1D6D(iLocal_117[1], "pedWorker[1]");
		unk_0xD8B630F464FE1D6D(iLocal_117[2], "pedWorker[2]");
		iLocal_121[0] = unk_0xA8D58C3AADA2C41C(26, iLocal_220, Local_79[0 /*3*/], fLocal_92[0], 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_121[0], 17, 1);
		unk_0x50274A7EACA3133A(iLocal_121[0], 1);
		unk_0xA7266A50941DBAEA(iLocal_121[0], 0);
		unk_0xD6A76BAB45A4B460(iLocal_121[0], 269, 1);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_121[iVar0] = unk_0xA8D58C3AADA2C41C(26, iLocal_221, Local_79[iVar0 /*3*/], fLocal_92[iVar0], 1, 1);
			unk_0xBC12D08EE7559CCD(iLocal_121[iVar0], 17, 1);
			unk_0x50274A7EACA3133A(iLocal_121[iVar0], 1);
			unk_0xA7266A50941DBAEA(iLocal_121[iVar0], 0);
			unk_0xD6A76BAB45A4B460(iLocal_121[iVar0], 269, 1);
			iVar0++;
		}
		unk_0xD8B630F464FE1D6D(iLocal_121[0], "pedShopper[0]");
		unk_0xD8B630F464FE1D6D(iLocal_121[1], "pedShopper[1]");
		unk_0xD8B630F464FE1D6D(iLocal_121[2], "pedShopper[2]");
		unk_0xE3752B10DC995E95(iLocal_117[0], 0, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[0], 2, 1, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_117[0], 3, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[0], 4, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[0], 5, 0, 0, 0);
		unk_0x950B26F4C891073F(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0xEEBC95A38CBDED42(iLocal_117[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_181(&uLocal_232, 5, iLocal_117[0], "REROBShopworker", 0, 1);
		unk_0xE3752B10DC995E95(iLocal_117[1], 0, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[1], 2, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[1], 3, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[1], 4, 1, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_117[1], 5, 0, 0, 0);
		unk_0x402A537158A551BD(iLocal_117[1], -1);
		unk_0xABC2CA6F28903308(iLocal_117[1], 1);
		unk_0xE3752B10DC995E95(iLocal_117[2], 0, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[2], 2, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_117[2], 3, 0, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_117[2], 4, 1, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_117[2], 5, 0, 0, 0);
		unk_0x402A537158A551BD(iLocal_117[2], -1);
		unk_0xABC2CA6F28903308(iLocal_117[2], 1);
		uLocal_216 = unk_0x8F5F4164BF5FB513(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		unk_0xFE1CD80C2F7CBCFB(uLocal_216, 1);
		unk_0xE3752B10DC995E95(iLocal_121[0], 0, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[0], 2, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_121[0], 3, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[0], 4, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[0], 8, 0, 0, 0);
		unk_0x950B26F4C891073F(iLocal_121[0], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xABC2CA6F28903308(iLocal_121[0], 1);
		uLocal_216 = unk_0x8F5F4164BF5FB513(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		unk_0xFE1CD80C2F7CBCFB(uLocal_216, 1);
		unk_0xE3752B10DC995E95(iLocal_121[1], 0, 0, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_121[1], 2, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[1], 3, 1, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[1], 4, 1, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[1], 8, 0, 0, 0);
		unk_0x950B26F4C891073F(iLocal_121[1], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xABC2CA6F28903308(iLocal_121[1], 1);
		uLocal_216 = unk_0x8F5F4164BF5FB513(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		unk_0xFE1CD80C2F7CBCFB(uLocal_216, 1);
		unk_0xE3752B10DC995E95(iLocal_121[2], 0, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_121[2], 2, 0, 2, 0);
		unk_0xE3752B10DC995E95(iLocal_121[2], 3, 0, 1, 0);
		unk_0xE3752B10DC995E95(iLocal_121[2], 4, 1, 0, 0);
		unk_0xE3752B10DC995E95(iLocal_121[2], 8, 0, 0, 0);
		unk_0x950B26F4C891073F(iLocal_121[2], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xABC2CA6F28903308(iLocal_121[2], 1);
		unk_0x636B3584208A6D73(iLocal_114[0], iLocal_117[0], -1, 0);
		unk_0x286ADDBE501FF4C2(-871f, -246f, 0f, -798f, -163f, 50f, 0, 1);
		unk_0xB5549EA4FCF75870("Hairdresser1");
		func_180(0, 1);
		func_179(0);
		unk_0x4EDE34FBADD967A6(500);
		func_177(0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		unk_0x2915D98110F23A29(Local_131 - Vector(20f, 20f, 20f), Local_131 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x8CE3D365F064F69E(iLocal_167, Local_100, 2, 1);
		iLocal_117[0] = unk_0xA8D58C3AADA2C41C(26, iLocal_219, Local_65[0 /*3*/], fLocal_75[0], 1, 1);
		unk_0xD8B630F464FE1D6D(iLocal_117[0], "pedWorker[0]");
		unk_0xEEBC95A38CBDED42(iLocal_117[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_181(&uLocal_232, 6, iLocal_117[0], "REROBShopworker2", 0, 1);
		iLocal_117[1] = unk_0xA8D58C3AADA2C41C(26, iLocal_218, Local_65[1 /*3*/], fLocal_75[1], 1, 1);
		unk_0xD8B630F464FE1D6D(iLocal_117[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			unk_0xBC12D08EE7559CCD(iLocal_117[iVar0], 17, 1);
			unk_0x50274A7EACA3133A(iLocal_117[iVar0], 1);
			unk_0xA7266A50941DBAEA(iLocal_117[iVar0], 0);
			unk_0xD6A76BAB45A4B460(iLocal_117[iVar0], 269, 1);
			iVar0++;
		}
		iLocal_121[0] = unk_0xA8D58C3AADA2C41C(26, iLocal_220, Local_79[0 /*3*/], fLocal_92[0], 1, 1);
		unk_0xD8B630F464FE1D6D(iLocal_121[0], "pedShopper[0]");
		iLocal_121[1] = unk_0xA8D58C3AADA2C41C(26, iLocal_221, Local_79[1 /*3*/], fLocal_92[1], 1, 1);
		unk_0xD8B630F464FE1D6D(iLocal_121[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			unk_0xBC12D08EE7559CCD(iLocal_121[iVar0], 17, 1);
			unk_0x50274A7EACA3133A(iLocal_121[iVar0], 1);
			unk_0xA7266A50941DBAEA(iLocal_121[iVar0], 0);
			unk_0xD6A76BAB45A4B460(iLocal_121[iVar0], 269, 1);
			iVar0++;
		}
		unk_0x49D97B076E3590AC(iLocal_117[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xABC2CA6F28903308(iLocal_117[0], 1);
		unk_0x49D97B076E3590AC(iLocal_117[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xABC2CA6F28903308(iLocal_117[1], 1);
		unk_0x402A537158A551BD(iLocal_121[0], -1);
		unk_0xABC2CA6F28903308(iLocal_121[0], 1);
		unk_0x49D97B076E3590AC(iLocal_121[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		unk_0xABC2CA6F28903308(iLocal_121[1], 1);
		Local_201 = { -1192.01f, -768.929f, 16.358f };
		Local_207 = { 0f, 0f, -59.5f };
		uLocal_216 = unk_0x8F5F4164BF5FB513(Local_201, Local_207, 2);
		unk_0xFE1CD80C2F7CBCFB(uLocal_216, 1);
		unk_0x950B26F4C891073F(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x950B26F4C891073F(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x49D97B076E3590AC(iLocal_114[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, 0, 0, 0);
		func_180(14, 1);
		func_179(14);
		unk_0x4EDE34FBADD967A6(500);
		func_177(14, 0, 0);
	}
	func_181(&uLocal_232, 3, iLocal_114[0], "REROBRobber1", 0, 1);
	func_181(&uLocal_232, 4, iLocal_114[1], "REROBRobber2", 0, 1);
	unk_0xF1A23B343DFEDFD0(joaat("a_f_y_bevhills_02"));
	unk_0xF1A23B343DFEDFD0(joaat("a_m_y_bevhills_02"));
	unk_0xF1A23B343DFEDFD0(joaat("a_m_y_hipster_01"));
	unk_0xF1A23B343DFEDFD0(joaat("a_f_y_hipster_04"));
	unk_0xF1A23B343DFEDFD0(joaat("g_m_y_korean_01"));
}

void func_177(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9315DBF7D972F07A())
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
	iVar1 = func_178(iParam0, 0);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
	iVar1 = func_178(iParam0, 1);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
}

int func_178(int iParam0, int iParam1)
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

void func_179(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_39(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

void func_182()
{
	if (!iLocal_135)
	{
		iLocal_153 = unk_0xA0F62C1038208492(Local_55[0 /*3*/]);
		unk_0x62EB051F5ED6DD41(iLocal_153);
		iLocal_135 = 1;
	}
}

void func_183()
{
	unk_0xD69A0C3662175E68(iLocal_219);
	unk_0xD69A0C3662175E68(iLocal_220);
	unk_0xD69A0C3662175E68(iLocal_221);
	unk_0xD69A0C3662175E68(iLocal_222);
	unk_0xD69A0C3662175E68(joaat("prop_anim_cash_pile_01"));
	unk_0xD69A0C3662175E68(joaat("prop_cs_duffel_01"));
	unk_0x70F260358D1A42C4("re_shoprobbery");
	unk_0x70F260358D1A42C4("re_shoprobbery2");
	unk_0x8FB472886552D737("random@robbery");
	unk_0x8FB472886552D737("random@shop_robbery");
	unk_0x63B063064DC08617("RE51A_SHOP");
	if ((((((((((unk_0x0152AA00FA3130F1(iLocal_219) && unk_0x0152AA00FA3130F1(iLocal_220)) && unk_0x0152AA00FA3130F1(iLocal_221)) && unk_0x0152AA00FA3130F1(iLocal_222)) && unk_0x0152AA00FA3130F1(joaat("prop_anim_cash_pile_01"))) && unk_0x0152AA00FA3130F1(joaat("prop_cs_duffel_01"))) && unk_0xBD3CEA9CD36E271E("re_shoprobbery")) && unk_0xBD3CEA9CD36E271E("re_shoprobbery2")) && unk_0x6F940C2636C076AD("random@robbery")) && unk_0x6F940C2636C076AD("random@shop_robbery")) && unk_0x63B063064DC08617("RE51A_SHOP"))
	{
		iLocal_53 = 1;
	}
	else
	{
		unk_0xD69A0C3662175E68(iLocal_219);
		unk_0xD69A0C3662175E68(iLocal_220);
		unk_0xD69A0C3662175E68(iLocal_221);
		unk_0xD69A0C3662175E68(iLocal_222);
		unk_0xD69A0C3662175E68(joaat("prop_anim_cash_pile_01"));
		unk_0xD69A0C3662175E68(joaat("prop_cs_duffel_01"));
		unk_0x8FB472886552D737("random@robbery");
		unk_0x8FB472886552D737("random@shop_robbery");
		unk_0x63B063064DC08617("RE51A_SHOP");
	}
}

void func_184()
{
	iLocal_141[0] = 0;
	iLocal_141[1] = 0;
	if (iLocal_49 == 1)
	{
		iLocal_219 = joaat("a_f_y_bevhills_02");
		iLocal_220 = joaat("a_m_y_bevhills_02");
		iLocal_221 = joaat("a_f_y_bevhills_02");
		iLocal_222 = joaat("g_m_y_korean_01");
		iLocal_111 = 2;
		iLocal_112 = 3;
		iLocal_113 = 3;
		Local_55[0 /*3*/] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_62[0] = 252.381f;
		Local_55[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_62[1] = -153.9562f;
		Local_65[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_75[0] = 203.3684f;
		Local_65[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_75[1] = 90.1761f;
		Local_65[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_75[2] = 192.7338f;
		Local_79[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_92[0] = 337.68f;
		Local_79[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_92[1] = 25.8399f;
		Local_79[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_92[2] = 30f;
		Local_97 = { -822.2148f, -184.0822f, 37.7027f };
		Local_100 = { -1.8236f, 0.6172f, 75.8024f };
		Local_103 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_188 = joaat("prop_cs_duffel_01");
		iLocal_189 = 2000;
		Local_194 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_49 == 2)
	{
		iLocal_218 = joaat("a_m_y_hipster_01");
		iLocal_219 = joaat("a_f_y_hipster_04");
		iLocal_220 = joaat("a_m_y_hipster_01");
		iLocal_221 = joaat("a_f_y_hipster_04");
		iLocal_222 = joaat("g_m_y_strpunk_02");
		iLocal_111 = 2;
		iLocal_112 = 2;
		iLocal_113 = 2;
		Local_55[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_62[0] = -85.5f;
		Local_55[1 /*3*/] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_62[1] = 329.1899f;
		Local_65[0 /*3*/] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_75[0] = 221.3152f;
		Local_65[1 /*3*/] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_75[1] = 247.1149f;
		Local_79[0 /*3*/] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_92[0] = 103.3015f;
		Local_79[1 /*3*/] = { -1185.932f, -770.624f, 16.344f };
		fLocal_92[1] = 43.215f;
		Local_97 = { -1192.968f, -767.0651f, 17.2968f };
		Local_100 = { 0f, 0f, -128.52f };
		Local_103 = { -1180.457f, -763.9163f, 16.3267f };
		iLocal_188 = joaat("prop_cs_duffel_01");
		iLocal_189 = 2000;
		Local_194 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_54 = true;
}

int func_185()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_186(float fParam0, bool bParam1)
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
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_44(func_42()))
		{
			iVar36 = func_66();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_112922.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_112922.f_18574[iVar32 /*6*/], 3))
				{
					func_187(iVar32, &Var0);
					fVar35 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
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

void func_187(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_188(uParam1, "Abigail1", func_190(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 1:
			func_188(uParam1, "Abigail2", func_190(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 2:
			func_188(uParam1, "Barry1", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 3:
			func_188(uParam1, "Barry2", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 4:
			func_188(uParam1, "Barry3", func_190(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 5:
			func_188(uParam1, "Barry3A", func_190(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 6:
			func_188(uParam1, "Barry3C", func_190(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 7:
			func_188(uParam1, "Barry4", func_190(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_189(iParam0), 0, 0);
			break;
		
		case 8:
			func_188(uParam1, "Dreyfuss1", func_190(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 9:
			func_188(uParam1, "Epsilon1", func_190(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 10:
			func_188(uParam1, "Epsilon2", func_190(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 11:
			func_188(uParam1, "Epsilon3", func_190(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 12:
			func_188(uParam1, "Epsilon4", func_190(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 13:
			func_188(uParam1, "Epsilon5", func_190(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 14:
			func_188(uParam1, "Epsilon6", func_190(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 15:
			func_188(uParam1, "Epsilon7", func_190(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 16:
			func_188(uParam1, "Epsilon8", func_190(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 17:
			func_188(uParam1, "Extreme1", func_190(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 18:
			func_188(uParam1, "Extreme2", func_190(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 19:
			func_188(uParam1, "Extreme3", func_190(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 20:
			func_188(uParam1, "Extreme4", func_190(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 21:
			func_188(uParam1, "Fanatic1", func_190(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 22:
			func_188(uParam1, "Fanatic2", func_190(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 23:
			func_188(uParam1, "Fanatic3", func_190(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_189(iParam0), 0, 1);
			break;
		
		case 24:
			func_188(uParam1, "Hao1", func_190(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_189(iParam0), 0, 1);
			break;
		
		case 25:
			func_188(uParam1, "Hunting1", func_190(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 26:
			func_188(uParam1, "Hunting2", func_190(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 27:
			func_188(uParam1, "Josh1", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 28:
			func_188(uParam1, "Josh2", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 29:
			func_188(uParam1, "Josh3", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 30:
			func_188(uParam1, "Josh4", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 31:
			func_188(uParam1, "Maude1", func_190(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 32:
			func_188(uParam1, "Minute1", func_190(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 33:
			func_188(uParam1, "Minute2", func_190(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 34:
			func_188(uParam1, "Minute3", func_190(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 35:
			func_188(uParam1, "MrsPhilips1", func_190(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 36:
			func_188(uParam1, "MrsPhilips2", func_190(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 37:
			func_188(uParam1, "Nigel1", func_190(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 38:
			func_188(uParam1, "Nigel1A", func_190(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 39:
			func_188(uParam1, "Nigel1B", func_190(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 40:
			func_188(uParam1, "Nigel1C", func_190(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 41:
			func_188(uParam1, "Nigel1D", func_190(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 42:
			func_188(uParam1, "Nigel2", func_190(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 43:
			func_188(uParam1, "Nigel3", func_190(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 44:
			func_188(uParam1, "Omega1", func_190(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 45:
			func_188(uParam1, "Omega2", func_190(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 46:
			func_188(uParam1, "Paparazzo1", func_190(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 47:
			func_188(uParam1, "Paparazzo2", func_190(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 48:
			func_188(uParam1, "Paparazzo3", func_190(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 49:
			func_188(uParam1, "Paparazzo3A", func_190(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 50:
			func_188(uParam1, "Paparazzo3B", func_190(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 51:
			func_188(uParam1, "Paparazzo4", func_190(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 52:
			func_188(uParam1, "Rampage1", func_190(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 54:
			func_188(uParam1, "Rampage3", func_190(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 55:
			func_188(uParam1, "Rampage4", func_190(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 56:
			func_188(uParam1, "Rampage5", func_190(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 53:
			func_188(uParam1, "Rampage2", func_190(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 57:
			func_188(uParam1, "TheLastOne", func_190(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 58:
			func_188(uParam1, "Tonya1", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 59:
			func_188(uParam1, "Tonya2", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 60:
			func_188(uParam1, "Tonya3", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 61:
			func_188(uParam1, "Tonya4", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 62:
			func_188(uParam1, "Tonya5", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_188(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_189(int iParam0)
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

struct<2> func_190(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_191(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_191(int iParam0)
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

int func_192()
{
	if (func_195() && !func_196())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_112640 > 0;
}

int func_194()
{
	if (Global_96902 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_197()
{
	if (!func_165(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_198()
{
	if ((Global_112911 == func_70() && unk_0xE3BBDB1C36703410()) && Global_112912)
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_201(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112908 = 0;
	func_200();
}

void func_200()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

void func_201(int iParam0)
{
	Global_112911 = iParam0;
}

int func_202(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151506)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_70();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_231())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_196())
			{
				return 0;
			}
		}
		if (!Global_112922.f_9085)
		{
			return 0;
		}
		if (func_56(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_230())
		{
			return 0;
		}
		if (Global_112911 != -1)
		{
			return 0;
		}
		if (func_44(func_42()))
		{
			if (func_186(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_229(iParam3))
		{
			return 0;
		}
		if (func_44(func_42()))
		{
			if (func_228(func_42()) == 4 || func_228(func_42()) == 5)
			{
				return 0;
			}
		}
		if (func_44(func_42()))
		{
			if (!func_227(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_226(Global_112922.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_112913) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_225())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_165(5))
		{
			return 0;
		}
		if (func_215(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_31658)
		{
			return 0;
		}
		if (func_229(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_44(func_42()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112922.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112922.f_2363.f_539.f_2296[iVar4];
				if (func_214(iVar8))
				{
					if (func_204(iVar4))
					{
						if (!func_203(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_42() != iVar4)
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

bool func_203(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112922.f_2363.f_539.f_2296[iParam0];
	return func_205(iVar0);
}

int func_205(int iParam0)
{
	return func_206(iParam0, 1);
}

int func_206(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_207(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_207(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_208(func_84(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_208(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_213(iParam0, iParam1))
	{
		iVar0 = func_91(iParam1);
		iVar1 = func_89(iParam0);
		iVar2 = (func_89(iParam0) - func_89(iParam1));
		iVar3 = (func_91(iParam0) - func_91(iParam1));
		iVar4 = (func_212(iParam0) - func_212(iParam1));
		iVar5 = (func_83(iParam0) - func_83(iParam1));
		iVar6 = (func_211(iParam0) - func_211(iParam1));
		iVar7 = (func_210(iParam0) - func_210(iParam1));
	}
	else
	{
		iVar0 = func_91(iParam0);
		iVar1 = func_89(iParam1);
		iVar2 = (func_89(iParam1) - func_89(iParam0));
		iVar3 = (func_91(iParam1) - func_91(iParam0));
		iVar4 = (func_212(iParam1) - func_212(iParam0));
		iVar5 = (func_83(iParam1) - func_83(iParam0));
		iVar6 = (func_211(iParam1) - func_211(iParam0));
		iVar7 = (func_210(iParam1) - func_210(iParam0));
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
		iVar4 = (iVar4 + func_88(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_209(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_209(float fParam0, float fParam1, float fParam2)
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

int func_210(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_211(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_212(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_89(iParam0);
	iVar1 = func_89(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
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
	iVar0 = func_83(iParam0);
	iVar1 = func_83(iParam1);
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
	return 0;
}

int func_214(int iParam0)
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
	iVar0 = func_210(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_211(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_83(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_89(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_91(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_88(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, bool bParam1)
{
	if (BitTest(Global_112922.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	bool bVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				bVar0 = func_42();
				if (!func_44(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_224()) || Global_111969) || Global_31514) || func_223()) || func_129(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_224()) || Global_31514) || func_223()) || func_129(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_224()) || Global_111969) || Global_31514) || func_223()) || func_129(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5) || Global_43149 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_224()) || Global_111969) || Global_31514) || func_223()) || func_129(8, -1)) || func_222()) || func_221()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_224() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_129(8, -1)) || func_219()) || func_218()) || Global_112922.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_129(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_224()) || Global_31514) || func_223()) || func_129(8, -1)) || func_221()) || func_220()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_224()) || func_221()) || Global_111969) || Global_31514) || func_223()) || Global_43780) || func_129(8, -1)) || func_220()) || func_218()) || func_219()) || Global_112922.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_224()) || Global_111969) || Global_31514) || func_223()) || func_129(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_100019.f_1;
}

int func_218()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	if (Global_78118)
	{
		return 1;
	}
	else if (Global_62690 && !Global_62696)
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_100032.f_376 > 0;
}

bool func_222()
{
	return Global_100032.f_375 > 0;
}

var func_223()
{
	return Global_1575054;
}

int func_224()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97458.f_44 == 1;
	}
	return 0;
}

int func_225()
{
	func_127();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_213(func_84(), iParam0);
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = func_42();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		bVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (bVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (bVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (bVar1 == 0)
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
			if (iParam1 == 2 || bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (bVar1 != 2)
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

int func_228(bool bParam0)
{
	if (!func_44(bParam0))
	{
		return 7;
	}
	return Global_112922.f_7688.f_919[bParam0];
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_231())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_112922.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_112922.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_230()
{
	var uVar0;
	
	if (Global_31662)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231()
{
	int iVar0;
	
	if (Global_151761 == 2)
	{
		return 1;
	}
	else if (Global_151761 == 3)
	{
		return 0;
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xCED9E32812D6C7C7(&iVar0, 2);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				unk_0xCED9E32812D6C7C7(&iVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (BitTest(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_232(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

bool func_233(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_234()
{
	int iVar0;
	
	if (iLocal_223)
	{
		func_133(0);
		unk_0x0709E99F1DDFFF26("RE51A_SHOP");
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x83E10DA4845841B7(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		unk_0x10F7BFE3A88CB99B("re_shoprobbery");
		unk_0x10F7BFE3A88CB99B("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_114[iVar0]))
			{
				if (!unk_0xF68107C40359970C(iLocal_114[iVar0]) && !unk_0xD5C6B5E3B93A5EDC(iLocal_114[iVar0], 0))
				{
					unk_0x84918839A90C954C(iLocal_114[iVar0], Local_103, 150f, -1, 0, 0);
					unk_0xABC2CA6F28903308(iLocal_114[iVar0], 1);
				}
				unk_0xB3822DB3D538C8F3(&(iLocal_114[iVar0]));
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_185[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_185[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_192))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_192);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_121[iVar0]))
			{
				if (!unk_0xF68107C40359970C(iLocal_121[iVar0]))
				{
					unk_0x006574E87E6F1942(iLocal_121[iVar0], 1, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_152);
					if (iLocal_49 == 1)
					{
						unk_0x49D97B076E3590AC(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_49 == 2)
					{
						unk_0x03A927199A2DFE46(iLocal_121[iVar0]);
						unk_0x7D1424753688EE7A(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					unk_0x84918839A90C954C(0, Local_103, 150f, -1, 0, 0);
					unk_0xC963A45B50851768(uLocal_152);
					unk_0x8ACADA903FCAA42F(iLocal_121[iVar0], uLocal_152);
					unk_0x7461D7C5BA953BC7(&uLocal_152);
					unk_0xABC2CA6F28903308(iLocal_121[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_117[iVar0]))
			{
				if (!unk_0xF68107C40359970C(iLocal_117[iVar0]))
				{
					unk_0xD6A76BAB45A4B460(iLocal_117[iVar0], 317, 1);
					unk_0x006574E87E6F1942(iLocal_117[iVar0], 1, 1);
					if (iVar0 == 0)
					{
						if (!iLocal_183)
						{
							unk_0x03A927199A2DFE46(iLocal_117[iVar0]);
							unk_0x84918839A90C954C(iLocal_117[iVar0], Local_103, 150f, -1, 0, 0);
						}
						else
						{
							unk_0x50274A7EACA3133A(iLocal_117[iVar0], 0);
						}
					}
					else
					{
						unk_0xA888F8CC04F25CC8(&uLocal_152);
						if (iLocal_49 == 2)
						{
							unk_0x03A927199A2DFE46(iLocal_117[iVar0]);
							unk_0x7D1424753688EE7A(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						unk_0x84918839A90C954C(0, Local_103, 150f, -1, 0, 0);
						unk_0xC963A45B50851768(uLocal_152);
						unk_0x8ACADA903FCAA42F(iLocal_117[iVar0], uLocal_152);
						unk_0x7461D7C5BA953BC7(&uLocal_152);
					}
					unk_0x50274A7EACA3133A(iLocal_117[iVar0], 0);
					unk_0xA7266A50941DBAEA(iLocal_117[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_184))
		{
			unk_0xB3822DB3D538C8F3(&iLocal_184);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_167))
		{
			if (unk_0xE85F749F6D5C809E(iLocal_167))
			{
				unk_0xE6451C2F193342C7(iLocal_167, 1, 1);
			}
			unk_0x59E393B344098656(&iLocal_167);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_175))
		{
			unk_0x3D81769BEC61BFF8(&iLocal_175);
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
		}
		unk_0x72DB022C36FCEA24(1);
		unk_0xB60709BD0E075903(1);
		unk_0x8576657A629C4B0A(1f);
		unk_0xC0F70A3CDEC87ECE(5);
		unk_0x3B8C20EF19A49C3E(1);
		if (iLocal_49 == 1)
		{
			func_180(0, 0);
			func_177(0, 1, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_180(14, 0);
			func_177(14, 1, 0);
		}
	}
	func_235(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_235(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_198())
	{
		func_239(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112913 = unk_0x320D1840B6DAA1CC();
		func_238(30000);
		StringCopy(&cVar0, func_237(Global_112911, 1), 64);
		if (func_69(Global_112911) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112910, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_112908, (unk_0x320D1840B6DAA1CC() - Global_112909), 0);
	}
	else if (BitTest(Global_112918, 0) && Global_112922.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_112918, false);
	}
	func_236(&Global_31571);
	Global_112912 = 0;
	func_201(-1);
}

void func_236(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42564)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42563 = 0;
	Global_42565 = 0;
	Global_42602 = 15;
	Global_62693 = 0;
	Global_62694 = 0;
}

char* func_237(int iParam0, bool bParam1)
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

void func_238(int iParam0)
{
	Global_43153 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_239(int iParam0)
{
	func_240(iParam0, 0, func_245(iParam0));
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_84();
	func_243(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_242(iParam0, &uVar0);
	Var1 = { func_241(&uVar0) };
}

struct<16> func_241(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_83(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_91(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_89(*uParam0), 64);
	return Var0;
}

void func_242(int iParam0, var uParam1)
{
	Global_112922.f_24995.f_43[iParam0] = *uParam1;
}

void func_243(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_91(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_83(*uParam0);
	iVar4 = func_211(*uParam0);
	iVar5 = func_210(*uParam0);
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
	iVar6 = func_88(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_88(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_244(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_94(uParam0, iParam1);
	func_93(uParam0, iParam2);
	func_92(uParam0, iParam3);
	func_86(uParam0, iParam5);
	func_87(uParam0, iParam4);
	func_85(uParam0, iParam6);
}

int func_245(int iParam0)
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

void func_246()
{
	Global_20151 = 0;
	func_247();
}

void func_247()
{
	if (unk_0x2E5F8A288A954523())
	{
		unk_0x82B0661A78CC39CF();
		Global_22296 = 0;
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

Vector3 func_248()
{
	float fVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_128, 1);
		iLocal_127 = 1;
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_131, 1) < fVar0)
		{
			fVar0 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_131, 1);
			iLocal_127 = 2;
		}
		if (iLocal_127 == 1)
		{
			bLocal_134 = true;
			iLocal_49 = 1;
			return Local_128;
		}
		else if (iLocal_127 == 2)
		{
			bLocal_134 = 2;
			iLocal_49 = 2;
			return Local_131;
		}
	}
	return 0f, 0f, 0f;
}


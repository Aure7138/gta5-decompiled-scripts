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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50[16];
	float fLocal_99[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	float fLocal_128 = 0f;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_149 = 0f;
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	float fLocal_156 = 0f;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	float fLocal_163 = 0f;
	struct<3> Local_164 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	float fLocal_170 = 0f;
	bool bLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	bool bLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192[2] = { 0, 0 };
	int iLocal_195[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215[4] = { 0, 0, 0, 0 };
	int iLocal_220[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_227 = 0;
	var uLocal_228[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_271 = 8;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 4;
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
	var uLocal_290 = 4;
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
	var uLocal_305 = 4;
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
	var uLocal_320 = 4;
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
	var uLocal_335 = 4;
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
	var uLocal_350 = 4;
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
	var uLocal_365 = 4;
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
	var uLocal_380 = 4;
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
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	int iLocal_399 = 0;
	char[] cLocal_400[8] = 0;
	char* sLocal_401 = NULL;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	var uLocal_409 = 0;
	var uLocal_410 = 16;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	int iLocal_575 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	Local_116 = { -1109.213f, 4914.744f, 216.101f };
	Local_119 = { -1034.6f, 4918.6f, 205.9f };
	Local_122 = { -1066.963f, 4873.13f, 207.3281f };
	Local_125 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_128 = 72.3125f;
	Local_129 = { -1138.386f, 4872.04f, 207.5488f };
	Local_132 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_135 = 57.8125f;
	Local_136 = { -1171.648f, 4888.658f, 211.0756f };
	Local_139 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_142 = 17.9375f;
	Local_143 = { -1177.981f, 4903.231f, 212.477f };
	Local_146 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_149 = 17.9375f;
	Local_150 = { -1175.693f, 4904.839f, 207.5207f };
	Local_153 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_156 = 36.375f;
	Local_157 = { -1106.212f, 4860.086f, 206.1207f };
	Local_160 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_163 = 11.5625f;
	Local_164 = { -1044.268f, 4916.587f, 209.8365f };
	Local_167 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_170 = 12.875f;
	iLocal_191 = 4;
	cLocal_400 = "REPLAY_TMG";
	sLocal_401 = "CMN_TDIED";
	if (unk_0xC11469DCA6FC3BB5(26))
	{
		func_172();
	}
	if (unk_0xB3B8BD8D2224AC71())
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x4F4FF2F3B81506A7() || iLocal_172)
		{
			unk_0xD7FA719CB54866C2(0f);
			switch (iLocal_49)
			{
				case 0:
					if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						if (Global_97353.f_28192.f_5 >= iLocal_191 && !func_171())
						{
							iLocal_49 = 2;
						}
						func_168();
						func_165();
					}
					break;
				
				case 1:
					unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
					if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_186 == 1)
							{
								func_164();
							}
							else if (iLocal_186 == 2)
							{
								func_143();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_188 < 3)
							{
								func_142();
							}
							else
							{
								func_141();
							}
						}
						if (iLocal_173)
						{
							func_131(26, 1);
							iLocal_173 = 0;
							iLocal_49 = 0;
						}
					}
					break;
				
				case 2:
					unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
					if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						func_107();
					}
					unk_0xD810AFBEB9167309(Global_34036[9 /*31*/], 0, 0, 1);
					unk_0xD810AFBEB9167309(Global_34036[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						iLocal_49 = 3;
						break;
					}
					bLocal_174 = false;
					unk_0xD7FA719CB54866C2(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_195)
					{
						if (unk_0x6CFF81397164A1D3(iLocal_195[iVar0]))
						{
							if (unk_0xCD82FA174080B3B1(uLocal_228[iVar0]))
							{
								unk_0xF2C3C9DA47AAA54A(&(uLocal_228[iVar0]));
							}
						}
						else
						{
							if (unk_0xD86B643FE7DB5DC4(iLocal_195[iVar0]))
							{
								if (unk_0xCD82FA174080B3B1(uLocal_228[iVar0]))
								{
									unk_0xF2C3C9DA47AAA54A(&(uLocal_228[iVar0]));
								}
							}
							else if (unk_0xC057F02B837A27F6(iLocal_195[iVar0], unk_0x096275889B8E0EE0(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_106())
								{
									if (iLocal_190 < unk_0x4F67E8ECA7D3F667())
									{
										iVar1 = unk_0x9C1C462D7B1DD1F9(0, 3);
										if (iVar1 == 0)
										{
											func_96(&uLocal_410, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_95(&uLocal_410, 1, iLocal_195[iVar0], "ACULTMember1", 0, 1);
											func_96(&uLocal_410, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_95(&uLocal_410, 2, iLocal_195[iVar0], "ACULTMember2", 0, 1);
											func_96(&uLocal_410, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_190 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 6000));
									}
								}
							}
							bLocal_174 = true;
						}
						iVar0++;
					}
					if (!bLocal_174)
					{
						func_59();
					}
					break;
				
				case 3:
					if (!iLocal_172)
					{
						uLocal_248 = func_58();
						if (!unk_0x64BAE9BE701E6C19(uLocal_248))
						{
							break;
						}
						func_57(&uLocal_253, 0);
						iLocal_172 = 1;
					}
					if (func_28(&uLocal_253, &uLocal_259, &uLocal_248, cLocal_400, sLocal_401, &bLocal_171, 78))
					{
						iLocal_189 = 0;
						unk_0x1A217D7977B7A43B(uLocal_409);
						unk_0xFFF1778DAC06071C(uLocal_247);
						iVar0 = 0;
						while (iVar0 < iLocal_195)
						{
							if (unk_0xD42BD6EB2E0F1677(iLocal_195[iVar0]))
							{
								unk_0xCC0EF140F99365C5(&(iLocal_195[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_220)
						{
							if (unk_0xD42BD6EB2E0F1677(iLocal_220[iVar0]))
							{
								unk_0x931914268722C263(&(iLocal_220[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x153AD457764FD704(uLocal_245))
						{
							unk_0x87295BCA613800C8(uLocal_245, 0);
						}
						if (unk_0xD42BD6EB2E0F1677(uLocal_214))
						{
							unk_0x931914268722C263(&uLocal_214);
						}
						if (unk_0xD42BD6EB2E0F1677(uLocal_214))
						{
							unk_0x931914268722C263(&uLocal_214);
						}
						if (bLocal_171)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_172 = 0;
							iLocal_49 = 2;
						}
						else
						{
							iLocal_172 = 0;
							func_172();
						}
					}
					break;
			}
		}
		else if (bLocal_176)
		{
		}
		else
		{
			func_172();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDF3B5846DE5904AF(0);
		unk_0x66AB6B6C7E72F393(1);
		unk_0x2552D675C0051FED(0);
		func_2(1);
		Global_85625 = 1;
	}
	else
	{
		unk_0xDF3B5846DE5904AF(1);
		unk_0x66AB6B6C7E72F393(0);
		unk_0x2552D675C0051FED(1);
		func_2(0);
		Global_85625 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_34913 == 9 || Global_34913 == 10) || Global_34913 == 5)
	{
		Global_96005 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_96005 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14551)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_9()
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		unk_0x4102732DF6B4005F("DeathFailOut", 0, 0);
		unk_0xF73FBE4845C43B5B(&iLocal_47, 1);
		func_11(1, 2, 0);
		unk_0xF36B8C911DB1CFC1(2);
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_47, 1) || iParam1)
		{
			unk_0xB4FD7446BAB2F394("DeathFailOut");
			func_11(0, 2, 1);
			unk_0xF36B8C911DB1CFC1(0);
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_47, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&iLocal_47, 2);
		if (!unk_0x03A753E2C8458335())
		{
			if (iParam1 == 1)
			{
				unk_0x9682AF6050854856(0.2f);
			}
			else
			{
				unk_0x9682AF6050854856(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_47, 2) || iParam2)
		{
			if (!unk_0x03A753E2C8458335())
			{
				unk_0x9682AF6050854856(1f);
			}
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_47, 2);
	}
}

void func_12(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x4ED6CFDFE8D4131A(iLocal_47, 0) || iParam1)
		{
			unk_0x4102732DF6B4005F(sVar0, 0, 0);
			unk_0xF73FBE4845C43B5B(&iLocal_47, 0);
			func_11(1, 1, 0);
			unk_0xF36B8C911DB1CFC1(1);
		}
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_47, 0) || iParam1)
		{
			unk_0xB4FD7446BAB2F394(sVar0);
			func_11(0, 1, 1);
			unk_0xF36B8C911DB1CFC1(0);
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_47, 0);
	}
}

int func_13()
{
	func_14();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_18(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_17(unk_0x096275889B8E0EE0());
			if (func_16(iVar0) && (!func_15(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_16(Global_97353.f_1729.f_539.f_3213))
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

bool func_15(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_27(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_5())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_26(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_27(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_26(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_21(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_21(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
	{
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312737;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_28(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x5F70787AC4BF7928("DEATH_SCENE");
			unk_0xB906B139171B1845(-1, "ScreenFlash", "WastedSounds", 1);
			func_56(&(uParam0->f_1));
			func_19();
			func_55(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x5CB83156AA038F95(1);
			break;
		
		case 1:
			if (func_53() || unk_0xF5472C80DF2FF847())
			{
				*uParam0 = 2;
			}
			if (!func_52(uParam0->f_4, 4))
			{
				if (unk_0x9C623A934CD60291("OFFMISSION_WASTED", 0))
				{
					unk_0xB906B139171B1845(-1, "Bed", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_52(uParam0->f_4, 2))
				{
					unk_0xB906B139171B1845(-1, "TextHit", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 2);
				}
				func_29(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_29(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0x6C9FF40FF1B69F8F(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x5CB83156AA038F95(0);
				unk_0x66AB6B6C7E72F393(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				unk_0xDF3B5846DE5904AF(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0xC27FB879C2B9A2EB("DEATH_SCENE");
				unk_0x5CB83156AA038F95(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x5CB83156AA038F95(0);
			return 1;
			break;
	}
	return 0;
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xF5472C80DF2FF847() || unk_0x02F39BEFE7B88D00())
			{
				unk_0x40C719A5E410B9E4(2500);
			}
			if (bParam9)
			{
				unk_0x5CB83156AA038F95(1);
			}
			unk_0x9682AF6050854856(0.2f);
			if (func_49(iParam5, 4))
			{
				if (unk_0x9C623A934CD60291("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xF6EA2AC68E7C7293(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x164FB269C22AF51C("STRING");
			unk_0xB07108C8201910EA(6);
			unk_0x734AB59A7DBD1DAA(uParam2);
			unk_0x5BB4D22B8B03A30B();
			func_48(sParam3);
			unk_0xA734310215BCF528(100);
			unk_0x58279158C52AF361(true);
			unk_0xFA63F370BDF97C7B();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "TRANSITION_UP");
					unk_0xBC38230AD29DBDD4(uParam1->f_134);
					unk_0xD4D85E4148B638AD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_49(iParam5, 1))
			{
				unk_0xA1D029066C91DA5F(0);
			}
			func_47(&(uParam1->f_10), 0, 1, 1, 1);
			func_46(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_46(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_49(iParam5, 4))
			{
				unk_0xB906B139171B1845(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_49(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0x4102732DF6B4005F("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x4102732DF6B4005F("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x4102732DF6B4005F("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_45(&(uParam1->f_1)))
			{
				func_44(&(uParam1->f_1));
			}
			if (func_49(iParam5, 2))
			{
				if (!func_45(&(uParam1->f_4)))
				{
					func_44(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xEA600AABAF4B9084();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "TRANSITION_UP");
					unk_0xBC38230AD29DBDD4(uParam1->f_134);
					unk_0xD4D85E4148B638AD();
					uParam1->f_136 = 1;
				}
			}
			unk_0xCFCC78391C8B3814(iParam6);
			func_42(uParam0, 0, 0);
			if (!func_49(iParam5, 16) && (func_40(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xF5472C80DF2FF847()))
			{
				func_34(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xF12E4CCAF249DC10();
				if (unk_0x3249D2128D293FA5(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xB906B139171B1845(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x3249D2128D293FA5(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xB906B139171B1845(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_49(iParam5, 2))
			{
				if (func_40(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xB906B139171B1845(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_42(uParam0, 0, 0);
			unk_0x9682AF6050854856(1f);
			if (uParam1->f_138 || !((unk_0xD3852F22AB713A1F("stunt_plane_races", unk_0x8F77B33B6A34D8BA()) || unk_0xD3852F22AB713A1F("pilot_school", unk_0x8F77B33B6A34D8BA())) || (unk_0xD3852F22AB713A1F("bj", unk_0x8F77B33B6A34D8BA()) && unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))))
			{
				unk_0x6A053CF596F67DF7(2500);
			}
			if (func_49(iParam5, 64) && uParam1->f_138)
			{
				unk_0x40C719A5E410B9E4(500);
			}
			func_30(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x5CB83156AA038F95(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_40(&(uParam1->f_4)) <= 0.1f)
			{
				func_42(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_30(var uParam0)
{
	func_31(uParam0, 0f);
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
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

void func_33(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x6215C0F9FFF76BAD(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_34(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
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
	if (!func_39(uParam0))
	{
		return;
	}
	unk_0xEA600AABAF4B9084();
	unk_0xCFCC78391C8B3814(uParam2);
	if (!func_49(uParam0->f_1, 256) || (func_49(uParam0->f_1, 8192) && unk_0x29D1C165BCB09391(2)))
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
			unk_0x58279158C52AF361(func_49(uParam0->f_1, 4096));
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
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xF800E35ED8511D66(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0xDE6887C7BB8A503D(uVar0, uVar1, bVar2);
						}
						if (!unk_0x2CF12F9ACF18F048(uVar3))
						{
							func_38(uVar3);
						}
						iVar7++;
					}
					if (!unk_0x2CF12F9ACF18F048(uParam0->f_2[iVar6 /*15*/]))
					{
						func_48(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (func_49(uParam0->f_1, 4096))
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
		fVar8 = func_37(bParam4, func_37(func_49(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF6EA2AC68E7C7293(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xBC38230AD29DBDD4(fVar8);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(80f);
		unk_0xD4D85E4148B638AD();
		func_36(&(uParam0->f_1), 256);
		func_35(&(uParam0->f_1), 128);
	}
	unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 0, 0);
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_37(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_38(var uParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

int func_39(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			func_36(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_40(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_41(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_41(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

int func_42(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_45(&(uParam0->f_2)))
	{
		func_30(&(uParam0->f_2));
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
	if (func_40(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_43(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_30(uParam0);
	}
}

bool func_45(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

int func_46(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x3B632900049DBB88("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_36(&(uParam0->f_1), 32);
	}
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		func_36(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x9F96EAB06403CD66(*uParam0, 1);
		}
	}
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (bParam3)
		{
			func_36(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_36(&(uParam0->f_1), 8192);
	}
}

void func_48(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)
{
	func_51(uParam0, iParam1);
}

void func_51(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_53()
{
	if (!unk_0x4ED6CFDFE8D4131A(iLocal_47, 0) && !unk_0x4ED6CFDFE8D4131A(iLocal_47, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_12(1, 0);
	}
	if (!unk_0x2004A43D1B1A5D9F())
	{
		unk_0x00686F7B3723B82F();
	}
	unk_0x562F5D788AF3FA80(2, 199, 1);
	unk_0x562F5D788AF3FA80(0, 59, 1);
	unk_0x562F5D788AF3FA80(0, 60, 1);
	unk_0x562F5D788AF3FA80(0, 37, 1);
	unk_0x562F5D788AF3FA80(0, 25, 1);
	unk_0x62AD77E1EB9CFB2B();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x4ED6CFDFE8D4131A(iLocal_47, 1))
		{
			func_10(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xF5472C80DF2FF847())
		{
			if (!unk_0xF5472C80DF2FF847())
			{
				if (!unk_0x02F39BEFE7B88D00())
				{
					unk_0x40C719A5E410B9E4(1500);
				}
			}
			else if (iLocal_48 == 0)
			{
				iLocal_48 = unk_0x4F67E8ECA7D3F667() + 1000;
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0xCE47C21C0687EBC2(0);
				unk_0x6AAFBC3C918295F2(0);
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x00686F7B3723B82F();
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				}
				func_12(0, 0);
				func_54(0);
			}
			else if (unk_0x4F67E8ECA7D3F667() < iLocal_48)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x4ED6CFDFE8D4131A(iLocal_47, 3))
			{
				unk_0xFAEC088D28B1DE4A(1);
				unk_0xF73FBE4845C43B5B(&iLocal_47, 3);
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(iLocal_47, 3))
		{
			unk_0xFAEC088D28B1DE4A(0);
			unk_0x7D1D4A3602B6AD4E(&iLocal_47, 3);
		}
	}
}

void func_55(var uParam0, float fParam1, float fParam2)
{
	if (func_45(&(uParam0->f_1)))
	{
		func_43(&(uParam0->f_1));
	}
	if (func_45(&(uParam0->f_4)))
	{
		func_43(&(uParam0->f_4));
	}
	func_33(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_56(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_44(uParam0);
	}
	else
	{
		func_30(uParam0);
	}
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x9C623A934CD60291("OFFMISSION_WASTED", 0);
}

var func_58()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_59()
{
	if (!iLocal_175)
	{
		unk_0x4298FEFC65883759("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_97353.f_28192.f_5 = 1000;
		unk_0x3435EBBBE5FF359E(64);
		Global_97353.f_23789.f_472 = 54;
		uLocal_398 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		func_94(1);
		while (!unk_0x64BAE9BE701E6C19(uLocal_398))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF6EA2AC68E7C7293(uLocal_398, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_48("CULT_PASS");
		unk_0xFA63F370BDF97C7B();
		while (!func_93())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_92();
		unk_0xC1B1E9A034A63A62(0);
		unk_0xB906B139171B1845(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_175 = 1;
	}
	unk_0x2D8953D6CEBE69D2(uLocal_398, 255, 255, 255, 255, 0);
	if (!iLocal_177)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0xF6EA2AC68E7C7293(uLocal_398, "SHARD_ANIM_OUT");
			unk_0xA734310215BCF528(1);
			unk_0xBC38230AD29DBDD4(0.33f);
			unk_0xD4D85E4148B638AD();
			iLocal_177 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x64BAE9BE701E6C19(uLocal_398))
		{
			unk_0x6215C0F9FFF76BAD(&uLocal_398);
			func_94(0);
		}
		while (unk_0x0BE7F4E3CDBAFB28(func_91(unk_0x217E9DC48139933D()), Local_116, 1) < 209f && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_60(18);
		func_172();
	}
}

void func_60(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_88())
	{
		func_66(iParam0);
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_65(30000);
		StringCopy(&cVar0, func_64(Global_97342, 1), 64);
		if (func_63(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_62(&Global_24503);
	Global_97343 = 0;
	func_61(-1);
}

void func_61(int iParam0)
{
	Global_97342 = iParam0;
}

void func_62(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

int func_63(int iParam0)
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

char* func_64(int iParam0, bool bParam1)
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

void func_65(int iParam0)
{
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
}

void func_66(int iParam0)
{
	func_67(iParam0, 0, func_87(iParam0));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_86();
	func_77(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_76(iParam0, &uVar0);
	Var1 = { func_68(&uVar0) };
}

struct<16> func_68(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_74(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_72(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_71(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_69(*uParam0), 64);
	return Var0;
}

int func_69(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_70(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_70(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_71(var uParam0)
{
	return uParam0 & 15;
}

int func_72(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_74(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_75(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_76(int iParam0, var uParam1)
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_69(*uParam0);
	iVar1 = func_71(*uParam0);
	iVar2 = func_72(*uParam0);
	iVar3 = func_75(*uParam0);
	iVar4 = func_74(*uParam0);
	iVar5 = func_73(*uParam0);
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
	func_78(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam5);
	func_79(uParam0, iParam6);
}

void func_79(var uParam0, int iParam1)
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

void func_80(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_69(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
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

var func_86()
{
	var uVar0;
	
	func_84(&uVar0, unk_0xB6101ABE62B5F080());
	func_83(&uVar0, unk_0x4E162231B823DBBF());
	func_82(&uVar0, unk_0xC82CF208C2B19199());
	func_81(&uVar0, unk_0xDF2FD796C54480A5());
	func_80(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_79(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

int func_87(int iParam0)
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

int func_88()
{
	if ((Global_97342 == func_89() && unk_0x924D54E5698AE3E0()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_90(Var0);
	return uVar16;
}

int func_90(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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

Vector3 func_91(int iParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
}

void func_92()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

int func_93()
{
	return 1;
}

void func_94(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
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

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_105(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_97(sParam2, iParam3, 0);
}

int func_97(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x89EEEEF0CEB4D045(0);
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
					func_104();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_103(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_102();
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_101();
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_100())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_5())
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_99();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_98();
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
		func_104();
	}
	return 0;
}

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_99()
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_100()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_101()
{
	if (func_15(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		Global_14393 = func_13();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_102()
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

bool func_103(int iParam0, int iParam1)
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

void func_104()
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

void func_105(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

int func_106()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_189)
	{
		case 0:
			unk_0xDDB809241EF124FA("THUNDER", 20f);
			if (!unk_0x352A58A9B0D09D38())
			{
				unk_0x4C8884536FD957FF("ac_ig_3_p3_b", 8);
			}
			unk_0xFA28FE3A6246FC30(joaat("a_m_o_acult_02"));
			unk_0xFA28FE3A6246FC30(joaat("a_m_y_acult_02"));
			unk_0xFA28FE3A6246FC30(joaat("prop_box_wood03a"));
			unk_0xFA28FE3A6246FC30(joaat("prop_box_wood04a"));
			unk_0xFA28FE3A6246FC30(joaat("prop_box_wood05a"));
			unk_0xFA28FE3A6246FC30(joaat("prop_security_case_01"));
			while ((((((!func_130() || !unk_0x1283B8B89DD5D1B6(joaat("a_m_o_acult_02"))) || !unk_0x1283B8B89DD5D1B6(joaat("a_m_y_acult_02"))) || !unk_0x1283B8B89DD5D1B6(joaat("prop_box_wood03a"))) || !unk_0x1283B8B89DD5D1B6(joaat("prop_box_wood04a"))) || !unk_0x1283B8B89DD5D1B6(joaat("prop_box_wood05a"))) || !unk_0x1283B8B89DD5D1B6(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_575 = func_127(unk_0x096275889B8E0EE0(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
			if (unk_0xD42BD6EB2E0F1677(uLocal_575))
			{
				unk_0xBFBD2726A7694056(iLocal_575, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xBFBD2726A7694056(0, "Rifle_Mag1^1", 3, unk_0x120635F5A5A052EE(joaat("component_assaultrifle_clip_01")), 0);
			if (func_130() && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0xBFBD2726A7694056(unk_0x096275889B8E0EE0(), "TREVOR", 0, 0, 0);
				unk_0xBFBD2726A7694056(iLocal_195[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xBFBD2726A7694056(iLocal_195[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xBFBD2726A7694056(iLocal_195[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xBFBD2726A7694056(iLocal_195[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xBFBD2726A7694056(iLocal_195[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x7E34194D80F81C55(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_171 && Global_97353.f_28192.f_5 != 1000)
			{
				func_126();
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_195[0]))
			{
				unk_0xCC0EF140F99365C5(&(iLocal_195[0]));
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_195[1]))
			{
				unk_0xCC0EF140F99365C5(&(iLocal_195[1]));
			}
			if (unk_0x153AD457764FD704(uLocal_245))
			{
				unk_0x87295BCA613800C8(uLocal_245, 0);
			}
			if (unk_0xD42BD6EB2E0F1677(uLocal_214))
			{
				unk_0x931914268722C263(&iLocal_214);
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_214))
			{
				unk_0x931914268722C263(&iLocal_214);
			}
			unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
			if (unk_0xCD82FA174080B3B1(uLocal_227))
			{
				unk_0xF2C3C9DA47AAA54A(&uLocal_227);
			}
			func_20(1, 1, 1, 0);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
			unk_0x0BFC2C61FB5B6CA1(1);
			unk_0xD63FE3AF9FB3D53F(0);
			unk_0x1B3DA717B9AFF828(0);
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 1);
			}
			unk_0x3B882A96EA77D5B1(Local_116, 100f, 1, 0, 0, 0);
			unk_0x55686F8055FF786B(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xD7FA719CB54866C2(0f);
			unk_0x50E52637EF70EF77(3, 0);
			unk_0x50E52637EF70EF77(5, 0);
			uLocal_247 = unk_0x9B96AF6153C0D18E(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xFA28FE3A6246FC30(joaat("a_m_o_acult_01"));
			while (!unk_0x1283B8B89DD5D1B6(joaat("a_m_o_acult_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_189 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0xEACB7269A3E8687D(0))
			{
				if (unk_0x22C5A1F01BEB01C3("CULT_MASTER", 0))
				{
					if (!unk_0xD42BD6EB2E0F1677(iLocal_195[11]))
					{
						iLocal_195[11] = unk_0x0F16D042BD640EA3(unk_0x3D1E025CE31024DC("CULT_MASTER", 0));
					}
				}
				if (unk_0x22C5A1F01BEB01C3("REAR_CULT", 0))
				{
					if (!unk_0xD42BD6EB2E0F1677(iLocal_195[12]))
					{
						iLocal_195[12] = unk_0x0F16D042BD640EA3(unk_0x3D1E025CE31024DC("REAR_CULT", 0));
					}
				}
				if (unk_0x22C5A1F01BEB01C3("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xD42BD6EB2E0F1677(iLocal_195[13]))
					{
						iLocal_195[13] = unk_0x0F16D042BD640EA3(unk_0x3D1E025CE31024DC("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x22C5A1F01BEB01C3("CARBINE_CULT", 0))
				{
					if (!unk_0xD42BD6EB2E0F1677(iLocal_195[14]))
					{
						iLocal_195[14] = unk_0x0F16D042BD640EA3(unk_0x3D1E025CE31024DC("CARBINE_CULT", 0));
					}
				}
				if (unk_0x22C5A1F01BEB01C3("SHOTGUN_CULT", 0))
				{
					if (!unk_0xD42BD6EB2E0F1677(iLocal_195[15]))
					{
						iLocal_195[15] = unk_0x0F16D042BD640EA3(unk_0x3D1E025CE31024DC("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x22C5A1F01BEB01C3("TREVOR", 0))
				{
					unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 0);
					unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 188.9369f);
					unk_0x83110AC4454D9551(unk_0x096275889B8E0EE0(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_247, 0);
					unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 1, 0);
				}
				if (unk_0x22C5A1F01BEB01C3("Trevors_weapon", 0))
				{
					unk_0x2E82830A84B75704(iLocal_575, unk_0x096275889B8E0EE0());
				}
				unk_0x5D1EB123EAC5D071(91.3878f);
				unk_0xFB760AF4F537B8BF(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				unk_0xD63FE3AF9FB3D53F(1);
				unk_0x1B3DA717B9AFF828(1);
				Local_50[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_99[0] = 254.8275f;
				Local_50[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_99[1] = 270.2025f;
				Local_50[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_99[2] = 299.8404f;
				Local_50[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_99[3] = 298.4257f;
				Local_50[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_99[4] = 283.5311f;
				Local_50[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_99[5] = 87.5233f;
				Local_50[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_99[6] = 109.6546f;
				Local_50[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_99[7] = 210.2433f;
				Local_50[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_99[8] = 203.732f;
				Local_50[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_99[9] = 39.1109f;
				Local_50[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_99[10] = 25.8472f;
				unk_0x352AB5EAB2338B18("rghCult", &uLocal_409);
				iVar1 = 0;
				while (iVar1 < iLocal_195)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_195[iVar1] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_01"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x5222F3E172937744(iLocal_195[iVar1], 0);
						unk_0x5F07E4B73A7FA39C(iLocal_195[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x34559010D1FB41F8(iLocal_195[iVar1], 0);
						unk_0x40E19C80775FA738(iLocal_195[iVar1], 2);
						unk_0x234C08CC6D013462(iLocal_195[iVar1], 50f, 20);
						unk_0x162D5BC3EB4F75B0(iLocal_195[iVar1], 5);
						unk_0xE5B6890FA711D462(iLocal_195[iVar1], 100f);
						unk_0xBFC6F67A8A8B15A7(iLocal_195[iVar1], 100f);
						unk_0xB25E22832517B44E(iLocal_195[iVar1], 150);
						unk_0x2A805ACC9D53F067(iLocal_195[iVar1], unk_0x9C1C462D7B1DD1F9(40, 60));
						unk_0xD46E4661E977AEE0(iLocal_195[iVar1], unk_0x096275889B8E0EE0(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_195[iVar1] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x5222F3E172937744(iLocal_195[iVar1], 0);
						unk_0x5F07E4B73A7FA39C(iLocal_195[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x32A582AACCBCAEFE(iLocal_195[iVar1], 50, 1);
						unk_0x34559010D1FB41F8(iLocal_195[iVar1], 2);
						unk_0x40E19C80775FA738(iLocal_195[iVar1], 1);
						unk_0x234C08CC6D013462(iLocal_195[iVar1], 50f, 20);
						unk_0x162D5BC3EB4F75B0(iLocal_195[iVar1], 5);
						unk_0xE5B6890FA711D462(iLocal_195[iVar1], 100f);
						unk_0xBFC6F67A8A8B15A7(iLocal_195[iVar1], 100f);
						unk_0x2A805ACC9D53F067(iLocal_195[iVar1], unk_0x9C1C462D7B1DD1F9(40, 60));
						unk_0xD46E4661E977AEE0(iLocal_195[iVar1], unk_0x096275889B8E0EE0(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x6CFF81397164A1D3(iLocal_195[iVar1]) && !unk_0x6CFF81397164A1D3(iLocal_195[11])) && !unk_0x6CFF81397164A1D3(iLocal_195[12])) && !unk_0x6CFF81397164A1D3(iLocal_195[13])) && !unk_0x6CFF81397164A1D3(iLocal_195[14])) && !unk_0x6CFF81397164A1D3(iLocal_195[15]))
						{
							unk_0x5F07E4B73A7FA39C(iLocal_195[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x5F07E4B73A7FA39C(iLocal_195[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x5F07E4B73A7FA39C(iLocal_195[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x5F07E4B73A7FA39C(iLocal_195[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x5F07E4B73A7FA39C(iLocal_195[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x32A582AACCBCAEFE(iLocal_195[iVar1], 0, 1);
							unk_0x34559010D1FB41F8(iLocal_195[iVar1], 3);
							unk_0x40E19C80775FA738(iLocal_195[iVar1], 0);
							unk_0x162D5BC3EB4F75B0(iLocal_195[iVar1], 0);
							unk_0x11BF034ACF5389CA(iLocal_195[iVar1], 1f, 1f);
							unk_0xF4BF3E3D7FE56705(&uLocal_246);
							unk_0x82B8B9AEEB7D5048(0, -1159.33f, 4924.412f, 221.6576f, unk_0x096275889B8E0EE0(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 6000, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_246);
							unk_0xD59C10966EB589EA(iLocal_195[15], uLocal_246);
							unk_0x5EC7E18324A7D03D(&uLocal_246);
							unk_0xF4BF3E3D7FE56705(&uLocal_246);
							unk_0x82B8B9AEEB7D5048(0, -1163.279f, 4932.933f, 222.541f, unk_0x096275889B8E0EE0(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xEBD21A7E2F7F4FE3(0, unk_0x096275889B8E0EE0(), 5000, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 7500, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_246);
							unk_0xD59C10966EB589EA(iLocal_195[14], uLocal_246);
							unk_0x5EC7E18324A7D03D(&uLocal_246);
							unk_0xF4BF3E3D7FE56705(&uLocal_246);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 2500, 0);
							unk_0xEBD21A7E2F7F4FE3(0, unk_0x096275889B8E0EE0(), 5000, 0);
							unk_0x82B8B9AEEB7D5048(0, -1156.175f, 4926.073f, 221.3447f, unk_0x096275889B8E0EE0(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 6500, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_246);
							unk_0xD59C10966EB589EA(iLocal_195[13], uLocal_246);
							unk_0x5EC7E18324A7D03D(&uLocal_246);
							unk_0xF4BF3E3D7FE56705(&uLocal_246);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 3000, 0);
							unk_0x82B8B9AEEB7D5048(0, -1157.962f, 4922.196f, 221.309f, unk_0x096275889B8E0EE0(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 5500, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_246);
							unk_0xD59C10966EB589EA(iLocal_195[12], uLocal_246);
							unk_0x5EC7E18324A7D03D(&uLocal_246);
							unk_0xF4BF3E3D7FE56705(&uLocal_246);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xEBD21A7E2F7F4FE3(0, unk_0x096275889B8E0EE0(), 10000, 0);
							unk_0x82B8B9AEEB7D5048(0, -1161.475f, 4916.061f, 220.5658f, unk_0x096275889B8E0EE0(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), 4500, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_246);
							unk_0xD59C10966EB589EA(iLocal_195[11], uLocal_246);
							unk_0x5EC7E18324A7D03D(&uLocal_246);
							unk_0x2AD4789CBFD829EC(iLocal_195[iVar1], 1);
							unk_0x28AC5FC91EA70789(iLocal_195[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_195[iVar1] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x5222F3E172937744(iLocal_195[iVar1], 0);
						unk_0x5F07E4B73A7FA39C(iLocal_195[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x32A582AACCBCAEFE(iLocal_195[iVar1], 50, 1);
						unk_0x34559010D1FB41F8(iLocal_195[iVar1], 2);
						unk_0x40E19C80775FA738(iLocal_195[iVar1], 0);
						unk_0x234C08CC6D013462(iLocal_195[iVar1], 50f, 20);
						unk_0x7FD49ABD4677E015(iLocal_195[iVar1], 1);
						unk_0x162D5BC3EB4F75B0(iLocal_195[iVar1], 5);
						unk_0xE5B6890FA711D462(iLocal_195[iVar1], 100f);
						unk_0xBFC6F67A8A8B15A7(iLocal_195[iVar1], 100f);
						unk_0x2A805ACC9D53F067(iLocal_195[iVar1], unk_0x9C1C462D7B1DD1F9(40, 60));
						unk_0xD46E4661E977AEE0(iLocal_195[iVar1], unk_0x096275889B8E0EE0(), 0, 16);
					}
					unk_0x6ECBACF91786FB7A(iLocal_195[iVar1], uLocal_409);
					unk_0xCF2B9C0645C4651B(iLocal_195[iVar1], func_125(unk_0xA86D5F069399F44D(iLocal_195[iVar1], 1), func_91(unk_0x217E9DC48139933D())));
					unk_0x49876BF356F39E66(iLocal_195[iVar1], 1);
					unk_0x020E173F318C12DA(iLocal_195[iVar1], 42, 1);
					uLocal_228[iVar1] = func_123(iLocal_195[iVar1], 1, 145);
					iVar1++;
				}
				func_95(&uLocal_410, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
				func_95(&uLocal_410, 3, iLocal_195[11], "ACULTMaster", 0, 1);
				func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
				unk_0xF73FBE4845C43B5B(&iVar0, 1);
				unk_0xF73FBE4845C43B5B(&iVar0, 3);
				unk_0xF73FBE4845C43B5B(&iVar0, 4);
				if (!bLocal_171)
				{
					uLocal_215[0] = unk_0xEC57323A2B4BC5EE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[1] = unk_0xEC57323A2B4BC5EE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[2] = unk_0xEC57323A2B4BC5EE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[3] = unk_0xEC57323A2B4BC5EE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_215[0] = uLocal_215[0];
				uLocal_215[1] = uLocal_215[1];
				uLocal_215[2] = uLocal_215[2];
				uLocal_215[3] = uLocal_215[3];
				iLocal_220[0] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_220[1] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_220[2] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_220[3] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_220[4] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_220[5] = unk_0x1A2D7464B1CAA1C8(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x9CC8314DFEDE441E(iLocal_220[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x9CC8314DFEDE441E(iLocal_220[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x9CC8314DFEDE441E(iLocal_220[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x9CC8314DFEDE441E(iLocal_220[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x9CC8314DFEDE441E(iLocal_220[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x9CC8314DFEDE441E(iLocal_220[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_122() < 50)
				{
					unk_0xFDF977D0EBDDCD0D(unk_0x217E9DC48139933D(), 0.5f, 1);
				}
				if (func_121() != 18)
				{
					func_119(18);
				}
				if (!func_88())
				{
					func_108(0);
				}
				func_1(1);
				bLocal_171 = false;
				iLocal_49 = 4;
			}
			break;
	}
}

int func_108(int iParam0)
{
	if (func_113())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_112(Global_97342))
		{
			func_109(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_112(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
		}
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_110(func_111(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_110(func_111(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_110(func_111(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_110(var uParam0, int iParam1)
{
	unk_0x0718552FB84CF252(uParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

char* func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113()
{
	switch (func_114(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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

int func_114(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_118(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_116(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_115(uParam0, iParam4);
		}
	}
	return 2;
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_116(int iParam0)
{
	return func_117(iParam0, Global_34913);
}

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_119(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_61(iParam0);
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_120();
}

void func_120()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

int func_121()
{
	return Global_97342;
}

int func_122()
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0x380F22FED8D528A4(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x380F22FED8D528A4(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x380F22FED8D528A4(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_123(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_37(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_37(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_37(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_125(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x38D5202FF9271C62((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_126()
{
	Global_24679 = 1;
}

int func_127(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xB1417B7F0770096C(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			iVar3 = unk_0x25A48127185991E7(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x505C1A2947610485(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xAF24030046B402EE(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0xA86D5F069399F44D(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	uVar1 = unk_0xA5462846994B7399(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (func_128(iVar2, iVar8) != 0)
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			if (unk_0x351349DC39151635(iParam0, iVar2, func_128(iVar2, iVar8)))
			{
				unk_0x3553394DD033C634(uVar1, func_128(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		if (unk_0xB1417B7F0770096C(iParam0, iVar2, 0))
		{
			unk_0x8F2FDE29D3FE3A84(uVar1, unk_0x26B1ACC30DD36A3E(iParam0, iVar2));
		}
	}
	return uVar1;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_129(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x28DF4CB829FCE36D(iVar1))
					{
						if (unk_0xC287B86B29CEC587(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_129(int iParam0, var uParam1)
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

bool func_130()
{
	bool bVar0;
	
	bVar0 = unk_0x46F500F237D08AC7();
	if (!Global_68244)
	{
		if (!bVar0)
		{
			Global_68244 = 1;
		}
	}
	return bVar0;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_132(iParam0, iParam1);
}

int func_132(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_140(&Global_2544859))
	{
		if (func_138(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_133(&Global_2544859, iParam0))
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

int func_133(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	func_136(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_134(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_135(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_137(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_62), (8f - 0.5f));
}

void func_137(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_138(var uParam0, int iParam1)
{
	return func_139(uParam0, iParam1) != -1;
}

int func_139(var uParam0, int iParam1)
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

bool func_140(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_141()
{
	if (fLocal_182 > 0f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x5E72022914CE3C38())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 >= 0f)
	{
		unk_0xF5B5A5C3C175910D(Global_34036[10 /*31*/], fLocal_182, 0, 1);
		unk_0xD810AFBEB9167309(Global_34036[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 < 0f)
	{
		fLocal_181 = (fLocal_181 + (0.6f / (1f / unk_0x5E72022914CE3C38())));
	}
	else
	{
		fLocal_181 = 0f;
	}
	if (fLocal_181 <= 0f)
	{
		unk_0xF5B5A5C3C175910D(Global_34036[9 /*31*/], fLocal_181, 0, 1);
		unk_0xD810AFBEB9167309(Global_34036[9 /*31*/], 4, 0, 1);
	}
}

void func_142()
{
	if (fLocal_182 < 1f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x5E72022914CE3C38())));
	}
	else
	{
		fLocal_182 = 1f;
	}
	if (fLocal_182 <= 1f)
	{
		unk_0xF5B5A5C3C175910D(Global_34036[10 /*31*/], fLocal_182, 0, 1);
		unk_0xD810AFBEB9167309(Global_34036[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 > -1f)
	{
		fLocal_181 = (fLocal_181 - (0.6f / (1f / unk_0x5E72022914CE3C38())));
	}
	else
	{
		fLocal_181 = -1f;
	}
	if (fLocal_181 >= -1f)
	{
		unk_0xF5B5A5C3C175910D(Global_34036[9 /*31*/], fLocal_181, 0, 1);
		unk_0xD810AFBEB9167309(Global_34036[9 /*31*/], 4, 0, 1);
	}
}

void func_143()
{
	switch (iLocal_188)
	{
		case 0:
			unk_0xFA28FE3A6246FC30(joaat("a_m_o_acult_02"));
			unk_0xFA28FE3A6246FC30(joaat("prop_anim_cash_pile_02"));
			unk_0xA862A2AD321F94B4("random@altruist_cult");
			unk_0x5F2DFC25EF936BAC("AC_DELIVERED");
			unk_0xBCA9E33CE8A0B577(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x1283B8B89DD5D1B6(joaat("a_m_o_acult_02")) && unk_0x1283B8B89DD5D1B6(joaat("prop_anim_cash_pile_02"))) && unk_0x27FF6FE8009B40CA("random@altruist_cult")) && unk_0x5F2DFC25EF936BAC("AC_DELIVERED")) && unk_0x487F2A1C5AAB89EF(joaat("weapon_assaultrifle")))
			{
				if (Global_97353.f_28192.f_5 < 2)
				{
					if (Global_97353.f_28192.f_5 == 0)
					{
						sLocal_408 = "ACULT_HI";
					}
					else
					{
						sLocal_408 = "ACULT_LEAVE5";
					}
					sLocal_402 = "cult_p5_guard";
					sLocal_404 = "cult_p5_trv";
					sLocal_405 = "cult_p5_victim_01";
					sLocal_406 = "cult_p5_victim_02";
					sLocal_407 = "cult_p5_cam";
					fLocal_184 = 0.75f;
					fLocal_183 = 0.999f;
				}
				else if (Global_97353.f_28192.f_5 >= 2)
				{
					sLocal_408 = "ACULT_CAPT";
					sLocal_402 = "cult_p7_guard_01";
					sLocal_403 = "cult_p7_guard_02";
					sLocal_404 = "cult_p7_trv";
					sLocal_405 = "cult_p7_victim_01";
					sLocal_406 = "cult_p7_victim_02";
					sLocal_407 = "cult_p7_cam";
					fLocal_184 = 0.98f;
					fLocal_183 = 0.98f;
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood03a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood04a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood05a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_security_case_01"));
					if (!unk_0x352A58A9B0D09D38())
					{
						unk_0x4C8884536FD957FF("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCD82FA174080B3B1(uLocal_227))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_227);
				}
				func_20(1, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0xD63FE3AF9FB3D53F(0);
				unk_0x1B3DA717B9AFF828(0);
				unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 1);
				unk_0xA1594471C8773FDD(unk_0x096275889B8E0EE0(), joaat("weapon_unarmed"), 1);
				unk_0xF27F981A5EBAEFDB("AC_DELIVERED");
				if (func_163())
				{
					func_162(0);
				}
				func_160();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					uLocal_212 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
					if (unk_0xB86D29B10F627379(uLocal_212, 0))
					{
						if (unk_0x78C3311A73135241(uLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					uLocal_212 = unk_0x2F96E7720B0B19EA();
					if (!unk_0x6CFF81397164A1D3(uLocal_192[0]) && !unk_0x6CFF81397164A1D3(uLocal_192[1]))
					{
						unk_0x0F1ABE64C3C18E5A(uLocal_192[0]);
						unk_0x5BEB6DE8CD28F036(uLocal_192[0]);
						unk_0x0F1ABE64C3C18E5A(uLocal_192[1]);
						unk_0x5BEB6DE8CD28F036(uLocal_192[1]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (unk_0xD42BD6EB2E0F1677(uLocal_212))
			{
				if (!unk_0x138190F64DB4BBD1(iLocal_212))
				{
					unk_0xDC19C288082E586E(iLocal_212, 1, 0);
				}
				if (unk_0x5E58342602E94718(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xF6A103413A202C37(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x7D5B1F88E7504BBA(iLocal_212))
					{
						unk_0xCF2B9C0645C4651B(iLocal_212, 149.8882f);
						unk_0x7263332501E07F52(iLocal_212);
					}
				}
			}
			unk_0x3B882A96EA77D5B1(Local_119, 12f, 1, 0, 0, 0);
			unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 128.2065f);
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]) && !unk_0x6CFF81397164A1D3(uLocal_192[1]))
			{
				unk_0xF6A103413A202C37(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(uLocal_192[0], 128.2065f);
				unk_0xF6A103413A202C37(uLocal_192[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(uLocal_192[1], 128.2065f);
			}
			iLocal_195[0] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_97353.f_28192.f_5 >= 2)
			{
				iLocal_195[1] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_410, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
			func_95(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			unk_0x49876BF356F39E66(iLocal_195[0], 1);
			iLocal_214 = unk_0xA5462846994B7399(joaat("weapon_assaultrifle"), -1, unk_0xA86D5F069399F44D(iLocal_195[0], 1), 1, 1065353216, 0);
			unk_0x1B21CF9397F27FEE(iLocal_214, iLocal_195[0], unk_0xD1E5B4D09626571A(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_97353.f_28192.f_5 < 2)
			{
				uLocal_213 = unk_0x1A2D7464B1CAA1C8(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
				unk_0x1B21CF9397F27FEE(uLocal_213, unk_0x096275889B8E0EE0(), unk_0xD1E5B4D09626571A(unk_0x096275889B8E0EE0(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_97353.f_28192.f_5 >= 2)
			{
				unk_0x5F07E4B73A7FA39C(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = unk_0x4D3B117F889EADDA(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x3605588B4955CFAF(unk_0x096275889B8E0EE0(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3605588B4955CFAF(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_97353.f_28192.f_5 >= 2)
			{
				unk_0x3605588B4955CFAF(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x6E3975B3F6954199(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]) && !unk_0x6CFF81397164A1D3(uLocal_192[1]))
			{
				unk_0x3605588B4955CFAF(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x3605588B4955CFAF(uLocal_192[1], uLocal_187, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[0]))
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x6CFF81397164A1D3(uLocal_192[1]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[1]))
				{
					func_158(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x5D6C0F302EC49A67(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[0]))
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x6CFF81397164A1D3(uLocal_192[1]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[1]))
				{
					func_158(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x5D6C0F302EC49A67(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_97353.f_28192.f_5 < 2)
			{
				func_126();
				if (unk_0xD42BD6EB2E0F1677(iLocal_195[0]))
				{
					unk_0xCC0EF140F99365C5(&(iLocal_195[0]));
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_195[1]))
				{
					unk_0xCC0EF140F99365C5(&(iLocal_195[1]));
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_213))
				{
					unk_0x931914268722C263(&iLocal_213);
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_214))
				{
					unk_0x931914268722C263(&iLocal_214);
				}
				unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
				unk_0x8C7C7FF7CF0E5153(0, 0, 3, 0);
				unk_0x87295BCA613800C8(uLocal_245, 0);
				func_20(0, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				unk_0xD63FE3AF9FB3D53F(1);
				unk_0x1B3DA717B9AFF828(1);
				unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 0);
				unk_0x5D1EB123EAC5D071(0);
				func_144(func_13(), 1, 2000, 0, 0);
			}
			unk_0xF27F981A5EBAEFDB("AC_DONE");
			Global_97353.f_28192.f_5 += 2;
			iLocal_173 = 1;
			break;
	}
}

void func_144(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_145(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_157();
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
					func_156(99, 1);
					func_155(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_153(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_152(5))
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
							func_155(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_152(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_155(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_property"), iParam3);
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
									func_155(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_152(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_151(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_156(95, iParam3);
					break;
				
				case 1:
					func_156(97, iParam3);
					break;
				
				case 2:
					func_156(96, iParam3);
					break;
			}
			func_156(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_148(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_148(iVar1);
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
					func_155(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_total_cash_earned"), iParam3);
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
	func_147(iParam0);
	if (Global_34913 == 15)
	{
		func_146(0);
	}
	return 1;
}

void func_146(bool bParam0)
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

void func_147(int iParam0)
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

void func_148(int iParam0)
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
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_150() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_150() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_149(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_149(int iParam0)
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

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_151(int iParam0)
{
	func_156(93, iParam0);
	func_156(29, iParam0);
	func_156(30, iParam0);
}

bool func_152(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_150() /*8053*/].f_5756.f_10, iParam0);
}

int func_153(bool bParam0)
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
		func_154(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_131(27, 1);
	return 1;
}

int func_154(int iParam0, int iParam1)
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

void func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_156(int iParam0, int iParam1)
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

void func_157()
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

void func_158(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(uParam0, sParam1, sParam2, func_159(iParam3), 0);
}

int func_159(int iParam0)
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

void func_160()
{
	Global_14558 = 0;
	func_161();
}

void func_161()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

void func_162(int iParam0)
{
	Global_16703 = iParam0;
}

int func_163()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_164()
{
	switch (iLocal_188)
	{
		case 0:
			unk_0xFA28FE3A6246FC30(joaat("a_m_o_acult_02"));
			unk_0xFA28FE3A6246FC30(joaat("prop_anim_cash_pile_02"));
			unk_0xA862A2AD321F94B4("random@altruist_cult");
			unk_0x5F2DFC25EF936BAC("AC_DELIVERED");
			unk_0xBCA9E33CE8A0B577(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x1283B8B89DD5D1B6(joaat("a_m_o_acult_02")) && unk_0x1283B8B89DD5D1B6(joaat("prop_anim_cash_pile_02"))) && unk_0x27FF6FE8009B40CA("random@altruist_cult")) && unk_0x5F2DFC25EF936BAC("AC_DELIVERED")) && unk_0x487F2A1C5AAB89EF(joaat("weapon_assaultrifle")))
			{
				if (Global_97353.f_28192.f_5 == 0)
				{
					sLocal_408 = "ACULT_HI";
					sLocal_402 = "cult_p2_guard";
					sLocal_404 = "cult_p2_trv";
					sLocal_405 = "cult_p2_victim";
					sLocal_407 = "cult_p2_cam";
					fLocal_184 = 0.8f;
					fLocal_183 = 0.968f;
				}
				else if (Global_97353.f_28192.f_5 == 1)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_97353.f_28192.f_5 == 2)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_97353.f_28192.f_5 >= 3)
				{
					sLocal_408 = "ACULT_CAPT";
					sLocal_402 = "cult_p7_guard_01";
					sLocal_403 = "cult_p7_guard_02";
					sLocal_404 = "cult_p7_trv";
					sLocal_405 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_cam";
					fLocal_184 = 0.98f;
					fLocal_183 = 0.98f;
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood03a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood04a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_box_wood05a"));
					unk_0xFA28FE3A6246FC30(joaat("prop_security_case_01"));
					if (!unk_0x352A58A9B0D09D38())
					{
						unk_0x4C8884536FD957FF("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCD82FA174080B3B1(uLocal_227))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_227);
				}
				func_20(1, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0xD63FE3AF9FB3D53F(0);
				unk_0x1B3DA717B9AFF828(0);
				unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 1);
				unk_0xA1594471C8773FDD(unk_0x096275889B8E0EE0(), joaat("weapon_unarmed"), 1);
				unk_0xF27F981A5EBAEFDB("AC_DELIVERED");
				if (func_163())
				{
					func_162(0);
				}
				func_160();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					iLocal_212 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
					if (unk_0xB86D29B10F627379(iLocal_212, 0))
					{
						if (unk_0x78C3311A73135241(iLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					iLocal_212 = unk_0x2F96E7720B0B19EA();
					if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
					{
						unk_0x0F1ABE64C3C18E5A(uLocal_192[0]);
						unk_0x5BEB6DE8CD28F036(uLocal_192[0]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (unk_0xD42BD6EB2E0F1677(iLocal_212))
			{
				if (!unk_0x138190F64DB4BBD1(iLocal_212))
				{
					unk_0xDC19C288082E586E(iLocal_212, 1, 0);
				}
				if (unk_0x5E58342602E94718(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xF6A103413A202C37(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x7D5B1F88E7504BBA(iLocal_212))
					{
						unk_0xCF2B9C0645C4651B(iLocal_212, 149.8882f);
						unk_0x7263332501E07F52(iLocal_212);
					}
				}
			}
			unk_0x3B882A96EA77D5B1(Local_119, 12f, 1, 0, 0, 0);
			unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 128.2065f);
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				unk_0xF6A103413A202C37(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(uLocal_192[0], 128.2065f);
			}
			iLocal_195[0] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_97353.f_28192.f_5 >= 3)
			{
				iLocal_195[1] = unk_0x9066DFD4D92E6773(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_410, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
			func_95(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			if (Global_97353.f_28192.f_5 != 1 && Global_97353.f_28192.f_5 != 2)
			{
				func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x49876BF356F39E66(iLocal_195[0], 1);
			iLocal_213 = unk_0x1A2D7464B1CAA1C8(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
			iLocal_214 = unk_0xA5462846994B7399(joaat("weapon_assaultrifle"), -1, unk_0xA86D5F069399F44D(iLocal_195[0], 1), 1, 1065353216, 0);
			unk_0x1B21CF9397F27FEE(iLocal_214, iLocal_195[0], unk_0xD1E5B4D09626571A(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_97353.f_28192.f_5 < 3)
			{
				if (Global_97353.f_28192.f_5 == 0)
				{
					unk_0x1B21CF9397F27FEE(iLocal_213, unk_0x096275889B8E0EE0(), unk_0xD1E5B4D09626571A(unk_0x096275889B8E0EE0(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x1B21CF9397F27FEE(iLocal_213, unk_0x096275889B8E0EE0(), unk_0xD1E5B4D09626571A(unk_0x096275889B8E0EE0(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_97353.f_28192.f_5 >= 3)
			{
				unk_0x5F07E4B73A7FA39C(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = unk_0x4D3B117F889EADDA(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x3605588B4955CFAF(unk_0x096275889B8E0EE0(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3605588B4955CFAF(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_97353.f_28192.f_5 >= 3)
			{
				unk_0x3605588B4955CFAF(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x6E3975B3F6954199(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				unk_0x3605588B4955CFAF(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[0]))
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_97353.f_28192.f_5 == 1 || Global_97353.f_28192.f_5 == 2)
				{
					if (!func_106())
					{
						func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x5D6C0F302EC49A67(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!unk_0x6CFF81397164A1D3(uLocal_192[0]))
			{
				if (unk_0xD275D621ABBB1F83(uLocal_192[0]))
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_158(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_97353.f_28192.f_5 == 1 || Global_97353.f_28192.f_5 == 2)
			{
				if ((unk_0x5D6C0F302EC49A67(uLocal_187) > 0.9742857f && !iLocal_180) && unk_0x420537F38720164C() == 4)
				{
					unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
					unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_180 = 1;
				}
			}
			if (unk_0x5D6C0F302EC49A67(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_97353.f_28192.f_5 < 3)
			{
				if (Global_97353.f_28192.f_5 != 1 && Global_97353.f_28192.f_5 != 2)
				{
					func_126();
					if (unk_0xD42BD6EB2E0F1677(iLocal_195[0]))
					{
						unk_0xCC0EF140F99365C5(&(iLocal_195[0]));
					}
					if (unk_0xD42BD6EB2E0F1677(iLocal_195[1]))
					{
						unk_0xCC0EF140F99365C5(&(iLocal_195[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0xD42BD6EB2E0F1677(iLocal_195[0]))
					{
						unk_0x1794B4FCC84D812F(iLocal_195[0], 0);
					}
					if (unk_0xD42BD6EB2E0F1677(iLocal_195[1]))
					{
						unk_0x1794B4FCC84D812F(iLocal_195[1], 0);
					}
					if (unk_0xD42BD6EB2E0F1677(uLocal_192[0]))
					{
						unk_0x1794B4FCC84D812F(uLocal_192[0], 0);
					}
					iLocal_188++;
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_213))
				{
					unk_0x931914268722C263(&iLocal_213);
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_214))
				{
					unk_0x931914268722C263(&iLocal_214);
				}
				unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
				if (Global_97353.f_28192.f_5 == 0)
				{
					unk_0x701D6D68FC656B34(unk_0x096275889B8E0EE0(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xFA0C063C422C4355(unk_0x217E9DC48139933D(), 1f, 750, 0, 1, 0);
				}
				if (unk_0xD3852F22AB713A1F(sLocal_407, "cult_p4_cam"))
				{
					unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x8C7C7FF7CF0E5153(0, 0, 3, 0);
				}
				unk_0x87295BCA613800C8(uLocal_245, 0);
				func_20(0, 1, 1, 0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				unk_0xD63FE3AF9FB3D53F(1);
				unk_0x1B3DA717B9AFF828(1);
				unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 0);
				unk_0x5D1EB123EAC5D071(0);
				func_144(func_13(), 1, 1000, 0, 0);
			}
			if (Global_97353.f_28192.f_5 != 1 && Global_97353.f_28192.f_5 != 2)
			{
				unk_0xF27F981A5EBAEFDB("AC_DONE");
				Global_97353.f_28192.f_5++;
				iLocal_173 = 1;
			}
			break;
		
		case 5:
			if (!func_106() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_126();
				if (unk_0xD42BD6EB2E0F1677(iLocal_195[0]))
				{
					unk_0xCC0EF140F99365C5(&(iLocal_195[0]));
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_195[1]))
				{
					unk_0xCC0EF140F99365C5(&(iLocal_195[1]));
				}
				unk_0xF27F981A5EBAEFDB("AC_DONE");
				Global_97353.f_28192.f_5++;
				iLocal_173 = 1;
			}
			break;
	}
}

void func_165()
{
	if (func_167())
	{
		if (func_13() == 2)
		{
			if (unk_0x5D085A9158C4D28E(func_166()))
			{
				unk_0xA252C5DDC6E887E0(func_166(), &uLocal_185, &iLocal_186);
				if (iLocal_186 == 1)
				{
					uLocal_192[0] = unk_0x1127092C9BC73D5C(func_166(), 0);
					if (unk_0x5E58342602E94718(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
						{
							if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
							{
								unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 1;
					}
				}
				else if (iLocal_186 == 2)
				{
					uLocal_192[0] = unk_0x1127092C9BC73D5C(func_166(), 0);
					uLocal_192[1] = unk_0x1127092C9BC73D5C(func_166(), 1);
					if (unk_0x5E58342602E94718(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0) && unk_0x5E58342602E94718(uLocal_192[1], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
						{
							if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
							{
								unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 1;
					}
				}
			}
		}
	}
}

var func_166()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

bool func_167()
{
	return Global_24678;
}

void func_168()
{
	if (func_171())
	{
		if (iLocal_399 == 0)
		{
			iLocal_399 = unk_0x55686F8055FF786B(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x0BE7F4E3CDBAFB28(func_91(unk_0x217E9DC48139933D()), Local_116, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0x5BB1B37E1F62BA3C(2017343592, joaat("player")) != 5)
		{
			if (func_170())
			{
				unk_0x9E0FEFE102840007(5, 2017343592, joaat("player"));
			}
			else if (func_169())
			{
				unk_0x9E0FEFE102840007(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0x5BB1B37E1F62BA3C(2017343592, joaat("player")) != 5)
		{
			if (func_170())
			{
				if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()) || (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()) && unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D())))
				{
					unk_0x9E0FEFE102840007(5, 2017343592, joaat("player"));
				}
			}
			else if (func_169())
			{
				unk_0x9E0FEFE102840007(5, 2017343592, joaat("player"));
			}
			else if (unk_0x5BB1B37E1F62BA3C(2017343592, joaat("player")) != 1)
			{
				unk_0x9E0FEFE102840007(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_170())
	{
		if (iLocal_178)
		{
			if (!unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 3))
			{
				unk_0xF27F981A5EBAEFDB("AC_START");
			}
			unk_0xD7FA719CB54866C2(0f);
			unk_0x4298FEFC65883759("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x1C168182BEBE2DDA(Global_34036[9 /*31*/].f_2, 6f, Global_34036[9 /*31*/].f_5, 0))
			{
				unk_0x9162718D723FEDDB(Global_34036[9 /*31*/].f_5, Global_34036[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x1C168182BEBE2DDA(Global_34036[10 /*31*/].f_2, 6f, Global_34036[10 /*31*/].f_5, 0))
			{
				unk_0x9162718D723FEDDB(Global_34036[10 /*31*/].f_5, Global_34036[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_179 = true;
			iLocal_178 = 0;
		}
	}
	else if (!iLocal_178)
	{
		if (unk_0x5629BDDB722C888A())
		{
			unk_0xF27F981A5EBAEFDB("AC_END");
		}
		unk_0xD7FA719CB54866C2(1f);
		unk_0x4298FEFC65883759("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_179)
		{
			func_141();
		}
		iLocal_178 = 1;
	}
}

int func_169()
{
	if ((((((unk_0x9D09D8493747CF02(Local_122, Local_125, fLocal_128, 1) || unk_0x9D09D8493747CF02(Local_129, Local_132, fLocal_135, 1)) || unk_0x9D09D8493747CF02(Local_136, Local_139, fLocal_142, 1)) || unk_0x9D09D8493747CF02(Local_143, Local_146, fLocal_149, 1)) || unk_0x9D09D8493747CF02(Local_150, Local_153, fLocal_156, 1)) || unk_0x9D09D8493747CF02(Local_157, Local_160, fLocal_163, 1)) || unk_0x9D09D8493747CF02(Local_164, Local_167, fLocal_170, 1))
	{
		return 1;
	}
	return 0;
}

int func_170()
{
	if ((((((unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_122, Local_125, fLocal_128, 0, 1, 0) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_129, Local_132, fLocal_135, 0, 1, 0)) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_136, Local_139, fLocal_142, 0, 1, 0)) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_143, Local_146, fLocal_149, 0, 1, 0)) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_150, Local_153, fLocal_156, 0, 1, 0)) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_157, Local_160, fLocal_163, 0, 1, 0)) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_164, Local_167, fLocal_170, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if (Global_97353.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	unk_0x9E0FEFE102840007(255, 2017343592, joaat("player"));
	if (Global_97353.f_28192.f_5 >= iLocal_191 && Global_97353.f_28192.f_5 != 1000)
	{
		if (bLocal_171)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_49 = 3;
		}
		else
		{
			func_173(&uLocal_248);
			Global_85624 = 0;
			Global_85625 = 0;
			Global_85626 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0x2552D675C0051FED(1);
			unk_0x66AB6B6C7E72F393(0);
			unk_0x6C9FF40FF1B69F8F(0);
			func_3(0);
			unk_0xD7FA719CB54866C2(1f);
			unk_0x50E52637EF70EF77(3, 1);
			unk_0x50E52637EF70EF77(5, 1);
			unk_0xD85DFE5C131E4AE9();
			iLocal_178 = 0;
			func_92();
			Global_97353.f_28192.f_5 = (iLocal_191 - 1);
			unk_0x5E8B6D17FF91CD59();
		}
	}
	else
	{
		unk_0x7E42B5424BF0E844();
		func_173(&uLocal_248);
		Global_85624 = 0;
		Global_85625 = 0;
		Global_85626 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0x2552D675C0051FED(1);
		unk_0x66AB6B6C7E72F393(0);
		unk_0x6C9FF40FF1B69F8F(0);
		func_3(0);
		if (unk_0x64BAE9BE701E6C19(uLocal_398))
		{
			unk_0x6215C0F9FFF76BAD(&uLocal_398);
			func_94(0);
		}
		unk_0xD7FA719CB54866C2(1f);
		unk_0x50E52637EF70EF77(3, 1);
		unk_0x50E52637EF70EF77(5, 1);
		unk_0xD85DFE5C131E4AE9();
		iLocal_178 = 0;
		unk_0x5E8B6D17FF91CD59();
	}
}

void func_173(var uParam0)
{
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		unk_0x6215C0F9FFF76BAD(uParam0);
		*uParam0 = 0;
	}
}


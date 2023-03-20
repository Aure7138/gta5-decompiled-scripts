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
	if (unk_0x2C897F101BA20806(26))
	{
		func_175();
	}
	if (unk_0x8CC9088AB719BE3C())
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFEC6476AFCF2033F() || iLocal_172)
		{
			unk_0xABC4F2A6D7D56CF4(0f);
			switch (iLocal_49)
			{
				case 0:
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (Global_97439.f_28192.f_5 >= iLocal_191 && !func_174())
						{
							iLocal_49 = 2;
						}
						func_171();
						func_168();
					}
					break;
				
				case 1:
					unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_186 == 1)
							{
								func_167();
							}
							else if (iLocal_186 == 2)
							{
								func_146();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_188 < 3)
							{
								func_145();
							}
							else
							{
								func_144();
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
					unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						func_107();
					}
					unk_0x3A73A1FCDAD1D6BE(Global_34038[9 /*31*/], 0, 0, 1);
					unk_0x3A73A1FCDAD1D6BE(Global_34038[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						iLocal_49 = 3;
						break;
					}
					bLocal_174 = false;
					unk_0xABC4F2A6D7D56CF4(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_195)
					{
						if (unk_0x2DE0B96E966FD817(iLocal_195[iVar0]))
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_228[iVar0]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_228[iVar0]));
							}
						}
						else
						{
							if (unk_0x66BD1491DC10ECA5(iLocal_195[iVar0]))
							{
								if (unk_0x5660C8AFDD9C1721(uLocal_228[iVar0]))
								{
									unk_0xB6FB9702660D84F6(&(uLocal_228[iVar0]));
								}
							}
							else if (unk_0x14F9932776F21CC2(iLocal_195[iVar0], unk_0xA16EC202D9D35357(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_106())
								{
									if (iLocal_190 < unk_0x09560C7DE2A384BD())
									{
										iVar1 = unk_0x444ECD635D5FD45F(0, 3);
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
										iLocal_190 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(4500, 6000));
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
						if (!unk_0xC8378A96673BCC40(uLocal_248))
						{
							break;
						}
						func_57(&uLocal_253, 0);
						iLocal_172 = 1;
					}
					if (func_28(&uLocal_253, &uLocal_259, &uLocal_248, cLocal_400, sLocal_401, &bLocal_171, 78))
					{
						iLocal_189 = 0;
						unk_0x101360578835A5F9(uLocal_409);
						unk_0x139F2006DBF4F606(uLocal_247);
						iVar0 = 0;
						while (iVar0 < iLocal_195)
						{
							if (unk_0x538DF9E5B1DF01EB(iLocal_195[iVar0]))
							{
								unk_0x51A89CCC8A5317D0(&(iLocal_195[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_220)
						{
							if (unk_0x538DF9E5B1DF01EB(iLocal_220[iVar0]))
							{
								unk_0xD4C90F16EBBFE620(&(iLocal_220[iVar0]));
							}
							iVar0++;
						}
						if (unk_0xBAB691F99A2A7346(uLocal_245))
						{
							unk_0xC8CEF95C63B283EC(uLocal_245, 0);
						}
						if (unk_0x538DF9E5B1DF01EB(uLocal_214))
						{
							unk_0xD4C90F16EBBFE620(&uLocal_214);
						}
						if (unk_0x538DF9E5B1DF01EB(uLocal_214))
						{
							unk_0xD4C90F16EBBFE620(&uLocal_214);
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
							func_175();
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
			func_175();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD670C618E827153C(0);
		unk_0xEFDB2ECE44F69921(1);
		unk_0x55904BA1B8D77456(0);
		func_2(1);
		Global_85705 = 1;
	}
	else
	{
		unk_0xD670C618E827153C(1);
		unk_0xEFDB2ECE44F69921(0);
		unk_0x55904BA1B8D77456(1);
		func_2(0);
		Global_85705 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_34915 == 9 || Global_34915 == 10) || Global_34915 == 5)
	{
		Global_96090 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_96090 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14552)
	{
		func_6(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_5())
	{
		Global_14394.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
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
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
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
		unk_0xDF3B1A0343547226("DeathFailOut", 0, 0);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_47, 1);
		func_11(1, 2, 0);
		unk_0xA538E75E1DCAD952(2);
	}
	else
	{
		if (unk_0x889D01384B54BCE3(iLocal_47, 1) || iParam1)
		{
			unk_0xBB74A3D7C0228EBE("DeathFailOut");
			func_11(0, 2, 1);
			unk_0xA538E75E1DCAD952(0);
		}
		unk_0x29DB79DD4D939B38(&iLocal_47, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&iLocal_47, 2);
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (iParam1 == 1)
			{
				unk_0x4A4C49D89D07255A(0.2f);
			}
			else
			{
				unk_0x4A4C49D89D07255A(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x889D01384B54BCE3(iLocal_47, 2) || iParam2)
		{
			if (!unk_0x1DAD7CE53BEE7710())
			{
				unk_0x4A4C49D89D07255A(1f);
			}
		}
		unk_0x29DB79DD4D939B38(&iLocal_47, 2);
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
		if (!unk_0x889D01384B54BCE3(iLocal_47, 0) || iParam1)
		{
			unk_0xDF3B1A0343547226(sVar0, 0, 0);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_47, 0);
			func_11(1, 1, 0);
			unk_0xA538E75E1DCAD952(1);
		}
	}
	else
	{
		if (unk_0x889D01384B54BCE3(iLocal_47, 0) || iParam1)
		{
			unk_0xBB74A3D7C0228EBE(sVar0);
			func_11(0, 1, 1);
			unk_0xA538E75E1DCAD952(0);
		}
		unk_0x29DB79DD4D939B38(&iLocal_47, 0);
	}
}

int func_13()
{
	func_14();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_18(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_17(unk_0xA16EC202D9D35357());
			if (func_16(iVar0) && (!func_15(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_16(Global_97439.f_1729.f_539.f_3213))
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

bool func_15(int iParam0)
{
	return Global_34915 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_27(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_5())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_26(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_27(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_26(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_21(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
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
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312729;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

int func_28(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x3EF2F05E6EA65602("DEATH_SCENE");
			unk_0xC2E1777941B4536E(-1, "ScreenFlash", "WastedSounds", 1);
			func_56(&(uParam0->f_1));
			func_19();
			func_55(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xD2238E59B5C4A250(1);
			break;
		
		case 1:
			if (func_53() || unk_0xF4C685E933068D23())
			{
				*uParam0 = 2;
			}
			if (!func_52(uParam0->f_4, 4))
			{
				if (unk_0x45B7DFCE888B2A02("OFFMISSION_WASTED", 0))
				{
					unk_0xC2E1777941B4536E(-1, "Bed", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_52(uParam0->f_4, 2))
				{
					unk_0xC2E1777941B4536E(-1, "TextHit", "WastedSounds", 1);
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
					unk_0xAD2717628F454E58(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xD2238E59B5C4A250(0);
				unk_0xEFDB2ECE44F69921(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				unk_0xD670C618E827153C(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0x124843CE93F39C27("DEATH_SCENE");
				unk_0xD2238E59B5C4A250(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2238E59B5C4A250(0);
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
			if (!unk_0xF4C685E933068D23() || unk_0xE9A5FF67266655B2())
			{
				unk_0x271524E4281048DC(2500);
			}
			if (bParam9)
			{
				unk_0xD2238E59B5C4A250(1);
			}
			unk_0x4A4C49D89D07255A(0.2f);
			if (func_49(iParam5, 4))
			{
				if (unk_0x45B7DFCE888B2A02("generic_failed", 0))
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
			unk_0xB067107D878E9585(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0xEBC0B3BDAD1250BE("STRING");
			unk_0x61329A2F1E63248B(6);
			unk_0x4498E0CBD76B2D72(uParam2);
			unk_0x9F94C7B5E8C04AB3();
			func_48(sParam3);
			unk_0x26221D1D76579618(100);
			unk_0xF34EF2C628F5B47B(true);
			unk_0x8CB1A9AD2F4E2E1D();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xB067107D878E9585(*uParam0, "TRANSITION_UP");
					unk_0x50050D925C27B388(uParam1->f_134);
					unk_0xD3DF251F2DF3B257();
					uParam1->f_136 = 1;
				}
			}
			if (!func_49(iParam5, 1))
			{
				unk_0x227ACB0C6A599C94(0);
			}
			func_47(&(uParam1->f_10), 0, 1, 1, 1);
			func_46(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_46(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_49(iParam5, 4))
			{
				unk_0xC2E1777941B4536E(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_49(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0xDF3B1A0343547226("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xDF3B1A0343547226("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xDF3B1A0343547226("MinigameEndTrevor", 500, 0);
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
			unk_0xCDDA76A8EADDFCB7();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xB067107D878E9585(*uParam0, "TRANSITION_UP");
					unk_0x50050D925C27B388(uParam1->f_134);
					unk_0xD3DF251F2DF3B257();
					uParam1->f_136 = 1;
				}
			}
			unk_0xFA5652FA48ED466D(iParam6);
			func_42(uParam0, 0, 0);
			if (!func_49(iParam5, 16) && (func_40(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xF4C685E933068D23()))
			{
				func_34(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x6FCAB92159B80585();
				if (unk_0x51104159A21A8E40(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xC2E1777941B4536E(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xC2DB8E33D5B6FE21(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x51104159A21A8E40(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xC2E1777941B4536E(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xC2DB8E33D5B6FE21(0);
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
					unk_0xC2E1777941B4536E(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0xC2DB8E33D5B6FE21(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_42(uParam0, 0, 0);
			unk_0x4A4C49D89D07255A(1f);
			if (uParam1->f_138 || !((unk_0x9BA82E09A986BA4B("stunt_plane_races", unk_0x7E5A426328F6E635()) || unk_0x9BA82E09A986BA4B("pilot_school", unk_0x7E5A426328F6E635())) || (unk_0x9BA82E09A986BA4B("bj", unk_0x7E5A426328F6E635()) && unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))))
			{
				unk_0x5FE2A83120E8127F(2500);
			}
			if (func_49(iParam5, 64) && uParam1->f_138)
			{
				unk_0x271524E4281048DC(500);
			}
			func_30(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xD2238E59B5C4A250(0);
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
	uParam0->f_1 = (func_32(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

void func_33(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x7559DFAB61B017F2(uParam0);
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
	
	if (((unk_0xE9A5FF67266655B2() || unk_0x0FFB470AFBDA3DCD()) || unk_0xF4C685E933068D23()) || unk_0xD8FED4345E7C9A31())
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
	unk_0xCDDA76A8EADDFCB7();
	unk_0xFA5652FA48ED466D(uParam2);
	if (!func_49(uParam0->f_1, 256) || (func_49(uParam0->f_1, 8192) && unk_0xABDBD87CEACB4A79(2)))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_CLEAR_SPACE");
		unk_0x50050D925C27B388(fParam1);
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(*uParam0, "SET_MAX_WIDTH");
		unk_0x50050D925C27B388(fParam5);
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD3DF251F2DF3B257();
		if (unk_0xF6BAF9F0C2863FFE())
		{
			unk_0xB067107D878E9585(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF34EF2C628F5B47B(func_49(uParam0->f_1, 4096));
			unk_0xD3DF251F2DF3B257();
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
					bVar4 = unk_0x3E512F3AB14225D6(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3E512F3AB14225D6(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xB067107D878E9585(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x26221D1D76579618(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x889D01384B54BCE3(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x889D01384B54BCE3(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xA71FB26FF9682F08(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x8766516556CDFB2B(uVar0, uVar1, bVar2);
						}
						if (!unk_0x06771AF7795B3ECF(uVar3))
						{
							func_38(uVar3);
						}
						iVar7++;
					}
					if (!unk_0x06771AF7795B3ECF(uParam0->f_2[iVar6 /*15*/]))
					{
						func_48(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xF6BAF9F0C2863FFE())
					{
						if (func_49(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xF34EF2C628F5B47B(true);
								unk_0x26221D1D76579618(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xF34EF2C628F5B47B(false);
								unk_0x26221D1D76579618(-1);
							}
						}
					}
					unk_0xD3DF251F2DF3B257();
				}
			}
			iVar6++;
		}
		fVar8 = func_37(bParam4, func_37(func_49(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xB067107D878E9585(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x50050D925C27B388(fVar8);
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x50050D925C27B388(0f);
		unk_0x50050D925C27B388(0f);
		unk_0x50050D925C27B388(0f);
		unk_0x50050D925C27B388(80f);
		unk_0xD3DF251F2DF3B257();
		func_36(&(uParam0->f_1), 256);
		func_35(&(uParam0->f_1), 128);
	}
	unk_0x27BDF28219C810BA(*uParam0, 255, 255, 255, 0, 0);
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
	unk_0xB51F3A5C13620EE6(uParam0);
}

int func_39(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xC8378A96673BCC40(*uParam0))
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
			return (func_32(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_41(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

int func_42(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_45(&(uParam0->f_2)))
	{
		func_30(&(uParam0->f_2));
	}
	unk_0x8A5A9834DB717F2D(14);
	if (!bParam2)
	{
		unk_0x27BDF28219C810BA(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x27BDF28219C810BA(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF49761626882E968(2, 201))
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
	return unk_0x889D01384B54BCE3(*uParam0, 1);
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
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
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
		*uParam0 = unk_0x2E5E58125B94372A("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_36(&(uParam0->f_1), 32);
	}
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		func_36(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x79B19C97D02C8EFE(*uParam0, 1);
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
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
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
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
	if (!unk_0x889D01384B54BCE3(iLocal_47, 0) && !unk_0x889D01384B54BCE3(iLocal_47, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_12(1, 0);
	}
	if (!unk_0xEC35DAD55FA4EEF2())
	{
		unk_0xEDC11454B9658FE1();
	}
	unk_0x4B404C739A9AFC7A(2, 199, 1);
	unk_0x4B404C739A9AFC7A(0, 59, 1);
	unk_0x4B404C739A9AFC7A(0, 60, 1);
	unk_0x4B404C739A9AFC7A(0, 37, 1);
	unk_0x4B404C739A9AFC7A(0, 25, 1);
	unk_0x01FED3671B25937E();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_47, 1))
		{
			func_10(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xF4C685E933068D23())
		{
			if (!unk_0xF4C685E933068D23())
			{
				if (!unk_0xE9A5FF67266655B2())
				{
					unk_0x271524E4281048DC(1500);
				}
			}
			else if (iLocal_48 == 0)
			{
				iLocal_48 = unk_0x09560C7DE2A384BD() + 1000;
				if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0x7CBBF9BA910F2776(0);
				unk_0x6D3415E3359E75CB(0);
				unk_0xFD1E0AEC770DAF2E(1);
				unk_0xEDC11454B9658FE1();
				if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				}
				func_12(0, 0);
				func_54(0);
			}
			else if (unk_0x09560C7DE2A384BD() < iLocal_48)
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
			if (!unk_0x889D01384B54BCE3(iLocal_47, 3))
			{
				unk_0x8D033DA6320BDCF9(1);
				unk_0xD0E2BFCE93AE3ABD(&iLocal_47, 3);
			}
		}
		else if (unk_0x889D01384B54BCE3(iLocal_47, 3))
		{
			unk_0x8D033DA6320BDCF9(0);
			unk_0x29DB79DD4D939B38(&iLocal_47, 3);
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
	unk_0x45B7DFCE888B2A02("OFFMISSION_WASTED", 0);
}

var func_58()
{
	return unk_0x36ECDA4DD9A3F08D("MP_BIG_MESSAGE_FREEMODE");
}

void func_59()
{
	if (!iLocal_175)
	{
		unk_0x4F5F5BF0722DFDC2("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_97439.f_28192.f_5 = 1000;
		unk_0xB8615B27EDB1B2FA(64);
		Global_97439.f_23789.f_472 = 54;
		uLocal_398 = unk_0x36ECDA4DD9A3F08D("MIDSIZED_MESSAGE");
		func_94(1);
		while (!unk_0xC8378A96673BCC40(uLocal_398))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB067107D878E9585(uLocal_398, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_48("CULT_PASS");
		unk_0x8CB1A9AD2F4E2E1D();
		while (!func_93())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_92();
		unk_0xC1B1E9A034A63A62(0);
		unk_0xC2E1777941B4536E(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_175 = 1;
	}
	unk_0x27BDF28219C810BA(uLocal_398, 255, 255, 255, 255, 0);
	if (!iLocal_177)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0xB067107D878E9585(uLocal_398, "SHARD_ANIM_OUT");
			unk_0x26221D1D76579618(1);
			unk_0x50050D925C27B388(0.33f);
			unk_0xD3DF251F2DF3B257();
			iLocal_177 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0xC8378A96673BCC40(uLocal_398))
		{
			unk_0x7559DFAB61B017F2(&uLocal_398);
			func_94(0);
		}
		while (unk_0x4970185D4CC64616(func_91(unk_0x1788E93557766241()), Local_116, 1) < 209f && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_60(18);
		func_175();
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
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_65(30000);
		StringCopy(&cVar0, func_64(Global_97428, 1), 64);
		if (func_63(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_62(&Global_24505);
	Global_97429 = 0;
	func_61(-1);
}

void func_61(int iParam0)
{
	Global_97428 = iParam0;
}

void func_62(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
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
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_70(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
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
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
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
	
	func_84(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_83(&uVar0, unk_0x26ADBF0B08315387());
	func_82(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_81(&uVar0, unk_0xA3730885141EEA96());
	func_80(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_79(&uVar0, unk_0x4C29EAF01B84254C());
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
	if ((Global_97428 == func_89() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_90(Var0);
	return uVar16;
}

int func_90(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

void func_92()
{
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

int func_93()
{
	return 1;
}

void func_94(int iParam0)
{
	Global_68585 = iParam0;
	Global_68586 = iParam0;
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_97(sParam2, iParam3, 0);
}

int func_97(char* sParam0, int iParam1, bool bParam2)
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
					func_104();
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
		if (func_103(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_102();
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
				func_101();
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
				if (func_100())
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
			if (func_5())
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
			func_99();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_98();
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_99()
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

int func_100()
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

void func_101()
{
	if (func_15(14))
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
		Global_14394 = func_13();
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

void func_102()
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

bool func_103(int iParam0, int iParam1)
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

void func_104()
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

void func_105(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

int func_106()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
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
			unk_0x6FFCDB4A75885B93("THUNDER", 20f);
			if (!unk_0x326BF57075FB3421())
			{
				unk_0x752468956AA26EF0("ac_ig_3_p3_b", 8);
			}
			unk_0x939DA7EBCC6588FF(joaat("a_m_o_acult_02"));
			unk_0x939DA7EBCC6588FF(joaat("a_m_y_acult_02"));
			unk_0x939DA7EBCC6588FF(joaat("prop_box_wood03a"));
			unk_0x939DA7EBCC6588FF(joaat("prop_box_wood04a"));
			unk_0x939DA7EBCC6588FF(joaat("prop_box_wood05a"));
			unk_0x939DA7EBCC6588FF(joaat("prop_security_case_01"));
			while ((((((!func_130() || !unk_0x5494F37F35C1D7D7(joaat("a_m_o_acult_02"))) || !unk_0x5494F37F35C1D7D7(joaat("a_m_y_acult_02"))) || !unk_0x5494F37F35C1D7D7(joaat("prop_box_wood03a"))) || !unk_0x5494F37F35C1D7D7(joaat("prop_box_wood04a"))) || !unk_0x5494F37F35C1D7D7(joaat("prop_box_wood05a"))) || !unk_0x5494F37F35C1D7D7(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_575 = func_127(unk_0xA16EC202D9D35357(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
			if (unk_0x538DF9E5B1DF01EB(uLocal_575))
			{
				unk_0x574BF3D848332F6A(iLocal_575, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x574BF3D848332F6A(0, "Rifle_Mag1^1", 3, unk_0x622DA41603CEDDB2(joaat("component_assaultrifle_clip_01")), 0);
			if (func_130() && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0x574BF3D848332F6A(unk_0xA16EC202D9D35357(), "TREVOR", 0, 0, 0);
				unk_0x574BF3D848332F6A(iLocal_195[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x574BF3D848332F6A(iLocal_195[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x574BF3D848332F6A(iLocal_195[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x574BF3D848332F6A(iLocal_195[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x574BF3D848332F6A(iLocal_195[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xEA4B8437C8E2CA24(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_171 && Global_97439.f_28192.f_5 != 1000)
			{
				func_126();
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_195[0]))
			{
				unk_0x51A89CCC8A5317D0(&(iLocal_195[0]));
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_195[1]))
			{
				unk_0x51A89CCC8A5317D0(&(iLocal_195[1]));
			}
			if (unk_0xBAB691F99A2A7346(uLocal_245))
			{
				unk_0xC8CEF95C63B283EC(uLocal_245, 0);
			}
			if (unk_0x538DF9E5B1DF01EB(uLocal_214))
			{
				unk_0xD4C90F16EBBFE620(&iLocal_214);
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_214))
			{
				unk_0xD4C90F16EBBFE620(&iLocal_214);
			}
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			if (unk_0x5660C8AFDD9C1721(uLocal_227))
			{
				unk_0xB6FB9702660D84F6(&uLocal_227);
			}
			func_20(1, 1, 1, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
			unk_0xFD1E0AEC770DAF2E(1);
			unk_0x6853F2DD1CFD3CA2(0);
			unk_0xA0ED52A12ED3E5E5(0);
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 1);
			}
			unk_0x84710FE7666EBF7B(Local_116, 100f, 1, 0, 0, 0);
			unk_0x4210B2DCFC2838AC(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xABC4F2A6D7D56CF4(0f);
			unk_0x24469800558B4973(3, 0);
			unk_0x24469800558B4973(5, 0);
			uLocal_247 = unk_0x6DED2DED6DF39770(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0x939DA7EBCC6588FF(joaat("a_m_o_acult_01"));
			while (!unk_0x5494F37F35C1D7D7(joaat("a_m_o_acult_01")))
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
			if (unk_0xE97661B388D4DA3B(0))
			{
				if (unk_0xE06B94F2BD99223C("CULT_MASTER", 0))
				{
					if (!unk_0x538DF9E5B1DF01EB(iLocal_195[11]))
					{
						iLocal_195[11] = unk_0xA7CC89FF539E1376(unk_0xB594DADA69CECC28("CULT_MASTER", 0));
					}
				}
				if (unk_0xE06B94F2BD99223C("REAR_CULT", 0))
				{
					if (!unk_0x538DF9E5B1DF01EB(iLocal_195[12]))
					{
						iLocal_195[12] = unk_0xA7CC89FF539E1376(unk_0xB594DADA69CECC28("REAR_CULT", 0));
					}
				}
				if (unk_0xE06B94F2BD99223C("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x538DF9E5B1DF01EB(iLocal_195[13]))
					{
						iLocal_195[13] = unk_0xA7CC89FF539E1376(unk_0xB594DADA69CECC28("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0xE06B94F2BD99223C("CARBINE_CULT", 0))
				{
					if (!unk_0x538DF9E5B1DF01EB(iLocal_195[14]))
					{
						iLocal_195[14] = unk_0xA7CC89FF539E1376(unk_0xB594DADA69CECC28("CARBINE_CULT", 0));
					}
				}
				if (unk_0xE06B94F2BD99223C("SHOTGUN_CULT", 0))
				{
					if (!unk_0x538DF9E5B1DF01EB(iLocal_195[15]))
					{
						iLocal_195[15] = unk_0xA7CC89FF539E1376(unk_0xB594DADA69CECC28("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0xE06B94F2BD99223C("TREVOR", 0))
				{
					unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 0);
					unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 188.9369f);
					unk_0x3E15F70A39524494(unk_0xA16EC202D9D35357(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_247, 0);
					unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 1, 0);
				}
				if (unk_0xE06B94F2BD99223C("Trevors_weapon", 0))
				{
					unk_0xEE7D6963A1C93AC3(iLocal_575, unk_0xA16EC202D9D35357());
				}
				unk_0x20D6E0EA145DF751(91.3878f);
				unk_0x60365B850FB7354F(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				unk_0x6853F2DD1CFD3CA2(1);
				unk_0xA0ED52A12ED3E5E5(1);
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
				unk_0x0B29CE7F19BFE6C0("rghCult", &uLocal_409);
				iVar1 = 0;
				while (iVar1 < iLocal_195)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_195[iVar1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_01"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x6F12B0DE0D6D7E2F(iLocal_195[iVar1], 0);
						unk_0x39272B2594E03395(iLocal_195[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x59FF47176A212235(iLocal_195[iVar1], 0);
						unk_0x0CB975C4C6AB2C13(iLocal_195[iVar1], 2);
						unk_0xE2C7331F9F27B397(iLocal_195[iVar1], 50f, 20);
						unk_0xE97E86766A24F0FA(iLocal_195[iVar1], 5);
						unk_0x2AFDCE82B62112C8(iLocal_195[iVar1], 100f);
						unk_0x6D84B26DD44A9CED(iLocal_195[iVar1], 100f);
						unk_0x4C31C3561F937348(iLocal_195[iVar1], 150);
						unk_0xFDEA10D71178C300(iLocal_195[iVar1], unk_0x444ECD635D5FD45F(40, 60));
						unk_0x85A1016DBBC5E64B(iLocal_195[iVar1], unk_0xA16EC202D9D35357(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_195[iVar1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x6F12B0DE0D6D7E2F(iLocal_195[iVar1], 0);
						unk_0x39272B2594E03395(iLocal_195[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x15EBFEEB77BF84B7(iLocal_195[iVar1], 50, 1);
						unk_0x59FF47176A212235(iLocal_195[iVar1], 2);
						unk_0x0CB975C4C6AB2C13(iLocal_195[iVar1], 1);
						unk_0xE2C7331F9F27B397(iLocal_195[iVar1], 50f, 20);
						unk_0xE97E86766A24F0FA(iLocal_195[iVar1], 5);
						unk_0x2AFDCE82B62112C8(iLocal_195[iVar1], 100f);
						unk_0x6D84B26DD44A9CED(iLocal_195[iVar1], 100f);
						unk_0xFDEA10D71178C300(iLocal_195[iVar1], unk_0x444ECD635D5FD45F(40, 60));
						unk_0x85A1016DBBC5E64B(iLocal_195[iVar1], unk_0xA16EC202D9D35357(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x2DE0B96E966FD817(iLocal_195[iVar1]) && !unk_0x2DE0B96E966FD817(iLocal_195[11])) && !unk_0x2DE0B96E966FD817(iLocal_195[12])) && !unk_0x2DE0B96E966FD817(iLocal_195[13])) && !unk_0x2DE0B96E966FD817(iLocal_195[14])) && !unk_0x2DE0B96E966FD817(iLocal_195[15]))
						{
							unk_0x39272B2594E03395(iLocal_195[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x39272B2594E03395(iLocal_195[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x39272B2594E03395(iLocal_195[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x39272B2594E03395(iLocal_195[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x39272B2594E03395(iLocal_195[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x15EBFEEB77BF84B7(iLocal_195[iVar1], 0, 1);
							unk_0x59FF47176A212235(iLocal_195[iVar1], 3);
							unk_0x0CB975C4C6AB2C13(iLocal_195[iVar1], 0);
							unk_0xE97E86766A24F0FA(iLocal_195[iVar1], 0);
							unk_0xFE7D5CAA27F9C79C(iLocal_195[iVar1], 1f, 1f);
							unk_0x6D98AA46076A68BE(&uLocal_246);
							unk_0x8F194B9DA3131D61(0, -1159.33f, 4924.412f, 221.6576f, unk_0xA16EC202D9D35357(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 6000, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_246);
							unk_0x0891776D0327B77A(iLocal_195[15], uLocal_246);
							unk_0x2AF68ED52DC74B7D(&uLocal_246);
							unk_0x6D98AA46076A68BE(&uLocal_246);
							unk_0x8F194B9DA3131D61(0, -1163.279f, 4932.933f, 222.541f, unk_0xA16EC202D9D35357(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xE5DA68FB1830792A(0, unk_0xA16EC202D9D35357(), 5000, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 7500, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_246);
							unk_0x0891776D0327B77A(iLocal_195[14], uLocal_246);
							unk_0x2AF68ED52DC74B7D(&uLocal_246);
							unk_0x6D98AA46076A68BE(&uLocal_246);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 2500, 0);
							unk_0xE5DA68FB1830792A(0, unk_0xA16EC202D9D35357(), 5000, 0);
							unk_0x8F194B9DA3131D61(0, -1156.175f, 4926.073f, 221.3447f, unk_0xA16EC202D9D35357(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 6500, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_246);
							unk_0x0891776D0327B77A(iLocal_195[13], uLocal_246);
							unk_0x2AF68ED52DC74B7D(&uLocal_246);
							unk_0x6D98AA46076A68BE(&uLocal_246);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 3000, 0);
							unk_0x8F194B9DA3131D61(0, -1157.962f, 4922.196f, 221.309f, unk_0xA16EC202D9D35357(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 5500, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_246);
							unk_0x0891776D0327B77A(iLocal_195[12], uLocal_246);
							unk_0x2AF68ED52DC74B7D(&uLocal_246);
							unk_0x6D98AA46076A68BE(&uLocal_246);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0xE5DA68FB1830792A(0, unk_0xA16EC202D9D35357(), 10000, 0);
							unk_0x8F194B9DA3131D61(0, -1161.475f, 4916.061f, 220.5658f, unk_0xA16EC202D9D35357(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x0CDB4D41769B8C93(0, unk_0xA16EC202D9D35357(), 4500, 0);
							unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
							unk_0x963BB7C99350D827(uLocal_246);
							unk_0x0891776D0327B77A(iLocal_195[11], uLocal_246);
							unk_0x2AF68ED52DC74B7D(&uLocal_246);
							unk_0x2686393074E14730(iLocal_195[iVar1], 1);
							unk_0x117411595F7E531A(iLocal_195[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_195[iVar1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						unk_0x6F12B0DE0D6D7E2F(iLocal_195[iVar1], 0);
						unk_0x39272B2594E03395(iLocal_195[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x15EBFEEB77BF84B7(iLocal_195[iVar1], 50, 1);
						unk_0x59FF47176A212235(iLocal_195[iVar1], 2);
						unk_0x0CB975C4C6AB2C13(iLocal_195[iVar1], 0);
						unk_0xE2C7331F9F27B397(iLocal_195[iVar1], 50f, 20);
						unk_0x23FA15CAC1C1E536(iLocal_195[iVar1], 1);
						unk_0xE97E86766A24F0FA(iLocal_195[iVar1], 5);
						unk_0x2AFDCE82B62112C8(iLocal_195[iVar1], 100f);
						unk_0x6D84B26DD44A9CED(iLocal_195[iVar1], 100f);
						unk_0xFDEA10D71178C300(iLocal_195[iVar1], unk_0x444ECD635D5FD45F(40, 60));
						unk_0x85A1016DBBC5E64B(iLocal_195[iVar1], unk_0xA16EC202D9D35357(), 0, 16);
					}
					unk_0xA9465591B42213AE(iLocal_195[iVar1], uLocal_409);
					unk_0x34639238667C4381(iLocal_195[iVar1], func_125(unk_0xBF8499F46AD9093A(iLocal_195[iVar1], 1), func_91(unk_0x1788E93557766241())));
					unk_0x2C4E82CF88213975(iLocal_195[iVar1], 1);
					unk_0xA1478EBA54DDE31B(iLocal_195[iVar1], 42, 1);
					uLocal_228[iVar1] = func_123(iLocal_195[iVar1], 1, 145);
					iVar1++;
				}
				func_95(&uLocal_410, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
				func_95(&uLocal_410, 3, iLocal_195[11], "ACULTMaster", 0, 1);
				func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 1);
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
				if (!bLocal_171)
				{
					uLocal_215[0] = unk_0x82212519219FCCB5(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[1] = unk_0x82212519219FCCB5(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[2] = unk_0x82212519219FCCB5(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[3] = unk_0x82212519219FCCB5(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_215[0] = uLocal_215[0];
				uLocal_215[1] = uLocal_215[1];
				uLocal_215[2] = uLocal_215[2];
				uLocal_215[3] = uLocal_215[3];
				iLocal_220[0] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_220[1] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_220[2] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_220[3] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_220[4] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_220[5] = unk_0x8AC4394F3C9173EE(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x0BBAD8A322CB595E(iLocal_220[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x0BBAD8A322CB595E(iLocal_220[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x0BBAD8A322CB595E(iLocal_220[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x0BBAD8A322CB595E(iLocal_220[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x0BBAD8A322CB595E(iLocal_220[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x0BBAD8A322CB595E(iLocal_220[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_122() < 50)
				{
					unk_0x0D146C15FC9D0A4D(unk_0x1788E93557766241(), 0.5f, 1);
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
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_112(Global_97428))
		{
			func_109(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_112(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
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
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_110(func_111(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_110(func_111(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_110(func_111(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

void func_110(var uParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
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
	switch (func_114(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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
		if (Global_87925.f_44 == 1)
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
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
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
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
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
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_116(int iParam0)
{
	return func_117(iParam0, Global_34915);
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
	if (Global_34915 == 15)
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
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_120();
}

void func_120()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

int func_121()
{
	return Global_97428;
}

int func_122()
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0x3ED04C9A60CBD249(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x3ED04C9A60CBD249(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x3ED04C9A60CBD249(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_123(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_37(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_37(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_37(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_125(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x3C616B96B92181C5((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_126()
{
	Global_24681 = 1;
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
	if (!unk_0xFA89F1C1D4B99EBD(iParam0, iParam1, 0))
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
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			iVar3 = unk_0x79B5F1E7D14FF5B0(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x6D074D9943C030BF(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x5F299C0D4A092A76(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0xBF8499F46AD9093A(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	uVar1 = unk_0xF9704C805F631C62(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (func_128(iVar2, iVar8) != 0)
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (unk_0xD5E74D68EBC6D171(iParam0, iVar2, func_128(iVar2, iVar8)))
			{
				unk_0x795C9EBF753C3CAF(uVar1, func_128(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0xFA89F1C1D4B99EBD(iParam0, iVar2, 0))
		{
			unk_0x81EC850AC8838480(uVar1, unk_0xEFED72BBF5223B22(iParam0, iVar2));
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
					if (iParam1 < unk_0x25961BC705890881(iVar1))
					{
						if (unk_0x07145B1C190DCACB(iVar1, iParam1, &Var41))
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
	
	iVar1 = unk_0xC0170C84AE46A13F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x47E87308B90D8AA7(iVar0, uParam1))
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
	
	bVar0 = unk_0x74F469BC7D5F3A5D();
	if (!Global_68324)
	{
		if (!bVar0)
		{
			Global_68324 = 1;
		}
	}
	return bVar0;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_132(iParam0, iParam1);
}

int func_132(int iParam0, int iParam1)
{
	if (func_15(14) && !func_143(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_142(&Global_2542838))
	{
		if (func_140(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_133(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
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
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_143(iParam1))
	{
		return 0;
	}
	if (func_140(uParam0, iParam1))
	{
		return 0;
	}
	if (func_139(uParam0) < 0f)
	{
		func_138(uParam0, 0);
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
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_143(iParam1))
	{
		return 0;
	}
	if (func_140(uParam0, iParam1))
	{
		return 0;
	}
	if (func_139(uParam0) < 0f)
	{
		func_138(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
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
	func_138(uParam0, (Global_2542837 - 0.5f));
}

void func_137(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_138(var uParam0, float fParam1)
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

float func_139(var uParam0)
{
	return uParam0->f_72;
}

bool func_140(var uParam0, int iParam1)
{
	return func_141(uParam0, iParam1) != -1;
}

int func_141(var uParam0, int iParam1)
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

bool func_142(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_143(int iParam0)
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

void func_144()
{
	if (fLocal_182 > 0f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x0C380BB05B91042D())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 >= 0f)
	{
		unk_0x595321A6DD15AAA1(Global_34038[10 /*31*/], fLocal_182, 0, 1);
		unk_0x3A73A1FCDAD1D6BE(Global_34038[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 < 0f)
	{
		fLocal_181 = (fLocal_181 + (0.6f / (1f / unk_0x0C380BB05B91042D())));
	}
	else
	{
		fLocal_181 = 0f;
	}
	if (fLocal_181 <= 0f)
	{
		unk_0x595321A6DD15AAA1(Global_34038[9 /*31*/], fLocal_181, 0, 1);
		unk_0x3A73A1FCDAD1D6BE(Global_34038[9 /*31*/], 4, 0, 1);
	}
}

void func_145()
{
	if (fLocal_182 < 1f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x0C380BB05B91042D())));
	}
	else
	{
		fLocal_182 = 1f;
	}
	if (fLocal_182 <= 1f)
	{
		unk_0x595321A6DD15AAA1(Global_34038[10 /*31*/], fLocal_182, 0, 1);
		unk_0x3A73A1FCDAD1D6BE(Global_34038[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 > -1f)
	{
		fLocal_181 = (fLocal_181 - (0.6f / (1f / unk_0x0C380BB05B91042D())));
	}
	else
	{
		fLocal_181 = -1f;
	}
	if (fLocal_181 >= -1f)
	{
		unk_0x595321A6DD15AAA1(Global_34038[9 /*31*/], fLocal_181, 0, 1);
		unk_0x3A73A1FCDAD1D6BE(Global_34038[9 /*31*/], 4, 0, 1);
	}
}

void func_146()
{
	switch (iLocal_188)
	{
		case 0:
			unk_0x939DA7EBCC6588FF(joaat("a_m_o_acult_02"));
			unk_0x939DA7EBCC6588FF(joaat("prop_anim_cash_pile_02"));
			unk_0x3D28909AF30D70F4("random@altruist_cult");
			unk_0x67583D67393F934F("AC_DELIVERED");
			unk_0x512C44589435C707(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x5494F37F35C1D7D7(joaat("a_m_o_acult_02")) && unk_0x5494F37F35C1D7D7(joaat("prop_anim_cash_pile_02"))) && unk_0x6C47E32491756A1A("random@altruist_cult")) && unk_0x67583D67393F934F("AC_DELIVERED")) && unk_0xE03FE0778A54DC6C(joaat("weapon_assaultrifle")))
			{
				if (Global_97439.f_28192.f_5 < 2)
				{
					if (Global_97439.f_28192.f_5 == 0)
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
				else if (Global_97439.f_28192.f_5 >= 2)
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
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood03a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood04a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood05a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_security_case_01"));
					if (!unk_0x326BF57075FB3421())
					{
						unk_0x752468956AA26EF0("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_227))
				{
					unk_0xB6FB9702660D84F6(&uLocal_227);
				}
				func_20(1, 1, 1, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				unk_0xFD1E0AEC770DAF2E(1);
				unk_0x6853F2DD1CFD3CA2(0);
				unk_0xA0ED52A12ED3E5E5(0);
				unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 1);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0x495459882382D113("AC_DELIVERED");
				if (func_166())
				{
					func_165(0);
				}
				func_163();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					uLocal_212 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(uLocal_212, 0))
					{
						if (unk_0x7C4335B5DC91CCF9(uLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					uLocal_212 = unk_0xB49BA83A5C224F40();
					if (!unk_0x2DE0B96E966FD817(uLocal_192[0]) && !unk_0x2DE0B96E966FD817(uLocal_192[1]))
					{
						unk_0x937785D9C1929236(uLocal_192[0]);
						unk_0xA7130AF256ED96A1(uLocal_192[0]);
						unk_0x937785D9C1929236(uLocal_192[1]);
						unk_0xA7130AF256ED96A1(uLocal_192[1]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (unk_0x538DF9E5B1DF01EB(uLocal_212))
			{
				if (!unk_0x22349EC06EA5B08B(iLocal_212))
				{
					unk_0x7B9576B4E099FB1F(iLocal_212, 1, 0);
				}
				if (unk_0x965556ACF6A83973(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x6C43BF7625967266(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xE44A580B551C3645(iLocal_212))
					{
						unk_0x34639238667C4381(iLocal_212, 149.8882f);
						unk_0xAC894C93914464C2(iLocal_212);
					}
				}
			}
			unk_0x84710FE7666EBF7B(Local_119, 12f, 1, 0, 0, 0);
			unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 128.2065f);
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]) && !unk_0x2DE0B96E966FD817(uLocal_192[1]))
			{
				unk_0x6C43BF7625967266(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x34639238667C4381(uLocal_192[0], 128.2065f);
				unk_0x6C43BF7625967266(uLocal_192[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x34639238667C4381(uLocal_192[1], 128.2065f);
			}
			iLocal_195[0] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_97439.f_28192.f_5 >= 2)
			{
				iLocal_195[1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_410, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
			func_95(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			unk_0x2C4E82CF88213975(iLocal_195[0], 1);
			iLocal_214 = unk_0xF9704C805F631C62(joaat("weapon_assaultrifle"), -1, unk_0xBF8499F46AD9093A(iLocal_195[0], 1), 1, 1065353216, 0);
			unk_0x07CDE0236CD8AAC8(iLocal_214, iLocal_195[0], unk_0x879EC196F941E547(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_97439.f_28192.f_5 < 2)
			{
				uLocal_213 = unk_0x8AC4394F3C9173EE(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
				unk_0x07CDE0236CD8AAC8(uLocal_213, unk_0xA16EC202D9D35357(), unk_0x879EC196F941E547(unk_0xA16EC202D9D35357(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_97439.f_28192.f_5 >= 2)
			{
				unk_0x39272B2594E03395(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = unk_0x7D9AB6E493591276(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x10D8E64E13BD715C(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_97439.f_28192.f_5 >= 2)
			{
				unk_0x10D8E64E13BD715C(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xC2A228A4CCC7B3B0(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]) && !unk_0x2DE0B96E966FD817(uLocal_192[1]))
			{
				unk_0x10D8E64E13BD715C(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x10D8E64E13BD715C(uLocal_192[1], uLocal_187, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[0]))
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_192[1]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[1]))
				{
					func_161(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x0DF89B3B1CF0FDC1(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[0]))
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_192[1]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[1]))
				{
					func_161(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x0DF89B3B1CF0FDC1(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_97439.f_28192.f_5 < 2)
			{
				func_126();
				if (unk_0x538DF9E5B1DF01EB(iLocal_195[0]))
				{
					unk_0x51A89CCC8A5317D0(&(iLocal_195[0]));
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_195[1]))
				{
					unk_0x51A89CCC8A5317D0(&(iLocal_195[1]));
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_213))
				{
					unk_0xD4C90F16EBBFE620(&iLocal_213);
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_214))
				{
					unk_0xD4C90F16EBBFE620(&iLocal_214);
				}
				unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
				unk_0x4A34D7E241347461(0, 0, 3, 0);
				unk_0xC8CEF95C63B283EC(uLocal_245, 0);
				func_20(0, 1, 1, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				unk_0x6853F2DD1CFD3CA2(1);
				unk_0xA0ED52A12ED3E5E5(1);
				unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 0);
				unk_0x20D6E0EA145DF751(0);
				func_147(func_13(), 1, 2000, 0, 0);
			}
			unk_0x495459882382D113("AC_DONE");
			Global_97439.f_28192.f_5 += 2;
			iLocal_173 = 1;
			break;
	}
}

void func_147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_148(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_160();
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
					func_159(99, 1);
					func_158(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_158(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_158(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_156(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_155(5))
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
							func_158(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_155(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_158(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_158(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_158(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_155(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_154(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_159(95, iParam3);
					break;
				
				case 1:
					func_159(97, iParam3);
					break;
				
				case 2:
					func_159(96, iParam3);
					break;
			}
			func_159(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_151(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_151(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_158(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_158(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_158(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
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
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_150(iParam0);
	if (Global_34915 == 15)
	{
		func_149(0);
	}
	return 1;
}

void func_149(bool bParam0)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_151(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_153() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_153() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_152(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_152(int iParam0)
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

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_154(int iParam0)
{
	func_159(93, iParam0);
	func_159(29, iParam0);
	func_159(30, iParam0);
}

bool func_155(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_153() /*8064*/].f_5756.f_10, iParam0);
}

int func_156(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_157(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_131(27, 1);
	return 1;
}

int func_157(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_160()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

void func_161(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB3DDF1AA38C87006(uParam0, sParam1, sParam2, func_162(iParam3), 0);
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
	Global_14559 = 0;
	func_164();
}

void func_164()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_165(int iParam0)
{
	Global_16704 = iParam0;
}

int func_166()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_167()
{
	switch (iLocal_188)
	{
		case 0:
			unk_0x939DA7EBCC6588FF(joaat("a_m_o_acult_02"));
			unk_0x939DA7EBCC6588FF(joaat("prop_anim_cash_pile_02"));
			unk_0x3D28909AF30D70F4("random@altruist_cult");
			unk_0x67583D67393F934F("AC_DELIVERED");
			unk_0x512C44589435C707(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x5494F37F35C1D7D7(joaat("a_m_o_acult_02")) && unk_0x5494F37F35C1D7D7(joaat("prop_anim_cash_pile_02"))) && unk_0x6C47E32491756A1A("random@altruist_cult")) && unk_0x67583D67393F934F("AC_DELIVERED")) && unk_0xE03FE0778A54DC6C(joaat("weapon_assaultrifle")))
			{
				if (Global_97439.f_28192.f_5 == 0)
				{
					sLocal_408 = "ACULT_HI";
					sLocal_402 = "cult_p2_guard";
					sLocal_404 = "cult_p2_trv";
					sLocal_405 = "cult_p2_victim";
					sLocal_407 = "cult_p2_cam";
					fLocal_184 = 0.8f;
					fLocal_183 = 0.968f;
				}
				else if (Global_97439.f_28192.f_5 == 1)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_97439.f_28192.f_5 == 2)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_97439.f_28192.f_5 >= 3)
				{
					sLocal_408 = "ACULT_CAPT";
					sLocal_402 = "cult_p7_guard_01";
					sLocal_403 = "cult_p7_guard_02";
					sLocal_404 = "cult_p7_trv";
					sLocal_405 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_cam";
					fLocal_184 = 0.98f;
					fLocal_183 = 0.98f;
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood03a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood04a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_box_wood05a"));
					unk_0x939DA7EBCC6588FF(joaat("prop_security_case_01"));
					if (!unk_0x326BF57075FB3421())
					{
						unk_0x752468956AA26EF0("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_227))
				{
					unk_0xB6FB9702660D84F6(&uLocal_227);
				}
				func_20(1, 1, 1, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				unk_0xFD1E0AEC770DAF2E(1);
				unk_0x6853F2DD1CFD3CA2(0);
				unk_0xA0ED52A12ED3E5E5(0);
				unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 1);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0x495459882382D113("AC_DELIVERED");
				if (func_166())
				{
					func_165(0);
				}
				func_163();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_212 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_212, 0))
					{
						if (unk_0x7C4335B5DC91CCF9(iLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					iLocal_212 = unk_0xB49BA83A5C224F40();
					if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
					{
						unk_0x937785D9C1929236(uLocal_192[0]);
						unk_0xA7130AF256ED96A1(uLocal_192[0]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (unk_0x538DF9E5B1DF01EB(iLocal_212))
			{
				if (!unk_0x22349EC06EA5B08B(iLocal_212))
				{
					unk_0x7B9576B4E099FB1F(iLocal_212, 1, 0);
				}
				if (unk_0x965556ACF6A83973(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x6C43BF7625967266(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xE44A580B551C3645(iLocal_212))
					{
						unk_0x34639238667C4381(iLocal_212, 149.8882f);
						unk_0xAC894C93914464C2(iLocal_212);
					}
				}
			}
			unk_0x84710FE7666EBF7B(Local_119, 12f, 1, 0, 0, 0);
			unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 128.2065f);
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				unk_0x6C43BF7625967266(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x34639238667C4381(uLocal_192[0], 128.2065f);
			}
			iLocal_195[0] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_97439.f_28192.f_5 >= 3)
			{
				iLocal_195[1] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_410, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
			func_95(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			if (Global_97439.f_28192.f_5 != 1 && Global_97439.f_28192.f_5 != 2)
			{
				func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x2C4E82CF88213975(iLocal_195[0], 1);
			iLocal_213 = unk_0x8AC4394F3C9173EE(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
			iLocal_214 = unk_0xF9704C805F631C62(joaat("weapon_assaultrifle"), -1, unk_0xBF8499F46AD9093A(iLocal_195[0], 1), 1, 1065353216, 0);
			unk_0x07CDE0236CD8AAC8(iLocal_214, iLocal_195[0], unk_0x879EC196F941E547(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_97439.f_28192.f_5 < 3)
			{
				if (Global_97439.f_28192.f_5 == 0)
				{
					unk_0x07CDE0236CD8AAC8(iLocal_213, unk_0xA16EC202D9D35357(), unk_0x879EC196F941E547(unk_0xA16EC202D9D35357(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x07CDE0236CD8AAC8(iLocal_213, unk_0xA16EC202D9D35357(), unk_0x879EC196F941E547(unk_0xA16EC202D9D35357(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_97439.f_28192.f_5 >= 3)
			{
				unk_0x39272B2594E03395(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = unk_0x7D9AB6E493591276(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x10D8E64E13BD715C(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_97439.f_28192.f_5 >= 3)
			{
				unk_0x10D8E64E13BD715C(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xC2A228A4CCC7B3B0(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				unk_0x10D8E64E13BD715C(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[0]))
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_97439.f_28192.f_5 == 1 || Global_97439.f_28192.f_5 == 2)
				{
					if (!func_106())
					{
						func_96(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x0DF89B3B1CF0FDC1(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(uLocal_192[0]))
			{
				if (unk_0x998FA6EE0C28BE23(uLocal_192[0]))
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_97439.f_28192.f_5 == 1 || Global_97439.f_28192.f_5 == 2)
			{
				if ((unk_0x0DF89B3B1CF0FDC1(uLocal_187) > 0.9742857f && !iLocal_180) && unk_0xB9B1005BA7733220() == 4)
				{
					unk_0xDF3B1A0343547226("CamPushInNeutral", 0, 0);
					unk_0xC2E1777941B4536E(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_180 = 1;
				}
			}
			if (unk_0x0DF89B3B1CF0FDC1(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_97439.f_28192.f_5 < 3)
			{
				if (Global_97439.f_28192.f_5 != 1 && Global_97439.f_28192.f_5 != 2)
				{
					func_126();
					if (unk_0x538DF9E5B1DF01EB(iLocal_195[0]))
					{
						unk_0x51A89CCC8A5317D0(&(iLocal_195[0]));
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_195[1]))
					{
						unk_0x51A89CCC8A5317D0(&(iLocal_195[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0x538DF9E5B1DF01EB(iLocal_195[0]))
					{
						unk_0x423D1EBE54B18555(iLocal_195[0], 0);
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_195[1]))
					{
						unk_0x423D1EBE54B18555(iLocal_195[1], 0);
					}
					if (unk_0x538DF9E5B1DF01EB(uLocal_192[0]))
					{
						unk_0x423D1EBE54B18555(uLocal_192[0], 0);
					}
					iLocal_188++;
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_213))
				{
					unk_0xD4C90F16EBBFE620(&iLocal_213);
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_214))
				{
					unk_0xD4C90F16EBBFE620(&iLocal_214);
				}
				unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
				if (Global_97439.f_28192.f_5 == 0)
				{
					unk_0x86E7313D71D1A983(unk_0xA16EC202D9D35357(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xE642D0B9E7565C4A(unk_0x1788E93557766241(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x9BA82E09A986BA4B(sLocal_407, "cult_p4_cam"))
				{
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x4A34D7E241347461(0, 0, 3, 0);
				}
				unk_0xC8CEF95C63B283EC(uLocal_245, 0);
				func_20(0, 1, 1, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				unk_0x6853F2DD1CFD3CA2(1);
				unk_0xA0ED52A12ED3E5E5(1);
				unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 0);
				unk_0x20D6E0EA145DF751(0);
				func_147(func_13(), 1, 1000, 0, 0);
			}
			if (Global_97439.f_28192.f_5 != 1 && Global_97439.f_28192.f_5 != 2)
			{
				unk_0x495459882382D113("AC_DONE");
				Global_97439.f_28192.f_5++;
				iLocal_173 = 1;
			}
			break;
		
		case 5:
			if (!func_106() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_126();
				if (unk_0x538DF9E5B1DF01EB(iLocal_195[0]))
				{
					unk_0x51A89CCC8A5317D0(&(iLocal_195[0]));
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_195[1]))
				{
					unk_0x51A89CCC8A5317D0(&(iLocal_195[1]));
				}
				unk_0x495459882382D113("AC_DONE");
				Global_97439.f_28192.f_5++;
				iLocal_173 = 1;
			}
			break;
	}
}

void func_168()
{
	if (func_170())
	{
		if (func_13() == 2)
		{
			if (unk_0x1D05397A4F3177BE(func_169()))
			{
				unk_0x6BAF4EFA608BE151(func_169(), &uLocal_185, &iLocal_186);
				if (iLocal_186 == 1)
				{
					uLocal_192[0] = unk_0x37FFDCB32AB74142(func_169(), 0);
					if (unk_0x965556ACF6A83973(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
							{
								unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 1;
					}
				}
				else if (iLocal_186 == 2)
				{
					uLocal_192[0] = unk_0x37FFDCB32AB74142(func_169(), 0);
					uLocal_192[1] = unk_0x37FFDCB32AB74142(func_169(), 1);
					if (unk_0x965556ACF6A83973(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0) && unk_0x965556ACF6A83973(uLocal_192[1], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
							{
								unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), 10.5f, 5, 0);
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

var func_169()
{
	return unk_0xF8BF19C18CE5C2B2(unk_0xA495B6AB6F2BF8C7());
}

bool func_170()
{
	return Global_24680;
}

void func_171()
{
	if (func_174())
	{
		if (iLocal_399 == 0)
		{
			iLocal_399 = unk_0x4210B2DCFC2838AC(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x4970185D4CC64616(func_91(unk_0x1788E93557766241()), Local_116, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0x232F05A66DCF2115(2017343592, joaat("player")) != 5)
		{
			if (func_173())
			{
				unk_0x2966D41514EAE84B(5, 2017343592, joaat("player"));
			}
			else if (func_172())
			{
				unk_0x2966D41514EAE84B(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0x232F05A66DCF2115(2017343592, joaat("player")) != 5)
		{
			if (func_173())
			{
				if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()) || (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()) && unk_0xDE31A932C72990F1(unk_0x1788E93557766241())))
				{
					unk_0x2966D41514EAE84B(5, 2017343592, joaat("player"));
				}
			}
			else if (func_172())
			{
				unk_0x2966D41514EAE84B(5, 2017343592, joaat("player"));
			}
			else if (unk_0x232F05A66DCF2115(2017343592, joaat("player")) != 1)
			{
				unk_0x2966D41514EAE84B(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_173())
	{
		if (iLocal_178)
		{
			if (!unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 3))
			{
				unk_0x495459882382D113("AC_START");
			}
			unk_0xABC4F2A6D7D56CF4(0f);
			unk_0x4F5F5BF0722DFDC2("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x868516D11F344453(Global_34038[9 /*31*/].f_2, 6f, Global_34038[9 /*31*/].f_5, 0))
			{
				unk_0x5BDFA3A2180C3CB6(Global_34038[9 /*31*/].f_5, Global_34038[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x868516D11F344453(Global_34038[10 /*31*/].f_2, 6f, Global_34038[10 /*31*/].f_5, 0))
			{
				unk_0x5BDFA3A2180C3CB6(Global_34038[10 /*31*/].f_5, Global_34038[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_179 = true;
			iLocal_178 = 0;
		}
	}
	else if (!iLocal_178)
	{
		if (unk_0x2DD39BF3E2F9C47F())
		{
			unk_0x495459882382D113("AC_END");
		}
		unk_0xABC4F2A6D7D56CF4(1f);
		unk_0x4F5F5BF0722DFDC2("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_179)
		{
			func_144();
		}
		iLocal_178 = 1;
	}
}

int func_172()
{
	if ((((((unk_0xDE78232605830F0D(Local_122, Local_125, fLocal_128, 1) || unk_0xDE78232605830F0D(Local_129, Local_132, fLocal_135, 1)) || unk_0xDE78232605830F0D(Local_136, Local_139, fLocal_142, 1)) || unk_0xDE78232605830F0D(Local_143, Local_146, fLocal_149, 1)) || unk_0xDE78232605830F0D(Local_150, Local_153, fLocal_156, 1)) || unk_0xDE78232605830F0D(Local_157, Local_160, fLocal_163, 1)) || unk_0xDE78232605830F0D(Local_164, Local_167, fLocal_170, 1))
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	if ((((((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_122, Local_125, fLocal_128, 0, 1, 0) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_129, Local_132, fLocal_135, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_136, Local_139, fLocal_142, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_143, Local_146, fLocal_149, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_150, Local_153, fLocal_156, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_157, Local_160, fLocal_163, 0, 1, 0)) || unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_164, Local_167, fLocal_170, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_175()
{
	unk_0x2966D41514EAE84B(255, 2017343592, joaat("player"));
	if (Global_97439.f_28192.f_5 >= iLocal_191 && Global_97439.f_28192.f_5 != 1000)
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
			func_176(&uLocal_248);
			Global_85704 = 0;
			Global_85705 = 0;
			Global_85706 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0x55904BA1B8D77456(1);
			unk_0xEFDB2ECE44F69921(0);
			unk_0xAD2717628F454E58(0);
			func_3(0);
			unk_0xABC4F2A6D7D56CF4(1f);
			unk_0x24469800558B4973(3, 1);
			unk_0x24469800558B4973(5, 1);
			unk_0x28F0CE4241D29D1C();
			iLocal_178 = 0;
			func_92();
			Global_97439.f_28192.f_5 = (iLocal_191 - 1);
			unk_0x82706E6C897B0FA1();
		}
	}
	else
	{
		unk_0x8C4265EEC0D6FD1A();
		func_176(&uLocal_248);
		Global_85704 = 0;
		Global_85705 = 0;
		Global_85706 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0x55904BA1B8D77456(1);
		unk_0xEFDB2ECE44F69921(0);
		unk_0xAD2717628F454E58(0);
		func_3(0);
		if (unk_0xC8378A96673BCC40(uLocal_398))
		{
			unk_0x7559DFAB61B017F2(&uLocal_398);
			func_94(0);
		}
		unk_0xABC4F2A6D7D56CF4(1f);
		unk_0x24469800558B4973(3, 1);
		unk_0x24469800558B4973(5, 1);
		unk_0x28F0CE4241D29D1C();
		iLocal_178 = 0;
		unk_0x82706E6C897B0FA1();
	}
}

void func_176(var uParam0)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0x7559DFAB61B017F2(uParam0);
		*uParam0 = 0;
	}
}


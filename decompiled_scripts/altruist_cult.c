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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_100[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_129 = 0f;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	float fLocal_136 = 0f;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	float fLocal_143 = 0f;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_147 = { 0, 0, 0 } ;
	float fLocal_150 = 0f;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	float fLocal_157 = 0f;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	float fLocal_164 = 0f;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	float fLocal_171 = 0f;
	bool bLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193[2] = { 0, 0 };
	int iLocal_196[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216[4] = { 0, 0, 0, 0 };
	int iLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_228 = 0;
	var uLocal_229[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_272 = 8;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
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
	var uLocal_291 = 4;
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
	var uLocal_306 = 4;
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
	var uLocal_321 = 4;
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
	var uLocal_336 = 4;
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
	var uLocal_351 = 4;
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
	var uLocal_366 = 4;
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
	var uLocal_381 = 4;
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
	var uLocal_399 = 0;
	int iLocal_400 = 0;
	char[] cLocal_401[8] = 0;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	var uLocal_410 = 0;
	var uLocal_411 = 16;
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
	var uLocal_575 = 0;
	int iLocal_576 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_117 = { -1109.213f, 4914.744f, 216.101f };
	Local_120 = { -1034.6f, 4918.6f, 205.9f };
	Local_123 = { -1066.963f, 4873.13f, 207.3281f };
	Local_126 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_129 = 72.3125f;
	Local_130 = { -1138.386f, 4872.04f, 207.5488f };
	Local_133 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_136 = 57.8125f;
	Local_137 = { -1171.648f, 4888.658f, 211.0756f };
	Local_140 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_143 = 17.9375f;
	Local_144 = { -1177.981f, 4903.231f, 212.477f };
	Local_147 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_150 = 17.9375f;
	Local_151 = { -1175.693f, 4904.839f, 207.5207f };
	Local_154 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_157 = 36.375f;
	Local_158 = { -1106.212f, 4860.086f, 206.1207f };
	Local_161 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_164 = 11.5625f;
	Local_165 = { -1044.268f, 4916.587f, 209.8365f };
	Local_168 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (unk_0x2EC83C7ACA23E8A4(26))
	{
		func_177();
	}
	if (unk_0x659B26D30D76A1D6())
	{
		unk_0x78C587487CD40B92();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x43045253AC4C7FF5() || iLocal_173)
		{
			unk_0xACD6D334FD769B0C(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (Global_101553.f_29685.f_5 >= iLocal_192 && !func_176())
						{
							iLocal_50 = 2;
						}
						func_173();
						func_170();
					}
					break;
				
				case 1:
					unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_169();
							}
							else if (iLocal_187 == 2)
							{
								func_148();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_147();
							}
							else
							{
								func_146();
							}
						}
						if (iLocal_174)
						{
							func_133(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						func_108();
					}
					unk_0x6A7EBBBF8B647A25(Global_34898[9 /*31*/], 0, 0, 1);
					unk_0x6A7EBBBF8B647A25(Global_34898[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0xACD6D334FD769B0C(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0xEB361B4BD195A4D3(iLocal_196[iVar0]))
						{
							if (unk_0x16833EFAA58E63DB(uLocal_229[iVar0]))
							{
								unk_0x0B57C567D698C373(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0x6EE56158B3EDF9EC(iLocal_196[iVar0]))
							{
								if (unk_0x16833EFAA58E63DB(uLocal_229[iVar0]))
								{
									unk_0x0B57C567D698C373(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0x7298BA0C4D4A4C9E(iLocal_196[iVar0], unk_0xA0081090911D13E5(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_107())
								{
									if (iLocal_191 < unk_0xDF658EB6CA91DFBC())
									{
										iVar1 = unk_0xB5BF1B58C833F7A9(0, 3);
										if (iVar1 == 0)
										{
											func_97(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_96(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_96(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_60();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						uLocal_249 = func_59();
						if (!unk_0x1E3F61C2C1E29520(uLocal_249))
						{
							break;
						}
						func_58(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_29(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0x17BC7AF21106B65E(uLocal_410);
						unk_0xFDBEB468C41F4B61(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0xD3FACCDA4D66AEAD(iLocal_196[iVar0]))
							{
								unk_0x4E82D83B086B5C93(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0xD3FACCDA4D66AEAD(iLocal_221[iVar0]))
							{
								unk_0xE9755D24C3BFFBED(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x0D2E3F017CBCB8A8(uLocal_246))
						{
							unk_0x07553DAC96600443(uLocal_246, 0);
						}
						if (unk_0xD3FACCDA4D66AEAD(uLocal_215))
						{
							unk_0xE9755D24C3BFFBED(&uLocal_215);
						}
						if (unk_0xD3FACCDA4D66AEAD(uLocal_215))
						{
							unk_0xE9755D24C3BFFBED(&uLocal_215);
						}
						if (bLocal_172)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_177();
						}
					}
					break;
			}
		}
		else if (bLocal_177)
		{
		}
		else
		{
			func_177();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x856FE0EB5A347E56(0);
		unk_0x0A4474CA170E33E0(1);
		unk_0xC898340877A3B0B6(0);
		func_2(1);
		Global_86997 = 1;
	}
	else
	{
		unk_0x856FE0EB5A347E56(1);
		unk_0x0A4474CA170E33E0(0);
		unk_0xC898340877A3B0B6(1);
		func_2(0);
		Global_86997 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_35775 == 9 || Global_35775 == 10) || Global_35775 == 5)
	{
		Global_100204 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_100204 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14604)
	{
		func_6(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_5())
	{
		Global_14443.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
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
		unk_0xFF4920BAFCB15F65("DeathFailOut", 0, 0);
		unk_0x88B0F0DC270164B7(&iLocal_48, 1);
		func_11(1, 2, 0);
		unk_0x6EF2074DC51C46CD(2);
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(iLocal_48, 1) || iParam1)
		{
			unk_0x33F96CD17F6BA7BD("DeathFailOut");
			func_11(0, 2, 1);
			unk_0x6EF2074DC51C46CD(0);
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_48, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&iLocal_48, 2);
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (iParam1 == 1)
			{
				unk_0xC6B7F8BBCF4D8221(0.2f);
			}
			else
			{
				unk_0xC6B7F8BBCF4D8221(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(iLocal_48, 2) || iParam2)
		{
			if (!unk_0xA86CA03D9749EEB3())
			{
				unk_0xC6B7F8BBCF4D8221(1f);
			}
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_48, 2);
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
		if (!unk_0x08BA6DD398CA197C(iLocal_48, 0) || iParam1)
		{
			unk_0xFF4920BAFCB15F65(sVar0, 0, 0);
			unk_0x88B0F0DC270164B7(&iLocal_48, 0);
			func_11(1, 1, 0);
			unk_0x6EF2074DC51C46CD(1);
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(iLocal_48, 0) || iParam1)
		{
			unk_0x33F96CD17F6BA7BD(sVar0);
			func_11(0, 1, 1);
			unk_0x6EF2074DC51C46CD(0);
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_48, 0);
	}
}

int func_13()
{
	func_14();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_18(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_17(unk_0xA0081090911D13E5());
			if (func_16(iVar0) && (!func_15(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_16(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_15(int iParam0)
{
	return Global_35775 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_28(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_5())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_28(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_25(unk_0x0C1D3C552325765B())) && !func_22(unk_0x0C1D3C552325765B(), 0)) && !func_21())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_25(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_21()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312731;
}

int func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_27(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xC94C39C53546E775("DEATH_SCENE");
			unk_0xAB16AADE80707D47(-1, "ScreenFlash", "WastedSounds", 1);
			func_57(&(uParam0->f_1));
			func_19();
			func_56(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xACBEFB0A5F1CF619(1);
			break;
		
		case 1:
			if (func_54() || unk_0x2C22E7D1C80A53EF())
			{
				*uParam0 = 2;
			}
			if (!func_53(uParam0->f_4, 4))
			{
				if (unk_0xDD9B91529459212C("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xAB16AADE80707D47(-1, "Bed", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_53(uParam0->f_4, 2))
				{
					unk_0xAB16AADE80707D47(-1, "TextHit", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 2);
				}
				func_30(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_30(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0x09FF08F4026F6F86(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xACBEFB0A5F1CF619(0);
				unk_0x0A4474CA170E33E0(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				unk_0x856FE0EB5A347E56(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0x7C1793252FA472B6("DEATH_SCENE");
				unk_0xACBEFB0A5F1CF619(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xACBEFB0A5F1CF619(0);
			return 1;
			break;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x2C22E7D1C80A53EF() || unk_0x44F90FBF2C1E8021())
			{
				unk_0xF215E3B07B7990BC(2500);
				unk_0x527ED47EF44C8E1E();
			}
			if (bParam9)
			{
				unk_0xACBEFB0A5F1CF619(1);
			}
			unk_0xC6B7F8BBCF4D8221(0.2f);
			if (func_50(iParam5, 4))
			{
				if (unk_0xDD9B91529459212C("generic_failed", 0, -1))
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
			unk_0xB9D4F4DE7E7EC038(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x709662CF2BD061A4("STRING");
			unk_0x212C24688D441F9E(6);
			unk_0xBDE6EEC5F6BDC060(uParam2);
			unk_0x1E77BE8F4283FA05();
			func_49(sParam3);
			unk_0x7CBFB9F4AF33C67E(100);
			unk_0x5CC02BB872FEF340(true);
			unk_0xC23FC7D89C4FAF05();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xB9D4F4DE7E7EC038(*uParam0, "TRANSITION_UP");
					unk_0x0FFE3C1DBBA72236(uParam1->f_134);
					unk_0xE73340DA551C95E1();
					uParam1->f_136 = 1;
				}
			}
			if (!func_50(iParam5, 1))
			{
				unk_0xB5E011E673BCDF2D(0);
			}
			func_48(&(uParam1->f_10), 0, 1, 1, 1);
			func_47(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_47(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_50(iParam5, 4))
			{
				unk_0xAB16AADE80707D47(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_50(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0xFF4920BAFCB15F65("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xFF4920BAFCB15F65("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xFF4920BAFCB15F65("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_46(&(uParam1->f_1)))
			{
				func_45(&(uParam1->f_1));
			}
			if (func_50(iParam5, 2))
			{
				if (!func_46(&(uParam1->f_4)))
				{
					func_45(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x08FB11A1AA7022FD();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xB9D4F4DE7E7EC038(*uParam0, "TRANSITION_UP");
					unk_0x0FFE3C1DBBA72236(uParam1->f_134);
					unk_0xE73340DA551C95E1();
					uParam1->f_136 = 1;
				}
			}
			unk_0x1373E5003F76E429(iParam6);
			func_43(uParam0, 0, 0);
			if (!func_50(iParam5, 16) && (func_41(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x2C22E7D1C80A53EF()))
			{
				func_35(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x3AAD9D87062EB88B();
				if (unk_0x382DB2E6C29D0F23(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xAB16AADE80707D47(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x8BF8336942CC18B9(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x382DB2E6C29D0F23(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xAB16AADE80707D47(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x8BF8336942CC18B9(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_50(iParam5, 2))
			{
				if (func_41(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xAB16AADE80707D47(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0x8BF8336942CC18B9(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_43(uParam0, 0, 0);
			unk_0xC6B7F8BBCF4D8221(1f);
			if (uParam1->f_138 || !((unk_0x28C1B9853548BD8E("stunt_plane_races", unk_0x367152330DB70D69()) || unk_0x28C1B9853548BD8E("pilot_school", unk_0x367152330DB70D69())) || (unk_0x28C1B9853548BD8E("bj", unk_0x367152330DB70D69()) && unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))))
			{
				unk_0xA0303A6B8C99DD6A(2500);
			}
			if (func_50(iParam5, 64) && uParam1->f_138)
			{
				unk_0xF215E3B07B7990BC(500);
			}
			func_31(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xACBEFB0A5F1CF619(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_41(&(uParam1->f_4)) <= 0.1f)
			{
				func_43(uParam0, 0, 0);
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

void func_31(var uParam0)
{
	func_32(uParam0, 0f);
}

void func_32(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_33(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_33(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

void func_34(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xA12A0D38735CCBF2(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_35(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC()) || unk_0x2C22E7D1C80A53EF()) || unk_0x72D1F5A29BD70129())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_40(uParam0))
	{
		return;
	}
	unk_0x08FB11A1AA7022FD();
	unk_0x1373E5003F76E429(uParam2);
	if (!func_50(uParam0->f_1, 256) || (func_50(uParam0->f_1, 8192) && unk_0xFF9B577A7F80CFDD(2)))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_CLEAR_SPACE");
		unk_0x0FFE3C1DBBA72236(fParam1);
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_MAX_WIDTH");
		unk_0x0FFE3C1DBBA72236(fParam5);
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE73340DA551C95E1();
		if (unk_0x955B8C8F89CC3AC0())
		{
			unk_0xB9D4F4DE7E7EC038(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5CC02BB872FEF340(func_50(uParam0->f_1, 4096));
			unk_0xE73340DA551C95E1();
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
					bVar4 = unk_0x4255B5ECB9D34344(2);
					break;
				
				case 2:
					bVar4 = !unk_0x4255B5ECB9D34344(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x7CBFB9F4AF33C67E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x08BA6DD398CA197C(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x08BA6DD398CA197C(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x62B1FF1B5EE703A7(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x611F82FE2F038F7C(uVar0, uVar1, bVar2);
						}
						if (!unk_0x509383441597090D(uVar3))
						{
							func_39(uVar3);
						}
						iVar7++;
					}
					if (!unk_0x509383441597090D(uParam0->f_2[iVar6 /*15*/]))
					{
						func_49(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (func_50(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5CC02BB872FEF340(true);
								unk_0x7CBFB9F4AF33C67E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5CC02BB872FEF340(false);
								unk_0x7CBFB9F4AF33C67E(-1);
							}
						}
					}
					unk_0xE73340DA551C95E1();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(bParam4, func_38(func_50(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xB9D4F4DE7E7EC038(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x0FFE3C1DBBA72236(fVar8);
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x0FFE3C1DBBA72236(0f);
		unk_0x0FFE3C1DBBA72236(0f);
		unk_0x0FFE3C1DBBA72236(0f);
		unk_0x0FFE3C1DBBA72236(80f);
		unk_0xE73340DA551C95E1();
		func_37(&(uParam0->f_1), 256);
		func_36(&(uParam0->f_1), 128);
	}
	unk_0x0F83039847376F53(*uParam0, 255, 255, 255, 0, 0);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

int func_40(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			func_37(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)
{
	if (func_46(uParam0))
	{
		if (func_42(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_33(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_42(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

int func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_46(&(uParam0->f_2)))
	{
		func_31(&(uParam0->f_2));
	}
	unk_0x7ABD1B29E6C2963D(14);
	if (!bParam2)
	{
		unk_0x0F83039847376F53(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x0F83039847376F53(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x7F6103BD34B839B0(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_41(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_44(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(var uParam0)
{
	if (!func_46(uParam0))
	{
		func_31(uParam0);
	}
}

bool func_46(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

int func_47(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_48(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x8CFF714440510D0B("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 32);
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		func_37(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x06302D2B6727CD1F(*uParam0, 1);
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (bParam3)
		{
			func_37(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_37(&(uParam0->f_1), 8192);
	}
}

void func_49(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1)
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_54()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_48, 0) && !unk_0x08BA6DD398CA197C(iLocal_48, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_12(1, 0);
	}
	if (!unk_0x7C0379981B7E6E40())
	{
		unk_0x715FC4B638D9A515();
	}
	unk_0xABC36CFE4F3421A0(2, 199, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	unk_0xABC36CFE4F3421A0(0, 37, 1);
	unk_0xABC36CFE4F3421A0(0, 25, 1);
	unk_0xCCBC19731FE81F7F();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_48, 1))
		{
			func_10(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0x2C22E7D1C80A53EF())
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				if (!unk_0x44F90FBF2C1E8021())
				{
					unk_0xF215E3B07B7990BC(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0xDF658EB6CA91DFBC() + 1000;
				if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
				{
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0xB142E94AE869ED94(0);
				unk_0x8281AD939D8485BB(0);
				unk_0x94724F7C938EBE34(1);
				unk_0x715FC4B638D9A515();
				if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
				{
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (unk_0xDF658EB6CA91DFBC() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_48, 3))
			{
				unk_0x6B0F857FD4BCD4AB(1);
				unk_0x88B0F0DC270164B7(&iLocal_48, 3);
			}
		}
		else if (unk_0x08BA6DD398CA197C(iLocal_48, 3))
		{
			unk_0x6B0F857FD4BCD4AB(0);
			unk_0x09C86C0C5CA26B1E(&iLocal_48, 3);
		}
	}
}

void func_56(var uParam0, float fParam1, float fParam2)
{
	if (func_46(&(uParam0->f_1)))
	{
		func_44(&(uParam0->f_1));
	}
	if (func_46(&(uParam0->f_4)))
	{
		func_44(&(uParam0->f_4));
	}
	func_34(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_57(var uParam0)
{
	if (!func_46(uParam0))
	{
		func_45(uParam0);
	}
	else
	{
		func_31(uParam0);
	}
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xDD9B91529459212C("OFFMISSION_WASTED", 0, -1);
}

var func_59()
{
	return unk_0x474309DF4921072A("MP_BIG_MESSAGE_FREEMODE");
}

void func_60()
{
	if (!iLocal_176)
	{
		unk_0x32508B8E93AAF2BE("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_101553.f_29685.f_5 = 1000;
		unk_0x1064358D6267EE4A(64);
		Global_101553.f_25254.f_472 = 54;
		uLocal_399 = unk_0x474309DF4921072A("MIDSIZED_MESSAGE");
		func_95(1);
		while (!unk_0x1E3F61C2C1E29520(uLocal_399))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB9D4F4DE7E7EC038(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		unk_0xC23FC7D89C4FAF05();
		while (!func_94())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_93();
		unk_0xC1B1E9A034A63A62(0);
		unk_0xAB16AADE80707D47(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0x0F83039847376F53(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0xB9D4F4DE7E7EC038(uLocal_399, "SHARD_ANIM_OUT");
			unk_0x7CBFB9F4AF33C67E(1);
			unk_0x0FFE3C1DBBA72236(0.33f);
			unk_0xE73340DA551C95E1();
			iLocal_178 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x1E3F61C2C1E29520(uLocal_399))
		{
			unk_0xA12A0D38735CCBF2(&uLocal_399);
			func_95(0);
		}
		while (unk_0x999A157665D69393(func_92(unk_0x0C1D3C552325765B()), Local_117, 1) < 209f && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_61(18);
		func_177();
	}
}

void func_61(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_89())
	{
		func_67(iParam0);
		unk_0xA57E42D9C41110A9(0, 0);
		Global_101544 = unk_0xDF658EB6CA91DFBC();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_101542, 1), 64);
		if (func_64(Global_101542) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101541, 64);
		}
		unk_0x6C6B822764300FD2(&cVar0, Global_101539, (unk_0xDF658EB6CA91DFBC() - Global_101540), 0);
	}
	else if (unk_0x08BA6DD398CA197C(Global_101549, 0) && Global_101553.f_29685.f_2 < 3)
	{
		unk_0x09C86C0C5CA26B1E(&Global_101549, 0);
	}
	func_63(&Global_25244);
	Global_101543 = 0;
	func_62(-1);
}

void func_62(int iParam0)
{
	Global_101542 = iParam0;
}

void func_63(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35737)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35736 = 0;
	Global_35738 = 0;
	Global_35775 = 15;
	Global_55813 = 0;
	Global_55814 = 0;
}

int func_64(int iParam0)
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

char* func_65(int iParam0, bool bParam1)
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

void func_66(int iParam0)
{
	Global_36326 = (unk_0xDF658EB6CA91DFBC() + iParam0);
}

void func_67(int iParam0)
{
	func_68(iParam0, 0, func_88(iParam0));
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_87();
	func_78(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(iParam0, &uVar0);
	Var1 = { func_69(&uVar0) };
}

struct<16> func_69(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_72(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_70(*uParam0), 64);
	return Var0;
}

int func_70(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_71(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

int func_71(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_72(var uParam0)
{
	return uParam0 & 15;
}

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_74(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_75(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_76(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_77(int iParam0, var uParam1)
{
	Global_101553.f_29685.f_43[iParam0] = *uParam1;
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_70(*uParam0);
	iVar1 = func_72(*uParam0);
	iVar2 = func_73(*uParam0);
	iVar3 = func_76(*uParam0);
	iVar4 = func_75(*uParam0);
	iVar5 = func_74(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_79(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam6);
}

void func_80(var uParam0, int iParam1)
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

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
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
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_86(int iParam0, int iParam1)
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

var func_87()
{
	var uVar0;
	
	func_85(&uVar0, unk_0x8A1006B6887A61DE());
	func_84(&uVar0, unk_0x4A29A51562AC24A5());
	func_83(&uVar0, unk_0x7C42343912622BB6());
	func_81(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_82(&uVar0, unk_0x55ED786EB10EA740());
	func_80(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

int func_88(int iParam0)
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

int func_89()
{
	if ((Global_101542 == func_90() && unk_0x0D9CC5C2000C6EA4()) && Global_101543)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x367152330DB70D69(), 64);
	uVar16 = func_91(Var0);
	return uVar16;
}

int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BB8D1C5FAAB25B3(&cParam0))
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

Vector3 func_92(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

void func_93()
{
	Global_25419 = 0;
	Global_25420 = 0;
	Global_25422 = 0;
	Global_25423 = 0;
	Global_25424 = 0;
}

int func_94()
{
	return 1;
}

void func_95(int iParam0)
{
	Global_69877 = iParam0;
	Global_69878 = iParam0;
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_97(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

int func_98(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_105();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_104(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_103();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_102();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_101())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_100();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_99();
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
		func_105();
	}
	return 0;
}

void func_99()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_100()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_102()
{
	if (func_15(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_13();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_103()
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

bool func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_105()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

int func_107()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_108()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			unk_0x11BBF139870B5E0F("THUNDER", 20f);
			if (!unk_0xC317719223E13B66())
			{
				unk_0x6946239981A418D8("ac_ig_3_p3_b", 8);
			}
			unk_0x491067A8E906F22D(joaat("a_m_o_acult_02"));
			unk_0x491067A8E906F22D(joaat("a_m_y_acult_02"));
			unk_0x491067A8E906F22D(joaat("prop_box_wood03a"));
			unk_0x491067A8E906F22D(joaat("prop_box_wood04a"));
			unk_0x491067A8E906F22D(joaat("prop_box_wood05a"));
			unk_0x491067A8E906F22D(joaat("prop_security_case_01"));
			while ((((((!func_132() || !unk_0x2C1B5A0D3E233FC3(joaat("a_m_o_acult_02"))) || !unk_0x2C1B5A0D3E233FC3(joaat("a_m_y_acult_02"))) || !unk_0x2C1B5A0D3E233FC3(joaat("prop_box_wood03a"))) || !unk_0x2C1B5A0D3E233FC3(joaat("prop_box_wood04a"))) || !unk_0x2C1B5A0D3E233FC3(joaat("prop_box_wood05a"))) || !unk_0x2C1B5A0D3E233FC3(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_576 = func_128(unk_0xA0081090911D13E5(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xD3FACCDA4D66AEAD(uLocal_576))
			{
				unk_0x6BF154720AFAC26B(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x6BF154720AFAC26B(0, "Rifle_Mag1^1", 3, unk_0x47938048EBFFB3FE(joaat("component_assaultrifle_clip_01")), 0);
			if (func_132() && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0x6BF154720AFAC26B(unk_0xA0081090911D13E5(), "TREVOR", 0, 0, 0);
				unk_0x6BF154720AFAC26B(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x6BF154720AFAC26B(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x6BF154720AFAC26B(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x6BF154720AFAC26B(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x6BF154720AFAC26B(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xCD18C12FDC3FB874(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_172 && Global_101553.f_29685.f_5 != 1000)
			{
				func_127();
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_196[0]))
			{
				unk_0x4E82D83B086B5C93(&(iLocal_196[0]));
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_196[1]))
			{
				unk_0x4E82D83B086B5C93(&(iLocal_196[1]));
			}
			if (unk_0x0D2E3F017CBCB8A8(uLocal_246))
			{
				unk_0x07553DAC96600443(uLocal_246, 0);
			}
			if (unk_0xD3FACCDA4D66AEAD(uLocal_215))
			{
				unk_0xE9755D24C3BFFBED(&iLocal_215);
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_215))
			{
				unk_0xE9755D24C3BFFBED(&iLocal_215);
			}
			unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
			if (unk_0x16833EFAA58E63DB(uLocal_228))
			{
				unk_0x0B57C567D698C373(&uLocal_228);
			}
			func_20(1, 1, 1, 0);
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0x94724F7C938EBE34(1);
			unk_0x943A052E20E9C2CE(0);
			unk_0x627D428B266FEDCA(0);
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 1);
			}
			unk_0x0B17BC5D018E224B(Local_117, 100f, 1, 0, 0, 0);
			unk_0x6A173E5A316F6DE8(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xACD6D334FD769B0C(0f);
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
			uLocal_248 = unk_0xD5F3AC278EA12B1F(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0x491067A8E906F22D(joaat("a_m_o_acult_01"));
			while (!unk_0x2C1B5A0D3E233FC3(joaat("a_m_o_acult_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_190 = 6;
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
			if (unk_0x8D6FD7D962FDEB7F(0))
			{
				if (unk_0xF467E68A540B1B48("CULT_MASTER", 0))
				{
					if (!unk_0xD3FACCDA4D66AEAD(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0x90897FA118314142(unk_0xB5A5BBBE3805407B("CULT_MASTER", 0));
					}
				}
				if (unk_0xF467E68A540B1B48("REAR_CULT", 0))
				{
					if (!unk_0xD3FACCDA4D66AEAD(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0x90897FA118314142(unk_0xB5A5BBBE3805407B("REAR_CULT", 0));
					}
				}
				if (unk_0xF467E68A540B1B48("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xD3FACCDA4D66AEAD(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0x90897FA118314142(unk_0xB5A5BBBE3805407B("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0xF467E68A540B1B48("CARBINE_CULT", 0))
				{
					if (!unk_0xD3FACCDA4D66AEAD(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0x90897FA118314142(unk_0xB5A5BBBE3805407B("CARBINE_CULT", 0));
					}
				}
				if (unk_0xF467E68A540B1B48("SHOTGUN_CULT", 0))
				{
					if (!unk_0xD3FACCDA4D66AEAD(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0x90897FA118314142(unk_0xB5A5BBBE3805407B("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0xF467E68A540B1B48("TREVOR", 0))
				{
					unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 0);
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 188.9369f);
					unk_0x4F18EEC1C235A9DB(unk_0xA0081090911D13E5(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 1, 0);
				}
				if (unk_0xF467E68A540B1B48("Trevors_weapon", 0))
				{
					unk_0x652F753371E70398(iLocal_576, unk_0xA0081090911D13E5());
				}
				unk_0x8BDD755F07063522(91.3878f);
				unk_0x2A7D387AD73F1D15(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				unk_0x943A052E20E9C2CE(1);
				unk_0x627D428B266FEDCA(1);
				Local_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_100[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_100[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_100[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_100[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_100[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_100[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_100[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_100[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_100[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_100[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_100[10] = 25.8472f;
				unk_0xD8C3303D0A49D05B("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6F040B02C824E718(iLocal_196[iVar1], 0);
						unk_0x8942ADC0DB9F81E4(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0xECD905C06E682B6D(iLocal_196[iVar1], 0);
						unk_0x54753279989302A7(iLocal_196[iVar1], 2);
						unk_0xE00ECCA633196276(iLocal_196[iVar1], 50f, 20);
						unk_0x76A0FFACB5B58711(iLocal_196[iVar1], 5);
						unk_0xEE385441703939AA(iLocal_196[iVar1], 100f);
						unk_0x089391A6493B0105(iLocal_196[iVar1], 100f);
						unk_0xA082D4AC00BC651A(iLocal_196[iVar1], 150);
						unk_0x69C55299AED882A7(iLocal_196[iVar1], unk_0xB5BF1B58C833F7A9(40, 60));
						unk_0x0756233E85C362F2(iLocal_196[iVar1], unk_0xA0081090911D13E5(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6F040B02C824E718(iLocal_196[iVar1], 0);
						unk_0x8942ADC0DB9F81E4(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x87BBAE0EE5DD7680(iLocal_196[iVar1], 50, 1);
						unk_0xECD905C06E682B6D(iLocal_196[iVar1], 2);
						unk_0x54753279989302A7(iLocal_196[iVar1], 1);
						unk_0xE00ECCA633196276(iLocal_196[iVar1], 50f, 20);
						unk_0x76A0FFACB5B58711(iLocal_196[iVar1], 5);
						unk_0xEE385441703939AA(iLocal_196[iVar1], 100f);
						unk_0x089391A6493B0105(iLocal_196[iVar1], 100f);
						unk_0x69C55299AED882A7(iLocal_196[iVar1], unk_0xB5BF1B58C833F7A9(40, 60));
						unk_0x0756233E85C362F2(iLocal_196[iVar1], unk_0xA0081090911D13E5(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0xEB361B4BD195A4D3(iLocal_196[iVar1]) && !unk_0xEB361B4BD195A4D3(iLocal_196[11])) && !unk_0xEB361B4BD195A4D3(iLocal_196[12])) && !unk_0xEB361B4BD195A4D3(iLocal_196[13])) && !unk_0xEB361B4BD195A4D3(iLocal_196[14])) && !unk_0xEB361B4BD195A4D3(iLocal_196[15]))
						{
							unk_0x8942ADC0DB9F81E4(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x8942ADC0DB9F81E4(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x8942ADC0DB9F81E4(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x8942ADC0DB9F81E4(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x8942ADC0DB9F81E4(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x87BBAE0EE5DD7680(iLocal_196[iVar1], 0, 1);
							unk_0xECD905C06E682B6D(iLocal_196[iVar1], 3);
							unk_0x54753279989302A7(iLocal_196[iVar1], 0);
							unk_0x76A0FFACB5B58711(iLocal_196[iVar1], 0);
							unk_0x84D7599172090787(iLocal_196[iVar1], 1f, 1f);
							unk_0x95C55738CAE00A20(&uLocal_247);
							unk_0xA823C6696619598C(0, -1159.33f, 4924.412f, 221.6576f, unk_0xA0081090911D13E5(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 6000, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
							unk_0x70B222EEA46C37FA(uLocal_247);
							unk_0x3998B29E786DFD96(iLocal_196[15], uLocal_247);
							unk_0x7DFD14B8B873D6B5(&uLocal_247);
							unk_0x95C55738CAE00A20(&uLocal_247);
							unk_0xA823C6696619598C(0, -1163.279f, 4932.933f, 222.541f, unk_0xA0081090911D13E5(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x8FFB323431242036(0, unk_0xA0081090911D13E5(), 5000, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 7500, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
							unk_0x70B222EEA46C37FA(uLocal_247);
							unk_0x3998B29E786DFD96(iLocal_196[14], uLocal_247);
							unk_0x7DFD14B8B873D6B5(&uLocal_247);
							unk_0x95C55738CAE00A20(&uLocal_247);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 2500, 0);
							unk_0x8FFB323431242036(0, unk_0xA0081090911D13E5(), 5000, 0);
							unk_0xA823C6696619598C(0, -1156.175f, 4926.073f, 221.3447f, unk_0xA0081090911D13E5(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 6500, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
							unk_0x70B222EEA46C37FA(uLocal_247);
							unk_0x3998B29E786DFD96(iLocal_196[13], uLocal_247);
							unk_0x7DFD14B8B873D6B5(&uLocal_247);
							unk_0x95C55738CAE00A20(&uLocal_247);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 3000, 0);
							unk_0xA823C6696619598C(0, -1157.962f, 4922.196f, 221.309f, unk_0xA0081090911D13E5(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 5500, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
							unk_0x70B222EEA46C37FA(uLocal_247);
							unk_0x3998B29E786DFD96(iLocal_196[12], uLocal_247);
							unk_0x7DFD14B8B873D6B5(&uLocal_247);
							unk_0x95C55738CAE00A20(&uLocal_247);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x8FFB323431242036(0, unk_0xA0081090911D13E5(), 10000, 0);
							unk_0xA823C6696619598C(0, -1161.475f, 4916.061f, 220.5658f, unk_0xA0081090911D13E5(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x55F009A57228A86D(0, unk_0xA0081090911D13E5(), 4500, 0);
							unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
							unk_0x70B222EEA46C37FA(uLocal_247);
							unk_0x3998B29E786DFD96(iLocal_196[11], uLocal_247);
							unk_0x7DFD14B8B873D6B5(&uLocal_247);
							unk_0x77637031DE326F70(iLocal_196[iVar1], 1);
							unk_0xF674E664795C8CB3(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x6F040B02C824E718(iLocal_196[iVar1], 0);
						unk_0x8942ADC0DB9F81E4(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x87BBAE0EE5DD7680(iLocal_196[iVar1], 50, 1);
						unk_0xECD905C06E682B6D(iLocal_196[iVar1], 2);
						unk_0x54753279989302A7(iLocal_196[iVar1], 0);
						unk_0xE00ECCA633196276(iLocal_196[iVar1], 50f, 20);
						unk_0x71D369F947D2E619(iLocal_196[iVar1], 1);
						unk_0x76A0FFACB5B58711(iLocal_196[iVar1], 5);
						unk_0xEE385441703939AA(iLocal_196[iVar1], 100f);
						unk_0x089391A6493B0105(iLocal_196[iVar1], 100f);
						unk_0x69C55299AED882A7(iLocal_196[iVar1], unk_0xB5BF1B58C833F7A9(40, 60));
						unk_0x0756233E85C362F2(iLocal_196[iVar1], unk_0xA0081090911D13E5(), 0, 16);
					}
					unk_0x65889F26F311FC55(iLocal_196[iVar1], uLocal_410);
					unk_0x10BB9EA2ADBCF0F3(iLocal_196[iVar1], func_126(unk_0xC59DF10B4FC39DF8(iLocal_196[iVar1], 1), func_92(unk_0x0C1D3C552325765B())));
					unk_0xFF5CE2ECB4FBD4A8(iLocal_196[iVar1], 1);
					unk_0x705E4255B39314A7(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_124(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_96(&uLocal_411, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
				func_96(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0x88B0F0DC270164B7(&iVar0, 1);
				unk_0x88B0F0DC270164B7(&iVar0, 3);
				unk_0x88B0F0DC270164B7(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = unk_0x2B370F74D5B53597(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = unk_0x2B370F74D5B53597(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = unk_0x2B370F74D5B53597(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = unk_0x2B370F74D5B53597(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = unk_0xE1C25770C2FB7AE3(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x4A1ACDDF793F9777(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x4A1ACDDF793F9777(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x4A1ACDDF793F9777(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x4A1ACDDF793F9777(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x4A1ACDDF793F9777(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x4A1ACDDF793F9777(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_123() < 50)
				{
					unk_0xA894D92D6FFD7F57(unk_0x0C1D3C552325765B(), 0.5f, 1);
				}
				if (func_122() != 18)
				{
					func_120(18);
				}
				if (!func_89())
				{
					func_109(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_109(int iParam0)
{
	if (func_114())
	{
		Global_101543 = 1;
		Global_101540 = unk_0xDF658EB6CA91DFBC();
		if (func_113(Global_101542))
		{
			func_110(0);
		}
		unk_0xA57E42D9C41110A9(1, "RE_TITLE");
		if (iParam0 && func_113(Global_101542))
		{
			unk_0x07FD940F5798C7D3();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101553.f_29685.f_2 < 3)
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_111(func_112(iParam0), -1);
					Global_101553.f_29685.f_2++;
					unk_0x88B0F0DC270164B7(&Global_101549, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 1))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_111(func_112(iParam0), -1);
					Global_101553.f_29685.f_3++;
					unk_0x88B0F0DC270164B7(&Global_101549, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 2))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_111(func_112(iParam0), -1);
					Global_101553.f_29685.f_4++;
					unk_0x88B0F0DC270164B7(&Global_101549, 2);
				}
			}
			break;
	}
}

void func_111(var uParam0, int iParam1)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

char* func_112(int iParam0)
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

int func_113(int iParam0)
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

int func_114()
{
	switch (func_115(&Global_25244, 0, 5, 0, unk_0xEAE20F1125B83888()))
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

int func_115(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89217.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_119(0))
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		unk_0x8F2CF88C37D4A413(unk_0x4A0FB18E33FE5805(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xD74A648A7073D681(8);
		}
		Global_35775 = iParam2;
		Global_35737 = *uParam0;
		Global_35738 = iParam4;
		Global_35736 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35736 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35736)
			{
				if (Global_35742[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35737 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_117(iParam2))
		{
			return 0;
		}
		if (Global_35736 == 8)
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		Global_35742[Global_35736 /*4*/] = Global_35739;
		Global_35742[Global_35736 /*4*/].f_1 = iParam1;
		Global_35742[Global_35736 /*4*/].f_2 = iParam2;
		Global_35742[Global_35736 /*4*/].f_3 = 0;
		Global_35736++;
		if (iParam4 != 0)
		{
			func_116(uParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35736 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35736)
	{
		if (Global_35742[iVar0 /*4*/] == *uParam0)
		{
			Global_35742[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0, Global_35775);
}

int func_118(int iParam0, int iParam1)
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

int func_119(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_62(iParam0);
	unk_0x0CE863A8DDA6EA24(0);
	unk_0x457423E7871A26C1(1);
	Global_101539 = 0;
	func_121();
}

void func_121()
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			unk_0x3607936F13065720(unk_0x705BC1BB91F530B5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)), 1);
		}
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 32, 0);
	}
}

int func_122()
{
	return Global_101542;
}

int func_123()
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0x8A3351ECF43DB941(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x8A3351ECF43DB941(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x8A3351ECF43DB941(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_124(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_125(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_38(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_38(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_38(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_126(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE92969F4247292EB((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_127()
{
	Global_25420 = 1;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x36B6788E20B0DAB6(iParam0, iParam1, 0))
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
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			iVar3 = unk_0x721AEAEA1E47C804(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x1F5D1D4EDBF28BB6(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xCC79E6CFB02FD8CE(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_130(iVar2, iVar8) != 0)
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			if (unk_0xA63C8D5A22A2859B(iParam0, iVar2, func_130(iVar2, iVar8)))
			{
				if (func_129(func_130(iVar2, iVar8)))
				{
					iVar9 = unk_0x47938048EBFFB3FE(func_130(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	uVar1 = unk_0xDD561D769F9BC582(iVar2, iVar3, Var5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_130(iVar2, iVar8) != 0)
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			if (unk_0xA63C8D5A22A2859B(iParam0, iVar2, func_130(iVar2, iVar8)))
			{
				unk_0x71D66996DB2F36A7(uVar1, func_130(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x36B6788E20B0DAB6(iParam0, iVar2, 0))
		{
			unk_0x111D87FF44983628(uVar1, unk_0x4D057AF87C43F32F(iParam0, iVar2));
		}
	}
	return uVar1;
}

int func_129(int iParam0)
{
	if (((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon"))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
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
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
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
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
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
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
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
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
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
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
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
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
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
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
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
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
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
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
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
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_131(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x025355D1D08BBE6A(iVar1))
					{
						if (unk_0x4FFB2133277091F7(iVar1, iParam1, &Var41))
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

int func_131(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA9AB040C6EE0E9A9();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x526CCBCB3A687F81(iVar0, uParam1))
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

bool func_132()
{
	bool bVar0;
	
	bVar0 = unk_0xDF3F7A44D6400C56();
	if (!Global_69616)
	{
		if (!bVar0)
		{
			Global_69616 = 1;
		}
	}
	return bVar0;
}

int func_133(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_134(iParam0, iParam1);
}

int func_134(int iParam0, int iParam1)
{
	if (func_15(14) && !func_145(iParam0))
	{
		return 0;
	}
	if (unk_0x3C91BC99A9AE5C7D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69617)
	{
		return 0;
	}
	if (func_144(&Global_2578151))
	{
		if (func_142(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_135(&Global_2578151, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CCFD9D11EFFE8B6(iParam0))
		{
			return 0;
		}
		if (unk_0x3C91BC99A9AE5C7D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_135(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_145(iParam1))
	{
		return 0;
	}
	if (func_142(uParam0, iParam1))
	{
		return 0;
	}
	if (func_141(uParam0) < 0f)
	{
		func_140(uParam0, 0);
	}
	func_138(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_136(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_136(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_145(iParam1))
	{
		return 0;
	}
	if (func_142(uParam0, iParam1))
	{
		return 0;
	}
	if (func_141(uParam0) < 0f)
	{
		func_140(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_137(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_137(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_138(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_139(uParam0, iVar0);
		iVar0++;
	}
	func_140(uParam0, (Global_2578150 - 0.5f));
}

void func_139(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_140(var uParam0, float fParam1)
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

float func_141(var uParam0)
{
	return uParam0->f_72;
}

bool func_142(var uParam0, int iParam1)
{
	return func_143(uParam0, iParam1) != -1;
}

int func_143(var uParam0, int iParam1)
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

bool func_144(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_145(int iParam0)
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

void func_146()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0.6f / (1f / unk_0x62E2FDDFDA7A731D())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0xED71B6E985126065(Global_34898[10 /*31*/], fLocal_183, 0, 1);
		unk_0x6A7EBBBF8B647A25(Global_34898[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x62E2FDDFDA7A731D())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0xED71B6E985126065(Global_34898[9 /*31*/], fLocal_182, 0, 1);
		unk_0x6A7EBBBF8B647A25(Global_34898[9 /*31*/], 4, 0, 1);
	}
}

void func_147()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / unk_0x62E2FDDFDA7A731D())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0xED71B6E985126065(Global_34898[10 /*31*/], fLocal_183, 0, 1);
		unk_0x6A7EBBBF8B647A25(Global_34898[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x62E2FDDFDA7A731D())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0xED71B6E985126065(Global_34898[9 /*31*/], fLocal_182, 0, 1);
		unk_0x6A7EBBBF8B647A25(Global_34898[9 /*31*/], 4, 0, 1);
	}
}

void func_148()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x491067A8E906F22D(joaat("a_m_o_acult_02"));
			unk_0x491067A8E906F22D(joaat("prop_anim_cash_pile_02"));
			unk_0xA9DC3948106CC3E4("random@altruist_cult");
			unk_0x27971883A8701E73("AC_DELIVERED");
			unk_0x1D35593B1D9CB458(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x2C1B5A0D3E233FC3(joaat("a_m_o_acult_02")) && unk_0x2C1B5A0D3E233FC3(joaat("prop_anim_cash_pile_02"))) && unk_0xAD21C77209FD2024("random@altruist_cult")) && unk_0x27971883A8701E73("AC_DELIVERED")) && unk_0x3B53211A0839BF4E(joaat("weapon_assaultrifle")))
			{
				if (Global_101553.f_29685.f_5 < 2)
				{
					if (Global_101553.f_29685.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101553.f_29685.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0x491067A8E906F22D(joaat("prop_box_wood03a"));
					unk_0x491067A8E906F22D(joaat("prop_box_wood04a"));
					unk_0x491067A8E906F22D(joaat("prop_box_wood05a"));
					unk_0x491067A8E906F22D(joaat("prop_security_case_01"));
					if (!unk_0xC317719223E13B66())
					{
						unk_0x6946239981A418D8("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x16833EFAA58E63DB(uLocal_228))
				{
					unk_0x0B57C567D698C373(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0x94724F7C938EBE34(1);
				unk_0x943A052E20E9C2CE(0);
				unk_0x627D428B266FEDCA(0);
				unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 1);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0xB49DAD10DC051295("AC_DELIVERED");
				if (func_168())
				{
					func_167(0);
				}
				func_165();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					uLocal_213 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0x1F1B2B6E500380C5(uLocal_213, 0))
					{
						if (unk_0x5C22D20F8D56E182(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = unk_0x525584039F375488();
					if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]) && !unk_0xEB361B4BD195A4D3(uLocal_193[1]))
					{
						unk_0xD3032BAC1ECE011F(uLocal_193[0]);
						unk_0x988206841442D7CE(uLocal_193[0]);
						unk_0xD3032BAC1ECE011F(uLocal_193[1]);
						unk_0x988206841442D7CE(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xD3FACCDA4D66AEAD(uLocal_213))
			{
				if (!unk_0x18C670321BC98FDA(iLocal_213))
				{
					unk_0x7B17650F15A8876D(iLocal_213, 1, 0);
				}
				if (unk_0x6E07DBF03F3AC258(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x27327EB62D93CDBA(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x912AD5A10E7633F0(iLocal_213, 0))
					{
						unk_0x10BB9EA2ADBCF0F3(iLocal_213, 149.8882f);
						unk_0x74207974B5483203(iLocal_213);
					}
				}
			}
			unk_0x0B17BC5D018E224B(Local_120, 12f, 1, 0, 0, 0);
			unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 128.2065f);
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]) && !unk_0xEB361B4BD195A4D3(uLocal_193[1]))
			{
				unk_0x27327EB62D93CDBA(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(uLocal_193[0], 128.2065f);
				unk_0x27327EB62D93CDBA(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_101553.f_29685.f_5 >= 2)
			{
				iLocal_196[1] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_196[0], 1);
			iLocal_215 = unk_0xDD561D769F9BC582(joaat("weapon_assaultrifle"), -1, unk_0xC59DF10B4FC39DF8(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xD25643FC09708802(iLocal_215, iLocal_196[0], unk_0xFA167453DE504152(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_101553.f_29685.f_5 < 2)
			{
				uLocal_214 = unk_0xE1C25770C2FB7AE3(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
				unk_0xD25643FC09708802(uLocal_214, unk_0xA0081090911D13E5(), unk_0xFA167453DE504152(unk_0xA0081090911D13E5(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_101553.f_29685.f_5 >= 2)
			{
				unk_0x8942ADC0DB9F81E4(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x669DFEC6C5E8A812("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x6194C3993E6BB2A5(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xCAD643E9EAD85BD2(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_101553.f_29685.f_5 >= 2)
			{
				unk_0xCAD643E9EAD85BD2(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x7EB0D56EE8F8F8E8(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]) && !unk_0xEB361B4BD195A4D3(uLocal_193[1]))
			{
				unk_0xCAD643E9EAD85BD2(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0xCAD643E9EAD85BD2(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[1]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[1]))
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xA84C8086E7377CD5(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[1]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[1]))
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xA84C8086E7377CD5(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_101553.f_29685.f_5 < 2)
			{
				func_127();
				if (unk_0xD3FACCDA4D66AEAD(iLocal_196[0]))
				{
					unk_0x4E82D83B086B5C93(&(iLocal_196[0]));
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_196[1]))
				{
					unk_0x4E82D83B086B5C93(&(iLocal_196[1]));
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_214))
				{
					unk_0xE9755D24C3BFFBED(&iLocal_214);
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_215))
				{
					unk_0xE9755D24C3BFFBED(&iLocal_215);
				}
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				unk_0xD2C0F2FD77D871FA(0, 0, 3, 0);
				unk_0x07553DAC96600443(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				unk_0x943A052E20E9C2CE(1);
				unk_0x627D428B266FEDCA(1);
				unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 0);
				unk_0x8BDD755F07063522(0);
				func_149(func_13(), 1, 2000, 0, 0);
			}
			unk_0xB49DAD10DC051295("AC_DONE");
			Global_101553.f_29685.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_150(Global_101553.f_32740[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x8A3351ECF43DB941(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x10CE8769EE2626C7(iVar1, iVar0, 1);
	}
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_162();
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
					func_161(99, 1);
					func_160(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_160(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_160(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_158(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_157(5))
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
							func_160(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_157(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_160(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_160(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_160(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_160(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_160(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD24F6522EB082914())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_157(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_160(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_160(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_160(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_156(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_161(95, iParam3);
					break;
				
				case 1:
					func_161(97, iParam3);
					break;
				
				case 2:
					func_161(96, iParam3);
					break;
			}
			func_161(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_153(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_153(iVar1);
	}
	iVar5 = (Global_52990[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52990[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52990[iVar2] = 2147483647;
				}
				else
				{
					Global_52990[iVar2] = (Global_52990[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_160(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_160(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_160(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52990[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52990[iVar2];
			Global_52990[iVar2] = (Global_52990[iVar2] - iParam3);
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
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101553.f_25254.f_233[iVar2 /*69*/]++;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_1++;
		if (Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_152(iParam0);
	if (Global_35775 == 15)
	{
		func_151(0);
	}
	return 1;
}

void func_151(bool bParam0)
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
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52998[iVar0 /*3*/][0] = Global_101553.f_25254[iVar0];
		Global_52998.f_31[iVar0 /*3*/][0] = Global_101553.f_25254.f_11[iVar0];
		Global_52998.f_62[iVar0 /*3*/][0] = Global_101553.f_25254.f_22[iVar0];
		Global_52998.f_93[iVar0 /*3*/][0] = Global_101553.f_25254.f_33[iVar0];
		Global_52998.f_124[iVar0 /*3*/][0] = Global_101553.f_25254.f_44[iVar0];
		Global_52998.f_155[iVar0 /*3*/][0] = Global_101553.f_25254.f_55[iVar0];
		Global_52998.f_186[iVar0 /*3*/][0] = Global_101553.f_25254.f_66[iVar0];
		Global_52998.f_217[iVar0 /*3*/][0] = Global_101553.f_25254.f_77[iVar0];
		Global_52998.f_248[iVar0 /*3*/][0] = Global_101553.f_25254.f_88[iVar0];
		if (!bParam0)
		{
			Global_52998[iVar0 /*3*/][1] = Global_101553.f_25254[iVar0];
			Global_52998.f_31[iVar0 /*3*/][1] = Global_101553.f_25254.f_11[iVar0];
			Global_52998.f_62[iVar0 /*3*/][1] = Global_101553.f_25254.f_22[iVar0];
			Global_52998.f_93[iVar0 /*3*/][1] = Global_101553.f_25254.f_33[iVar0];
			Global_52998.f_124[iVar0 /*3*/][1] = Global_101553.f_25254.f_44[iVar0];
			Global_52998.f_155[iVar0 /*3*/][1] = Global_101553.f_25254.f_55[iVar0];
			Global_52998.f_186[iVar0 /*3*/][1] = Global_101553.f_25254.f_66[iVar0];
			Global_52998.f_217[iVar0 /*3*/][1] = Global_101553.f_25254.f_77[iVar0];
			Global_52998.f_248[iVar0 /*3*/][1] = Global_101553.f_25254.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52990[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x10CE8769EE2626C7(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x10CE8769EE2626C7(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x10CE8769EE2626C7(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_153(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0) || unk_0x08BA6DD398CA197C(Global_2097152[func_155() /*10106*/].f_7120.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_2097152[func_155() /*10106*/].f_7120.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x754E61FE98961B39("COUP_RED");
		unk_0xBDE6EEC5F6BDC060(func_154(iParam0));
		unk_0xDAB775768F2B11B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_154(int iParam0)
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

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156(int iParam0)
{
	func_161(93, iParam0);
	func_161(29, iParam0);
	func_161(30, iParam0);
}

bool func_157(int iParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2097152[func_155() /*10106*/].f_7120.f_10, iParam0);
}

int func_158(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3C91BC99A9AE5C7D(27))
	{
		return 0;
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x8A3351ECF43DB941(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x10CE8769EE2626C7(joaat("num_cash_spent"), iVar1, 1);
		func_159(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_133(27, 1);
	return 1;
}

int func_159(int iParam0, int iParam1)
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
	}
	return 0;
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_162()
{
	int iVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52990[0] == iVar0)
		{
			Global_52990[0] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52990[1] == iVar0)
		{
			Global_52990[1] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52990[2] == iVar0)
		{
			Global_52990[2] = iVar0;
		}
	}
}

void func_163(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x9A1116B636E7177A(uParam0, sParam1, sParam2, func_164(iParam3), 0);
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
	Global_14611 = 0;
	func_166();
}

void func_166()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
	}
}

void func_167(int iParam0)
{
	Global_16756 = iParam0;
}

int func_168()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x491067A8E906F22D(joaat("a_m_o_acult_02"));
			unk_0x491067A8E906F22D(joaat("prop_anim_cash_pile_02"));
			unk_0xA9DC3948106CC3E4("random@altruist_cult");
			unk_0x27971883A8701E73("AC_DELIVERED");
			unk_0x1D35593B1D9CB458(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x2C1B5A0D3E233FC3(joaat("a_m_o_acult_02")) && unk_0x2C1B5A0D3E233FC3(joaat("prop_anim_cash_pile_02"))) && unk_0xAD21C77209FD2024("random@altruist_cult")) && unk_0x27971883A8701E73("AC_DELIVERED")) && unk_0x3B53211A0839BF4E(joaat("weapon_assaultrifle")))
			{
				if (Global_101553.f_29685.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_101553.f_29685.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101553.f_29685.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_101553.f_29685.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0x491067A8E906F22D(joaat("prop_box_wood03a"));
					unk_0x491067A8E906F22D(joaat("prop_box_wood04a"));
					unk_0x491067A8E906F22D(joaat("prop_box_wood05a"));
					unk_0x491067A8E906F22D(joaat("prop_security_case_01"));
					if (!unk_0xC317719223E13B66())
					{
						unk_0x6946239981A418D8("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x16833EFAA58E63DB(uLocal_228))
				{
					unk_0x0B57C567D698C373(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0x94724F7C938EBE34(1);
				unk_0x943A052E20E9C2CE(0);
				unk_0x627D428B266FEDCA(0);
				unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 1);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0xB49DAD10DC051295("AC_DELIVERED");
				if (func_168())
				{
					func_167(0);
				}
				func_165();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					iLocal_213 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0x1F1B2B6E500380C5(iLocal_213, 0))
					{
						if (unk_0x5C22D20F8D56E182(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0x525584039F375488();
					if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
					{
						unk_0xD3032BAC1ECE011F(uLocal_193[0]);
						unk_0x988206841442D7CE(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0xD3FACCDA4D66AEAD(iLocal_213))
			{
				if (!unk_0x18C670321BC98FDA(iLocal_213))
				{
					unk_0x7B17650F15A8876D(iLocal_213, 1, 0);
				}
				if (unk_0x6E07DBF03F3AC258(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x27327EB62D93CDBA(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x912AD5A10E7633F0(iLocal_213, 0))
					{
						unk_0x10BB9EA2ADBCF0F3(iLocal_213, 149.8882f);
						unk_0x74207974B5483203(iLocal_213);
					}
				}
			}
			unk_0x0B17BC5D018E224B(Local_120, 12f, 1, 0, 0, 0);
			unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 128.2065f);
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				unk_0x27327EB62D93CDBA(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_101553.f_29685.f_5 >= 3)
			{
				iLocal_196[1] = unk_0xF8418B3B87CFCCBF(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_101553.f_29685.f_5 != 1 && Global_101553.f_29685.f_5 != 2)
			{
				func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_196[0], 1);
			iLocal_214 = unk_0xE1C25770C2FB7AE3(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
			iLocal_215 = unk_0xDD561D769F9BC582(joaat("weapon_assaultrifle"), -1, unk_0xC59DF10B4FC39DF8(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xD25643FC09708802(iLocal_215, iLocal_196[0], unk_0xFA167453DE504152(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_101553.f_29685.f_5 < 3)
			{
				if (Global_101553.f_29685.f_5 == 0)
				{
					unk_0xD25643FC09708802(iLocal_214, unk_0xA0081090911D13E5(), unk_0xFA167453DE504152(unk_0xA0081090911D13E5(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0xD25643FC09708802(iLocal_214, unk_0xA0081090911D13E5(), unk_0xFA167453DE504152(unk_0xA0081090911D13E5(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_101553.f_29685.f_5 >= 3)
			{
				unk_0x8942ADC0DB9F81E4(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x669DFEC6C5E8A812("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x6194C3993E6BB2A5(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xCAD643E9EAD85BD2(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_101553.f_29685.f_5 >= 3)
			{
				unk_0xCAD643E9EAD85BD2(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x7EB0D56EE8F8F8E8(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				unk_0xCAD643E9EAD85BD2(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_101553.f_29685.f_5 == 1 || Global_101553.f_29685.f_5 == 2)
				{
					if (!func_107())
					{
						func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0xA84C8086E7377CD5(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0xEB361B4BD195A4D3(uLocal_193[0]))
			{
				if (unk_0x1F1602FD864AA4C1(uLocal_193[0]))
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_101553.f_29685.f_5 == 1 || Global_101553.f_29685.f_5 == 2)
			{
				if ((unk_0xA84C8086E7377CD5(uLocal_188) > 0.9742857f && !iLocal_181) && unk_0xFA461E82A81FEF04() == 4)
				{
					unk_0xFF4920BAFCB15F65("CamPushInNeutral", 0, 0);
					unk_0xAB16AADE80707D47(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0xA84C8086E7377CD5(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_101553.f_29685.f_5 < 3)
			{
				if (Global_101553.f_29685.f_5 != 1 && Global_101553.f_29685.f_5 != 2)
				{
					func_127();
					if (unk_0xD3FACCDA4D66AEAD(iLocal_196[0]))
					{
						unk_0x4E82D83B086B5C93(&(iLocal_196[0]));
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_196[1]))
					{
						unk_0x4E82D83B086B5C93(&(iLocal_196[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0xD3FACCDA4D66AEAD(iLocal_196[0]))
					{
						unk_0xEDBE0CD7C81FA37E(iLocal_196[0], 0, 0);
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_196[1]))
					{
						unk_0xEDBE0CD7C81FA37E(iLocal_196[1], 0, 0);
					}
					if (unk_0xD3FACCDA4D66AEAD(uLocal_193[0]))
					{
						unk_0xEDBE0CD7C81FA37E(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_214))
				{
					unk_0xE9755D24C3BFFBED(&iLocal_214);
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_215))
				{
					unk_0xE9755D24C3BFFBED(&iLocal_215);
				}
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				if (Global_101553.f_29685.f_5 == 0)
				{
					unk_0xE33751BF671E2013(unk_0xA0081090911D13E5(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x9B109E7410A2CB10(unk_0x0C1D3C552325765B(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x28C1B9853548BD8E(sLocal_408, "cult_p4_cam"))
				{
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xD2C0F2FD77D871FA(0, 0, 3, 0);
				}
				unk_0x07553DAC96600443(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				unk_0x943A052E20E9C2CE(1);
				unk_0x627D428B266FEDCA(1);
				unk_0xF414004DEC115D4A(unk_0xA0081090911D13E5(), 0);
				unk_0x8BDD755F07063522(0);
				func_149(func_13(), 1, 1000, 0, 0);
			}
			if (Global_101553.f_29685.f_5 != 1 && Global_101553.f_29685.f_5 != 2)
			{
				unk_0xB49DAD10DC051295("AC_DONE");
				Global_101553.f_29685.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_107() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_127();
				if (unk_0xD3FACCDA4D66AEAD(iLocal_196[0]))
				{
					unk_0x4E82D83B086B5C93(&(iLocal_196[0]));
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_196[1]))
				{
					unk_0x4E82D83B086B5C93(&(iLocal_196[1]));
				}
				unk_0xB49DAD10DC051295("AC_DONE");
				Global_101553.f_29685.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_170()
{
	if (func_172())
	{
		if (func_13() == 2)
		{
			if (unk_0x7DB6845B2861FAF4(func_171()))
			{
				unk_0x42CA0FB80432844C(func_171(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0x4C5CC24696B9B995(func_171(), 0);
					if (unk_0x6E07DBF03F3AC258(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
						{
							if (!unk_0x912AD5A10E7633F0(unk_0x525584039F375488(), 0))
							{
								unk_0xAAE246A3BA63EEF6(unk_0x525584039F375488(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0x4C5CC24696B9B995(func_171(), 0);
					uLocal_193[1] = unk_0x4C5CC24696B9B995(func_171(), 1);
					if (unk_0x6E07DBF03F3AC258(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0) && unk_0x6E07DBF03F3AC258(uLocal_193[1], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
						{
							if (!unk_0x912AD5A10E7633F0(unk_0x525584039F375488(), 0))
							{
								unk_0xAAE246A3BA63EEF6(unk_0x525584039F375488(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_171()
{
	return unk_0x67D12A4DCB18DE93(unk_0x4A0FB18E33FE5805());
}

bool func_172()
{
	return Global_25419;
}

void func_173()
{
	if (func_176())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x6A173E5A316F6DE8(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x999A157665D69393(func_92(unk_0x0C1D3C552325765B()), Local_117, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0xD28ED8D0CD006D1E(2017343592, joaat("player")) != 5)
		{
			if (func_175())
			{
				unk_0xFDDE2C1A05E64390(5, 2017343592, joaat("player"));
			}
			else if (func_174())
			{
				unk_0xFDDE2C1A05E64390(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0xD28ED8D0CD006D1E(2017343592, joaat("player")) != 5)
		{
			if (func_175())
			{
				if (unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()) || (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()) && unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B())))
				{
					unk_0xFDDE2C1A05E64390(5, 2017343592, joaat("player"));
				}
			}
			else if (func_174())
			{
				unk_0xFDDE2C1A05E64390(5, 2017343592, joaat("player"));
			}
			else if (unk_0xD28ED8D0CD006D1E(2017343592, joaat("player")) != 1)
			{
				unk_0xFDDE2C1A05E64390(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_175())
	{
		if (iLocal_179)
		{
			if (!unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 3))
			{
				unk_0xB49DAD10DC051295("AC_START");
			}
			unk_0xACD6D334FD769B0C(0f);
			unk_0x32508B8E93AAF2BE("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0xE99F157D6ECE25DA(Global_34898[9 /*31*/].f_2, 6f, Global_34898[9 /*31*/].f_5, 0))
			{
				unk_0x555D253AB8DC8914(Global_34898[9 /*31*/].f_5, Global_34898[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0xE99F157D6ECE25DA(Global_34898[10 /*31*/].f_2, 6f, Global_34898[10 /*31*/].f_5, 0))
			{
				unk_0x555D253AB8DC8914(Global_34898[10 /*31*/].f_5, Global_34898[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0x57655292980A4BAD())
		{
			unk_0xB49DAD10DC051295("AC_END");
		}
		unk_0xACD6D334FD769B0C(1f);
		unk_0x32508B8E93AAF2BE("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_146();
		}
		iLocal_179 = 1;
	}
}

int func_174()
{
	if ((((((unk_0x8F8A77FB851E2075(Local_123, Local_126, fLocal_129, 1) || unk_0x8F8A77FB851E2075(Local_130, Local_133, fLocal_136, 1)) || unk_0x8F8A77FB851E2075(Local_137, Local_140, fLocal_143, 1)) || unk_0x8F8A77FB851E2075(Local_144, Local_147, fLocal_150, 1)) || unk_0x8F8A77FB851E2075(Local_151, Local_154, fLocal_157, 1)) || unk_0x8F8A77FB851E2075(Local_158, Local_161, fLocal_164, 1)) || unk_0x8F8A77FB851E2075(Local_165, Local_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	if ((((((unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_123, Local_126, fLocal_129, 0, 1, 0) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_130, Local_133, fLocal_136, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_137, Local_140, fLocal_143, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_144, Local_147, fLocal_150, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_151, Local_154, fLocal_157, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_158, Local_161, fLocal_164, 0, 1, 0)) || unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_165, Local_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_176()
{
	if (Global_101553.f_29685.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	unk_0xFDDE2C1A05E64390(255, 2017343592, joaat("player"));
	if (Global_101553.f_29685.f_5 >= iLocal_192 && Global_101553.f_29685.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_178(&uLocal_249);
			Global_86996 = 0;
			Global_86997 = 0;
			Global_86998 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0xC898340877A3B0B6(1);
			unk_0x0A4474CA170E33E0(0);
			unk_0x09FF08F4026F6F86(0);
			func_3(0);
			unk_0xACD6D334FD769B0C(1f);
			unk_0x806DACE5511E6771(3, 1);
			unk_0x806DACE5511E6771(5, 1);
			unk_0x4E9F6A9CAA59E6BD();
			iLocal_179 = 0;
			func_93();
			Global_101553.f_29685.f_5 = (iLocal_192 - 1);
			unk_0x78C587487CD40B92();
		}
	}
	else
	{
		unk_0x8E3DB58E9EDB1597();
		func_178(&uLocal_249);
		Global_86996 = 0;
		Global_86997 = 0;
		Global_86998 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0xC898340877A3B0B6(1);
		unk_0x0A4474CA170E33E0(0);
		unk_0x09FF08F4026F6F86(0);
		func_3(0);
		if (unk_0x1E3F61C2C1E29520(uLocal_399))
		{
			unk_0xA12A0D38735CCBF2(&uLocal_399);
			func_95(0);
		}
		unk_0xACD6D334FD769B0C(1f);
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
		unk_0x4E9F6A9CAA59E6BD();
		iLocal_179 = 0;
		unk_0x78C587487CD40B92();
	}
}

void func_178(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
		*uParam0 = 0;
	}
}


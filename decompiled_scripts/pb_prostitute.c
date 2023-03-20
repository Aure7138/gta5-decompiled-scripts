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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	var uLocal_121 = 16;
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
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
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
	var uLocal_286 = 1;
	var uLocal_287 = 0;
	int iLocal_288[3] = { 0, 0, 0 };
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307[4] = { 0, 0, 0, 0 };
	struct<7> Local_312[4];
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 15;
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
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
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
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 1;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	Local_55 = { 0f, 0f, 0f };
	iLocal_73 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_83 = -1;
	iLocal_85 = -1;
	iLocal_86 = -1;
	iLocal_292 = -1;
	if (Global_3)
	{
		unk_0xE60DEFFB2A853900();
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_512(unk_0xCFC72E446B0B3AD7(), 1))
		{
			unk_0xE60DEFFB2A853900();
		}
	}
	if (func_511(13) || func_511(14))
	{
		unk_0xE60DEFFB2A853900();
	}
	if (!func_510() && !unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0xD63E63DFACCEB80E(35))
		{
			func_500();
			func_499(1);
			func_495(&uLocal_344);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_95 = uScriptParam_0;
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_494();
		unk_0x097416E6C5CBD31B(2, 0, unk_0xCFC72E446B0B3AD7());
		func_489(0, -1, 0);
		unk_0xE5556978B2858C53(0);
	}
	func_488();
	func_487(128);
	while (iLocal_61)
	{
		bVar0 = true;
		func_484(&uLocal_344);
		if (func_510())
		{
			if (func_483(1024))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0x48D074AB643B8F99(unk_0x9F92518438215DD0()) && unk_0x9244F5F12B438F0F(unk_0x9F92518438215DD0()))
					{
						func_487(1024);
						unk_0xBA3586BB63B045BD(unk_0x9F92518438215DD0());
					}
				}
			}
			if (!func_483(1024) && func_483(2048))
			{
				unk_0xE60DEFFB2A853900();
			}
			if (!unk_0x746960881FB19A89(iLocal_95))
			{
				bVar0 = false;
			}
			else if (!unk_0x88A3865085DFB7AD(iLocal_95))
			{
				bVar0 = false;
				unk_0x468B2B7F4E493980(iLocal_95);
			}
		}
		if (!func_510() || !func_483(2048))
		{
			func_476();
			if (func_510())
			{
				func_475();
				if (func_483(128))
				{
					iLocal_61 = 0;
				}
			}
			if (func_469())
			{
				if (bVar0)
				{
					if (iLocal_293 > 0)
					{
						func_464(&uLocal_344);
					}
					func_462();
					func_460();
					switch (iLocal_293)
					{
						case 0:
							if (iLocal_292 == -1)
							{
								if (unk_0x6A0619CAF42BCFDE(iLocal_95))
								{
									iLocal_292 = func_459();
								}
								else if (func_457())
								{
									iLocal_292 = 4;
								}
							}
							else if (func_452())
							{
								if (func_451())
								{
									if (func_510())
									{
										if (unk_0x88A3865085DFB7AD(iLocal_95))
										{
											unk_0x18CA21B07F636243(iLocal_95, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0x468B2B7F4E493980(iLocal_95);
										}
									}
									else
									{
										unk_0x18CA21B07F636243(iLocal_95, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_293 = 1;
								func_450("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_449(iLocal_48, 4096))
							{
								func_448();
							}
							if (func_447())
							{
								iLocal_293 = 2;
								func_450("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_443())
							{
								iLocal_293 = 3;
								func_441(&iLocal_48, 64);
								Global_24596 = 1;
								func_450("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_344);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_449(iLocal_48, 2))
	{
	}
	func_450(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_500();
	func_495(&uLocal_344);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_61 = 1;
	}
	else
	{
		iLocal_61 = 0;
	}
}

void func_3()
{
	if (iLocal_294 > 0)
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_96))
			{
				if (!unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x746960881FB19A89(iLocal_96) || unk_0x0BA451447C3B1A8D(iLocal_96))
	{
		func_89(15);
	}
	switch (iLocal_294)
	{
		case 0:
			if (!iLocal_295 == 0)
			{
				iLocal_294 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0x3E0478C40AB5B38D(iLocal_96))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 7)
				{
					iLocal_64 = unk_0x17103F66FBB44C3C();
					iLocal_65 = (iLocal_64 - iLocal_63);
					if (iLocal_65 >= 10000 || !unk_0x5093D6F9140AD109(iLocal_95, iLocal_96, 12f, 12f, 5f, 0, 1, 0))
					{
						func_450("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x7069B4C453FC8202(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0xA1D66B742793EE32(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0xC96425701AF2C9C4(iLocal_96, iLocal_97, Local_89, (unk_0x5228B1DB5A87B4D1(iLocal_97) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_294 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_89, unk_0x77009B1C011405A9(iLocal_95, 1)) < 25f && unk_0xE962BD784DD0E442(iLocal_96, -1817882002) != 1)
			{
				iLocal_296 = unk_0x073B65E051D2F03E(1, 3);
				iLocal_294 = 11;
			}
			if (func_49(iLocal_96))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0x746960881FB19A89(iLocal_95) && unk_0x746960881FB19A89(iLocal_97))
			{
				if (unk_0x44E080690DA76A2A(iLocal_95, iLocal_97, 0))
				{
					if (!unk_0x0BA451447C3B1A8D(iLocal_96))
					{
						if (unk_0xE962BD784DD0E442(iLocal_96, -828834893) != 1)
						{
							unk_0xF811299AF81DB581(iLocal_95, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_301)
	{
		case 0:
			unk_0x277062A3064C4271(iLocal_95, 0.916f);
			if (func_36(iLocal_96))
			{
				func_34(&uLocal_118);
				iLocal_301 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), unk_0x77009B1C011405A9(iLocal_95, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_97);
			if (func_27(iLocal_96))
			{
				func_11(&uLocal_121, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&uLocal_118) > 1f)
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 7)
				{
					func_5(&iLocal_48, 512);
					iLocal_301 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC318E8D9E0AA1394(0);
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
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_23();
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_17();
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_16())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_15())
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_14();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_14()
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_15()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_17()
{
	if (func_511(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		Global_14393 = func_18();
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

int func_18()
{
	func_19();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_19()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_22(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_21(unk_0x9F92518438215DD0());
			if (func_20(iVar0) && (!func_511(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_20(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_25()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0x05D147EB1B618331(unk_0xB6A50C909A8FABC3(iParam0), unk_0x77009B1C011405A9(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16728)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_296 != 1 && iLocal_296 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xFC38B241541883D3(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0xDFA7F2CAB9E5A4D4(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0x631869B258DDF04D(iLocal_95, 876132797);
}

void func_32()
{
	unk_0x125C94DBA75FDFFA();
	func_33();
}

void func_33()
{
	Global_17098.f_134 = 1;
}

void func_34(var uParam0)
{
	func_35(uParam0, 0f);
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0x9E9AFDBF482248F6(uLocal_62))
	{
		uLocal_62 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0x3DA2EED4204CE591(uLocal_62))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_95, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_71) / 2f)))));
		if (iParam0 == unk_0x9F92518438215DD0())
		{
			func_37(iParam0, func_43(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_71) / 2f)))));
		}
		func_450("anim_dict has loaded, triggering anims?");
		func_441(&iLocal_48, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x0BA451447C3B1A8D(iParam0))
	{
		return;
	}
	iVar0 = unk_0x1161215F69587BDA(iParam0, 1);
	if (!unk_0xFC38B241541883D3(iVar0, 0))
	{
		return;
	}
	iLocal_47 = unk_0x6AD0A8B1485375C4();
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) && func_42(0, 1))
	{
		if (iLocal_47 != 4)
		{
			unk_0x205858649749527B(4);
		}
	}
	bVar1 = func_41(iVar0);
	uVar2 = func_44(iParam0, 0, 0);
	if (!unk_0x3DA2EED4204CE591(uVar2))
	{
		unk_0xDA293E5084610B09(uVar2);
	}
	else
	{
		unk_0xF87DA7F5BA8C7D0F(&uVar3);
		unk_0x7CF15DD8B3815A0D(0, uVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(0, uVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(0, uVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(0, uVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(0, uVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x3179CCC77CBAB31F(uVar3);
		unk_0xC7EBE3C9AC83FAAA(iParam0, uVar3);
		unk_0xCD02E3C29B8253A6(&uVar3);
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)
{
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		switch (unk_0x90859548B14D533C(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xB49A1BEB8771FD4C(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xB49A1BEB8771FD4C(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_296 == 0;
}

var func_44(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		uVar0 = unk_0x1161215F69587BDA(iParam0, 1);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xBCBBB7902DEFA79B(iParam0) || !func_51(iParam0, iLocal_97, -1))
		{
			Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
			unk_0xA334EDA2335A13CA(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0x996FFDF5B8A260AB(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0x0BA451447C3B1A8D(unk_0x3D93A927E390E214(iParam0)))
			{
				unk_0xF78316EFCA911012(iParam0, unk_0x3D93A927E390E214(iParam0), 0, 16);
			}
			else
			{
				unk_0x996FFDF5B8A260AB(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
	Var3 = { Local_89 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var3.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var3.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var3.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var3.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_53()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 1)
				{
					if (unk_0x8BA225F2987898B4(iLocal_95) > 0)
					{
						if (unk_0x44E080690DA76A2A(iLocal_95, iLocal_97, 0))
						{
							func_450("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xF87DA7F5BA8C7D0F(&uLocal_100);
							unk_0xAFFE01EF7078CAD9(0, iLocal_97, 10f, 786603);
							unk_0x3179CCC77CBAB31F(uLocal_100);
							unk_0xC7EBE3C9AC83FAAA(iLocal_96, uLocal_100);
							unk_0xCD02E3C29B8253A6(&uLocal_100);
							Local_89 = { func_54(unk_0x77009B1C011405A9(iLocal_95, 1)) };
							unk_0xDA293E5084610B09(func_44(iLocal_95, 0, 0));
							iLocal_294 = 7;
							iLocal_63 = unk_0x17103F66FBB44C3C();
						}
					}
				}
			}
			else
			{
				func_450("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_450("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_450("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xB7A628320EFF8E47(Param0, func_55(iVar1)) < unk_0xB7A628320EFF8E47(Param0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_56()
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
			{
				fVar0 = unk_0x9EF11DECA38804B6(iLocal_97);
				if (unk_0x5093D6F9140AD109(iLocal_96, iLocal_95, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_95);
					iLocal_64 = unk_0x17103F66FBB44C3C();
					iLocal_65 = (iLocal_64 - iLocal_63);
					if (iLocal_65 >= iLocal_67)
					{
						if (func_510())
						{
							if (unk_0x88A3865085DFB7AD(iLocal_96))
							{
								unk_0xD2062A6AC314B85E(iLocal_96);
							}
						}
						else
						{
							unk_0xD2062A6AC314B85E(iLocal_96);
						}
						iLocal_67 = unk_0x073B65E051D2F03E(0, 10000);
						if (iLocal_67 > 2500)
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_95);
							unk_0xCD02E3C29B8253A6(&uLocal_100);
							unk_0xF87DA7F5BA8C7D0F(&uLocal_100);
							unk_0x4073360CA020BB84(0, iLocal_97, -1, 0, 1f, 8388609, 0);
							unk_0xD19636383159AC07(0, -1);
							unk_0x3179CCC77CBAB31F(uLocal_100);
							unk_0xC7EBE3C9AC83FAAA(iLocal_95, uLocal_100);
							unk_0xCD02E3C29B8253A6(&uLocal_100);
							func_450("other GIVES MONEY");
							iLocal_294 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x3E0478C40AB5B38D(iLocal_96))
							{
								if (unk_0xFC38B241541883D3(iLocal_97, 0))
								{
									if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
									{
										unk_0xCD02E3C29B8253A6(&uLocal_100);
										unk_0xF87DA7F5BA8C7D0F(&uLocal_100);
										unk_0xD19636383159AC07(0, unk_0x073B65E051D2F03E(500, 2000));
										unk_0xAFFE01EF7078CAD9(0, iLocal_97, 10f, 786603);
										unk_0x3179CCC77CBAB31F(uLocal_100);
										unk_0xC7EBE3C9AC83FAAA(iLocal_96, uLocal_100);
										unk_0xCD02E3C29B8253A6(&uLocal_100);
										iLocal_63 = unk_0x17103F66FBB44C3C();
									}
								}
							}
							func_450("prostitute REFUSED MONEY 2");
							if (func_510())
							{
								if (unk_0x88A3865085DFB7AD(iLocal_96))
								{
									unk_0xD2062A6AC314B85E(iLocal_96);
								}
							}
							else
							{
								unk_0xD2062A6AC314B85E(iLocal_96);
							}
							iLocal_294 = 6;
						}
					}
				}
				else
				{
					if (func_510())
					{
						if (unk_0x88A3865085DFB7AD(iLocal_96))
						{
							unk_0xD2062A6AC314B85E(iLocal_96);
						}
					}
					else
					{
						unk_0xD2062A6AC314B85E(iLocal_96);
					}
					func_90();
				}
			}
			else
			{
				func_450("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_510())
				{
					if (unk_0x88A3865085DFB7AD(iLocal_96))
					{
						unk_0xD2062A6AC314B85E(iLocal_96);
					}
				}
				else
				{
					unk_0xD2062A6AC314B85E(iLocal_96);
				}
				func_90();
			}
		}
		else
		{
			func_450("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_450("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iLocal_95) || unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return 1;
	}
	if (!func_510())
	{
		if (unk_0x827151D7B70CB853(iLocal_95, 1))
		{
			unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
		}
		else if (func_449(iLocal_48, 4194304))
		{
			unk_0xF87DA7F5BA8C7D0F(&uVar0);
			if (func_449(iLocal_74, 524288))
			{
				unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x3179CCC77CBAB31F(uVar0);
			unk_0xC7EBE3C9AC83FAAA(iLocal_95, uVar0);
			unk_0xCD02E3C29B8253A6(&uVar0);
			func_441(&iLocal_48, 16384);
			func_34(&uLocal_112);
		}
		return 1;
	}
	if (unk_0x827151D7B70CB853(iLocal_95, 1))
	{
		if (unk_0x88A3865085DFB7AD(iLocal_95))
		{
			unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x468B2B7F4E493980(iLocal_95);
		}
	}
	switch (iLocal_53)
	{
		case 0:
			if (func_449(iLocal_48, 4194304))
			{
				iLocal_53 = 1;
			}
			break;
		
		case 1:
			if (func_449(iLocal_74, 524288))
			{
				if (unk_0x88A3865085DFB7AD(iLocal_95))
				{
					unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0x468B2B7F4E493980(iLocal_95);
					return 0;
				}
			}
			iLocal_53 = 2;
			break;
		
		case 2:
			if (func_449(iLocal_74, 524288))
			{
				if (unk_0x88A3865085DFB7AD(iLocal_95))
				{
					if (unk_0xE962BD784DD0E442(iLocal_95, -2017877118) == 7)
					{
						func_58(0);
						iLocal_53 = 3;
					}
				}
				else
				{
					unk_0x468B2B7F4E493980(iLocal_95);
				}
			}
			else if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				func_58(0);
				iLocal_53 = 3;
			}
			else
			{
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			break;
		
		case 3:
			func_441(&iLocal_48, 16384);
			func_34(&uLocal_112);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0x3DD529A08590E6AE(iLocal_95) || unk_0x6A0619CAF42BCFDE(iLocal_95)) || unk_0x97DFCBCC740CB5FD(iLocal_95, func_59(0))) || unk_0x97DFCBCC740CB5FD(iLocal_95, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
	if (!unk_0x45ED5E18B78F7ED2(Var0, func_59(0), 20f, 1) && !unk_0x45ED5E18B78F7ED2(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x6A678E26A585E3C6(0, 1193033728, 0);
		}
		else
		{
			unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x3C1E519253371C13(iLocal_95, Var0, 20f, 0);
	}
	else
	{
		unk_0x3C1E519253371C13(0, Var0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		if (func_18() == 2)
		{
			unk_0xA3F41D007914F399(iLocal_95, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xA3F41D007914F399(iLocal_95, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0xE69F90D298F4217D(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if ((unk_0x3C17D9ED0E5F3FCA(iParam0, func_61(iLocal_292), func_60(1), 3) || unk_0x3C17D9ED0E5F3FCA(iParam0, func_61(iLocal_292), func_60(2), 3)) || unk_0x3C17D9ED0E5F3FCA(iParam0, func_61(iLocal_292), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 1)
				{
					if (unk_0x8BA225F2987898B4(iLocal_95) > 1)
					{
						if (unk_0x5093D6F9140AD109(iLocal_95, iLocal_96, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x9EF11DECA38804B6(iLocal_97);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_63 = unk_0x17103F66FBB44C3C();
								iLocal_67 = unk_0x073B65E051D2F03E(4000, 8000);
								func_450("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_294 = 4;
							}
						}
						else
						{
							func_450("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_450("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_450("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_450("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_510())
	{
		if (bParam0)
		{
			unk_0x060D3260330D112D(iLocal_95, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_449(iLocal_48, 4194304))
		{
			iVar0 = unk_0x073B65E051D2F03E(1, 4);
			unk_0xF87DA7F5BA8C7D0F(&uVar1);
			unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x3179CCC77CBAB31F(uVar1);
			unk_0xC7EBE3C9AC83FAAA(iLocal_95, uVar1);
			unk_0xCD02E3C29B8253A6(&uVar1);
		}
		return 1;
	}
	switch (iLocal_52)
	{
		case 0:
			if (bParam0)
			{
				unk_0x060D3260330D112D(iLocal_95, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_52 = 1;
			break;
		
		case 1:
			if (func_449(iLocal_48, 4194304))
			{
				if (unk_0x88A3865085DFB7AD(iLocal_95))
				{
					unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_52 = 2;
				}
				else
				{
					unk_0x468B2B7F4E493980(iLocal_95);
				}
			}
			break;
		
		case 2:
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, -2017877118) == 7)
				{
					iVar0 = unk_0x073B65E051D2F03E(1, 4);
					unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_52 = 3;
				}
			}
			else
			{
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			break;
		
		case 3:
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, -2017877118) == 7)
				{
					unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_52 = 4;
				}
			}
			else
			{
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			break;
		
		case 4:
			iLocal_52 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_95))
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_95))
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_95))
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xA3F41D007914F399(iLocal_95, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_97358.f_8303.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_97358.f_8303.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_97358.f_8303.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x7D94CA54BD4AB1DB(iParam0, Global_97358.f_8303.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_76(iParam2);
	return unk_0xEB3E23B43A745CA1(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_97358.f_8303.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_80(iParam2);
	return unk_0x27F7C2FB848CD525(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_97358.f_8303.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!unk_0x370603716EC2D420(sParam0))
	{
		unk_0x9B517A4FE28A719F(sParam0);
	}
}

void func_82()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
			{
				fVar0 = unk_0x9EF11DECA38804B6(iLocal_97);
				if (unk_0xE962BD784DD0E442(iLocal_96, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iLocal_97), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0x20CBCBD58A2C73B4(iLocal_97, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0x20CBCBD58A2C73B4(iLocal_97, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0xF87DA7F5BA8C7D0F(&uLocal_100);
					unk_0x27DF0A5AA993D7B6(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x23F243BF5B07DA90(0, iLocal_96, 0);
					unk_0xD19636383159AC07(0, -1);
					unk_0x3179CCC77CBAB31F(uLocal_100);
					unk_0xC7EBE3C9AC83FAAA(iLocal_95, uLocal_100);
					unk_0xCD02E3C29B8253A6(&uLocal_100);
					func_450("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_294 = 3;
				}
				else
				{
					func_450("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_450("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_450("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_450("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_96, iLocal_97, 0))
			{
				if (func_85(&iLocal_97))
				{
					if (func_84(unk_0x77009B1C011405A9(iLocal_96, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
					if (unk_0xED56472331EEB661(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0x61099D55069BD6BE(iLocal_96, 1f);
						unk_0x0848F9C26DFE1BC2(iLocal_96, 0.2f);
						unk_0xD00564363D416991(iLocal_96, 0.05f);
						unk_0xCCB857BE6ED3A633(iLocal_96, iLocal_97, Var0, 0f, 3, 360f, 1);
						unk_0x402A96371F34E6D8(iLocal_96, iLocal_95, -1, 2048, 4);
						func_450("OTHER TOLD TO PULL OVER");
						iLocal_294 = 2;
					}
				}
				else
				{
					func_450("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_450("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_450("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_450("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)
{
	if (func_510())
	{
		return unk_0x1D3BAF174600D6E8(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0xB9FFCD4A409DB496(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0x1D3BAF174600D6E8(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC38B241541883D3(*iParam0, 0))
	{
		iVar0 = unk_0xB6A50C909A8FABC3(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x95A70C0B34435CA8(*iParam0) > 0)
			{
				iVar1 = unk_0xEB083D04FE7B394C(*iParam0);
				if (((iVar1 == 0 && unk_0x4A33023BC86AAA7F(*iParam0, 0)) && (!unk_0xF97922D89E1A1F52(*iParam0, 1) && !unk_0xF97922D89E1A1F52(*iParam0, 0))) || unk_0xB5BBEB12C77EE430(*iParam0, 0) == iLocal_95)
				{
					if (func_41(*iParam0))
					{
						if (!func_449(iLocal_48, 32768))
						{
							func_441(&iLocal_48, 32768);
							if (!func_449(iLocal_48, 8))
							{
								unk_0xF56FC42B9186CE3F(func_86());
								func_441(&iLocal_48, 8);
							}
						}
					}
					else
					{
						if (func_449(iLocal_48, 32768))
						{
							func_5(&iLocal_48, 32768);
						}
						if (func_449(iLocal_48, 8))
						{
							if (unk_0x18E6A43566D33720(func_86()))
							{
								unk_0xB3D0E4FD85A02F35(func_86());
								func_5(&iLocal_48, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0x2C1B23216A36AE4C(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 25)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x68446DE1A840C25F(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x5E843FC089111E3E(iParam0, iVar1, unk_0x68446DE1A840C25F(iParam0, iVar1)), 16);
						iVar2 = unk_0x398F092142D37E17(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x398F092142D37E17("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x90859548B14D533C(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
		}
		if (unk_0x90859548B14D533C(iParam0) == 931866387 && unk_0xB6A50C909A8FABC3(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0)) || unk_0x8D759C5DD707B910(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	iLocal_294 = iParam0;
}

void func_90()
{
	if (func_510())
	{
		if (unk_0x88A3865085DFB7AD(iLocal_95))
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_95);
			unk_0xD2062A6AC314B85E(iLocal_95);
		}
	}
	else
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_95);
		unk_0xD2062A6AC314B85E(iLocal_95);
	}
	iLocal_96 = 0;
	iLocal_97 = 0;
	unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, unk_0x3250987ED5A577C0(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_295 = 0;
	iLocal_293 = 1;
}

void func_91(var uParam0)
{
	if (!func_449(iLocal_48, 32))
	{
		iLocal_293 = 1;
	}
	if (iLocal_294 > 1 && iLocal_294 != 12)
	{
		if (!func_449(iLocal_48, 33554432))
		{
			if (func_510())
			{
				if (Global_1676945 || func_433())
				{
					func_432(0);
					func_441(&iLocal_48, 33554432);
				}
			}
			if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
			{
				if (func_449(iLocal_48, 1048576) || func_449(iLocal_48, 8192))
				{
					func_432(0);
					func_441(&iLocal_48, 33554432);
				}
			}
		}
	}
	switch (iLocal_294)
	{
		case 0:
			if (func_449(iLocal_48, 16384) || func_449(iLocal_48, 8388608))
			{
				if (!func_10(&uLocal_112))
				{
					func_431(&uLocal_112);
				}
				if (func_430(&uLocal_112, 25f))
				{
					func_5(&iLocal_48, 16384);
					func_5(&iLocal_48, 8388608);
				}
			}
			else if (iLocal_295 != 0 && !func_429("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_428(&uLocal_121, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_428(&uLocal_121, 0, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_428(&uLocal_121, 0, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
						break;
				}
				iLocal_294 = 1;
			}
			else
			{
				func_427();
				iLocal_295 = 2;
			}
			break;
		
		case 1:
			func_418(uParam0);
			break;
		
		case 2:
			func_405(uParam0);
			break;
		
		case 3:
			func_404();
			break;
		
		case 4:
			func_392(uParam0);
			break;
		
		case 5:
			func_387();
			break;
		
		case 6:
			func_386(uParam0);
			break;
		
		case 7:
			func_365();
			func_357();
			break;
		
		case 8:
			func_354();
			unk_0x6A6A41C66448AD09(0, 80, 1);
			unk_0x6A6A41C66448AD09(0, 0, 1);
			unk_0x5693ADD6BB9E1E5D(unk_0xCFC72E446B0B3AD7());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_510())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			unk_0x5693ADD6BB9E1E5D(unk_0xCFC72E446B0B3AD7());
			unk_0x6A6A41C66448AD09(0, 0, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_510())
			{
				unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_448();
			break;
		
		case 13:
			unk_0x6A6A41C66448AD09(0, 80, 1);
			unk_0x6A6A41C66448AD09(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x6A6A41C66448AD09(0, 80, 1);
			unk_0x6A6A41C66448AD09(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_510())
	{
		if (unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), func_44(unk_0x9F92518438215DD0(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_449(iLocal_48, 16))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 1);
			func_5(&iLocal_48, 16);
		}
	}
	if (func_449(iLocal_48, 2))
	{
		func_93(1);
		func_450("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_500();
	if (func_510())
	{
		func_495(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_449(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
	{
		if (iLocal_71 == 0)
		{
			if (func_449(iLocal_48, 134217728))
			{
				unk_0xA334EDA2335A13CA(iLocal_95, 32768, 0);
				unk_0xA334EDA2335A13CA(iLocal_95, 196624, 1);
			}
			unk_0xA3F41D007914F399(iLocal_95, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_302)
	{
		case 0:
			if (!unk_0xD208EA2EE53AE102(iLocal_95) || func_114(&uLocal_106) > 4f)
			{
				func_109(iLocal_95);
				if (func_70(func_71(iLocal_95)) == 1)
				{
					iLocal_302 = 2;
				}
				else
				{
					func_108(&uLocal_106);
					func_107("PROS_RESPONSE");
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0xD208EA2EE53AE102(iLocal_95) || func_105())
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 256);
				func_441(&iLocal_48, 2048);
			}
			else
			{
				if (!func_10(&uLocal_106))
				{
					func_34(&uLocal_106);
				}
				if (func_114(&uLocal_106) > 15f || iLocal_305 != 0)
				{
					unk_0x35611EEE7A1FFEDB(1);
					func_104();
					iLocal_302 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_302 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()
{
	if (func_98(0))
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

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		if (unk_0x2E9CF5C574019636())
		{
			unk_0x7763EDCBED8A5840(&iLocal_95);
		}
		else
		{
			func_100(iLocal_95, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	var uVar0;
	float fVar1;
	
	if (unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), func_44(unk_0x9F92518438215DD0(), 0, 0), func_103(1), 3))
	{
		unk_0x7CF15DD8B3815A0D(unk_0x9F92518438215DD0(), func_44(unk_0x9F92518438215DD0(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x3E0478C40AB5B38D(uParam0))
	{
		if (func_510())
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				unk_0xAFD9EDE93E4F3A32(iParam0);
			}
		}
		else
		{
			unk_0xAFD9EDE93E4F3A32(iParam0);
		}
		if (func_449(iLocal_48, 33554432))
		{
			unk_0x32D18ECD9E6F9BE2(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x3250987ED5A577C0(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_441(&iLocal_48, 134217728);
			}
		}
		if (func_449(iLocal_48, 134217728))
		{
			unk_0xA334EDA2335A13CA(iParam0, 32768, 1);
			unk_0x722E6B3A5162A6BB(iParam0, unk_0x9F92518438215DD0(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xA334EDA2335A13CA(iParam0, 196624, 1);
			unk_0xCD02E3C29B8253A6(&uVar0);
			unk_0xF87DA7F5BA8C7D0F(&uVar0);
			unk_0x8737AAF3C52B871F(0, 1);
			if (unk_0x827151D7B70CB853(iParam0, 0))
			{
				if (!unk_0x0A93DB64A1052EB6(unk_0x1161215F69587BDA(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x3C17D9ED0E5F3FCA(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_71 > 0)
						{
							unk_0x7CF15DD8B3815A0D(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x7CF15DD8B3815A0D(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x8737AAF3C52B871F(0, 0);
			unk_0x6A678E26A585E3C6(0, 1193033728, 0);
			unk_0x3179CCC77CBAB31F(uVar0);
			unk_0xC7EBE3C9AC83FAAA(iParam0, uVar0);
			unk_0xCD02E3C29B8253A6(&uVar0);
		}
		if (func_510())
		{
			if (unk_0xD1AD5EB6C17BAF0D(iLocal_95))
			{
				if (unk_0x4792C62764008602(unk_0x26686837811C1E1E(iLocal_95)))
				{
					unk_0xE8105B7E3908547D(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0xE8105B7E3908547D(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_449(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!unk_0x8C612717241D72F3(uParam0, unk_0x1161215F69587BDA(uParam0, 0), 0, 0, 0))
	{
		unk_0xF811299AF81DB581(0, 0, 16842752);
	}
	else
	{
		unk_0xF811299AF81DB581(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_449(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = unk_0x073B65E051D2F03E(0, 1000);
	if ((iVar0 <= 333 && iLocal_305 == 0) || iLocal_305 == 3)
	{
		unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_305 == 0) || iLocal_305 == 1)
	{
		unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_305 == 0 || iLocal_305 == 2)
	{
		unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_305 == 0)
	{
		unk_0x3229F8D82C561641(0);
		unk_0x6A6A41C66448AD09(0, 99, 1);
		unk_0x6A6A41C66448AD09(0, 76, 1);
		unk_0x6A6A41C66448AD09(0, 80, 1);
		unk_0x303F3ACCD1D0223D(2, 203);
		unk_0x303F3ACCD1D0223D(2, 201);
		unk_0x303F3ACCD1D0223D(2, 202);
		if (unk_0x98A0901522E89A7F(2, 203))
		{
			unk_0x35611EEE7A1FFEDB(1);
			unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 3;
		}
		else if (unk_0x98A0901522E89A7F(2, 201))
		{
			unk_0x35611EEE7A1FFEDB(1);
			unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 1;
		}
		else if (unk_0x98A0901522E89A7F(2, 202))
		{
			unk_0x35611EEE7A1FFEDB(1);
			unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0xD208EA2EE53AE102(iParam0))
		{
			unk_0x73B8B1FE599EF361(iParam0);
		}
		if (!unk_0xD208EA2EE53AE102(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_121, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_121, 4);
		func_428(&uLocal_121, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_510())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar1 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x746960881FB19A89(iVar1))
			{
				if (unk_0xB5BBEB12C77EE430(iVar1, -1) != unk_0x9F92518438215DD0())
				{
					bVar0 = true;
				}
				if (unk_0xB5BBEB12C77EE430(iVar1, 0) != iLocal_95)
				{
					bVar0 = true;
				}
				if (unk_0xEB083D04FE7B394C(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
					func_500();
					func_495(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { unk_0x045015AED79BD50E(iLocal_98, 2) };
		unk_0x5EF916489F3787FC(180f);
		unk_0x203B2685C1715644((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_312[0 /*7*/]));
	func_117(&(Local_312[3 /*7*/]));
	func_117(&(Local_312[2 /*7*/]));
	func_117(&(Local_312[1 /*7*/]));
	if (func_429("PROS_CAM_TOG") || func_429("PROS_CAM_OC"))
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0x5329DB72517417AE(*uParam0))
	{
		unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
		if (unk_0x8E3093821480140B(*uParam0))
		{
			unk_0x45826D2663F7FD9C(*uParam0, 0);
		}
		unk_0x0CF4B2266E47C15F(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0xFC38B241541883D3(iLocal_98, 0))
	{
		unk_0x98DB74D00AA641A7(iLocal_98, 1);
	}
	if (iLocal_301 != 5)
	{
		if ((((((!func_210(iLocal_75) && !func_210(iLocal_76)) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81))
		{
			if (!unk_0x44615198247FF471(iLocal_95) || unk_0x53E0A6267F3FFBEF(unk_0x9F92518438215DD0()))
			{
				iLocal_301 = 5;
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if (!unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
				{
					iLocal_301 = 5;
				}
			}
		}
	}
	unk_0xAB10BEEBB0614A3E(2);
	unk_0x6A6A41C66448AD09(2, 19, 1);
	unk_0x6A6A41C66448AD09(2, 37, 1);
	func_206();
	switch (iLocal_301)
	{
		case 0:
			if (func_510())
			{
				func_203(1080, -1);
			}
			func_34(&uLocal_118);
			func_202(func_43(), func_449(iLocal_48, 32768));
			iLocal_301 = 1;
			func_450("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x6A6A41C66448AD09(0, 48, 1);
			unk_0x6A6A41C66448AD09(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&uLocal_118) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_48, 512);
					iLocal_304 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_71 >= 3)
					{
						func_123();
						iLocal_301 = 5;
					}
					else
					{
						func_122();
						unk_0x205858649749527B(iLocal_47);
						iLocal_301 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x6A6A41C66448AD09(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x6A6A41C66448AD09(0, 0, 1);
			}
			if (func_7(&uLocal_118) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_48, 512);
					iLocal_304 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_71 = 3;
					if (iLocal_71 >= 3)
					{
						func_123();
						iLocal_301 = 5;
						func_108(&uLocal_103);
					}
				}
			}
			break;
		
		case 3:
			unk_0x6A6A41C66448AD09(0, 0, 1);
			if (!unk_0xD208EA2EE53AE102(iLocal_95))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_300 = 0;
				iLocal_301 = 0;
				func_121();
				unk_0x205858649749527B(iLocal_47);
				iLocal_294 = 8;
			}
			break;
		
		case 5:
			unk_0x6A6A41C66448AD09(0, 0, 1);
			if (!unk_0xD208EA2EE53AE102(iLocal_95))
			{
				if (iLocal_71 > 0)
				{
					if (func_120(iLocal_95))
					{
						func_119();
					}
					else
					{
						func_432(0);
					}
				}
				else
				{
					func_450("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_432(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
	{
		if (iLocal_71 == 0)
		{
			unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_95))
		{
			func_34(&uLocal_106);
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 768);
			func_441(&iLocal_48, 2048);
			iLocal_294 = 13;
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2422166.f_600.f_10 = 1;
}

void func_122()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		unk_0xA3F41D007914F399(iLocal_95, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		unk_0xA3F41D007914F399(iLocal_95, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x370603716EC2D420(sParam0))
	{
		unk_0x6041FBFC1EE8196A(sParam0);
	}
}

int func_125()
{
	if (iLocal_304 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0xA1FEED78991B621C();
	unk_0x6EAAF037567A12E2();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x9E9AFDBF482248F6(func_44(unk_0x9F92518438215DD0(), 0, 0)))
	{
		return;
	}
	if (!unk_0x3DA2EED4204CE591(func_44(unk_0x9F92518438215DD0(), 0, 0)))
	{
		return;
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_449(iLocal_48, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_82);
	}
	unk_0x6A6A41C66448AD09(2, 19, 1);
	unk_0x6A6A41C66448AD09(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_304)
	{
		case 0:
			func_5(&iLocal_48, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_82);
			}
			func_175(iLocal_95, 0);
			if (!func_510())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_304 = 1;
			break;
		
		case 1:
			func_172(iLocal_75);
			if (func_210(iLocal_76))
			{
				if (!func_449(iLocal_49, 4))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_441(&iLocal_49, 4);
					}
				}
			}
			if (func_210(iLocal_75))
			{
				if (!func_449(iLocal_49, 8))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_441(&iLocal_49, 8);
					}
				}
			}
			if (func_449(iLocal_49, 4) && func_449(iLocal_49, 8))
			{
				if (!func_510())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_304 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_77);
			if (func_210(iLocal_77))
			{
				if (!func_449(iLocal_49, 16))
				{
					if (!func_510())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_441(&iLocal_49, 16);
					}
				}
			}
			if (func_449(iLocal_49, 16))
			{
				if (!func_510())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_304 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_449(iLocal_49, 64))
				{
					if (!func_449(iLocal_48, 16777216))
					{
						if (!func_510())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_78) >= fVar0)
						{
							func_441(&iLocal_48, 16777216);
							iLocal_72++;
						}
					}
					else
					{
						if (!func_510())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_78) < fVar0)
						{
							func_5(&iLocal_48, 16777216);
						}
					}
					if (iLocal_72 >= func_160(func_510(), func_166(), func_161()))
					{
						func_441(&iLocal_49, 64);
						func_5(&iLocal_48, 16777216);
					}
				}
			}
			else if (!func_449(iLocal_49, 64))
			{
				func_441(&iLocal_49, 64);
			}
			if (func_449(iLocal_49, 64))
			{
				if (!func_510())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_304 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_449(iLocal_49, 256))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_441(&iLocal_49, 256);
					}
				}
			}
			else if (!func_449(iLocal_49, 256))
			{
				func_441(&iLocal_49, 256);
			}
			if (func_449(iLocal_49, 256))
			{
				if (!func_510())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_304 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!func_449(iLocal_49, 1024))
				{
					if (!func_510())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_441(&iLocal_49, 1024);
					}
				}
			}
			else if (!func_449(iLocal_49, 1024))
			{
				func_441(&iLocal_49, 1024);
			}
			if (func_210(iLocal_81))
			{
				if (!func_449(iLocal_49, 2048))
				{
					if (!func_510())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_441(&iLocal_49, 2048);
					}
				}
			}
			else if (!func_449(iLocal_49, 2048))
			{
				func_441(&iLocal_49, 2048);
			}
			if (func_449(iLocal_49, 1024) && func_449(iLocal_49, 2048))
			{
				func_175(iLocal_95, 0);
				unk_0x7CF15DD8B3815A0D(iLocal_95, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(iLocal_304, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0x9F92518438215DD0(), -1);
				unk_0x7CF15DD8B3815A0D(unk_0x9F92518438215DD0(), func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(iLocal_304, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_49 = 0;
				iLocal_72 = 0;
				iLocal_60 = 0;
				func_128();
				iLocal_304 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_71 == 0 && !func_510())
	{
		if (func_21(unk_0x9F92518438215DD0()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_95);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_95);
		}
	}
	iLocal_71++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0x9F92518438215DD0()))
	{
		case 0:
			Global_97358.f_8303.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_97358.f_8303.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_97358.f_8303.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3015;
			switch (iParam1)
			{
				case 1:
					iVar1 = 75;
					break;
				
				case 3:
					iVar1 = 77;
					break;
				
				case 2:
					iVar1 = 76;
					break;
				
				case 4:
					iVar1 = 78;
					break;
				
				case 5:
					iVar1 = 79;
					break;
				
				case 6:
					iVar1 = 80;
					break;
				
				case 7:
					iVar1 = 81;
					break;
			}
			if (iVar1 != 3015)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_133()
{
	return Global_1312737;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_132(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0x44759218C5C621A3(iParam0, func_140(iVar0));
	Global_97358.f_8303.f_1[iVar0 /*11*/].f_10 = unk_0xB6A50C909A8FABC3(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_97358.f_8303.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0xEB3E23B43A745CA1(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_97358.f_8303.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x27F7C2FB848CD525(iParam0, func_80(iParam1));
}

var func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_97358.f_8303.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_97358.f_8303.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_97358.f_8303.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
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
		func_148((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_145();
	}
}

void func_145()
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_146() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_24444;
}

int func_147(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_86829[iVar0] = Global_86829[iVar0 + 1];
		}
		else
		{
			Global_86829[iVar0] = unk_0x17103F66FBB44C3C();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_80, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x9F92518438215DD0(), iLocal_81, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_510())
	{
		unk_0x2D7F51912E347689(iParam1);
	}
	else
	{
		unk_0x6C4954C76B25F972(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 1, 0, 0);
	func_153(iLocal_95, iLocal_80, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_81, 0, 0, 0);
	func_153(unk_0x9F92518438215DD0(), iLocal_81, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_510())
	{
		unk_0x464EECF383662E5E(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_510())
	{
		unk_0xD12D66B95AE958B2(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		return;
	}
	if (func_510())
	{
		unk_0x0A07306614DD57DF(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x2DDE6F600C12637C(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_510())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0x711D7C4E788B0421(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0x8E83718430E22797(Param0, Param3, iParam8);
		unk_0xBC5F61BBFCA70907(uVar0, bParam6);
		unk_0x25821CAAB3B8EF73(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_79, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x9F92518438215DD0(), iLocal_79, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 0, 1);
	func_153(iLocal_95, iLocal_79, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0x9F92518438215DD0(), iLocal_79, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_510())
	{
		return func_134(68, -1, 0);
	}
	return func_163(func_21(unk_0x9F92518438215DD0()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x39496A55977AA312(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)
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
					*uParam3 = 67;
					break;
				
				case 1:
					*uParam3 = 68;
					break;
				
				case 3:
					*uParam3 = 70;
					break;
				
				case 2:
					*uParam3 = 69;
					break;
				
				case 4:
					*uParam3 = 71;
					break;
				
				case 5:
					*uParam3 = 72;
					break;
				
				case 6:
					*uParam3 = 73;
					break;
				
				case 7:
					*uParam3 = 74;
					break;
			}
			break;
	}
}

int func_166()
{
	int iVar0;
	
	if (iLocal_296 != 0)
	{
		if (iLocal_60 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_60 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_60 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_60 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_78, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x9F92518438215DD0(), iLocal_78, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 1, 0);
	func_153(iLocal_95, iLocal_78, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0x9F92518438215DD0(), iLocal_78, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_77, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x9F92518438215DD0(), iLocal_77, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 0, 1);
	func_153(iLocal_95, iLocal_77, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0x9F92518438215DD0(), iLocal_77, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_510())
	{
		uVar0 = unk_0xF9F2ADAEAB471E70(unk_0x630D5D344EAE1A86(iParam0));
	}
	else
	{
		uVar0 = unk_0xF9F2ADAEAB471E70(iParam0);
	}
	return uVar0;
}

void func_172(int iParam0)
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_75, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0x9F92518438215DD0(), iLocal_76, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_75, 1, 0, 1);
	func_153(iLocal_95, iLocal_75, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_76, 0, 0, 1);
	func_153(unk_0x9F92518438215DD0(), iLocal_76, func_44(unk_0x9F92518438215DD0(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x44E080690DA76A2A(iParam0, iLocal_98, 0))
	{
		if (!func_510())
		{
			unk_0x4DB6897DB04DE279(iParam0, iLocal_98, iParam1);
		}
		else if (!unk_0x44E080690DA76A2A(iParam0, iLocal_98, 0))
		{
			unk_0x4073360CA020BB84(iParam0, iLocal_98, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_178(func_179(2), unk_0x038249BAB926B732(iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0x038249BAB926B732(iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "windscreen")));
	Var2 = { unk_0x045015AED79BD50E(iLocal_98, 2) };
	fVar5 = unk_0xE691E4EA6B4440C6(iLocal_98);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.f_0);
	fVar9 = (-2.5f + Var2.f_0);
	fVar10 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!unk_0x5329DB72517417AE(Local_312[2 /*7*/]))
	{
		func_177(&(Local_312[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0x5329DB72517417AE(Local_312[1 /*7*/]))
	{
		func_177(&(Local_312[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0x5329DB72517417AE(Local_312[0 /*7*/]))
	{
		func_177(&(Local_312[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0x5329DB72517417AE(Local_312[3 /*7*/]))
	{
		func_177(&(Local_312[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
	unk_0x45826D2663F7FD9C(Local_312[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x45826D2663F7FD9C(*uParam0, 1);
	unk_0xD137F1896B8B6A2E(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x4F034F83AF91EC27((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x0BA451447C3B1A8D(iLocal_95))
	{
	}
	if (!unk_0xFC38B241541883D3(iLocal_98, 0))
	{
	}
	unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iLocal_98), &uVar3, &Var6);
	Var9 = { unk_0x038249BAB926B732(iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "windscreen")) };
	Var12 = { unk_0xA9C270DECAAAE361(iLocal_98, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x20CBCBD58A2C73B4(iLocal_98, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x20CBCBD58A2C73B4(iLocal_98, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x20CBCBD58A2C73B4(iLocal_98, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_180() };
			break;
	}
	return Var0;
}

Vector3 func_180()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iLocal_98), &Var6, &uVar9);
	Var0 = { unk_0x038249BAB926B732(iLocal_98, unk_0xB96C39A95065BDE2(iLocal_98, "windscreen")) };
	Var3 = { unk_0xA9C270DECAAAE361(iLocal_98, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0x20CBCBD58A2C73B4(iLocal_98, 0f, -unk_0xE3DAC530D2CCDAE3(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_24688, iParam0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_24688, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0x5329DB72517417AE(Local_312[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xC76849C67C8DB633(Local_312[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x79DDEE9A5547C864(Local_312[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xC8557993A78C1B3E())
	{
		func_185(&(Local_312[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_510())
		{
			if (!func_429("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_510())
		{
			if (!func_429("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x4841051C33809BC4(2, 0) && !unk_0xC8557993A78C1B3E()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x45826D2663F7FD9C(Local_312[*iParam0 /*7*/], 1);
		}
	}
}

void func_183(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_449(iLocal_50, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_449(iLocal_50, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_449(iLocal_50, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_449(iLocal_50, 16) && func_449(iLocal_50, 64)) && func_449(iLocal_50, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	unk_0x8006B3A8DB2A6002(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0x803746EA4F29A533())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0x286FD331C17C5174(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (Var9.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((Var9.f_0 - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	unk_0x76EB36D538ED79B4(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x0B8E1CA0A30892C0(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x463FD061585D3DF9(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 218) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 219) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 220) * 127f));
		}
		if (!unk_0x463FD061585D3DF9(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x3FE0388EF7B8DEFB(2, 221) * 127f));
		}
	}
	if (unk_0x286FD331C17C5174(2))
	{
		if (bParam5)
		{
			if (unk_0x803746EA4F29A533())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xD67D7DFAF4969260())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_95))
		{
			if (!func_449(iLocal_48, 256))
			{
				unk_0x73B8B1FE599EF361(unk_0x9F92518438215DD0());
				unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_71 == 1)
				{
					if (!func_510())
					{
						unk_0x6B79A0D703E86711(unk_0xCFC72E446B0B3AD7(), 15, 1);
					}
					unk_0xA1571D45BF60560F(0, 4000, 252);
				}
				else if (iLocal_71 == 2)
				{
					if (!func_510())
					{
						unk_0x6B79A0D703E86711(unk_0xCFC72E446B0B3AD7(), 10, 1);
					}
					unk_0xA1571D45BF60560F(0, 4000, 210);
				}
				else
				{
					if (!func_510())
					{
						unk_0x6B79A0D703E86711(unk_0xCFC72E446B0B3AD7(), 5, 1);
					}
					unk_0xA1571D45BF60560F(0, 3000, 168);
				}
				func_441(&iLocal_48, 256);
			}
		}
	}
	else
	{
		switch (iLocal_297)
		{
			case 0:
				if (unk_0x631869B258DDF04D(iLocal_95, 876132797))
				{
					unk_0xA1571D45BF60560F(0, 200, 84);
					unk_0xDFA7F2CAB9E5A4D4(iLocal_98, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_449(iLocal_48, 32768))
				{
					if (func_510())
					{
						iVar0 = unk_0x630D5D344EAE1A86(iLocal_78);
					}
					else
					{
						iVar0 = iLocal_78;
					}
					if (unk_0xAA446425C3A969F9(iVar0))
					{
						fVar1 = unk_0xF9F2ADAEAB471E70(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_483(512))
							{
								unk_0xA1571D45BF60560F(0, 200, 252);
								unk_0xDFA7F2CAB9E5A4D4(iLocal_98, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_487(512);
						}
					}
				}
				else if (unk_0x631869B258DDF04D(iLocal_95, 876132797))
				{
					unk_0xA1571D45BF60560F(0, 200, 252);
					unk_0xDFA7F2CAB9E5A4D4(iLocal_98, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_449(iLocal_51, iParam0))
	{
		func_441(&iLocal_51, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0xFD181DDA4D8D6786(unk_0x9F92518438215DD0());
	iVar0 = (iVar0 + (1 + iLocal_296));
	if (iVar0 > unk_0x9B2AE70D0A8DA929(unk_0x9F92518438215DD0()))
	{
		iVar0 = unk_0x9B2AE70D0A8DA929(unk_0x9F92518438215DD0());
	}
	unk_0x5C66176FC9E6724C(unk_0x9F92518438215DD0(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		iLocal_58 = unk_0xFD181DDA4D8D6786(unk_0x9F92518438215DD0());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x3C17D9ED0E5F3FCA(iParam0, func_48(), func_40(11), 3) || unk_0x3C17D9ED0E5F3FCA(iParam0, func_48(), func_40(21), 3)) || unk_0x3C17D9ED0E5F3FCA(iParam0, func_46(), func_39(11), 3)) || unk_0x3C17D9ED0E5F3FCA(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x3C17D9ED0E5F3FCA(iLocal_95, func_44(unk_0x9F92518438215DD0(), 0, 0), func_194(iLocal_95, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		iVar1 = unk_0x1161215F69587BDA(iParam0, 1);
		if (unk_0xFC38B241541883D3(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_510())
	{
		func_199();
	}
	if (unk_0xD208EA2EE53AE102(iLocal_95) || unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
	{
		return;
	}
	if (unk_0x073B65E051D2F03E(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95) && !unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
	{
		if (iLocal_296 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_106))
		{
			func_431(&uLocal_106);
		}
		else if (func_7(&uLocal_106) > unk_0x3250987ED5A577C0(2f, 5f))
		{
			if (!func_449(iLocal_48, 65536))
			{
				func_441(&iLocal_48, 65536);
				unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_297);
			}
			else
			{
				func_5(&iLocal_48, 65536);
				func_34(&uLocal_106);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xA3F41D007914F399(iLocal_95, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xA3F41D007914F399(iLocal_95, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xA3F41D007914F399(iLocal_95, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xA3F41D007914F399(iLocal_95, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return 1;
	}
	return Global_2414035[iParam0 /*254*/].f_226;
}

void func_199()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_483(4))
	{
		if (!func_10(&uLocal_109))
		{
			func_431(&uLocal_109);
		}
		else if (func_7(&uLocal_109) > 2f)
		{
			if (!func_483(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_60++;
			}
			else if (func_483(16))
			{
				if (!unk_0xD208EA2EE53AE102(iLocal_95))
				{
					func_487(4);
					func_487(16);
					func_34(&uLocal_109);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		fVar0 = unk_0x273AB9C97CBB2B07(unk_0xCFC72E446B0B3AD7());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1)
{
	if (!func_510())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_132(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_132(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_132(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_132(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_132(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_132(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_132(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_132(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_132(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_132(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_132(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
				return 1;
				break;
			}
	}
	return 0;
}

void func_206()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(0);
		}
		unk_0xEDB9A377CD8B7F03(&Global_2264, 2);
	}
}

void func_207(int iParam0)
{
	if (Global_14551)
	{
		func_208(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_15())
	{
		Global_14393.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0)
{
	var uVar0;
	
	if (func_510())
	{
		uVar0 = unk_0xAA446425C3A969F9(unk_0x630D5D344EAE1A86(iParam0));
	}
	else
	{
		uVar0 = unk_0xAA446425C3A969F9(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0x2E9CF5C574019636())
	{
		unk_0xF391B7BD1F131C3F(1000);
		unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), func_213(), 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), func_212());
		func_500();
		unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
		unk_0x7763EDCBED8A5840(&iLocal_95);
	}
}

float func_212()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()
{
	int iVar0;
	
	if (func_216(&uLocal_103, 3f) && !unk_0x8E3093821480140B(uLocal_102))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x45826D2663F7FD9C(uLocal_101, 0);
		unk_0xA789EBE28A200809(uLocal_102, uLocal_101, iVar0, 1, 1);
	}
	if (func_216(&uLocal_103, func_215()))
	{
		unk_0xC6EA7B53F52F1DF9(1000);
		iLocal_294 = 10;
	}
}

float func_215()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_216(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_7(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0x2B1914308D0376C8(*uParam0))
		{
			if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0) == unk_0x40A2BB73421EA79A(*uParam0))
					{
						func_116(0);
						unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
						func_500();
						func_495(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			iVar0 = unk_0xFD181DDA4D8D6786(iLocal_95);
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			iVar0 = unk_0xFD181DDA4D8D6786(unk_0x9F92518438215DD0());
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x746960881FB19A89(iVar0))
			{
				Var1 = { unk_0x77009B1C011405A9(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_55, Var1) >= 4f)
				{
					func_116(0);
					unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
					func_500();
					func_495(uParam0);
				}
			}
		}
	}
}

void func_223()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (!func_449(iLocal_48, 16))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 0);
		}
		func_441(&iLocal_48, 16);
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iLocal_98 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (func_510())
		{
			if (unk_0x88A3865085DFB7AD(iLocal_98))
			{
				unk_0x51557D5848F7B48C(iLocal_98, 1);
				unk_0x4F089107CDB61F75(iLocal_98, 4);
				unk_0xD2B76C8013DBA777(iLocal_98, 1);
				unk_0x003E17A8BE5EA5B6(iLocal_98, 0, 0);
			}
		}
		else
		{
			unk_0x51557D5848F7B48C(iLocal_98, 1);
			unk_0x4F089107CDB61F75(iLocal_98, 4);
			unk_0xD2B76C8013DBA777(iLocal_98, 1);
		}
		if (!func_353() || !unk_0x44E080690DA76A2A(iLocal_95, iLocal_98, 0))
		{
			func_432(0);
			return;
		}
	}
	else
	{
		func_432(0);
		return;
	}
	func_206();
	if ((!unk_0x0A93DB64A1052EB6(iLocal_98) && unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) && !func_449(iLocal_48, 1024))
	{
		iLocal_294 = 7;
		func_351(1, -1);
		unk_0xEC2376DA57EC68E1("SCRIPT\HUD_321_GO", true);
		iLocal_300 = 0;
		func_450("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0xAB10BEEBB0614A3E(2);
	switch (iLocal_300)
	{
		case 0:
		case 1:
			if (func_510())
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (unk_0x746960881FB19A89(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
					{
						if (unk_0xCD22EDB73BA42551(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
						{
							if (unk_0xB5BBEB12C77EE430(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1) == unk_0x9F92518438215DD0())
							{
								if (unk_0x88A3865085DFB7AD(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
								{
									if (!unk_0x34E74FF8690AA4B1(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
									{
										unk_0x336AE92FD68DEF98(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0, 0);
									}
								}
								else
								{
									unk_0x468B2B7F4E493980(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xFEB67C8CD88C26AE(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0));
							return;
						}
					}
				}
			}
			func_350();
			func_349();
			func_191();
			if (func_346())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_345();
				if (func_510())
				{
					func_189(2);
					if (func_510())
					{
						if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							if (unk_0xCD22EDB73BA42551(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
							{
								if (unk_0x88A3865085DFB7AD(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
								{
									unk_0x00D8E7D0F5F1F7D2(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 1);
									unk_0x993B4D0D3CD44124(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 4);
									unk_0xDE6954D7B1A4B956(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 1);
								}
							}
						}
					}
				}
				unk_0xAFD9EDE93E4F3A32(iLocal_95);
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			if (func_344(iLocal_303))
			{
				func_343(&iLocal_303);
				func_5(&iLocal_74, 2);
			}
			func_341(iLocal_95, 0);
			if (func_341(unk_0x9F92518438215DD0(), 1))
			{
				if (func_340(0))
				{
					iLocal_47 = unk_0xAF8ACF13449C208C();
					iVar1 = unk_0x6AD0A8B1485375C4();
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (iVar1 != 4 && iLocal_47 == 4)
						{
							unk_0x205858649749527B(4);
						}
						else if (iVar1 == 4 && iLocal_47 != 4)
						{
							unk_0x205858649749527B(1);
						}
					}
					func_325();
					iLocal_300 = 3;
					func_450("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_324("PROS_NO_MONEY", -1);
					func_34(&uLocal_112);
					iLocal_296 = 3;
					iLocal_300 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xC8557993A78C1B3E())
			{
				return;
			}
			unk_0x1DD963D7440A5812(3);
			func_305();
			func_276(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_275(&uVar2, &iVar3, &uVar4, &uVar5, 0);
			unk_0x6A6A41C66448AD09(0, 48, 1);
			unk_0x303F3ACCD1D0223D(2, 187);
			unk_0x303F3ACCD1D0223D(2, 188);
			unk_0x303F3ACCD1D0223D(2, 201);
			iVar0 = 0;
			if (unk_0x708CE249B4F97BF8())
			{
				if (unk_0x17538E3E908C4879(2))
				{
					unk_0x6A6A41C66448AD09(0, 1, 1);
					unk_0x6A6A41C66448AD09(0, 2, 1);
					unk_0xC805A7010638FA82(0, 237, 1);
					unk_0xC805A7010638FA82(0, 238, 1);
					unk_0xC805A7010638FA82(0, 241, 1);
					unk_0xC805A7010638FA82(0, 242, 1);
					func_271(0, 0, 0, 1);
					func_270(0, -1);
					if (func_269())
					{
						if (Global_2544272 != iLocal_69)
						{
							unk_0x86F4B3D6FF8F65DE(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_69 = Global_2544272;
							func_450("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x205C5BF7277043DF(2, 187) || (unk_0x286FD331C17C5174(2) && unk_0x205C5BF7277043DF(2, 242))) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(0, 33))) || (((unk_0x708CE249B4F97BF8() && !unk_0x286FD331C17C5174(2)) && iVar3 > 100) && (unk_0x17103F66FBB44C3C() - iLocal_88) > 300))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_450("DOWN pressed!");
				if (iLocal_69 < iLocal_70)
				{
					iLocal_69++;
				}
				else
				{
					iLocal_69 = 0;
				}
				iLocal_88 = unk_0x17103F66FBB44C3C();
			}
			else if (((unk_0x205C5BF7277043DF(2, 188) || (unk_0x286FD331C17C5174(2) && unk_0x205C5BF7277043DF(2, 241))) || (unk_0x286FD331C17C5174(2) && unk_0x4841051C33809BC4(0, 32))) || (((unk_0x708CE249B4F97BF8() && !unk_0x286FD331C17C5174(2)) && iVar3 < -100) && (unk_0x17103F66FBB44C3C() - iLocal_88) > 300))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_450("UP pressed!");
				if (iLocal_69 > 0)
				{
					iLocal_69 = (iLocal_69 - 1);
				}
				else
				{
					iLocal_69 = iLocal_70;
				}
				iLocal_88 = unk_0x17103F66FBB44C3C();
			}
			else if (unk_0x98A0901522E89A7F(2, 201) || iVar0 == 1)
			{
				unk_0x86F4B3D6FF8F65DE(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0xAB10BEEBB0614A3E(3);
				func_265();
				unk_0x87659527DF5C44B5(unk_0x9F92518438215DD0());
				iLocal_300 = 4;
			}
			func_264(iLocal_69, 1, 1);
			break;
		
		case 4:
			iVar6 = unk_0xC2593A1315A74BF0(iLocal_95);
			if (iLocal_296 == 3)
			{
				func_351(1, -1);
				func_263();
				func_262(0);
				iLocal_63 = unk_0x17103F66FBB44C3C();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_450("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_294 = 6;
				if (iLocal_71 > 0)
				{
					if (func_120(iLocal_95))
					{
						func_119();
					}
					else
					{
						func_432(0);
					}
					return;
				}
				else
				{
					if (func_257() >= 20)
					{
						iVar6 += 20;
						func_225(20);
						unk_0x2CFB119825A2B9F1(iLocal_95, iVar6);
					}
					func_432(1);
					return;
				}
			}
			if (!unk_0x3DA2EED4204CE591(func_44(unk_0x9F92518438215DD0(), 0, 0)))
			{
			}
			else
			{
				func_351(1, -1);
				func_263();
				if (unk_0x06DC46F83A1DB103())
				{
					func_441(&iLocal_48, 1024);
					iLocal_296 = 3;
					func_450("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_296 != 3)
				{
					if (func_257() > func_224(iLocal_296))
					{
						func_225(func_224(iLocal_296));
						iVar6 = (iVar6 + func_224(iLocal_296));
					}
					func_35(&uLocal_106, (14f - 4f));
					func_450("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_294 = 11;
				}
				unk_0x2CFB119825A2B9F1(iLocal_95, iVar6);
				iLocal_63 = unk_0x17103F66FBB44C3C();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0x06DC46F83A1DB103())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)
{
	var uVar0;
	
	if (!func_510())
	{
		func_234(func_18(), 1, iParam0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_233())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_233())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xA549BE81FFC4288A(func_133()) || unk_0xADE1DFE09709BDB1())
		{
			Global_2541344 = 1;
			return 0;
		}
		if (Global_2435857)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2541345 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540883[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x4C02C7B08F757BFA(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x4265811DC0390422(iVar3))
		{
			*uParam0 = func_232(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540883[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2541341 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2541343 = 1;
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_231(1, iParam4);
			Global_2541343 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_233())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_230(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57A7DB00C63E14B4();
			}
		}
		else if (!bVar0)
		{
			unk_0x3B8BE022876FFEA4(Global_2540883[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540883[iParam0 /*69*/] = { Var1 };
	}
}

int func_230(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_231(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_232(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_233())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540883[iVar0 /*69*/].f_2 = 1;
			Global_2540883[iVar0 /*69*/].f_1 = uParam5;
			Global_2540883[iVar0 /*69*/].f_3 = uParam1;
			Global_2540883[iVar0 /*69*/].f_4 = uParam2;
			Global_2540883[iVar0 /*69*/].f_7 = uParam3;
			Global_2540883[iVar0 /*69*/].f_5 = 0;
			Global_2540883[iVar0 /*69*/] = iParam0;
			Global_2540883[iVar0 /*69*/].f_6 = iParam4;
			Global_2540883[iVar0 /*69*/].f_65 = uParam8;
			Global_2540883[iVar0 /*69*/].f_64 = uParam7;
			Global_2540883[iVar0 /*69*/].f_68 = 0;
			Global_2541341 = 0;
			if (bParam6)
			{
				Global_2540883[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_233()
{
	if (unk_0x708CE249B4F97BF8())
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0, int iParam1, int iParam2)
{
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_235(Global_97358.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_256();
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
					func_255(99, 1);
					func_254(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_254(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_254(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_243(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_242(5))
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
							func_254(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_254(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_254(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_242(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_254(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_254(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_254(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_254(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_254(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_254(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_254(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_254(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_254(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63D5B7FC98AAD9B7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_254(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_254(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_254(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_254(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_254(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_254(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_242(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_254(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_254(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_254(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_254(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_254(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_254(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_241(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_255(95, iParam3);
					break;
				
				case 1:
					func_255(97, iParam3);
					break;
				
				case 2:
					func_255(96, iParam3);
					break;
			}
			func_255(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_238(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_238(iVar1);
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
					func_254(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_254(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_254(joaat("sp2_total_cash_earned"), iParam3);
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_237(iParam0);
	if (Global_34913 == 15)
	{
		func_236(0);
	}
	return 1;
}

void func_236(bool bParam0)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_240() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_240() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_239(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_239(int iParam0)
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

int func_240()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_241(int iParam0)
{
	func_255(93, iParam0);
	func_255(29, iParam0);
	func_255(30, iParam0);
}

bool func_242(int iParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_240() /*8064*/].f_5756.f_10, iParam0);
}

int func_243(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_244(27, 1);
	return 1;
}

int func_244(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_245(iParam0, iParam1);
}

int func_245(int iParam0, int iParam1)
{
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_253(&Global_2545750))
	{
		if (func_251(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_246(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_246(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_251(uParam0, iParam1))
	{
		return 0;
	}
	func_249(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_247(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_247(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_251(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_248(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_248(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_249(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_250(uParam0, iVar0);
		iVar0++;
	}
	func_35(&(uParam0->f_62), (8f - 0.5f));
}

void func_250(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_251(var uParam0, int iParam1)
{
	return func_252(uParam0, iParam1) != -1;
}

int func_252(var uParam0, int iParam1)
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

bool func_253(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

void func_255(int iParam0, int iParam1)
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_256()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_257()
{
	if (func_510())
	{
		return func_259(unk_0xCFC72E446B0B3AD7());
	}
	return func_258(func_18());
}

int func_258(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x39496A55977AA312(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x39496A55977AA312(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x39496A55977AA312(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_259(int iParam0)
{
	var uVar0;
	
	uVar0 = func_260(iParam0);
	return uVar0;
}

int func_260(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return unk_0x855BF4AC1E385EF1(-1);
		}
		else if (func_261(iParam0))
		{
			return Global_1582869[iParam0 /*332*/].f_188.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
	}
	return 1;
}

void func_262(int iParam0)
{
	if (unk_0x147076C287537800() != 255)
	{
		unk_0xBCB4EC6BE11F7D3A(iParam0);
		unk_0x14788170E6EE4A5E(iParam0);
	}
}

void func_263()
{
	Global_17098.f_5 = 0;
}

void func_264(int iParam0, bool bParam1, int iParam2)
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
		StringCopy(&(Global_2544196.f_21), "", 16);
	}
}

void func_265()
{
	if (iLocal_69 == iLocal_70)
	{
		iLocal_296 = 3;
	}
	else
	{
		iLocal_297 = iLocal_288[iLocal_69];
		func_266();
		if (iLocal_297 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0xEC2376DA57EC68E1("PROSTITUTE_BLOWJOB", false);
			iLocal_296 = 0;
		}
		else if (iLocal_297 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_296 = 1;
		}
		else if (iLocal_297 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_296 = 2;
		}
	}
}

void func_266()
{
	switch (iLocal_297)
	{
		case 0:
			func_268();
			break;
		
		case 1:
		case 2:
			func_267();
			break;
	}
}

void func_267()
{
	iLocal_45++;
	iLocal_46 = 1;
}

void func_268()
{
	iLocal_44++;
	iLocal_46 = 1;
}

int func_269()
{
	if (unk_0x286FD331C17C5174(2))
	{
		if (Global_2544272 > -1)
		{
			if (unk_0x205C5BF7277043DF(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_270(int iParam0, int iParam1)
{
	if (!unk_0x286FD331C17C5174(2))
	{
		return 0;
	}
	if (unk_0xC8557993A78C1B3E() || unk_0x3B8CF48C3FC0CF62())
	{
		return 0;
	}
	unk_0x5520B62A633DD8D7();
	if (Global_2544272 == -6)
	{
		unk_0x3BDE597A6A842FD3(4);
		if (iParam0 && unk_0x859C6F0CEF1CB9FE(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2544272 = -1;
			return 0;
		}
	}
	if (((Global_2544272 > -1 || Global_2544272 == -3) || Global_2544272 == -2) || unk_0xBAA493F627DD1D8A())
	{
		unk_0x3BDE597A6A842FD3(1);
		return 0;
	}
	if (Global_2544272 == -1 && iParam0)
	{
		if (unk_0x859C6F0CEF1CB9FE(2, 237))
		{
			unk_0x3BDE597A6A842FD3(4);
			Global_2544272 = -6;
			return 1;
		}
		else
		{
			unk_0x3BDE597A6A842FD3(3);
			return 0;
		}
	}
	unk_0x3BDE597A6A842FD3(1);
	return 0;
}

void func_271(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x286FD331C17C5174(2))
	{
		Global_2544272 = -1;
		return;
	}
	unk_0x9ABFCB2B7B9229B1(1);
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
	unk_0xE1C6E65EF48836BB(76, 84);
	unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x6CB5C1FF89B39BC1(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6CB5C1FF89B39BC1(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x17F6CBD114515E10();
	func_274();
	if (Global_2544272 == -6)
	{
		return;
	}
	Global_2544272 = -1;
	fVar7 = Global_2544266;
	fVar8 = Global_2544267;
	if (Global_17236.f_4991 > Global_17236.f_4990)
	{
		if (((Global_2544266 >= fVar0 && Global_2544266 <= fVar2) && Global_2544267 >= fVar3) && Global_2544267 < (fVar3 + fVar6))
		{
			Global_2544272 = -2;
			if (bParam3)
			{
				func_273(0);
			}
			return;
		}
		if (((Global_2544266 >= fVar0 && Global_2544266 <= fVar2) && Global_2544267 >= (fVar3 + fVar6)) && Global_2544267 < (fVar3 + 0.034722f))
		{
			Global_2544272 = -3;
			if (bParam3)
			{
				func_273(0);
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
			Global_2544272 = 0;
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
				unk_0xE1C6E65EF48836BB(76, 84);
				unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
				func_272(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17235, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x17F6CBD114515E10();
			}
		}
		Global_2544272 = Global_17236.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2544272 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2544272 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2544272 = -4;
		return;
	}
	Global_2544272 = -1;
}

void func_272(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x2C21286870CDCF47((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_273(bool bParam0)
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
	unk_0xE1C6E65EF48836BB(76, 84);
	unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
	if (Global_2544272 == -2)
	{
		func_272(fVar0, fVar1, Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2544272 == -3)
	{
		func_272(fVar0, (fVar1 + fVar2), Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x17F6CBD114515E10();
}

void func_274()
{
	Global_2544268 = Global_2544266;
	Global_2544269 = Global_2544267;
	Global_2544266 = unk_0xD1F5225A6E66639A(2, 239);
	Global_2544267 = unk_0xD1F5225A6E66639A(2, 240);
	Global_2544270 = (Global_2544266 - Global_2544268);
	Global_2544271 = (Global_2544267 - Global_2544269);
}

void func_275(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 221) * 127f));
		}
	}
}

void func_276(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	
	if (!func_304(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_302(0, bParam6))
	{
		return;
	}
	unk_0xE1C6E65EF48836BB(76, 84);
	unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_300(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (unk_0x398F092142D37E17(&(Global_17236.f_1)) == unk_0x398F092142D37E17("HIDE"))
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
		unk_0xC505150799D1D500(&iVar57, &iVar58);
		fVar60 = unk_0x578421E3467DA481(0);
		if (func_299())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_299())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xE175228D3978CEE1(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_1)) == unk_0x398F092142D37E17("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0x58A67A48C3633535(func_298(29), func_296(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
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
				func_272(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (unk_0x398F092142D37E17(&(Global_17236.f_1)) != 0)
				{
					func_295();
					unk_0x94FC96A7EE0D90ED(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0x25585F3578FE81FC(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xE593B82056888C22(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x7FAFF3E791AF486A(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x7FAFF3E791AF486A(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xC5A6B5A176BD3AE0((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_295();
						func_293((((Global_17233 + fParam5) - 0.00390625f) - func_294("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
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
				unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
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
			unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
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
				func_272(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x86C0F6A8F53E83EF("CommonMenu", "shop_arrows_upANDdown") };
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
					unk_0x5E4CDAB7B6D20BDE(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x398F092142D37E17(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_300(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_292(fVar41);
				unk_0xD628208AEC8CA150(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xAD779D993326BAFB(fVar41, (fVar49 + 0.00277776f));
				unk_0x5E4CDAB7B6D20BDE(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_272(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_292(fVar41);
				unk_0x94FC96A7EE0D90ED(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC5A6B5A176BD3AE0(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_300(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_291(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0x58A67A48C3633535(func_298(Global_17236.f_4045), func_296(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x17103F66FBB44C3C() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0x398F092142D37E17(&(Global_2544196.f_21)) != 0 && Global_2544196.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2544196.f_67 != 0)
				{
					func_300(Global_2544196.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_292(fVar41);
				unk_0xD628208AEC8CA150(&(Global_2544196.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2544196.f_61)
				{
					if (Global_2544196.f_25[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_2544196.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2544196.f_25[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_2544196.f_34[iVar16], Global_2544196.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2544196.f_25[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xAD779D993326BAFB(fVar41, (fVar49 + 0.00277776f));
				unk_0x5E4CDAB7B6D20BDE(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_272(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_292(fVar41);
				unk_0x94FC96A7EE0D90ED(&(Global_2544196.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2544196.f_61)
				{
					if (Global_2544196.f_25[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_2544196.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2544196.f_25[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_2544196.f_34[iVar16], Global_2544196.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2544196.f_25[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC5A6B5A176BD3AE0(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2544196.f_67 != 0)
				{
					func_300(Global_2544196.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_291(Global_2544196.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x58A67A48C3633535(func_298(Global_2544196.f_67), func_296(Global_2544196.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2544196.f_65 > 0)
				{
					if ((unk_0x17103F66FBB44C3C() - Global_2544196.f_66) > Global_2544196.f_65)
					{
						StringCopy(&(Global_2544196.f_21), "", 16);
						Global_2544196.f_65 = -1;
					}
				}
			}
			func_284(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xE1C6E65EF48836BB(76, 84);
			unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
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
						unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x5E4CDAB7B6D20BDE(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0x58A67A48C3633535("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_282(bVar31, 1, 0, 0, 0, 0);
					unk_0x94FC96A7EE0D90ED("DFLT_MNU_OPT");
					unk_0xC5A6B5A176BD3AE0(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0x94E72F17611BCD3C(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
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
											if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
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
												func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												unk_0xAECAF2451DDECD14(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x25585F3578FE81FC(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xE593B82056888C22(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x009ACBF3DD410809(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_300(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (func_300(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_300(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(26), func_296(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_300(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_300(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(27), func_296(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
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
											func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_281(bVar31);
											}
											unk_0x94FC96A7EE0D90ED(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x25585F3578FE81FC(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xE593B82056888C22(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_300(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_300(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_291(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[(iVar22 + iVar28)]), func_296(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[(iVar22 + iVar28)]), func_296(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xC5A6B5A176BD3AE0(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xC5A6B5A176BD3AE0((fVar33 + fVar41), fVar34, 0);
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
													if (func_300(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_300(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_291(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[(iVar22 + iVar14)]), func_296(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[(iVar22 + iVar14)]), func_296(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[(iVar22 + iVar14)]), func_296(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_281(bVar31);
											}
											unk_0xAECAF2451DDECD14("NUMBER");
											unk_0x25585F3578FE81FC(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x009ACBF3DD410809(1);
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
											if (func_300(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_300(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(26), func_296(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_300(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_300(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(27), func_296(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_280((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_281(bVar31);
											}
											unk_0xAECAF2451DDECD14("NUMBER");
											unk_0xE593B82056888C22(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x009ACBF3DD410809(1);
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
											if (func_300(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_300(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(26), func_296(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_300(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_300(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_291(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_298(27), func_296(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_282(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_279((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_300(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (func_300(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_300(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_291(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0x58A67A48C3633535(func_298(26), func_296(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_300(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_300(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_291(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x58A67A48C3633535(func_298(27), func_296(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_300(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_291(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x58A67A48C3633535(func_298(Global_17236.f_3843[iVar22]), func_296(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_278(Global_17236.f_3843[iVar22])), (fVar36 * func_278(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_300(26, 1, 1, &fVar35, &fVar36, bParam7))
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
	Global_17236.f_5130 = unk_0x17103F66FBB44C3C();
	unk_0xBB6C2F8B689F7802(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_206();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0xAB10BEEBB0614A3E(10);
	}
	unk_0xAB10BEEBB0614A3E(6);
	unk_0xAB10BEEBB0614A3E(7);
	unk_0xAB10BEEBB0614A3E(9);
	unk_0xAB10BEEBB0614A3E(8);
	if (bParam0)
	{
		func_277(1);
	}
	unk_0x17F6CBD114515E10();
}

void func_277(int iParam0)
{
	Global_1328872.f_756 = iParam0;
}

float func_278(int iParam0)
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

void func_279(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0xE593B82056888C22(uParam3, uParam4);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

void func_280(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0x25585F3578FE81FC(iParam3);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, iParam4);
}

void func_281(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
}

void func_282(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_283(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x5E4CDAB7B6D20BDE(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x5E4CDAB7B6D20BDE(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
		}
		else
		{
			unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x8DEED365C52CC9BE(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
	}
	else
	{
		unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
	}
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x3EF8FB8F31B18D9F(1);
	if (bParam5)
	{
		unk_0xC98C9F8951F37C8D(0f, 0.425f);
		unk_0x13E02BCACABFC17A(4);
	}
	else
	{
		unk_0x13E02BCACABFC17A(0);
	}
	unk_0x819F80DE0184C393(0f, 1f);
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
}

void func_283(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_304(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_302(bParam4, bParam8))
	{
		return;
	}
	if (func_289())
	{
		return;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_287(unk_0xCFC72E446B0B3AD7(), 0))
		{
			return;
		}
	}
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0x16F8ADED32EFC76D() == 0 || unk_0xB693DB1187BBD585())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x54610002CC66A3C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x34B4609B3C3F7CD6(2, Global_17236.f_4303[iVar1], 1), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x87872B5AB967B51E(2, Global_17236.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC4F81CF078CCB564((1f - (Global_17236.f_4358 / 100f)));
			unk_0x7E86CE5F658823DB();
			if (unk_0x708CE249B4F97BF8())
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x63E5FA5DEE979BD6(1);
				unk_0x7E86CE5F658823DB();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0x398F092142D37E17(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0x398F092142D37E17("PREV"))
				{
					unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(iVar1);
					func_286(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x398F092142D37E17(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0x398F092142D37E17("PREV"))
					{
						func_286(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_285(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0x0F79C8080022554A(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xD2F4956C0D8BE6FA(iParam2, 70);
						}
						else
						{
							unk_0x25585F3578FE81FC(iParam2);
						}
						unk_0xE6EC84BF3A7A64B6();
					}
					if (unk_0x708CE249B4F97BF8())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0x94E72F17611BCD3C(Global_17236.f_4329, iVar1))
						{
							unk_0x63E5FA5DEE979BD6(1);
							unk_0x4BD4D58838D3F8E5(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0x63E5FA5DEE979BD6(0);
							unk_0x4BD4D58838D3F8E5(332);
						}
					}
					unk_0x7E86CE5F658823DB();
				}
				iVar1++;
			}
			if (unk_0x398F092142D37E17(&(Global_2544196.f_16)) != unk_0x398F092142D37E17(""))
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(Global_17236.f_4046);
				func_286(&Global_2544196);
				if (Global_2544196.f_20 == -1)
				{
					func_285(&(Global_2544196.f_16));
				}
				else
				{
					unk_0x0F79C8080022554A(&(Global_2544196.f_16));
					if (bParam5)
					{
						unk_0xD2F4956C0D8BE6FA(iParam2, 70);
					}
					else
					{
						unk_0x25585F3578FE81FC(iParam2);
					}
					unk_0xE6EC84BF3A7A64B6();
				}
				unk_0x7E86CE5F658823DB();
			}
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(80);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0x4BD4D58838D3F8E5(1);
			}
			else
			{
				unk_0x4BD4D58838D3F8E5(0);
			}
			unk_0x7E86CE5F658823DB();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4BD4D58838D3F8E5(iVar1);
					unk_0x0F79C8080022554A(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xD2F4956C0D8BE6FA(iParam2, 70);
					}
					else
					{
						unk_0x25585F3578FE81FC(iParam2);
					}
					unk_0xE6EC84BF3A7A64B6();
					unk_0x7E86CE5F658823DB();
				}
			}
			iVar1++;
		}
		if (Global_2544196.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4BD4D58838D3F8E5(iVar1);
				unk_0x0F79C8080022554A(&(Global_2544196.f_16));
				if (bParam5)
				{
					unk_0xD2F4956C0D8BE6FA(iParam2, 70);
				}
				else
				{
					unk_0x25585F3578FE81FC(iParam2);
				}
				unk_0xE6EC84BF3A7A64B6();
				unk_0x7E86CE5F658823DB();
			}
		}
		unk_0xE1C6E65EF48836BB(76, 66);
		unk_0x995DEE73E6DD583B(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0x6DE6CA985EC34A26(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0xDEAFB44F1BAAE861(15);
			Global_17236.f_7207 = 0;
		}
		unk_0x17F6CBD114515E10();
		if (Global_17236.f_4332)
		{
			unk_0xE1C6E65EF48836BB(82, 66);
			unk_0x995DEE73E6DD583B(0f, 0f, 0f, 0f);
			unk_0x6FFAE2D893387C6F(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x17F6CBD114515E10();
		}
		else
		{
			unk_0x10243718C63A4D3E(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_285(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_286(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
}

bool func_287(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_288(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_288(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_289()
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_290())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xF490905A59C5583B(&Var0);
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

int func_290()
{
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x5E4CDAB7B6D20BDE(1, iParam2, iParam3, iParam4, &uVar0);
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

void func_292(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x13E02BCACABFC17A(0);
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x3BD6382E9794FCC4(2);
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
	unk_0x819F80DE0184C393(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
}

void func_293(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0x25585F3578FE81FC(uParam3);
	unk_0x25585F3578FE81FC(uParam4);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

float func_294(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		if (unk_0x398F092142D37E17(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_295();
	unk_0xAECAF2451DDECD14(sParam0);
	unk_0x25585F3578FE81FC(uParam1);
	unk_0x25585F3578FE81FC(uParam2);
	return unk_0x009ACBF3DD410809(1);
}

void func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x13E02BCACABFC17A(0);
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
	unk_0x819F80DE0184C393((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
}

var func_296(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_297(&(Global_17236.f_6048[iParam0 /*16*/]));
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

var func_297(var uParam0)
{
	return uParam0;
}

char* func_298(int iParam0)
{
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_297(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_299()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xC505150799D1D500(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_298(iParam0);
	sVar1 = func_296(iParam0, bParam1);
	if (unk_0x398F092142D37E17(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xC505150799D1D500(&iVar2, &iVar3);
			fVar5 = unk_0x578421E3467DA481(0);
			if (func_299())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_299())
			{
				fVar4 = 1f;
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xE175228D3978CEE1(&iVar2, &iVar3);
		}
		Var7 = { unk_0x86C0F6A8F53E83EF(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_301(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_301(iParam0) / fVar4));
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
			if (!unk_0x3016BBFD691EE89E() && iParam0 != 30)
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

float func_301(int iParam0)
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

int func_302(bool bParam0, bool bParam1)
{
	if (Global_2422166.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9685D9855970A029() || (func_24(8, -1) && func_303() != 65)) || (unk_0x0DE1907CCA4FA941() != 0 && !bParam1)) || (unk_0x2D8FCFBC4E01FF7C() && !bParam0)) || unk_0x47067EB98AD2938B()) || Global_68505) || Global_17236.f_7206) || unk_0x3B8CF48C3FC0CF62()) || Global_90014.f_1323)
	{
		return 0;
	}
	return 1;
}

int func_303()
{
	return Global_1315832;
}

int func_304(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x4B69FB3A5B09A1BA() && unk_0xD28DD58204E8F9D1())
		{
			iParam2 = unk_0x0546CFC4D5D5EAB4();
		}
	}
	StringCopy(&cVar0, unk_0xC2E9075570B5D2B9(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x398F092142D37E17(&cVar0);
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

void func_305()
{
	if (!func_344(iLocal_303))
	{
		iLocal_303 = func_323();
		func_314(&iLocal_303, 0, 0, unk_0x073B65E051D2F03E(1, 2), 0, 0, 0);
	}
	else if (!func_449(iLocal_74, 2))
	{
		if (func_306(iLocal_303))
		{
			iLocal_303 = func_323();
			func_314(&iLocal_303, 0, 0, unk_0x073B65E051D2F03E(1, 2), 0, 0, 0);
			func_441(&iLocal_74, 2);
		}
	}
	else if (func_306(iLocal_303))
	{
		func_263();
		func_432(0);
	}
}

bool func_306(int iParam0)
{
	return func_307(func_323(), iParam0);
}

int func_307(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_344(iParam1) || !func_344(iParam0))
	{
		return 1;
	}
	iVar0 = func_313(iParam0);
	iVar1 = func_313(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_312(iParam0);
	iVar1 = func_312(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_311(iParam0);
	iVar1 = func_311(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_310(iParam0);
	iVar1 = func_310(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_309(iParam0);
	iVar1 = func_309(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_308(iParam0);
	iVar1 = func_308(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_309(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_310(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_311(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_312(int iParam0)
{
	return iParam0 & 15;
}

var func_313(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_313(*iParam0);
	iVar1 = func_312(*iParam0);
	iVar2 = func_311(*iParam0);
	iVar3 = func_310(*iParam0);
	iVar4 = func_309(*iParam0);
	iVar5 = func_308(*iParam0);
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
	iVar6 = func_322(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_322(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_315(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_315(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_321(uParam0, iParam1);
	func_320(uParam0, iParam2);
	func_319(uParam0, iParam3);
	func_318(uParam0, iParam4);
	func_317(uParam0, iParam5);
	func_316(uParam0, iParam6);
}

void func_316(var uParam0, int iParam1)
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

void func_317(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_318(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_312(*uParam0);
	iVar1 = func_313(*uParam0);
	if (iParam1 < 1 || iParam1 > func_322(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_319(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_320(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_321(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_322(int iParam0, int iParam1)
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

int func_323()
{
	var uVar0;
	
	func_321(&uVar0, unk_0xD9940DF735CED1D5());
	func_320(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_319(&uVar0, unk_0x3E15607264E063C3());
	func_318(&uVar0, unk_0xA2C54D866C588926());
	func_317(&uVar0, unk_0x35E06151CD8A2DD1());
	func_316(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_324(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_339(1);
	func_262(1);
	unk_0xB3B57AEE7B7BA0E2(0);
	func_338(0);
	func_337(1, 1, 0, 0, 0);
	func_336(1, 2, 1, 1, 1);
	func_335("PROS_OPTS");
	func_334(201, "PROS_SELECT", -1);
	iLocal_70 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_257() >= iVar0)
	{
		func_331(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		func_328(iVar0, 0);
		iLocal_288[iLocal_70] = 0;
		iLocal_70++;
	}
	if (func_257() >= iVar1 && func_327(iLocal_98))
	{
		func_331(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		func_328(iVar1, 0);
		iLocal_288[iLocal_70] = 1;
		iLocal_70++;
	}
	if (func_257() >= iVar2 && func_327(iLocal_98))
	{
		func_331(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		func_328(iVar2, 0);
		iLocal_288[iLocal_70] = 2;
		iLocal_70++;
	}
	func_331(iLocal_70, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_69 = 0;
	func_264(iLocal_69, 1, 1);
	func_326();
	iLocal_88 = unk_0x17103F66FBB44C3C();
	iLocal_300 = 3;
}

void func_326()
{
	Global_17098.f_5 = 1;
}

int func_327(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
		if (((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix"))
		{
			return 0;
		}
	}
	return 1;
}

void func_328(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = iParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = func_330();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			func_300(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = func_329();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

float func_329()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_300(Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xAA92C477114007AE(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xAA92C477114007AE(0.35f, 0);
}

float func_330()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_282(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		unk_0xAECAF2451DDECD14(&(Global_17236.f_73[Global_17236.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x25585F3578FE81FC(Global_17236.f_3340[((Global_17236.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xE593B82056888C22(Global_17236.f_3591[((Global_17236.f_4497 - iVar4) + iVar10)], Global_17236.f_3717[((Global_17236.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x7FAFF3E791AF486A(&(Global_2435235[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xDB4BC767CEF09274(&(Global_2435235[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x7FAFF3E791AF486A(&(Global_2435235[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x398F092142D37E17(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		fVar0 = unk_0x009ACBF3DD410809(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_300(Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_331(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		fVar1 = func_333(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_300(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_332(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0xEDB9A377CD8B7F03(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_332(char* sParam0)
{
	if (!unk_0x75426D5397CE9E5D(sParam0))
	{
	}
	return unk_0xAA92C477114007AE(0.35f, 0);
}

float func_333(char* sParam0)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		if (unk_0x398F092142D37E17(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_282(0, 1, 0, 0, 0, 0);
	unk_0xAECAF2451DDECD14(sParam0);
	return unk_0x009ACBF3DD410809(1);
}

void func_334(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x34B4609B3C3F7CD6(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2544196, sVar0, 64);
		StringCopy(&(Global_2544196.f_16), sParam1, 16);
		Global_2544196.f_20 = iParam2;
		return;
		return;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_335(char* sParam0)
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

void func_336(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_338(bool bParam0)
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
		StringCopy(&(Global_2435235[iVar0 /*16*/]), "", 64);
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
	StringCopy(&(Global_2544196.f_16), "", 16);
	Global_2544196.f_20 = -1;
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
	StringCopy(&(Global_2544196.f_21), "", 16);
	Global_2544196.f_61 = 0;
	Global_2544196.f_62 = 0;
	Global_2544196.f_63 = 0;
	Global_2544196.f_64 = 0;
	Global_2544196.f_65 = 0;
	Global_2544196.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2544196.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2544196.f_67 = 0;
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
	fVar2 = unk_0x578421E3467DA481(0);
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

void func_339(bool bParam0)
{
	if (!bParam0)
	{
		Global_96003 = unk_0x17103F66FBB44C3C() + 250;
	}
	Global_96000 = bParam0;
}

bool func_340(int iParam0)
{
	return func_257() >= func_224(iParam0);
}

int func_341(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x3DA2EED4204CE591(func_44(unk_0x9F92518438215DD0(), 0, 0)))
	{
	}
	else if (!unk_0x3C17D9ED0E5F3FCA(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_103(bParam1), 3) && unk_0xE962BD784DD0E442(iParam0, -2017877118) != 1)
	{
		if (func_510())
		{
			if (iParam0 == unk_0x9F92518438215DD0())
			{
				if (!func_198(unk_0xCFC72E446B0B3AD7()))
				{
					iVar0 = unk_0x27F7C2FB848CD525(unk_0x9F92518438215DD0(), 6);
					if (!func_483(256))
					{
						func_189(256);
						iLocal_85 = iVar0;
						iLocal_86 = unk_0xEB3E23B43A745CA1(unk_0x9F92518438215DD0(), 6);
						unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x7CF15DD8B3815A0D(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x7CF15DD8B3815A0D(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x7CF15DD8B3815A0D(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x3C17D9ED0E5F3FCA(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_342(bParam1), 3))
		{
			if (unk_0xD17241758B91AAED(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_342(bParam1)) >= 0.95f)
			{
				unk_0x7CF15DD8B3815A0D(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x3C17D9ED0E5F3FCA(iParam0, func_44(unk_0x9F92518438215DD0(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_342(bool bParam0)
{
	if (!func_449(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_343(int iParam0)
{
	*iParam0 = -15;
}

int func_344(int iParam0)
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
	iVar0 = func_308(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_309(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_310(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_313(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_312(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_311(iParam0);
	if (iVar5 < 1 || iVar5 > func_322(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_345()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	unk_0x73B8B1FE599EF361(iLocal_95);
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		if (iLocal_71 < 1)
		{
			unk_0xA3F41D007914F399(iLocal_95, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xA3F41D007914F399(iLocal_95, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_346()
{
	if (func_347(0, -1) && unk_0xEC2376DA57EC68E1("SCRIPT\HUD_321_GO", true))
	{
		return 1;
	}
	return 0;
}

bool func_347(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_304(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x9C53AD1E8A38ADEE(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0x2508FF4D4BF655CE(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x2EA266AD98E82E2A("CommonMenu", false);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x48125D4CA17FF2F9("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_348(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_348(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5E3461E729DA646E(*uParam0))
			{
				*uParam0 = unk_0xC97D787CE7726A2F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5E3461E729DA646E(*uParam0))
					{
						uParam0->f_8 = unk_0x17103F66FBB44C3C();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x17103F66FBB44C3C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5E3461E729DA646E(*uParam0))
			{
				uParam0->f_8 = unk_0x17103F66FBB44C3C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5E3461E729DA646E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_349()
{
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		iLocal_59 = unk_0xFD181DDA4D8D6786(iLocal_95);
	}
}

void func_350()
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x746960881FB19A89(iVar0))
			{
				Local_55 = { unk_0x77009B1C011405A9(iVar0, 1) };
			}
		}
	}
}

void func_351(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_304(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0xDEAFB44F1BAAE861(15);
		Global_17236.f_7207 = 0;
	}
	unk_0xBB6C2F8B689F7802(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x84FBD0BE7CDBEEA2(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0x4B48A2F5324596EE("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_352(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_352(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5E3461E729DA646E(*uParam0))
		{
			unk_0x76D57BAF1F432EA7(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_353()
{
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iLocal_98 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (!iLocal_98 == 0)
				{
					if ((unk_0xFC38B241541883D3(iLocal_98, 0) && !unk_0x0FC809E10EF0EAC3(iLocal_98)) && !unk_0xB602FFF24CBFD2C5(iLocal_98))
					{
						if (func_85(&iLocal_98))
						{
							func_5(&iLocal_48, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_354()
{
	if (iLocal_71 == 0)
	{
		if (!func_449(iLocal_50, 1) && !func_449(iLocal_50, 16))
		{
			if (func_355(0))
			{
				func_441(&iLocal_50, 1);
			}
		}
		if (!func_449(iLocal_50, 4) && !func_449(iLocal_50, 64))
		{
			if (func_355(2))
			{
				func_441(&iLocal_50, 4);
			}
		}
		if (!func_449(iLocal_50, 8) && !func_449(iLocal_50, 128))
		{
			if (func_355(1))
			{
				func_441(&iLocal_50, 8);
			}
		}
	}
}

int func_355(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_179(iParam0) };
	Var3 = { unk_0x77009B1C011405A9(iLocal_98, 1) };
	if (iLocal_307[iParam0] == 0)
	{
		if (unk_0xB6A50C909A8FABC3(iLocal_98) == joaat("casco") || unk_0xB6A50C909A8FABC3(iLocal_98) == joaat("feltzer3"))
		{
			iLocal_307[iParam0] = unk_0x0E5EC9401B9CBFD5(Var0, Var3, 0.15f, 511, iLocal_98, 3);
		}
		else
		{
			iLocal_307[iParam0] = unk_0x0E5EC9401B9CBFD5(Var0, Var3, 0.25f, 511, iLocal_98, 3);
		}
	}
	else
	{
		switch (unk_0xD200D7E3AEDD340D(iLocal_307[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_307[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_356(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_307[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_449(iLocal_50, 16))
			{
				func_441(&iLocal_50, 16);
				func_5(&iLocal_50, 1);
			}
			break;
		
		case 1:
			if (!func_449(iLocal_50, 128))
			{
				func_441(&iLocal_50, 128);
				func_5(&iLocal_50, 8);
			}
			break;
		
		case 2:
			if (!func_449(iLocal_50, 64))
			{
				func_441(&iLocal_50, 64);
				func_5(&iLocal_50, 4);
			}
			break;
		
		case 3:
			if (!func_449(iLocal_50, 32))
			{
				func_441(&iLocal_50, 32);
				func_5(&iLocal_50, 2);
			}
			break;
	}
}

void func_357()
{
	if (func_362() && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		iLocal_294 = 9;
		func_360(iLocal_95);
		func_360(unk_0x9F92518438215DD0());
		func_358();
		func_34(&uLocal_103);
	}
}

void func_358()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0x5329DB72517417AE(uLocal_101))
	{
		uLocal_101 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0x5329DB72517417AE(uLocal_102))
	{
		uLocal_102 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_359(&Var0, &Var7);
	unk_0xBB72FAD675028BF0(uLocal_101, Var0);
	unk_0x76EB36D538ED79B4(uLocal_101, Var0.f_3, 2);
	unk_0x31966ED835A3E8E4(uLocal_101, Var0.f_6);
	unk_0xBB72FAD675028BF0(uLocal_102, Var7);
	unk_0x76EB36D538ED79B4(uLocal_102, Var7.f_3, 2);
	unk_0x31966ED835A3E8E4(uLocal_102, Var7.f_6);
	unk_0x45826D2663F7FD9C(uLocal_101, 1);
	unk_0x45826D2663F7FD9C(uLocal_102, 0);
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
}

void func_359(var uParam0, var uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_360(int iParam0)
{
	var uVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		unk_0xCD02E3C29B8253A6(&uVar0);
		unk_0xF87DA7F5BA8C7D0F(&uVar0);
		if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			unk_0xF811299AF81DB581(0, 0, 16842752);
		}
		unk_0x27DF0A5AA993D7B6(0, func_361(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x3179CCC77CBAB31F(uVar0);
		unk_0xC7EBE3C9AC83FAAA(iParam0, uVar0);
		unk_0xCD02E3C29B8253A6(&uVar0);
	}
}

Vector3 func_361()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_362()
{
	return unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), func_364()) < (func_363() * func_363());
}

float func_363()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_364()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_365()
{
	func_305();
	func_380();
	if (!func_10(&uLocal_106))
	{
		func_431(&uLocal_106);
	}
	if (func_379())
	{
		return;
	}
	if (!func_10(&uLocal_115))
	{
		func_431(&uLocal_115);
	}
	if (func_353() && unk_0x44E080690DA76A2A(iLocal_95, iLocal_98, 0))
	{
		if (unk_0x0A93DB64A1052EB6(iLocal_98) && unk_0xF37F1CECABC7FC33(iLocal_98))
		{
			if ((func_372() && !func_362()) && !func_371())
			{
				func_370();
				if (func_7(&uLocal_115) > 2.5f)
				{
					uLocal_84 = unk_0x2ECEC3BAB9ED8AE2(unk_0x77009B1C011405A9(iLocal_98, 0), 40f, 40f, 40f, unk_0xE691E4EA6B4440C6(iLocal_98), 0, 7);
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 896);
					func_441(&iLocal_48, 2048);
					iLocal_99 = 0;
					unk_0x4B38C66919CC2E48("ProstituteInPlay", &uLocal_306);
					unk_0xF2061C15946C53A2(1, uLocal_306, joaat("player"));
					unk_0xA50AD6983D49A772(iLocal_95, uLocal_306);
					func_450("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_48, 1024);
					iLocal_303 = -15;
					func_121();
					func_369();
					iLocal_82 = 3;
					if (func_42(0, 1))
					{
						unk_0x3229F8D82C561641(0);
					}
					iLocal_294 = 8;
				}
			}
			else
			{
				if ((!unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()) && func_7(&uLocal_106) > 15f) && func_368())
				{
					if (!func_449(iLocal_49, 4096))
					{
						func_324("PROS_SPOT", -1);
						func_441(&iLocal_49, 4096);
					}
					func_367();
					func_34(&uLocal_106);
				}
				func_34(&uLocal_115);
			}
		}
		else
		{
			func_34(&uLocal_115);
			func_366();
		}
	}
	else if (!func_362())
	{
		if (unk_0x746960881FB19A89(iLocal_95))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_95))
			{
				unk_0x32D18ECD9E6F9BE2(iLocal_95);
			}
		}
		func_432(0);
	}
}

void func_366()
{
	iLocal_50 = 0;
	iLocal_307[0] = 0;
	iLocal_307[1] = 0;
	iLocal_307[2] = 0;
	iLocal_307[3] = 0;
}

void func_367()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	if (!unk_0xD208EA2EE53AE102(iLocal_95))
	{
		unk_0xA3F41D007914F399(iLocal_95, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_368()
{
	if (!func_449(iLocal_50, 256))
	{
		return 1;
	}
	return func_449(iLocal_50, 32);
}

void func_369()
{
	if (func_510())
	{
		unk_0x9001FCB58244C11D(iLocal_95, 229, 1);
		unk_0x9001FCB58244C11D(iLocal_95, 26, 1);
		unk_0x9001FCB58244C11D(iLocal_95, 115, 1);
		unk_0x4A1AC49BA4A747F7(iLocal_95, 1);
	}
}

void func_370()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_449(iLocal_48, 2097152))
	{
		if (unk_0x17103F66FBB44C3C() > iLocal_83)
		{
			if (iLocal_99 == 0)
			{
				Var0 = { unk_0x77009B1C011405A9(iLocal_98, 1) };
				unk_0x7844FB9DB5F9220C(Var0, &fVar6);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0x20CBCBD58A2C73B4(iLocal_98, 0f, 0f, -2f) };
				iLocal_99 = unk_0x704DCFDF0766F407(Var0, Var3, 2f, 511, iLocal_98, 7);
			}
			else if (unk_0x065E32BB2745DE57(iLocal_99, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_115);
					}
				}
				iLocal_83 = unk_0x17103F66FBB44C3C() + 1500;
				iLocal_99 = 0;
			}
		}
	}
}

int func_371()
{
	int iVar0;
	
	iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
	if (unk_0xFC38B241541883D3(iVar0, 0))
	{
		if (!unk_0x4A33023BC86AAA7F(iVar0, 0))
		{
			if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()) || unk_0x5BFFEED2EB6664D5(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_372()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iLocal_98 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		}
		Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		if (unk_0x45ED5E18B78F7ED2(Var1, func_59(0), 12f, 0) || unk_0x45ED5E18B78F7ED2(Var1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_378())
		{
			return 0;
		}
		if (func_377(iLocal_98, &Var4))
		{
			if (!func_376(Var4))
			{
				if (!func_375(Var1) || func_374(Var1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x8C612717241D72F3(iLocal_95, iLocal_98, 0, 0, 0))
		{
			return 0;
		}
		unk_0xD862F5F102FEA93E(1);
		if (unk_0xC152500D463AAEF1(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x746960881FB19A89(iVar0))
			{
				if (!unk_0x0BA451447C3B1A8D(iVar0))
				{
					if (unk_0xF160EF76D53E7ADB(iVar0, iLocal_98, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_450("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0());
		if (!iVar7 == 0)
		{
			func_450("IN AN INTERIOR");
			return 0;
		}
		if (func_373())
		{
			return 0;
		}
	}
	return 1;
}

int func_373()
{
	func_441(&iLocal_50, 256);
	if (!func_449(iLocal_50, 2))
	{
		if (func_355(3))
		{
			func_441(&iLocal_50, 2);
			func_5(&iLocal_50, 32);
		}
		return 1;
	}
	else
	{
		func_354();
	}
	return 0;
}

int func_374(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_375(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_441(&iLocal_48, 2097152);
		return 1;
	}
	func_5(&iLocal_48, 2097152);
	return 0;
}

int func_376(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xA128563C4CF03219(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 1, 1, 1077936128, 0);
	unk_0xCF52CDAB0176B8BB(uVar0, &Param0);
	if (unk_0x116D31BEEBA45B3C(uVar0))
	{
		if (!unk_0x10DEE1D7716BD095(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x10DEE1D7716BD095(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0xA128563C4CF03219(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 1, 8, 1077936128, 0);
		unk_0xCF52CDAB0176B8BB(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, 0f, -2f, 0f) };
	if (unk_0x073703B6CB04FA1C(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x073703B6CB04FA1C(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x073703B6CB04FA1C(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x073703B6CB04FA1C(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_378()
{
	return Global_67058;
}

int func_379()
{
	if (unk_0x7B47A371E2D93C2C(joaat("carwash1")) > 0 || unk_0x7B47A371E2D93C2C(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_380()
{
	if (!func_449(iLocal_48, 128))
	{
		func_381(39, 1);
		func_381(40, 1);
		func_381(41, 1);
		func_381(42, 1);
		func_381(43, 1);
		func_441(&iLocal_48, 128);
	}
}

void func_381(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_385(iParam0, 2, 1))
		{
			func_384(iParam0, 2, 1);
		}
	}
	else if (func_385(iParam0, 2, 1))
	{
		func_382(iParam0, 2, 1);
	}
}

void func_382(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_383(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_131(func_383(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

void func_384(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_383(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_131(func_383(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_385(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_146() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_134(func_383(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_386(var uParam0)
{
	if (func_449(iLocal_48, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_500();
	if (func_510())
	{
		func_495(uParam0);
	}
}

void func_387()
{
	if (!unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		if (unk_0x5093D6F9140AD109(iLocal_95, unk_0x9F92518438215DD0(), 5f, 5f, 5f, 0, 1, 0) || func_449(iLocal_48, 8192))
		{
			unk_0x6A6A41C66448AD09(0, 101, 1);
			unk_0x6A6A41C66448AD09(0, 74, 1);
			unk_0x303F3ACCD1D0223D(0, 51);
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0x827151D7B70CB853(iLocal_95, 0))
			{
				unk_0xA7335B336910A0CC(iLocal_95, 50);
				unk_0x5E66F70CFC4EF61D(iLocal_95, 5f);
				if (func_449(iLocal_48, 16))
				{
					if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
					{
						unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 1);
						func_5(&iLocal_48, 16);
					}
				}
				iLocal_98 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (unk_0xFC38B241541883D3(iLocal_98, 0))
				{
					if (unk_0x2A2DBEFFFC03A22F(iLocal_95, iLocal_98) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_98, 0))
					{
						func_450("***** prostitute IN VEHICLE****** ");
						if (func_449(iLocal_48, 8))
						{
							if (unk_0x18E6A43566D33720(func_86()))
							{
								if (func_391(iLocal_98))
								{
									unk_0x030A5AEBE729D39D(iLocal_95, unk_0x398F092142D37E17("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_390(iLocal_98))
								{
									unk_0x030A5AEBE729D39D(iLocal_95, unk_0x398F092142D37E17("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else
								{
									unk_0x030A5AEBE729D39D(iLocal_95, unk_0x398F092142D37E17("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_510())
						{
							unk_0x336AE92FD68DEF98(iLocal_95, 0, 0);
						}
						else
						{
							unk_0x336AE92FD68DEF98(iLocal_95, 1, 1);
						}
						func_175(iLocal_95, 0);
						func_367();
						iLocal_63 = unk_0x17103F66FBB44C3C();
						func_34(&uLocal_106);
						iLocal_294 = 7;
					}
					else
					{
						func_450("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_389(iLocal_95, unk_0x9F92518438215DD0(), 1) > 11f || func_388(20f)) || !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_98, 0))
				{
					func_108(&uLocal_112);
					if (!unk_0x827151D7B70CB853(iLocal_95, 0))
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_95);
						func_432(0);
						func_450("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (!unk_0xFC38B241541883D3(iLocal_98, 0))
					{
						iLocal_98 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					}
					else if (!unk_0x8C612717241D72F3(iLocal_95, iLocal_98, 0, 0, 0))
					{
						if (!func_105())
						{
							if (!func_449(iLocal_74, 1))
							{
								func_34(&uLocal_118);
								func_441(&iLocal_74, 1);
							}
							else if (func_7(&uLocal_118) > 20f)
							{
								func_119();
								func_450("prostitute couldn't get into the car");
								iLocal_294 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_449(iLocal_74, 1))
		{
			func_450("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0x32D18ECD9E6F9BE2(iLocal_95);
			func_89(15);
		}
	}
}

bool func_388(float fParam0)
{
	if (!func_10(&uLocal_112))
	{
		func_34(&uLocal_112);
	}
	return func_114(&uLocal_112) > fParam0;
}

float func_389(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

int func_390(int iParam0)
{
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		switch (unk_0x90859548B14D533C(iParam0))
		{
			case -782720499:
			case -38413156:
				return 1;
				break;
			}
	}
	return 0;
}

int func_391(int iParam0)
{
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		switch (unk_0x90859548B14D533C(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
			}
	}
	return 0;
}

void func_392(var uParam0)
{
	int iVar0;
	
	if (!func_401(0))
	{
		return;
	}
	if (!func_449(iLocal_48, 16))
	{
		unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 0);
		func_441(&iLocal_48, 16);
	}
	if (!func_10(&uLocal_112))
	{
		func_431(&uLocal_112);
	}
	if (func_114(&uLocal_112) >= 20f || !unk_0x5093D6F9140AD109(iLocal_95, unk_0x9F92518438215DD0(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_449(iLocal_74, 524288))
		{
			func_108(&uLocal_112);
			iLocal_294 = 6;
		}
		else if (func_400())
		{
			func_34(&uLocal_112);
			func_441(&iLocal_74, 524288);
		}
	}
	func_63(iLocal_95);
	if (((unk_0x5093D6F9140AD109(iLocal_95, unk_0x9F92518438215DD0(), 3f, 3f, 3f, 0, 1, 0) || func_449(iLocal_74, 1)) && !func_209(0)) && !func_378())
	{
		if (!unk_0x8C612717241D72F3(iLocal_95, iLocal_98, 0, 0, 0))
		{
			if (!func_105())
			{
				if (!func_449(iLocal_74, 1))
				{
					func_34(&uLocal_118);
					func_441(&iLocal_74, 1);
				}
				else if (func_7(&uLocal_118) > 10f)
				{
					func_62();
					unk_0x32D18ECD9E6F9BE2(iLocal_95);
					func_450("prostitute couldn't get into the car");
					iLocal_294 = 6;
				}
			}
		}
		else
		{
			func_393();
		}
	}
	else if (func_429("PROS_ACCEPT"))
	{
		func_5(&iLocal_48, 1048576);
		func_427();
		if (func_510())
		{
			iVar0 = unk_0xE962BD784DD0E442(iLocal_95, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_393()
{
	if (iLocal_294 != 5 && func_340(0))
	{
		func_396();
		if (func_394(iLocal_73, 1) || unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_441(&iLocal_48, 8192);
			func_34(&uLocal_112);
		}
		if (func_449(iLocal_48, 8192))
		{
			func_427();
			Global_24594 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, -1794415470) != 1 && !unk_0x44E080690DA76A2A(iLocal_95, unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 1))
				{
					unk_0x4073360CA020BB84(iLocal_95, iLocal_98, -1, 0, 1f, 8388609, 0);
				}
			}
			uLocal_62 = func_44(unk_0x9F92518438215DD0(), 1, 0);
			unk_0xDA293E5084610B09(uLocal_62);
			uLocal_62 = func_44(unk_0x9F92518438215DD0(), 0, 1);
			unk_0xDA293E5084610B09(uLocal_62);
			func_34(&uLocal_106);
			iLocal_294 = 5;
		}
	}
}

int func_394(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_395(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_396()
{
	if (Global_24594)
	{
		if (unk_0xC8557993A78C1B3E())
		{
			return;
		}
		unk_0x6A6A41C66448AD09(0, 101, 1);
		unk_0x6A6A41C66448AD09(0, 74, 1);
		unk_0x303F3ACCD1D0223D(0, 51);
		if (!func_449(iLocal_48, 8192))
		{
			if (iLocal_73 == -1)
			{
				func_398(&iLocal_73, 5, "PROS_ACCEPT", 0, 0);
			}
		}
	}
	else if (func_397(iLocal_73, 0))
	{
		func_427();
	}
}

int func_397(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_395(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_35613[iVar0 /*18*/].f_5)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_35613[iVar0 /*18*/].f_11)
	{
		unk_0x1935773249F749A2(&(Global_35613[iVar0 /*18*/].f_7));
		unk_0xDB4BC767CEF09274(&Global_35724);
		iVar1 = unk_0x7796B4D54E5DF47E(0);
	}
	else
	{
		unk_0x1935773249F749A2(&(Global_35613[iVar0 /*18*/].f_7));
		unk_0xDB4BC767CEF09274(&Global_35724);
		unk_0xDB4BC767CEF09274(&(Global_35613[iVar0 /*18*/].f_12));
		iVar1 = unk_0x7796B4D54E5DF47E(0);
	}
	return iVar1;
}

void func_398(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x7B47A371E2D93C2C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		if (!*iParam0 == -1)
		{
			func_399(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x81ACA1EEF1E4410D();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x9E9AFDBF482248F6(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_399(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_395(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_400()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x746960881FB19A89(iLocal_95) || unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return 1;
	}
	if (!func_510())
	{
		func_62();
		if (unk_0x827151D7B70CB853(iLocal_95, 1))
		{
			unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
		}
		else if (func_449(iLocal_48, 4194304))
		{
			iVar0 = unk_0x073B65E051D2F03E(8, 11);
			unk_0xF87DA7F5BA8C7D0F(&uVar1);
			unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x7CF15DD8B3815A0D(0, func_61(iLocal_292), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x3179CCC77CBAB31F(uVar1);
			unk_0xC7EBE3C9AC83FAAA(iLocal_95, uVar1);
			unk_0xCD02E3C29B8253A6(&uVar1);
		}
		return 1;
	}
	if (unk_0x827151D7B70CB853(iLocal_95, 1))
	{
		if (unk_0x88A3865085DFB7AD(iLocal_95))
		{
			unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x468B2B7F4E493980(iLocal_95);
			return 0;
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_449(iLocal_48, 4194304))
			{
				func_62();
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_54 = 2;
			}
			else
			{
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			break;
		
		case 2:
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				if (unk_0xE962BD784DD0E442(iLocal_95, -2017877118) == 7)
				{
					iVar0 = unk_0x073B65E051D2F03E(8, 11);
					unk_0x7CF15DD8B3815A0D(iLocal_95, func_61(iLocal_292), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_54 = 3;
				}
			}
			else
			{
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			break;
		
		case 3:
			iLocal_54 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_401(bool bParam0)
{
	if (unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		return 0;
	}
	if (func_449(iLocal_48, 8192))
	{
	}
	if (func_389(iLocal_95, unk_0x9F92518438215DD0(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		return 0;
	}
	if (func_510())
	{
		if (unk_0xEB083D04FE7B394C(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x9EF11DECA38804B6(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0x77009B1C011405A9(iLocal_95, 1), 1106247680))
	{
		if (!func_449(iLocal_49, 8192) && !unk_0xFDC6A2A689D65AF2(unk_0x9F92518438215DD0()))
		{
			func_324("PROS_COPS", -1);
			func_441(&iLocal_49, 8192);
		}
		return 0;
	}
	if (!func_353())
	{
		if (!func_510())
		{
			if ((!iLocal_87 && !Global_96405) && func_403(unk_0x9F92518438215DD0()) == -1)
			{
				func_324("PROS_CAR", -1);
				iLocal_87 = 1;
			}
			func_402();
		}
		else if (!func_483(4096))
		{
			func_324("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_402()
{
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return;
	}
	if (!func_449(iLocal_48, 1))
	{
		if (!unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()) && !unk_0xD208EA2EE53AE102(iLocal_95))
		{
			unk_0xA3F41D007914F399(unk_0x9F92518438215DD0(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_441(&iLocal_48, 1);
		}
	}
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
			if (unk_0x746960881FB19A89(iVar0))
			{
				if (!unk_0x0BA451447C3B1A8D(iVar0))
				{
					iVar1 = unk_0x4D5626140D724EC1(unk_0xB6A50C909A8FABC3(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x4A33023BC86AAA7F(iVar0, iVar3))
						{
							if (unk_0xB5BBEB12C77EE430(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_404()
{
	if (func_401(0))
	{
		func_393();
		if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 7 && !func_449(iLocal_48, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_112);
				iLocal_63 = unk_0x17103F66FBB44C3C();
				func_450("prostitute proposition player VEHICLE");
				iLocal_294 = 4;
			}
		}
	}
	else
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_95);
		func_89(15);
	}
}

void func_405(var uParam0)
{
	if (func_401(0))
	{
		func_393();
		if (unk_0xE962BD784DD0E442(iLocal_95, 242628503) == 7 || func_449(iLocal_48, 8192))
		{
			iLocal_294 = 3;
		}
		else if (func_388(20f))
		{
			func_108(&uLocal_112);
			func_432(0);
		}
		else
		{
			func_406(uParam0);
		}
	}
	else
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_95);
		func_89(15);
	}
}

void func_406(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0x746960881FB19A89(iLocal_98))
	{
		return;
	}
	unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iLocal_98), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0x20CBCBD58A2C73B4(iLocal_98, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0x20CBCBD58A2C73B4(iLocal_98, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0xE962BD784DD0E442(iLocal_95, -1794415470) != 1 || !func_449(iLocal_48, 8192)) && unk_0xB7A628320EFF8E47(Local_92, Var9) > 0f)
	{
		if (func_510())
		{
			if (!unk_0x34E74FF8690AA4B1(iLocal_95))
			{
				unk_0x336AE92FD68DEF98(iLocal_95, 0, 1);
			}
			func_416(&uLocal_286, func_61(iLocal_292));
			func_410(uParam0, 1);
			func_407(&uLocal_286, uParam0);
		}
		unk_0xF87DA7F5BA8C7D0F(&uVar18);
		unk_0x27DF0A5AA993D7B6(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0xE06445687CB36C85(0, unk_0xAA04EEFB14FDE2E9(unk_0x9F92518438215DD0(), 31086, 0f, 0f, 0f), 0);
		unk_0x3179CCC77CBAB31F(uVar18);
		unk_0xC7EBE3C9AC83FAAA(iLocal_95, uVar18);
		unk_0xCD02E3C29B8253A6(&uVar18);
		Local_92 = { Var9 };
	}
}

void func_407(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x471A7F8C908126F0((*uParam0)[iVar0]))
		{
			func_408(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_408(var uParam0, char* sParam1)
{
	func_409(uParam0, 1, -1, sParam1, 0);
}

void func_409(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x6B08EC9A88700FBB(sParam3, "NULL"))
					{
						if (unk_0x6B08EC9A88700FBB(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], iParam1);
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_410(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_412(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_411(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_411(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_412(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_413(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_413(var uParam0)
{
	func_414(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_414(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x94E72F17611BCD3C(uParam0, 30))
	{
		switch (func_415(iParam0))
		{
			case 0:
				unk_0x0880E86251A44B7F(uParam2);
				break;
			
			case 1:
				unk_0xE29F0AC6C728DD9C(uParam1);
				break;
			
			case 2:
				unk_0xB3D0E4FD85A02F35(uParam1);
				break;
			
			case 3:
				unk_0x4B48A2F5324596EE(uParam1);
				break;
			
			case 4:
				unk_0x6AC537DA214AB66E(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x39881B5994C9278A(sParam1);
				break;
			
			case 6:
				unk_0xD1622C66EC50A005();
				break;
			
			case 7:
				unk_0x901BBA88CB2E9BDA(uParam2);
				break;
			
			case 8:
				unk_0x84FBD0BE7CDBEEA2(uParam2, unk_0x94E72F17611BCD3C(iParam0, 26));
				break;
			
			case 9:
				unk_0xC3CD8798C7C83A3D();
				break;
			
			default:
				break;
		}
	}
}

int func_415(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x94E72F17611BCD3C(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_416(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x471A7F8C908126F0((*uParam0)[iVar0]))
		{
			if (unk_0x6B08EC9A88700FBB((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_417(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x471A7F8C908126F0((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_418(var uParam0)
{
	if (func_401(1))
	{
		if (!func_10(&uLocal_112))
		{
			func_431(&uLocal_112);
		}
		func_441(&iLocal_48, 4);
		Global_24595 = 1;
		func_393();
		if (func_430(&uLocal_112, 2f) || func_449(iLocal_48, 8192))
		{
			func_441(&iLocal_48, 2);
			if (func_340(0))
			{
				unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 0);
				unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 0);
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_95, -1, 2048, 4);
				func_406(uParam0);
				func_441(&iLocal_48, 4);
				Global_24594 = 1;
				iLocal_294 = 2;
			}
			else
			{
				func_324("PROS_NO_MONEY", -1);
				func_419();
				func_89(0);
				iLocal_295 = 0;
				func_441(&iLocal_48, 8388608);
				func_5(&iLocal_48, 4);
				Global_24594 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_48, 4);
		Global_24595 = 0;
	}
}

void func_419()
{
	if (!func_483(64))
	{
		func_420(0, 31, 5);
		func_189(64);
	}
}

void func_420(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xCDFA799A5C9CD012())
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA() && func_424(unk_0xCFC72E446B0B3AD7(), 1))
	{
		return;
	}
	if (unk_0x859C6F0CEF1CB9FE(2, 199) || unk_0x9F02FE1D24674A84(2, 199))
	{
		return;
	}
	if (unk_0x0DE1907CCA4FA941() != 0)
	{
		return;
	}
	if (unk_0xC8557993A78C1B3E())
	{
		return;
	}
	if (unk_0x2FF0F688315CFC4F())
	{
		return;
	}
	if (unk_0x3B8CF48C3FC0CF62())
	{
		return;
	}
	if (func_423())
	{
		return;
	}
	if (!func_421())
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA() || iParam0)
	{
		if (!Global_90014.f_1323 && !unk_0x47067EB98AD2938B())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2435749 = iParam1;
			Global_90014.f_1323 = 1;
			Global_90014.f_1324 = iParam2;
		}
	}
}

int func_421()
{
	if (func_422())
	{
		return 0;
	}
	if (unk_0x7F7C75BD0BC3CD70() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_422()
{
	return Global_2435198;
}

bool func_423()
{
	return Global_2435857;
}

int func_424(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_425(int iParam0)
{
	return func_426(iParam0);
}

bool func_426(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

void func_427()
{
	if (iLocal_73 != -1)
	{
		func_399(&iLocal_73);
	}
}

void func_428(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

int func_429(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

int func_430(var uParam0, float fParam1)
{
	if (func_216(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

void func_431(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_34(uParam0);
	}
}

void func_432(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_71 == 0)
	{
		bVar0 = true;
		if (func_510())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_433()
{
	if ((((((func_440() || func_439()) || func_438()) || func_437()) || func_434()) || Global_2394534) || Global_2394534.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_434()
{
	if (func_436() || func_435())
	{
		return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_83 == 8;
	}
	return 0;
}

var func_435()
{
	return Global_2428162.f_608;
}

bool func_436()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_2, 11);
}

bool func_437()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 5);
}

bool func_438()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 2);
}

bool func_439()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 20);
}

var func_440()
{
	return Global_2428162.f_572;
}

void func_441(int iParam0, int iParam1)
{
	func_442(iParam0, iParam1);
}

void func_442(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_443()
{
	if (Global_24596)
	{
		return 0;
	}
	if (func_510())
	{
		return 0;
	}
	if (!func_446())
	{
		return 0;
	}
	if (func_444())
	{
		iLocal_295 = 4;
		return 1;
	}
	return 0;
}

int func_444()
{
	int iVar0;
	
	iLocal_97 = unk_0x78D161D012E82C3F(unk_0x77009B1C011405A9(iLocal_95, 1), 15f, 0, 6);
	if (unk_0x746960881FB19A89(iLocal_97) && !unk_0x0BA451447C3B1A8D(iLocal_97))
	{
		if (unk_0xFC38B241541883D3(iLocal_97, 0))
		{
			if (func_85(&iLocal_97))
			{
				iLocal_96 = unk_0xB5BBEB12C77EE430(iLocal_97, -1);
				if (!iLocal_96 == 0)
				{
					if (func_445(&iLocal_96))
					{
						iVar0 = unk_0xB6A50C909A8FABC3(iLocal_97);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x34E74FF8690AA4B1(iLocal_96))
							{
								unk_0x336AE92FD68DEF98(iLocal_96, 1, 0);
							}
							if (!unk_0x34E74FF8690AA4B1(iLocal_97))
							{
								unk_0x336AE92FD68DEF98(iLocal_97, 1, 0);
							}
							unk_0x4A1AC49BA4A747F7(iLocal_96, 1);
							unk_0x512E0C109ACECCA1(iLocal_96, 0);
							unk_0x512E0C109ACECCA1(iLocal_97, 0);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_97 = 0;
	iLocal_96 = 0;
	return 0;
}

int func_445(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(*iParam0))
	{
		if (unk_0xA880B447140A3E0D(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446()
{
	if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) || unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		return 0;
	}
	return 1;
}

int func_447()
{
	if ((!func_446() || !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) || func_449(iLocal_48, 4096))
	{
		return 0;
	}
	if (func_449(iLocal_48, 32))
	{
		iLocal_295 = 2;
		func_93(2);
		func_450("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_448()
{
	if (!unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		if (!unk_0x7E4B3ADE683EE23B(iLocal_95))
		{
			if (unk_0xE962BD784DD0E442(iLocal_95, 1805844857) != 1)
			{
				unk_0x4A1AC49BA4A747F7(iLocal_95, 0);
				unk_0xA334EDA2335A13CA(iLocal_95, 196628, 1);
				unk_0xE7F5E74491BCEA02(iLocal_95);
				unk_0x722E6B3A5162A6BB(iLocal_95, unk_0x9F92518438215DD0(), 300f, -1, 1, 0);
				unk_0xE8105B7E3908547D(iLocal_95, 1);
				func_89(15);
			}
		}
	}
}

bool func_449(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_450(char* sParam0)
{
}

int func_451()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return 0;
	}
	if (unk_0xE962BD784DD0E442(iLocal_95, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xFE7B766A3EC52BAD(iLocal_95))
	{
		return 0;
	}
	return 1;
}

int func_452()
{
	switch (iLocal_299)
	{
		case 0:
			if (!func_510())
			{
				func_416(&uLocal_286, func_61(iLocal_292));
				func_407(&uLocal_286, &uLocal_344);
				func_450("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_510())
			{
				unk_0xD5DF0B4E41426D41(1);
				unk_0x2D0DCDC2641217B9(1);
				unk_0x468B2B7F4E493980(iLocal_95);
			}
			iLocal_299 = 1;
			break;
		
		case 1:
			if (!func_510())
			{
				if (func_453(&uLocal_344))
				{
					func_441(&iLocal_48, 4194304);
					func_450("Moving to PROSTITUTE_INIT_INIT");
					iLocal_299 = 2;
				}
			}
			else if (func_510())
			{
				func_441(&iLocal_48, 4194304);
				func_450("Moving to PROSTITUTE_INIT_INIT");
				iLocal_299 = 2;
			}
			break;
		
		case 2:
			iLocal_296 = 0;
			iLocal_68 = iLocal_296;
			func_5(&iLocal_48, 512);
			func_5(&iLocal_48, 1024);
			iLocal_295 = 0;
			iLocal_96 = 0;
			iLocal_97 = 0;
			func_450("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_299 = 3;
			break;
		
		case 3:
			if (!unk_0x3E0478C40AB5B38D(iLocal_95))
			{
				if (!func_510())
				{
					unk_0x4A1AC49BA4A747F7(iLocal_95, 0);
					unk_0xE29C2543E066A0C4(iLocal_95, 0);
					func_428(&uLocal_121, 4, iLocal_95, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x88A3865085DFB7AD(iLocal_95))
				{
					unk_0x468B2B7F4E493980(iLocal_95);
				}
				else
				{
					unk_0x4A1AC49BA4A747F7(iLocal_95, 0);
					func_428(&uLocal_121, 4, iLocal_95, "Prostitutes", 0, 1);
					unk_0xE29C2543E066A0C4(iLocal_95, 0);
					unk_0x06DD4A1F004CFDD1(iLocal_95);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_453(var uParam0)
{
	return func_454(uParam0);
}

int func_454(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_455(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_455(var uParam0)
{
	return func_456(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_456(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x94E72F17611BCD3C(uParam0, 30))
	{
		if (unk_0x94E72F17611BCD3C(iParam0, 29))
		{
			switch (func_415(iParam0))
			{
				case 0:
					return unk_0x149162179DBAEDB0(uParam2);
					break;
				
				case 1:
					return unk_0x3DA2EED4204CE591(uParam1);
					break;
				
				case 2:
					return unk_0x18E6A43566D33720(uParam1);
					break;
				
				case 3:
					return unk_0x48125D4CA17FF2F9(uParam1);
					break;
				
				case 4:
					return unk_0x381FCADDEA0C040B(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x2922F456A375F556(sParam1);
					break;
				
				case 6:
					return unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(iParam0, 27));
					break;
				
				case 7:
					return unk_0x4F5C35B2846E04BD(uParam2);
					break;
				
				case 8:
					return unk_0x7DE7B5897062BC2C(uParam2);
					break;
				
				case 9:
					return unk_0x3749C5550F0953F2();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_457()
{
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		if (func_18() == 0)
		{
			if (func_458(iLocal_95, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0xAD2C236C4A4B83C9(iLocal_95, 1))
				{
					if (func_510())
					{
						unk_0x336AE92FD68DEF98(iLocal_95, 0, 0);
					}
					else
					{
						unk_0x336AE92FD68DEF98(iLocal_95, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_458(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

int func_459()
{
	if (unk_0x97DFCBCC740CB5FD(iLocal_95, func_59(0)))
	{
		if (unk_0xF68448D325F6623A(iLocal_95, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xF68448D325F6623A(iLocal_95, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x97DFCBCC740CB5FD(iLocal_95, func_59(1)))
	{
		if (unk_0xF68448D325F6623A(iLocal_95, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xF68448D325F6623A(iLocal_95, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_460()
{
	if (unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		return;
	}
	if (iLocal_293 != 3 && iLocal_293 != 4)
	{
		func_461(unk_0x9F92518438215DD0());
	}
	else if (iLocal_293 == 3)
	{
		func_461(iLocal_96);
	}
}

void func_461(int iParam0)
{
	if (unk_0x0BA451447C3B1A8D(iParam0))
	{
		return;
	}
	if (func_510())
	{
		if (!unk_0x88A3865085DFB7AD(iParam0))
		{
			unk_0x468B2B7F4E493980(iParam0);
			return;
		}
	}
	if (func_389(iParam0, iLocal_95, 1) < 30f)
	{
		if (!unk_0xD398F07877741739(iLocal_95, iParam0))
		{
			if (func_510())
			{
				if (unk_0x88A3865085DFB7AD(iLocal_95))
				{
					unk_0xD2062A6AC314B85E(iLocal_95);
					unk_0x402A96371F34E6D8(iLocal_95, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0xD2062A6AC314B85E(iLocal_95);
				unk_0x402A96371F34E6D8(iLocal_95, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0xD398F07877741739(iLocal_95, iParam0))
	{
		if (func_510())
		{
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				unk_0xD2062A6AC314B85E(iLocal_95);
			}
		}
		else
		{
			unk_0xD2062A6AC314B85E(iLocal_95);
		}
	}
}

void func_462()
{
	if (Global_24594)
	{
		if (unk_0xFC38B241541883D3(iLocal_98, 0))
		{
			if (unk_0x44E080690DA76A2A(iLocal_95, iLocal_98, 0))
			{
				func_463();
			}
		}
		return;
	}
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		return;
	}
	if (unk_0x0BA451447C3B1A8D(iLocal_95) || !unk_0x746960881FB19A89(iLocal_95))
	{
		if (Global_24598 != unk_0x81ACA1EEF1E4410D() && func_449(iLocal_48, 32))
		{
			func_5(&iLocal_48, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_95, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < Global_24597 || Global_24597 == 0f) && iLocal_295 != 4)
	{
		Global_24597 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_95, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1));
		Global_24598 = unk_0x81ACA1EEF1E4410D();
		func_441(&iLocal_48, 32);
	}
	else if (Global_24598 == unk_0x81ACA1EEF1E4410D())
	{
		Global_24597 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_95, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1));
	}
	else
	{
		func_5(&iLocal_48, 32);
	}
}

void func_463()
{
	if (func_510())
	{
		if (unk_0x88A3865085DFB7AD(iLocal_95))
		{
			unk_0xE69F90D298F4217D(iLocal_95, 323, 1);
		}
	}
	else
	{
		unk_0xE69F90D298F4217D(iLocal_95, 323, 1);
	}
}

void func_464(var uParam0)
{
	if (!iLocal_294 == 12)
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_95) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (func_468())
			{
				if (func_510())
				{
					func_116(0);
					unk_0xA334EDA2335A13CA(iLocal_95, 196624, 1);
					if (!unk_0x34E74FF8690AA4B1(iLocal_95))
					{
						unk_0x336AE92FD68DEF98(iLocal_95, 1, 0);
					}
					unk_0x722E6B3A5162A6BB(iLocal_95, unk_0x9F92518438215DD0(), 300f, -1, 0, 0);
					unk_0xE8105B7E3908547D(iLocal_95, 1);
					unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
					func_500();
					func_495(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0xE99AF5B1B3F0BB7C(iLocal_95, unk_0x9F92518438215DD0(), 1))
			{
				iLocal_66++;
				if (iLocal_66 >= 2)
				{
					func_450("prostitute CLASSED AS UNDER ATTACK");
					iLocal_294 = 12;
				}
				else
				{
					func_450("prostitute BEEN HIT BY PLAYER");
					unk_0x87659527DF5C44B5(iLocal_95);
				}
			}
			else if (func_466())
			{
				func_465();
				iLocal_294 = 12;
			}
		}
	}
}

void func_465()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		return;
	}
	unk_0x73B8B1FE599EF361(iLocal_95);
	unk_0xA3F41D007914F399(iLocal_95, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_466()
{
	var uVar0;
	
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		return 0;
	}
	if (!func_467())
	{
		return 0;
	}
	uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
	if (!unk_0xFC38B241541883D3(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xFDC6A2A689D65AF2(unk_0x9F92518438215DD0()))
	{
		return unk_0xC0263EE9AFF011C7(iVar0);
	}
	return 0;
}

int func_467()
{
	if (!func_510())
	{
		return 1;
	}
	else if (unk_0x746960881FB19A89(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
	{
		if (unk_0xCD22EDB73BA42551(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
		{
			if (unk_0xB5BBEB12C77EE430(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1) == unk_0x9F92518438215DD0())
			{
				if (unk_0x88A3865085DFB7AD(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
				{
					if (!unk_0x34E74FF8690AA4B1(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
					{
						unk_0x336AE92FD68DEF98(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0x468B2B7F4E493980(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0));
				}
			}
		}
		else
		{
			unk_0xFEB67C8CD88C26AE(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0));
		}
	}
	return 0;
}

int func_468()
{
	struct<3> Var0;
	
	if (!func_449(iLocal_48, 4096))
	{
		if (func_389(iLocal_95, unk_0x9F92518438215DD0(), 1) < 30f)
		{
			Var0 = { unk_0x77009B1C011405A9(iLocal_95, 1) };
			if ((((((unk_0xF8ABAB7D09D14E11(86, Var0, 30f) || unk_0xF8ABAB7D09D14E11(89, Var0, 30f)) || unk_0xF8ABAB7D09D14E11(88, Var0, 30f)) || unk_0xF8ABAB7D09D14E11(102, Var0, 30f)) || unk_0xF8ABAB7D09D14E11(114, Var0, 30f)) || (unk_0xF8ABAB7D09D14E11(112, Var0, 30f) && !func_510())) || unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
			{
				if (!func_510())
				{
					unk_0x4A1AC49BA4A747F7(iLocal_95, 0);
				}
				func_441(&iLocal_48, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_469()
{
	if ((unk_0x746960881FB19A89(iLocal_95) && !unk_0x0BA451447C3B1A8D(iLocal_95)) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (func_510())
		{
			if (func_474(unk_0xCFC72E446B0B3AD7(), 0))
			{
				func_450("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x827151D7B70CB853(iLocal_95, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_95))
		{
			if (!unk_0x827151D7B70CB853(iLocal_95, 0))
			{
				if (!func_471(9))
				{
					if (!unk_0x0BA451447C3B1A8D(iLocal_95) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						if (unk_0x5093D6F9140AD109(iLocal_95, unk_0x9F92518438215DD0(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_450("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_470() || unk_0x2D8FCFBC4E01FF7C()))
				{
					func_450("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_294 == 0)
			{
				func_450("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_471(9) && !func_471(5))
			{
				return 1;
			}
			else if (!(func_470() || (unk_0x2D8FCFBC4E01FF7C() && !func_379())))
			{
				func_450("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_450("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x746960881FB19A89(iLocal_95))
	{
		func_450("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		func_450("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		func_450("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_470()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_472(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_472(int iParam0)
{
	return func_473(iParam0, Global_34913);
}

int func_473(int iParam0, int iParam1)
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

int func_474(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x4E6043D225B9C75F(iParam0);
		if (unk_0x827151D7B70CB853(iVar0, iParam1))
		{
			uVar3 = unk_0x1161215F69587BDA(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0x4E6043D225B9C75F(iVar2) != iVar0)
					{
						if (unk_0x44E080690DA76A2A(unk_0x4E6043D225B9C75F(iVar2), uVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_475()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 229)
			{
				if (Var2.f_1 == unk_0xCFC72E446B0B3AD7())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_476()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (unk_0x30F2E008CA509014(false) != 1)
	{
		if (func_477(1, 0, 1))
		{
			if (unk_0x14CC2B66D061F7ED(0) <= 1)
			{
				unk_0xD5DF0B4E41426D41(1);
			}
		}
	}
}

bool func_477(int iParam0, bool bParam1, bool bParam2)
{
	return func_478(0, iParam0, 1, bParam1, bParam2);
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_482(iParam0) - func_481(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_481(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_482(iParam0) - func_480(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_481(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_482(iParam0) - func_481(iParam0, 1));
		}
		if (!bParam4 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] != 3)
		{
			iVar1 = (iVar1 - func_479(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_481(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x30F2E008CA509014(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0x56DAB67AA00A12D9(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x501C0D3244542A75(!bParam1);
			}
			break;
	}
	return 0;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

bool func_483(int iParam0)
{
	return func_449(iLocal_51, iParam0);
}

void func_484(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xD313E4EFACD47B38() >= (uParam0->f_272 + uParam0->f_273) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 2)) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_485(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xD313E4EFACD47B38();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_485(var uParam0)
{
	func_486(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_486(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x94E72F17611BCD3C(*uParam0, 30))
	{
		switch (func_415(*uParam0))
		{
			case 0:
				unk_0x3BC6D217451D6BB7(uParam2);
				break;
			
			case 1:
				unk_0xDA293E5084610B09(uParam1);
				break;
			
			case 2:
				unk_0xF56FC42B9186CE3F(uParam1);
				break;
			
			case 3:
				unk_0x2EA266AD98E82E2A(uParam1, unk_0x94E72F17611BCD3C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x8E6E37300A0A2B22(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x33733EEE6375F985(sParam1);
				break;
			
			case 6:
				unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(*uParam0, 27));
				break;
			
			case 7:
				unk_0xE0DC368212C82AB7(uParam2);
				break;
			
			case 8:
				unk_0x9C53AD1E8A38ADEE(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x21ED45FD62BE6E8D();
				break;
			
			default:
				break;
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 29);
	}
}

void func_487(int iParam0)
{
	if (func_449(iLocal_51, iParam0))
	{
		func_5(&iLocal_51, iParam0);
	}
}

void func_488()
{
	func_2(0);
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_95))
		{
			func_2(1);
		}
		else
		{
			func_450("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_450("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		func_2(0);
		func_450("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_489(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_493();
			}
			else
			{
				return 0;
			}
		}
		if (!func_492())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_493();
					}
					else
					{
						return 0;
					}
				}
				if (func_491())
				{
					if (!bParam2)
					{
						func_493();
					}
					else
					{
						return 0;
					}
				}
				if (func_490(155))
				{
					if (!bParam2)
					{
						func_493();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_493();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_493();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_493();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_490(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_491()
{
	return Global_2428162.f_567;
}

bool func_492()
{
	return Global_1315874;
}

void func_493()
{
	unk_0xE60DEFFB2A853900();
}

void func_494()
{
	func_189(1);
}

void func_495(var uParam0)
{
	func_498();
	if (func_42(0, 1))
	{
		unk_0x3229F8D82C561641(1);
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		if (unk_0x34E74FF8690AA4B1(iLocal_95))
		{
			if ((func_510() && unk_0xE962BD784DD0E442(iLocal_95, 1805844857) != 1) && unk_0xE962BD784DD0E442(iLocal_95, -251125078) != 1)
			{
				unk_0x6A678E26A585E3C6(iLocal_95, 1193033728, 0);
				if (unk_0x88A3865085DFB7AD(iLocal_95))
				{
					unk_0xE8105B7E3908547D(iLocal_95, 1);
				}
				if (unk_0xD1AD5EB6C17BAF0D(iLocal_95))
				{
					unk_0x995B3705D02B0401(&iLocal_95);
				}
				unk_0x73B8B1FE599EF361(iLocal_95);
			}
			else
			{
				unk_0x995B3705D02B0401(&iLocal_95);
				unk_0x73B8B1FE599EF361(iLocal_95);
			}
		}
	}
	iLocal_48 = 0;
	if (func_449(iLocal_48, 64))
	{
		Global_24596 = 0;
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_96))
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_96);
	}
	iLocal_96 = 0;
	iLocal_295 = 0;
	if (func_449(iLocal_48, 2048))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
	}
	func_5(&iLocal_48, 2048);
	func_497();
	if (func_510())
	{
		if (unk_0xB657144FEEE0F032(uLocal_84))
		{
			unk_0xA2B9221D77CA9020(uLocal_84);
		}
	}
	iLocal_97 = 0;
	func_498();
	func_496();
	Global_24597 = 0f;
	unk_0x198BDC6BF12F2D84();
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 1);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (func_483(256))
		{
			unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 6, iLocal_85, iLocal_86, 0);
			func_189(1024);
		}
	}
	if (func_429("PROS_ACCEPT") && !Global_24594)
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	if (Global_24598 == unk_0x81ACA1EEF1E4410D())
	{
		Global_24594 = 0;
	}
	func_410(uParam0, 0);
	if (func_510())
	{
		func_189(2048);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
}

void func_496()
{
}

void func_497()
{
	Global_2422166.f_600.f_10 = 0;
}

void func_498()
{
}

void func_499(bool bParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_95))
	{
		if (unk_0x827151D7B70CB853(iLocal_95, 0))
		{
			if (unk_0xE962BD784DD0E442(iLocal_95, -828834893) != 1)
			{
				unk_0xF811299AF81DB581(iLocal_95, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_510())
			{
				if (unk_0x34E74FF8690AA4B1(iLocal_95))
				{
					if (unk_0xD1AD5EB6C17BAF0D(iLocal_95))
					{
						if (unk_0x4792C62764008602(unk_0x26686837811C1E1E(iLocal_95)))
						{
							unk_0xE8105B7E3908547D(iLocal_95, 1);
						}
					}
				}
			}
			else
			{
				unk_0xE8105B7E3908547D(iLocal_95, 1);
			}
		}
	}
}

void func_500()
{
	if (!func_510())
	{
		if (iLocal_294 == 11 || iLocal_294 == 13)
		{
			return;
		}
	}
	if (!unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		if (!unk_0x7E4B3ADE683EE23B(iLocal_95))
		{
			func_89(0);
			iLocal_293 = 1;
		}
		if (func_510())
		{
			if (unk_0x88A3865085DFB7AD(iLocal_95))
			{
				unk_0x4A1AC49BA4A747F7(iLocal_95, 0);
				unk_0xAFD9EDE93E4F3A32(iLocal_95);
			}
		}
		else
		{
			unk_0xAFD9EDE93E4F3A32(iLocal_95);
		}
		unk_0xC932874B6133A2D2(iLocal_95, 0);
	}
	if (unk_0xFC38B241541883D3(iLocal_98, 0) && !unk_0x0BA451447C3B1A8D(iLocal_98))
	{
		if (func_510())
		{
			if (unk_0x88A3865085DFB7AD(iLocal_98))
			{
				if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_6 <= 0 && !unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 11))
				{
					unk_0x51557D5848F7B48C(iLocal_98, 0);
					unk_0x4F089107CDB61F75(iLocal_98, 3);
					unk_0xD2B76C8013DBA777(iLocal_98, 0);
				}
				unk_0x003E17A8BE5EA5B6(iLocal_98, 1, 0);
			}
		}
		else
		{
			unk_0x51557D5848F7B48C(iLocal_98, 0);
			unk_0x4F089107CDB61F75(iLocal_98, 3);
			unk_0xD2B76C8013DBA777(iLocal_98, 0);
		}
	}
	func_509(iLocal_75);
	func_509(iLocal_76);
	func_509(iLocal_77);
	func_509(iLocal_78);
	func_509(iLocal_79);
	func_509(iLocal_80);
	func_509(iLocal_81);
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
		if (func_510() && iLocal_296 != 3)
		{
			unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
		}
		unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 1);
		unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 1);
	}
	if (func_449(iLocal_48, 2048))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
	}
	func_5(&iLocal_48, 2048);
	unk_0xC805A7010638FA82(2, 19, 1);
	unk_0xC805A7010638FA82(2, 37, 1);
	func_497();
	iLocal_295 = 0;
	if (func_449(iLocal_48, 4))
	{
		func_5(&iLocal_48, 4);
		Global_24594 = 0;
		Global_24595 = 0;
	}
	if (func_449(iLocal_48, 8))
	{
		if (unk_0x18E6A43566D33720(func_86()))
		{
			unk_0xB3D0E4FD85A02F35(func_86());
		}
	}
	func_508();
	func_427();
	if (((func_429("PROS_ACCEPT") || func_429("PROS_CAM_TOG")) || func_429("PROS_RESPONSE")) || func_429("PROS_CAM_OC"))
	{
		func_5(&iLocal_48, 1048576);
		unk_0x35611EEE7A1FFEDB(1);
	}
	func_339(0);
	unk_0xB3B57AEE7B7BA0E2(1);
	if (func_449(iLocal_48, 8))
	{
		if (unk_0x18E6A43566D33720(func_86()))
		{
			unk_0xB3D0E4FD85A02F35(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0xD1622C66EC50A005();
	func_116(0);
	unk_0x3229F8D82C561641(1);
	func_501();
	if (func_510())
	{
		if (func_483(2))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if (unk_0xCD22EDB73BA42551(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
				{
					if (unk_0x88A3865085DFB7AD(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
					{
						unk_0x00D8E7D0F5F1F7D2(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0);
						unk_0x993B4D0D3CD44124(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 1);
					}
				}
			}
			else if (unk_0xCD22EDB73BA42551(iLocal_98))
			{
				if (unk_0x88A3865085DFB7AD(iLocal_98))
				{
					unk_0x993B4D0D3CD44124(iLocal_98, 1);
				}
				else
				{
					unk_0x468B2B7F4E493980(iLocal_98);
					unk_0x993B4D0D3CD44124(iLocal_98, 1);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_48 = 0;
	iLocal_50 = 0;
}

void func_501()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_507())
	{
		return;
	}
	if (!iLocal_46)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_505(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0xB2AA27B5554D782C(131, func_504(), 0f);
		unk_0xB2AA27B5554D782C(117, func_503(), 0f);
		unk_0xB2AA27B5554D782C(118, func_502(), 0f);
	}
}

int func_502()
{
	return iLocal_45;
}

int func_503()
{
	return iLocal_44;
}

int func_504()
{
	return 0;
}

int func_505(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x6518D9FF7C996D2B())
	{
	}
	if ((!unk_0xD0270470788D0EB5() && (unk_0x635C7622AA1EA852() || !unk_0x64F31E45B1E9B4A7())) && unk_0x230F87C86ABB795A())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xEBD30B93B1EED82E())
			{
				Var69 = { func_506(unk_0xCFC72E446B0B3AD7()) };
				if (unk_0x1F0B5C273160FECE(&Var69))
				{
					if (unk_0xFFB76AAE8F413B73(&uVar82, 35, &Var69))
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
			if (unk_0x4B69FB3A5B09A1BA() && Global_2434606.f_3)
			{
				unk_0x0B8530D403519EB5(&Var0, &(Global_1685347.f_10));
			}
			else
			{
				unk_0x7F0260A52BBC235B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xD0270470788D0EB5())
	{
	}
	if (!unk_0x635C7622AA1EA852())
	{
	}
	if (unk_0x64F31E45B1E9B4A7())
	{
	}
	if (!unk_0x230F87C86ABB795A())
	{
	}
	return 0;
}

struct<13> func_506(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

int func_507()
{
	if ((unk_0x6518D9FF7C996D2B() && unk_0x9183AA5076D2BF07()) && unk_0x7F7C75BD0BC3CD70())
	{
		return 1;
	}
	return 0;
}

void func_508()
{
	if (func_449(iLocal_48, 128))
	{
		func_381(39, 0);
		func_381(40, 0);
		func_381(41, 0);
		func_381(42, 0);
		func_381(43, 0);
		func_5(&iLocal_48, 128);
	}
}

void func_509(int iParam0)
{
	if (func_510())
	{
		if (func_210(iParam0))
		{
			unk_0xF6573B9B336208D5(iParam0);
		}
	}
}

bool func_510()
{
	return func_483(1);
}

bool func_511(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_512(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1582869[iParam0 /*332*/] == 2 || Global_1582869[iParam0 /*332*/] == 1) || Global_1582869[iParam0 /*332*/] == 0) || Global_1582869[iParam0 /*332*/] == 3) || Global_1582869[iParam0 /*332*/] == 8)
	{
		return 1;
	}
	return 0;
}

